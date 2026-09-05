#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_002636EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002636EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002636F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002636F4: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x002636F8: beq         $v0, $zero, L_00263708
    if (ctx->r2 == 0) {
        // 0x002636FC: nop
    
            goto L_00263708;
    }
    // 0x002636FC: nop

    // 0x00263700: jal         0x00243414
    // 0x00263704: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00263704: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_00263708:
    // 0x00263708: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026370C: jr          $ra
    // 0x00263710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00263710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0043FFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043FFE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0043FFE8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x0043FFEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0043FFF0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x0043FFF4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0043FFF8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0043FFFC: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00440000: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x00440004: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00440008: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x0044000C: jal         0x00220A1C
    // 0x00440010: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_00220A1C(rdram, ctx);
        goto after_0;
    // 0x00440010: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x00440014: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x00440018: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x0044001C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00440020: lwc1        $f0, 0x504($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X504);
    // 0x00440024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00440028: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x0044002C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x00440030: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x00440034: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x00440038: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0044003C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x00440040: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x00440044: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x00440048: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0044004C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00440050: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00440054: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x00440058: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x0044005C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x00440060: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x00440064: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00440068: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0044006C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x00440070: jal         0x00227240
    // 0x00440074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00227240(rdram, ctx);
        goto after_1;
    // 0x00440074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00440078: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0044007C: beq         $a0, $zero, L_004400A0
    if (ctx->r4 == 0) {
        // 0x00440080: nop
    
            goto L_004400A0;
    }
    // 0x00440080: nop

    // 0x00440084: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00440088: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0044008C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00440090: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x00440094: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x00440098: jal         0x00246690
    // 0x0044009C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    func_00246690(rdram, ctx);
        goto after_2;
    // 0x0044009C: addiu       $a1, $zero, 0x11D
    ctx->r5 = ADD32(0, 0X11D);
    after_2:
L_004400A0:
    // 0x004400A0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x004400A4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x004400A8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x004400AC: jr          $ra
    // 0x004400B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x004400B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00257360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00257350:
    // 0x00257360: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x00257364: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00257368: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0025736C: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x00257370: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00257374: j           L_00257350
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    entry_00257350(rdram, ctx);
    return;
    // 0x00257378: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x0025737C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x00257380: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x00257384: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x00257388: beq         $v1, $a0, L_00257394
    if (ctx->r3 == ctx->r4) {
        // 0x0025738C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00257394;
    }
    // 0x0025738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00257390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257394:
    // 0x00257394: jr          $ra
    // 0x00257398: nop

    return;
    // 0x00257398: nop

;}
RECOMP_FUNC void func_00410CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00410CE8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410CEC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410CF0: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x00410CF4: sw          $ra, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r31;
    // 0x00410CF8: sw          $s4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r20;
    // 0x00410CFC: sw          $s3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r19;
    // 0x00410D00: sw          $s2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r18;
    // 0x00410D04: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x00410D08: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x00410D0C: sdc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XE8, ctx->r29);
    // 0x00410D10: lw          $v0, 0x38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38);
    // 0x00410D14: beq         $v0, $zero, L_004110A8
    if (ctx->r2 == 0) {
        // 0x00410D18: addu        $s4, $a0, $zero
        ctx->r20 = ADD32(ctx->r4, 0);
            goto L_004110A8;
    }
    // 0x00410D18: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x00410D1C: jal         0x00284188
    // 0x00410D20: nop

    func_00284188(rdram, ctx);
        goto after_0;
    // 0x00410D20: nop

    after_0:
    // 0x00410D24: beq         $v0, $zero, L_004110A8
    if (ctx->r2 == 0) {
        // 0x00410D28: nop
    
            goto L_004110A8;
    }
    // 0x00410D28: nop

    // 0x00410D2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410D30: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410D34: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00410D38: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x00410D3C: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00410D40: nop

    // 0x00410D44: bc1t        L_004110A8
    if (c1cs) {
        // 0x00410D48: nop
    
            goto L_004110A8;
    }
    // 0x00410D48: nop

    // 0x00410D4C: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x00410D50: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00410D54: nop

    // 0x00410D58: bc1t        L_004110A8
    if (c1cs) {
        // 0x00410D5C: nop
    
            goto L_004110A8;
    }
    // 0x00410D5C: nop

    // 0x00410D60: mfc1        $a1, $f1
    ctx->r5 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x00410D64: jal         0x0041057C
    // 0x00410D68: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_0041057C(rdram, ctx);
        goto after_1;
    // 0x00410D68: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x00410D6C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410D70: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410D74: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x00410D78: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x00410D7C: jal         0x00410724
    // 0x00410D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00410724(rdram, ctx);
        goto after_2;
    // 0x00410D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00410D84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410D88: lwc1        $f20, 0x9A0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X9A0);
    // 0x00410D8C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00410D90: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00410D94: jal         0x0020EF60
    // 0x00410D98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    func_0020EF60(rdram, ctx);
        goto after_3;
    // 0x00410D98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    after_3:
    // 0x00410D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410DA0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x00410DA4: jal         0x0020EF60
    // 0x00410DA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020EF60(rdram, ctx);
        goto after_4;
    // 0x00410DA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00410DAC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00410DB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00410DB4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00410DB8: jal         0x0020EF2C
    // 0x00410DBC: sw          $zero, 0x28($s4)
    MEM_W(0X28, ctx->r20) = 0;
    func_0020EF2C(rdram, ctx);
        goto after_5;
    // 0x00410DBC: sw          $zero, 0x28($s4)
    MEM_W(0X28, ctx->r20) = 0;
    after_5:
    // 0x00410DC0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410DC4: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410DC8: lw          $a0, 0x74($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X74);
    // 0x00410DCC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x00410DD0: beq         $v0, $zero, L_00410DE4
    if (ctx->r2 == 0) {
        // 0x00410DD4: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_00410DE4;
    }
    // 0x00410DD4: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x00410DD8: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00410DDC: bne         $v0, $zero, L_00410DEC
    if (ctx->r2 != 0) {
        // 0x00410DE0: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_00410DEC;
    }
    // 0x00410DE0: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
L_00410DE4:
    // 0x00410DE4: beq         $v0, $zero, L_00411068
    if (ctx->r2 == 0) {
        // 0x00410DE8: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_00411068;
    }
    // 0x00410DE8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
L_00410DEC:
    // 0x00410DEC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00410DF0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x00410DF4: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x00410DF8: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x00410DFC: lw          $s3, -0x6770($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X6770);
    // 0x00410E00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00410E04: beq         $v0, $zero, L_00410E48
    if (ctx->r2 == 0) {
        // 0x00410E08: nop
    
            goto L_00410E48;
    }
    // 0x00410E08: nop

    // 0x00410E0C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x00410E10: beq         $v0, $zero, L_00410E48
    if (ctx->r2 == 0) {
        // 0x00410E14: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_00410E48;
    }
    // 0x00410E14: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00410E18: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00410E1C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x00410E20: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x00410E24: sw          $t0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r8;
    // 0x00410E28: sw          $t1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r9;
    // 0x00410E2C: sw          $t2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r10;
    // 0x00410E30: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x00410E34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00410E38: lwc1        $f1, 0x9A4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X9A4);
    // 0x00410E3C: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x00410E40: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00410E44: swc1        $f0, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = ctx->f0.u32l;
L_00410E48:
    // 0x00410E48: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00410E4C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00410E50: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x00410E54: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00410E58: beq         $v0, $zero, L_00410EA4
    if (ctx->r2 == 0) {
        // 0x00410E5C: addiu       $s0, $sp, 0x80
        ctx->r16 = ADD32(ctx->r29, 0X80);
            goto L_00410EA4;
    }
    // 0x00410E5C: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x00410E60: beql        $s3, $zero, L_00410E94
    if (ctx->r19 == 0) {
        // 0x00410E64: sw          $zero, 0xF0($v1)
        MEM_W(0XF0, ctx->r3) = 0;
            goto L_00410E94;
    }
    goto skip_0;
    // 0x00410E64: sw          $zero, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = 0;
    skip_0:
    // 0x00410E68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410E6C: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410E70: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x00410E74: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x00410E78: lw          $t2, 0xC($s3)
    ctx->r10 = MEM_W(ctx->r19, 0XC);
    // 0x00410E7C: sw          $t0, 0xF0($v1)
    MEM_W(0XF0, ctx->r3) = ctx->r8;
    // 0x00410E80: sw          $t1, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = ctx->r9;
    // 0x00410E84: sw          $t2, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = ctx->r10;
    // 0x00410E88: lwc1        $f0, 0x50($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X50);
    // 0x00410E8C: j           L_00410EA4
    // 0x00410E90: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
        goto L_00410EA4;
    // 0x00410E90: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
L_00410E94:
    // 0x00410E94: sw          $zero, 0xF4($v1)
    MEM_W(0XF4, ctx->r3) = 0;
    // 0x00410E98: sw          $zero, 0xF8($v1)
    MEM_W(0XF8, ctx->r3) = 0;
    // 0x00410E9C: sw          $zero, 0xFC($v1)
    MEM_W(0XFC, ctx->r3) = 0;
    // 0x00410EA0: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
L_00410EA4:
    // 0x00410EA4: jal         0x0020F79C
    // 0x00410EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020F79C(rdram, ctx);
        goto after_6;
    // 0x00410EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00410EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410EB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00410EB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00410EB8: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00410EBC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00410EC0: lw          $a2, 0xFC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XFC);
    // 0x00410EC4: jal         0x0020FE00
    // 0x00410EC8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0020FE00(rdram, ctx);
        goto after_7;
    // 0x00410EC8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_7:
    // 0x00410ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410ED0: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x00410ED4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00410ED8: addiu       $s1, $sp, 0xC0
    ctx->r17 = ADD32(ctx->r29, 0XC0);
    // 0x00410EDC: jal         0x0020F85C
    // 0x00410EE0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020F85C(rdram, ctx);
        goto after_8;
    // 0x00410EE0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_8:
    // 0x00410EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410EE8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00410EEC: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x00410EF0: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x00410EF4: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x00410EF8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x00410EFC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x00410F00: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x00410F04: jal         0x0020F85C
    // 0x00410F08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0020F85C(rdram, ctx);
        goto after_9;
    // 0x00410F08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
    // 0x00410F0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00410F10: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00410F14: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x00410F18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00410F1C: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x00410F20: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x00410F24: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x00410F28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00410F2C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00410F30: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00410F34: jal         0x0020EEF8
    // 0x00410F38: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    func_0020EEF8(rdram, ctx);
        goto after_10;
    // 0x00410F38: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    after_10:
    // 0x00410F3C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x00410F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410F44: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x00410F48: lw          $a2, 0x1BB0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BB0);
    // 0x00410F4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00410F50: jal         0x0020EEF8
    // 0x00410F54: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    func_0020EEF8(rdram, ctx);
        goto after_11;
    // 0x00410F54: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    after_11:
    // 0x00410F58: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x00410F5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00410F60: jal         0x0020EF2C
    // 0x00410F64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_12;
    // 0x00410F64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00410F68: beq         $s3, $zero, L_00411064
    if (ctx->r19 == 0) {
        // 0x00410F6C: addiu       $v1, $sp, 0x48
        ctx->r3 = ADD32(ctx->r29, 0X48);
            goto L_00411064;
    }
    // 0x00410F6C: addiu       $v1, $sp, 0x48
    ctx->r3 = ADD32(ctx->r29, 0X48);
    // 0x00410F70: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x00410F74: addiu       $a0, $s3, 0x30
    ctx->r4 = ADD32(ctx->r19, 0X30);
L_00410F78:
    // 0x00410F78: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00410F7C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00410F80: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00410F84: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00410F88: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00410F8C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00410F90: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00410F94: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00410F98: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00410F9C: bne         $v0, $a0, L_00410F78
    if (ctx->r2 != ctx->r4) {
        // 0x00410FA0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00410F78;
    }
    // 0x00410FA0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00410FA4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00410FA8: addiu       $s0, $s0, 0x7078
    ctx->r16 = ADD32(ctx->r16, 0X7078);
    // 0x00410FAC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00410FB0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00410FB4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00410FB8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x00410FBC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x00410FC0: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x00410FC4: sw          $t1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r9;
    // 0x00410FC8: sw          $t2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r10;
    // 0x00410FCC: jal         0x002216DC
    // 0x00410FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002216DC(rdram, ctx);
        goto after_13;
    // 0x00410FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00410FD4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00410FD8: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x00410FDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00410FE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x00410FE4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x00410FE8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00410FEC: jal         0x00239F00
    // 0x00410FF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00239F00(rdram, ctx);
        goto after_14;
    // 0x00410FF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
    // 0x00410FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00410FF8: jal         0x00226724
    // 0x00410FFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_00226724(rdram, ctx);
        goto after_15;
    // 0x00410FFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_15:
    // 0x00411000: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00411004: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x00411008: addiu       $v1, $sp, 0x78
    ctx->r3 = ADD32(ctx->r29, 0X78);
L_0041100C:
    // 0x0041100C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00411010: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00411014: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00411018: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x0041101C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00411020: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x00411024: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x00411028: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x0041102C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00411030: bne         $v0, $v1, L_0041100C
    if (ctx->r2 != ctx->r3) {
        // 0x00411034: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_0041100C;
    }
    // 0x00411034: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00411038: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0041103C: beq         $s0, $zero, L_00411064
    if (ctx->r16 == 0) {
        // 0x00411040: sw          $t0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r8;
            goto L_00411064;
    }
    // 0x00411040: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x00411044: lui         $t3, 0x800F
    ctx->r11 = S32(0X800F << 16);
    // 0x00411048: addiu       $t3, $t3, 0x1CE8
    ctx->r11 = ADD32(ctx->r11, 0X1CE8);
    // 0x0041104C: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x00411050: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x00411054: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x00411058: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0041105C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00411060: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_00411064:
    // 0x00411064: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
L_00411068:
    // 0x00411068: jal         0x0020EAA0
    // 0x0041106C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_16;
    // 0x0041106C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x00411070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00411074: jal         0x0020F5C0
    // 0x00411078: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0020F5C0(rdram, ctx);
        goto after_17;
    // 0x00411078: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_17:
    // 0x0041107C: lwc1        $f1, 0x28($s4)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r20, 0X28);
    // 0x00411080: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x00411084: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x00411088: swc1        $f0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->f0.u32l;
    // 0x0041108C: swc1        $f1, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->f_odd[(1 - 1) * 2];
    // 0x00411090: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x00411094: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00411098: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x0041109C: sw          $t0, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r8;
    // 0x004110A0: sw          $t1, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r9;
    // 0x004110A4: sw          $t2, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r10;
L_004110A8:
    // 0x004110A8: lw          $ra, 0xE4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XE4);
    // 0x004110AC: lw          $s4, 0xE0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE0);
    // 0x004110B0: lw          $s3, 0xDC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XDC);
    // 0x004110B4: lw          $s2, 0xD8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD8);
    // 0x004110B8: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x004110BC: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x004110C0: ldc1        $f20, 0xE8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XE8);
    // 0x004110C4: jr          $ra
    // 0x004110C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x004110C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_00260FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00260FFC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00261000: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261004: lwc1        $f20, 0x7A34($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7A34);
    // 0x00261008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026100C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00261010: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00261014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261018: lwc1        $f21, 0x7A38($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X7A38);
    // 0x0026101C: lui         $v0, 0x26
    ctx->r2 = S32(0X26 << 16);
    // 0x00261020: addiu       $v0, $v0, 0x13D8
    ctx->r2 = ADD32(ctx->r2, 0X13D8);
    // 0x00261024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00261028: sw          $v0, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->r2;
    // 0x0026102C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x00261030: jal         0x002119FC
    // 0x00261034: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00261034: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    after_0:
    // 0x00261038: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026103C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00261040: jal         0x002119FC
    // 0x00261044: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00261044: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x00261048: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x0026104C: mov.s       $f14, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 21);
    ctx->f14.fl = ctx->f21.fl;
    // 0x00261050: jal         0x002119FC
    // 0x00261054: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    func_002119FC(rdram, ctx);
        goto after_2;
    // 0x00261054: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x00261058: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x0026105C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00261060: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261064: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00261068: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x0026106C: jr          $ra
    // 0x00261070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00261070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_002057B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002057B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x002057B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002057B8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x002057BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002057C0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x002057C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x002057C8: jal         0x0029DFF0
    // 0x002057CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x002057CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x002057D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002057D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002057D8: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002057DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002057E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x002057E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002057E8: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002057EC: beq         $v1, $v0, L_00205818
    if (ctx->r3 == ctx->r2) {
        // 0x002057F0: nop
    
            goto L_00205818;
    }
    // 0x002057F0: nop

    // 0x002057F4: jal         0x0029E010
    // 0x002057F8: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002057F8: nop

    after_1:
    // 0x002057FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00205800: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00205804: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00205808: jal         0x0029B6F0
    // 0x0020580C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x0020580C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x00205810: j           L_00205820
    // 0x00205814: nop

        goto L_00205820;
    // 0x00205814: nop

L_00205818:
    // 0x00205818: jal         0x0029E010
    // 0x0020581C: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x0020581C: nop

    after_3:
L_00205820:
    // 0x00205820: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00205824: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x00205828: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x0020582C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x00205830: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00205834: beq         $a0, $zero, L_00205864
    if (ctx->r4 == 0) {
        // 0x00205838: sw          $v1, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r3;
            goto L_00205864;
    }
    // 0x00205838: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_0020583C:
    // 0x0020583C: addiu       $a0, $zero, -0x101
    ctx->r4 = ADD32(0, -0X101);
L_00205840:
    // 0x00205840: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00205844: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00205848: bne         $v0, $zero, L_0020583C
    if (ctx->r2 != 0) {
        // 0x0020584C: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_0020583C;
    }
    // 0x0020584C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x00205850: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205854: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00205858: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x0020585C: bne         $v1, $zero, L_00205840
    if (ctx->r3 != 0) {
        // 0x00205860: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_00205840;
    }
    // 0x00205860: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_00205864:
    // 0x00205864: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00205868: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x0020586C: bne         $v0, $zero, L_0020589C
    if (ctx->r2 != 0) {
        // 0x00205870: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0020589C;
    }
    // 0x00205870: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205874: jal         0x002065F8
    // 0x00205878: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002065F8(rdram, ctx);
        goto after_4;
    // 0x00205878: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0020587C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x00205880: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x00205884: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x00205888: jal         0x002026EC
    // 0x0020588C: nop

    entry_002026EC(rdram, ctx);
        goto after_5;
    // 0x0020588C: nop

    after_5:
    // 0x00205890: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00205894: jal         0x002062F8
    // 0x00205898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_6;
    // 0x00205898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_0020589C:
    // 0x0020589C: jal         0x0029DFF0
    // 0x002058A0: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    func_0029DFF0(rdram, ctx);
        goto after_7;
    // 0x002058A0: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    after_7:
    // 0x002058A4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002058A8: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002058AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002058B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002058B4: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002058B8: beq         $v1, $zero, L_002058E4
    if (ctx->r3 == 0) {
        // 0x002058BC: nop
    
            goto L_002058E4;
    }
    // 0x002058BC: nop

    // 0x002058C0: jal         0x0029E010
    // 0x002058C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_8;
    // 0x002058C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x002058C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002058CC: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002058D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002058D4: jal         0x0029B820
    // 0x002058D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x002058D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x002058DC: j           L_002058EC
    // 0x002058E0: nop

        goto L_002058EC;
    // 0x002058E0: nop

L_002058E4:
    // 0x002058E4: jal         0x0029E010
    // 0x002058E8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_10;
    // 0x002058E8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_10:
L_002058EC:
    // 0x002058EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x002058F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002058F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002058F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002058FC: jr          $ra
    // 0x00205900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025A3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A3DC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0025A3E0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0025A3E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025A3E8: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0025A3EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025A3F0: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x0025A3F4: jal         0x0026D5DC
    // 0x0025A3F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x0025A3F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x0025A3FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A400: jal         0x0025A5D4
    // 0x0025A404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A5D4(rdram, ctx);
        goto after_1;
    // 0x0025A404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0025A408: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A40C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A410: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A414: jal         0x0026D5E4
    // 0x0025A418: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x0025A418: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x0025A41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A420: jal         0x0025A658
    // 0x0025A424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A658(rdram, ctx);
        goto after_3;
    // 0x0025A424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0025A428: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A42C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A430: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A434: jal         0x0026D5E4
    // 0x0025A438: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_4;
    // 0x0025A438: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x0025A43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025A440: jal         0x0025A7E4
    // 0x0025A444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0025A7E4(rdram, ctx);
        goto after_5;
    // 0x0025A444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x0025A448: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A44C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A450: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A454: jal         0x0026D5E4
    // 0x0025A458: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_6;
    // 0x0025A458: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x0025A45C: jal         0x0026D628
    // 0x0025A460: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_7;
    // 0x0025A460: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x0025A464: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A468: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x0025A46C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0025A470: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0025A474: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A478: jr          $ra
    // 0x0025A47C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0025A47C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_0026484C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026484C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00264854: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00264858: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026485C: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00264860: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00264864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00264868: jal         0x00220260
    // 0x0026486C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_00220260(rdram, ctx);
        goto after_0;
    // 0x0026486C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x00264870: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00264874: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x00264878: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0026487C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00264880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00264884: jr          $ra
    // 0x00264888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255840: lwc1        $f1, 0xA5C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XA5C);
    // 0x00255844: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00255848: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025584C: nop

    // 0x00255850: bc1f        L_00255868
    if (!c1cs) {
        // 0x00255854: nop
    
            goto L_00255868;
    }
    // 0x00255854: nop

    // 0x00255858: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025585C: lwc1        $f0, 0x7188($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7188);
    // 0x00255860: j           L_00255874
    // 0x00255864: swc1        $f0, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = ctx->f0.u32l;
        goto L_00255874;
    // 0x00255864: swc1        $f0, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = ctx->f0.u32l;
L_00255868:
    // 0x00255868: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025586C: lwc1        $f0, 0x718C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X718C);
    // 0x00255870: swc1        $f0, 0xA7C($a0)
    MEM_W(0XA7C, ctx->r4) = ctx->f0.u32l;
L_00255874:
    // 0x00255874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00255878: lwc1        $f0, 0x7190($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7190);
    // 0x0025587C: jr          $ra
    // 0x00255880: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x00255880: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00268E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00268E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00268E64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00268E68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00268E6C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00268E70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00268E74: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x00268E78: beq         $a1, $zero, L_00268ED0
    if (ctx->r5 == 0) {
        // 0x00268E7C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00268ED0;
    }
    // 0x00268E7C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00268E80: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00268E84: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00268E88: jal         0x0022425C
    // 0x00268E8C: nop

    func_0022425C(rdram, ctx);
        goto after_0;
    // 0x00268E8C: nop

    after_0:
    // 0x00268E90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00268E94: beq         $v1, $zero, L_00268ED0
    if (ctx->r3 == 0) {
        // 0x00268E98: nop
    
            goto L_00268ED0;
    }
    // 0x00268E98: nop

    // 0x00268E9C: lw          $a0, 0x44($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X44);
    // 0x00268EA0: andi        $v0, $a0, 0x4000
    ctx->r2 = ctx->r4 & 0X4000;
    // 0x00268EA4: bne         $v0, $zero, L_00268ED0
    if (ctx->r2 != 0) {
        // 0x00268EA8: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_00268ED0;
    }
    // 0x00268EA8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00268EAC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x00268EB0: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x00268EB4: bne         $v0, $zero, L_00268ED0
    if (ctx->r2 != 0) {
        // 0x00268EB8: addiu       $s0, $zero, 0x7
        ctx->r16 = ADD32(0, 0X7);
            goto L_00268ED0;
    }
    // 0x00268EB8: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x00268EBC: lhu         $v0, 0x52($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X52);
    // 0x00268EC0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00268EC4: bne         $v0, $zero, L_00268ED0
    if (ctx->r2 != 0) {
        // 0x00268EC8: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_00268ED0;
    }
    // 0x00268EC8: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x00268ECC: lbu         $s0, 0x58($v1)
    ctx->r16 = MEM_BU(ctx->r3, 0X58);
L_00268ED0:
    // 0x00268ED0: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x00268ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00268ED8: bne         $a1, $v0, L_00268F28
    if (ctx->r5 != ctx->r2) {
        // 0x00268EDC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00268F28;
    }
    // 0x00268EDC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00268EE0: lw          $v1, 0x140($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X140);
    // 0x00268EE4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x00268EE8: bnel        $v0, $zero, L_00268EF0
    if (ctx->r2 != 0) {
        // 0x00268EEC: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00268EF0;
    }
    goto skip_0;
    // 0x00268EEC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
L_00268EF0:
    // 0x00268EF0: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x00268EF4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x00268EF8: beq         $v0, $zero, L_00268F28
    if (ctx->r2 == 0) {
        // 0x00268EFC: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00268F28;
    }
    // 0x00268EFC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00268F00: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x00268F04: beq         $a0, $zero, L_00268F28
    if (ctx->r4 == 0) {
        // 0x00268F08: nop
    
            goto L_00268F28;
    }
    // 0x00268F08: nop

    // 0x00268F0C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00268F10: bne         $v0, $a1, L_00268F28
    if (ctx->r2 != ctx->r5) {
        // 0x00268F14: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00268F28;
    }
    // 0x00268F14: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00268F18: jal         0x0021F1F8
    // 0x00268F1C: nop

    func_0021F1F8(rdram, ctx);
        goto after_1;
    // 0x00268F1C: nop

    after_1:
    // 0x00268F20: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00268F24: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_00268F28:
    // 0x00268F28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00268F2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00268F30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00268F34: jr          $ra
    // 0x00268F38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00268F38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0023F634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023F634: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023F638: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023F63C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023F640: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023F644: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023F648: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x0023F64C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0023F650: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023F654: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x0023F658: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x0023F65C: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x0023F660: slti        $v0, $v1, 0x1121
    ctx->r2 = SIGNED(ctx->r3) < 0X1121 ? 1 : 0;
    // 0x0023F664: beq         $v0, $zero, L_0023F6A8
    if (ctx->r2 == 0) {
        // 0x0023F668: slti        $v0, $v1, 0x111C
        ctx->r2 = SIGNED(ctx->r3) < 0X111C ? 1 : 0;
            goto L_0023F6A8;
    }
    // 0x0023F668: slti        $v0, $v1, 0x111C
    ctx->r2 = SIGNED(ctx->r3) < 0X111C ? 1 : 0;
    // 0x0023F66C: beq         $v0, $zero, L_0023F704
    if (ctx->r2 == 0) {
        // 0x0023F670: addiu       $v0, $zero, 0x709
        ctx->r2 = ADD32(0, 0X709);
            goto L_0023F704;
    }
    // 0x0023F670: addiu       $v0, $zero, 0x709
    ctx->r2 = ADD32(0, 0X709);
    // 0x0023F674: beq         $v1, $v0, L_0023F6E0
    if (ctx->r3 == ctx->r2) {
        // 0x0023F678: slti        $v0, $v1, 0x70A
        ctx->r2 = SIGNED(ctx->r3) < 0X70A ? 1 : 0;
            goto L_0023F6E0;
    }
    // 0x0023F678: slti        $v0, $v1, 0x70A
    ctx->r2 = SIGNED(ctx->r3) < 0X70A ? 1 : 0;
    // 0x0023F67C: beq         $v0, $zero, L_0023F694
    if (ctx->r2 == 0) {
        // 0x0023F680: addiu       $v0, $zero, 0x708
        ctx->r2 = ADD32(0, 0X708);
            goto L_0023F694;
    }
    // 0x0023F680: addiu       $v0, $zero, 0x708
    ctx->r2 = ADD32(0, 0X708);
    // 0x0023F684: beq         $v1, $v0, L_0023F6D0
    if (ctx->r3 == ctx->r2) {
        // 0x0023F688: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F6D0;
    }
    // 0x0023F688: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F68C: j           L_0023F718
    // 0x0023F690: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
        goto L_0023F718;
    // 0x0023F690: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
L_0023F694:
    // 0x0023F694: slti        $v0, $v1, 0x70C
    ctx->r2 = SIGNED(ctx->r3) < 0X70C ? 1 : 0;
    // 0x0023F698: beq         $v0, $zero, L_0023F714
    if (ctx->r2 == 0) {
        // 0x0023F69C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F714;
    }
    // 0x0023F69C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F6A0: j           L_0023F6F0
    // 0x0023F6A4: nop

        goto L_0023F6F0;
    // 0x0023F6A4: nop

L_0023F6A8:
    // 0x0023F6A8: slti        $v0, $v1, 0x1130
    ctx->r2 = SIGNED(ctx->r3) < 0X1130 ? 1 : 0;
    // 0x0023F6AC: bne         $v0, $zero, L_0023F714
    if (ctx->r2 != 0) {
        // 0x0023F6B0: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_0023F714;
    }
    // 0x0023F6B0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0023F6B4: slti        $v0, $v1, 0x1135
    ctx->r2 = SIGNED(ctx->r3) < 0X1135 ? 1 : 0;
    // 0x0023F6B8: bne         $v0, $zero, L_0023F704
    if (ctx->r2 != 0) {
        // 0x0023F6BC: addiu       $v0, $zero, 0x1194
        ctx->r2 = ADD32(0, 0X1194);
            goto L_0023F704;
    }
    // 0x0023F6BC: addiu       $v0, $zero, 0x1194
    ctx->r2 = ADD32(0, 0X1194);
    // 0x0023F6C0: beq         $v1, $v0, L_0023F704
    if (ctx->r3 == ctx->r2) {
        // 0x0023F6C4: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_0023F704;
    }
    // 0x0023F6C4: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0023F6C8: j           L_0023F718
    // 0x0023F6CC: nop

        goto L_0023F718;
    // 0x0023F6CC: nop

L_0023F6D0:
    // 0x0023F6D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023F6D4: lwc1        $f0, 0x67C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67C8);
    // 0x0023F6D8: j           L_0023F710
    // 0x0023F6DC: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
        goto L_0023F710;
    // 0x0023F6DC: swc1        $f0, 0xA28($s0)
    MEM_W(0XA28, ctx->r16) = ctx->f0.u32l;
L_0023F6E0:
    // 0x0023F6E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023F6E4: lwc1        $f0, 0x67CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X67CC);
    // 0x0023F6E8: j           L_0023F710
    // 0x0023F6EC: swc1        $f0, 0xA2C($s0)
    MEM_W(0XA2C, ctx->r16) = ctx->f0.u32l;
        goto L_0023F710;
    // 0x0023F6EC: swc1        $f0, 0xA2C($s0)
    MEM_W(0XA2C, ctx->r16) = ctx->f0.u32l;
L_0023F6F0:
    // 0x0023F6F0: lwc1        $f0, 0xA30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA30);
    // 0x0023F6F4: lwc1        $f1, 0xC($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0XC);
    // 0x0023F6F8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023F6FC: j           L_0023F710
    // 0x0023F700: swc1        $f0, 0xA30($s0)
    MEM_W(0XA30, ctx->r16) = ctx->f0.u32l;
        goto L_0023F710;
    // 0x0023F700: swc1        $f0, 0xA30($s0)
    MEM_W(0XA30, ctx->r16) = ctx->f0.u32l;
L_0023F704:
    // 0x0023F704: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x0023F708: jal         0x00248644
    // 0x0023F70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248644(rdram, ctx);
        goto after_0;
    // 0x0023F70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_0023F710:
    // 0x0023F710: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0023F714:
    // 0x0023F714: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
L_0023F718:
    // 0x0023F718: lh          $s2, 0x6($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X6);
    // 0x0023F71C: lh          $s3, 0x8($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X8);
    // 0x0023F720: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x0023F724: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x0023F728: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023F72C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0023F730: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0023F734: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0023F738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0023F73C: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F740: jal         0x00281060
    // 0x0023F744: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    func_00281060(rdram, ctx);
        goto after_1;
    // 0x0023F744: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    after_1:
    // 0x0023F748: beq         $s1, $zero, L_0023F764
    if (ctx->r17 == 0) {
        // 0x0023F74C: nop
    
            goto L_0023F764;
    }
    // 0x0023F74C: nop

    // 0x0023F750: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0023F754: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x0023F758: lw          $a1, 0x51C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X51C);
    // 0x0023F75C: jal         0x0027FC2C
    // 0x0023F760: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0027FC2C(rdram, ctx);
        goto after_2;
    // 0x0023F760: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
L_0023F764:
    // 0x0023F764: beq         $s2, $zero, L_0023F788
    if (ctx->r18 == 0) {
        // 0x0023F768: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0023F788;
    }
    // 0x0023F768: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0023F76C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0023F770: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x0023F774: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x0023F778: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0023F77C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0023F780: jal         0x00275544
    // 0x0023F784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00275544(rdram, ctx);
        goto after_3;
    // 0x0023F784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_0023F788:
    // 0x0023F788: beq         $s3, $zero, L_0023F798
    if (ctx->r19 == 0) {
        // 0x0023F78C: nop
    
            goto L_0023F798;
    }
    // 0x0023F78C: nop

    // 0x0023F790: jal         0x0027580C
    // 0x0023F794: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_0027580C(rdram, ctx);
        goto after_4;
    // 0x0023F794: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
L_0023F798:
    // 0x0023F798: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x0023F79C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0023F7A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023F7A4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023F7A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023F7AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023F7B0: jr          $ra
    // 0x0023F7B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023F7B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0045342C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00281610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00281610: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00281614: lw          $v0, 0x35D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X35D4);
    // 0x00281618: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0028161C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00281620: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00281624: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x00281628: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x0028162C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x00281630: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x00281634: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00281638: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x0028163C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x00281640: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00281644: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00281648: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0028164C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00281650: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00281654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00281658: sdc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X40, ctx->r29);
    // 0x0028165C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x00281660: bne         $a2, $v0, L_00281670
    if (ctx->r6 != ctx->r2) {
        // 0x00281664: addiu       $s5, $zero, -0x1
        ctx->r21 = ADD32(0, -0X1);
            goto L_00281670;
    }
    // 0x00281664: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x00281668: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028166C: lw          $a2, 0x2CD0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2CD0);
L_00281670:
    // 0x00281670: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00281674: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x00281678: beq         $v0, $zero, L_00281764
    if (ctx->r2 == 0) {
        // 0x0028167C: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_00281764;
    }
    // 0x0028167C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x00281680: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_00281684:
    // 0x00281684: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281688: lwc1        $f20, -0x63E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X63E8);
    // 0x0028168C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00281690: lwc1        $f21, -0x63E4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X63E4);
    // 0x00281694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00281698:
    // 0x00281698: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028169C: beq         $v0, $s4, L_002816AC
    if (ctx->r2 == ctx->r20) {
        // 0x002816A0: nop
    
            goto L_002816AC;
    }
    // 0x002816A0: nop

    // 0x002816A4: bnel        $v0, $zero, L_00281684
    if (ctx->r2 != 0) {
        // 0x002816A8: addiu       $s4, $zero, 0xA
        ctx->r20 = ADD32(0, 0XA);
            goto L_00281684;
    }
    goto skip_0;
    // 0x002816A8: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    skip_0:
L_002816AC:
    // 0x002816AC: beq         $s2, $s1, L_00281758
    if (ctx->r18 == ctx->r17) {
        // 0x002816B0: nop
    
            goto L_00281758;
    }
    // 0x002816B0: nop

    // 0x002816B4: lw          $s0, 0xF0C($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XF0C);
    // 0x002816B8: beq         $s0, $zero, L_002816E4
    if (ctx->r16 == 0) {
        // 0x002816BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_002816E4;
    }
    // 0x002816BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002816C0: jal         0x00281B58
    // 0x002816C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00281B58(rdram, ctx);
        goto after_0;
    // 0x002816C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002816C8: addiu       $a0, $s3, 0xF0C
    ctx->r4 = ADD32(ctx->r19, 0XF0C);
    // 0x002816CC: jal         0x00200738
    // 0x002816D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_1;
    // 0x002816D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002816D4: addiu       $a0, $s7, 0xE28
    ctx->r4 = ADD32(ctx->r23, 0XE28);
    // 0x002816D8: jal         0x00200574
    // 0x002816DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x002816DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x002816E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_002816E4:
    // 0x002816E4: beql        $a0, $zero, L_00281758
    if (ctx->r4 == 0) {
        // 0x002816E8: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_00281758;
    }
    goto skip_1;
    // 0x002816E8: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x002816EC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x002816F0: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x002816F4: mul.s       $f1, $f22, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f21.fl);
    // 0x002816F8: sw          $s6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r22;
    // 0x002816FC: sw          $s2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r18;
    // 0x00281700: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x00281704: swc1        $f20, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f20.u32l;
    // 0x00281708: sw          $s5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r21;
    // 0x0028170C: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x00281710: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x00281714: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x00281718: swc1        $f20, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f20.u32l;
    // 0x0028171C: swc1        $f20, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f20.u32l;
    // 0x00281720: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x00281724: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00281728: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x0028172C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00281730: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x00281734: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x00281738: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0028173C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x00281740: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x00281744: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00281748: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0028174C: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x00281750: swc1        $f1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    // 0x00281754: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_00281758:
    // 0x00281758: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x0028175C: bne         $v0, $zero, L_00281698
    if (ctx->r2 != 0) {
        // 0x00281760: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00281698;
    }
    // 0x00281760: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00281764:
    // 0x00281764: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00281768: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x0028176C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x00281770: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00281774: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00281778: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0028177C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00281780: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00281784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00281788: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x0028178C: ldc1        $f21, 0x40($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X40);
    // 0x00281790: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x00281794: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00281798: jr          $ra
    // 0x0028179C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0028179C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00284568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028456C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00284570: jal         0x00284174
    // 0x00284574: nop

    func_00284174(rdram, ctx);
        goto after_0;
    // 0x00284574: nop

    after_0:
    // 0x00284578: beq         $v0, $zero, L_00284634
    if (ctx->r2 == 0) {
        // 0x0028457C: nop
    
            goto L_00284634;
    }
    // 0x0028457C: nop

    // 0x00284580: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00284584: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00284588: bne         $v0, $zero, L_002845A0
    if (ctx->r2 != 0) {
        // 0x0028458C: nop
    
            goto L_002845A0;
    }
    // 0x0028458C: nop

    // 0x00284590: jal         0x00284240
    // 0x00284594: nop

    func_00284240(rdram, ctx);
        goto after_1;
    // 0x00284594: nop

    after_1:
    // 0x00284598: beq         $v0, $zero, L_002845B4
    if (ctx->r2 == 0) {
        // 0x0028459C: nop
    
            goto L_002845B4;
    }
    // 0x0028459C: nop

L_002845A0:
    // 0x002845A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002845A4: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002845A8: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x002845AC: j           L_00284634
    // 0x002845B0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
        goto L_00284634;
    // 0x002845B0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
L_002845B4:
    // 0x002845B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002845B8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x002845BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002845C0: lwc1        $f0, -0x6324($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6324);
    // 0x002845C4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002845C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x002845CC: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x002845D0: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x002845D4: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x002845D8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002845DC: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x002845E0: swc1        $f1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f_odd[(1 - 1) * 2];
    // 0x002845E4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x002845E8: nop

    // 0x002845EC: bc1f        L_002845FC
    if (!c1cs) {
        // 0x002845F0: swc1        $f0, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
            goto L_002845FC;
    }
    // 0x002845F0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x002845F4: jal         0x002838A4
    // 0x002845F8: nop

    func_002838A4(rdram, ctx);
        goto after_2;
    // 0x002845F8: nop

    after_2:
L_002845FC:
    // 0x002845FC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00284600: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00284604: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x00284608: lwc1        $f1, 0x2C($v1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r3, 0X2C);
    // 0x0028460C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00284610: nop

    // 0x00284614: bc1f        L_00284634
    if (!c1cs) {
        // 0x00284618: nop
    
            goto L_00284634;
    }
    // 0x00284618: nop

    // 0x0028461C: lw          $v0, 0xB4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB4);
    // 0x00284620: beq         $v0, $zero, L_00284634
    if (ctx->r2 == 0) {
        // 0x00284624: swc1        $f1, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
            goto L_00284634;
    }
    // 0x00284624: swc1        $f1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f_odd[(1 - 1) * 2];
    // 0x00284628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028462C: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x00284630: sw          $zero, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = 0;
L_00284634:
    // 0x00284634: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00284638: jr          $ra
    // 0x0028463C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0028463C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00266D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266D24: beq         $a1, $zero, L_00266D80
    if (ctx->r5 == 0) {
        // 0x00266D28: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_00266D80;
    }
    // 0x00266D28: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x00266D2C: beq         $a1, $zero, L_00266D64
    if (ctx->r5 == 0) {
        // 0x00266D30: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_00266D64;
    }
    // 0x00266D30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00266D34: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
L_00266D38:
    // 0x00266D38: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x00266D3C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00266D40: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00266D44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00266D48: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x00266D4C: beql        $v0, $zero, L_00266D58
    if (ctx->r2 == 0) {
        // 0x00266D50: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_00266D58;
    }
    goto skip_0;
    // 0x00266D50: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x00266D54: addiu       $a3, $v1, 0x1
    ctx->r7 = ADD32(ctx->r3, 0X1);
L_00266D58:
    // 0x00266D58: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x00266D5C: bnel        $v0, $zero, L_00266D38
    if (ctx->r2 != 0) {
        // 0x00266D60: addu        $v0, $a3, $a1
        ctx->r2 = ADD32(ctx->r7, ctx->r5);
            goto L_00266D38;
    }
    goto skip_1;
    // 0x00266D60: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
    skip_1:
L_00266D64:
    // 0x00266D64: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x00266D68: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x00266D6C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00266D70: beq         $v1, $a2, L_00266D84
    if (ctx->r3 == ctx->r6) {
        // 0x00266D74: addu        $v0, $a3, $zero
        ctx->r2 = ADD32(ctx->r7, 0);
            goto L_00266D84;
    }
    // 0x00266D74: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x00266D78: jr          $ra
    // 0x00266D7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00266D7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00266D80:
    // 0x00266D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_00266D84:
    // 0x00266D84: jr          $ra
    // 0x00266D88: nop

    return;
    // 0x00266D88: nop

;}
RECOMP_FUNC void func_0040B80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B80C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B810: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B814: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0040B818: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B81C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0040B820: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B824: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0040B828: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x0040B82C: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B830: jal         0x00246108
    // 0x0040B834: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B834: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040B83C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B840: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B844: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x0040B848: jal         0x00245BAC
    // 0x0040B84C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B84C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x0040B850: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040B854: addiu       $v1, $v1, -0x490
    ctx->r3 = ADD32(ctx->r3, -0X490);
    // 0x0040B858: lw          $v0, 0x67C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X67C);
    // 0x0040B85C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0040B860: sw          $v0, 0x67C($v1)
    MEM_W(0X67C, ctx->r3) = ctx->r2;
    // 0x0040B864: slti        $v0, $v0, 0x65
    ctx->r2 = SIGNED(ctx->r2) < 0X65 ? 1 : 0;
    // 0x0040B868: beq         $v0, $zero, L_0040B8F8
    if (ctx->r2 == 0) {
        // 0x0040B86C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040B8F8;
    }
    // 0x0040B86C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040B870: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0040B874: beq         $v0, $zero, L_0040B904
    if (ctx->r2 == 0) {
        // 0x0040B878: nop
    
            goto L_0040B904;
    }
    // 0x0040B878: nop

    // 0x0040B87C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0040B880: beq         $v0, $zero, L_0040B904
    if (ctx->r2 == 0) {
        // 0x0040B884: nop
    
            goto L_0040B904;
    }
    // 0x0040B884: nop

    // 0x0040B888: lwc1        $f1, 0x9C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X9C);
    // 0x0040B88C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040B890: lwc1        $f0, 0x87C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X87C);
    // 0x0040B894: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0040B898: nop

    // 0x0040B89C: bc1f        L_0040B904
    if (!c1cs) {
        // 0x0040B8A0: nop
    
            goto L_0040B904;
    }
    // 0x0040B8A0: nop

    // 0x0040B8A4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0040B8A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0040B8AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0040B8B0: nop

    // 0x0040B8B4: bc1f        L_0040B8E0
    if (!c1cs) {
        // 0x0040B8B8: nop
    
            goto L_0040B8E0;
    }
    // 0x0040B8B8: nop

    // 0x0040B8BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040B8C0: lwc1        $f1, 0x880($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X880);
    // 0x0040B8C4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0040B8C8: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x0040B8CC: nop

    // 0x0040B8D0: bc1t        L_0040B8FC
    if (c1cs) {
        // 0x0040B8D4: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_0040B8FC;
    }
    // 0x0040B8D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0040B8D8: j           L_0040B904
    // 0x0040B8DC: nop

        goto L_0040B904;
    // 0x0040B8DC: nop

L_0040B8E0:
    // 0x0040B8E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040B8E4: lwc1        $f0, 0x884($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X884);
    // 0x0040B8E8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0040B8EC: nop

    // 0x0040B8F0: bc1f        L_0040B904
    if (!c1cs) {
        // 0x0040B8F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0040B904;
    }
    // 0x0040B8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0040B8F8:
    // 0x0040B8F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_0040B8FC:
    // 0x0040B8FC: jal         0x00243414
    // 0x0040B900: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B900: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_0040B904:
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
RECOMP_FUNC void func_002242B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002242B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002242B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002242BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002242C0: beq         $s0, $zero, L_002242E4
    if (ctx->r16 == 0) {
        // 0x002242C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_002242E4;
    }
    // 0x002242C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002242C8: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x002242CC: jal         0x002017D4
    // 0x002242D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x002242D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x002242D4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002242D8: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x002242DC: j           L_002242E8
    // 0x002242E0: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
        goto L_002242E8;
    // 0x002242E0: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
L_002242E4:
    // 0x002242E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_002242E8:
    // 0x002242E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002242EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002242F0: jr          $ra
    // 0x002242F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002242F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00273E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00273E98: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00273E9C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x00273EA0: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x00273EA4: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    // 0x00273EA8: sw          $v1, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r3;
    // 0x00273EAC: sw          $a3, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r7;
    // 0x00273EB0: jr          $ra
    // 0x00273EB4: sw          $a2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r6;
    return;
    // 0x00273EB4: sw          $a2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_00266EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266EC4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x00266EC8: bgez        $a1, L_00266ED4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00266ECC: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_00266ED4;
    }
    // 0x00266ECC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00266ED0: addiu       $v0, $a1, 0x7
    ctx->r2 = ADD32(ctx->r5, 0X7);
L_00266ED4:
    // 0x00266ED4: sra         $a3, $v0, 3
    ctx->r7 = S32(SIGNED(ctx->r2) >> 3);
    // 0x00266ED8: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x00266EDC: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x00266EE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00266EE4: beq         $a2, $zero, L_00266F00
    if (ctx->r6 == 0) {
            // 0x00266EE8: sllv        $a0, $v1, $v0
    ctx->r4 = S32(ctx->r3 << (ctx->r2 & 31));
    func_00266F00(rdram, ctx);
    return;
    }
    // 0x00266EE8: sllv        $a0, $v1, $v0
    ctx->r4 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x00266EEC: addu        $v1, $t0, $a3
    ctx->r3 = ADD32(ctx->r8, ctx->r7);
    // 0x00266EF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00266EF4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x00266EF8: jr          $ra
    // 0x00266EFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x00266EFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_00418A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418A34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418A38: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x00418A3C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418A44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418A48: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00418A4C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418A50: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418A54: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00418A58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00418A5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418A60: lb          $v0, 0x20($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X20);
    // 0x00418A64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418A68: jal         0x0041648C
    // 0x00418A6C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00418A6C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418A70: sb          $v0, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r2;
    // 0x00418A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418A78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00418A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418A80: jr          $ra
    // 0x00418A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00418A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00441FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00441FF0: jr          $ra
    // 0x00441FF4: nop

    return;
    // 0x00441FF4: nop

;}
RECOMP_FUNC void func_0028CD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028CD10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0028CD14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0028CD18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0028CD1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0028CD20: andi        $s1, $a0, 0xFFFF
    ctx->r17 = ctx->r4 & 0XFFFF;
    // 0x0028CD24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0028CD28: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x0028CD2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0028CD30: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
L_0028CD34:
    // 0x0028CD34: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0028CD38: jal         0x0028CD68
    // 0x0028CD3C: srav        $a0, $s1, $a0
    ctx->r4 = S32(SIGNED(ctx->r17) >> (ctx->r4 & 31));
    func_0028CD68(rdram, ctx);
        goto after_0;
    // 0x0028CD3C: srav        $a0, $s1, $a0
    ctx->r4 = S32(SIGNED(ctx->r17) >> (ctx->r4 & 31));
    after_0:
    // 0x0028CD40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0028CD44: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x0028CD48: bnel        $v0, $zero, L_0028CD34
    if (ctx->r2 != 0) {
        // 0x0028CD4C: subu        $a0, $s2, $s0
        ctx->r4 = SUB32(ctx->r18, ctx->r16);
            goto L_0028CD34;
    }
    goto skip_0;
    // 0x0028CD4C: subu        $a0, $s2, $s0
    ctx->r4 = SUB32(ctx->r18, ctx->r16);
    skip_0:
    // 0x0028CD50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0028CD54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0028CD58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0028CD5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0028CD60: jr          $ra
    // 0x0028CD64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0028CD64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00292DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00292DE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00292DE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00292DEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00292DF0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00292DF4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00292DF8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00292DFC: jal         0x002932BC
    // 0x00292E00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_002932BC(rdram, ctx);
        goto after_0;
    // 0x00292E00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00292E04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292E08: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x00292E0C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00292E10: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x00292E14: jal         0x00293310
    // 0x00292E18: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
    func_00293310(rdram, ctx);
        goto after_1;
    // 0x00292E18: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
    after_1:
    // 0x00292E1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00292E20: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x00292E24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00292E28: bne         $v1, $v0, L_00292EC4
    if (ctx->r3 != ctx->r2) {
        // 0x00292E2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00292EC4;
    }
    // 0x00292E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00292E30: jal         0x00293310
    // 0x00292E34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293310(rdram, ctx);
        goto after_2;
    // 0x00292E34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x00292E38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00292E3C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x00292E40: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x00292E44: bne         $v1, $v0, L_00292E94
    if (ctx->r3 != ctx->r2) {
        // 0x00292E48: addiu       $v0, $zero, 0x2F
        ctx->r2 = ADD32(0, 0X2F);
            goto L_00292E94;
    }
    // 0x00292E48: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x00292E4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292E50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00292E54: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x00292E58: sw          $s3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r19;
    // 0x00292E5C: sb          $s0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r16;
    // 0x00292E60: jal         0x00293310
    // 0x00292E64: sb          $a1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r5;
    func_00293310(rdram, ctx);
        goto after_3;
    // 0x00292E64: sb          $a1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r5;
    after_3:
    // 0x00292E68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292E6C: jal         0x00293310
    // 0x00292E70: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_00293310(rdram, ctx);
        goto after_4;
    // 0x00292E70: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_4:
    // 0x00292E74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292E78: jal         0x00293310
    // 0x00292E7C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_00293310(rdram, ctx);
        goto after_5;
    // 0x00292E7C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_5:
    // 0x00292E80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292E84: jal         0x00293310
    // 0x00292E88: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_00293310(rdram, ctx);
        goto after_6;
    // 0x00292E88: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_6:
    // 0x00292E8C: j           L_00292EBC
    // 0x00292E90: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_00292EBC;
    // 0x00292E90: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_00292E94:
    // 0x00292E94: bnel        $v1, $v0, L_00292F2C
    if (ctx->r3 != ctx->r2) {
        // 0x00292E98: sh          $zero, 0x1A($s2)
        MEM_H(0X1A, ctx->r18) = 0;
            goto L_00292F2C;
    }
    goto skip_0;
    // 0x00292E98: sh          $zero, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = 0;
    skip_0:
    // 0x00292E9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292EA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00292EA4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x00292EA8: sw          $s3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r19;
    // 0x00292EAC: sb          $s0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r16;
    // 0x00292EB0: jal         0x00293310
    // 0x00292EB4: sb          $a1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r5;
    func_00293310(rdram, ctx);
        goto after_7;
    // 0x00292EB4: sb          $a1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r5;
    after_7:
    // 0x00292EB8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_00292EBC:
    // 0x00292EBC: j           L_00292F2C
    // 0x00292EC0: sh          $zero, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = 0;
        goto L_00292F2C;
    // 0x00292EC0: sh          $zero, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = 0;
L_00292EC4:
    // 0x00292EC4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x00292EC8: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x00292ECC: beq         $v0, $zero, L_00292EF0
    if (ctx->r2 == 0) {
        // 0x00292ED0: sw          $s3, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r19;
            goto L_00292EF0;
    }
    // 0x00292ED0: sw          $s3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r19;
    // 0x00292ED4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00292ED8: jal         0x00293310
    // 0x00292EDC: sb          $s0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r16;
    func_00293310(rdram, ctx);
        goto after_8;
    // 0x00292EDC: sb          $s0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r16;
    after_8:
    // 0x00292EE0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x00292EE4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x00292EE8: j           L_00292EFC
    // 0x00292EEC: sh          $v0, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = ctx->r2;
        goto L_00292EFC;
    // 0x00292EEC: sh          $v0, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = ctx->r2;
L_00292EF0:
    // 0x00292EF0: lbu         $v0, 0x1B($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1B);
    // 0x00292EF4: sb          $s0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r16;
    // 0x00292EF8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_00292EFC:
    // 0x00292EFC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x00292F00: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x00292F04: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x00292F08: beq         $v1, $v0, L_00292F28
    if (ctx->r3 == ctx->r2) {
        // 0x00292F0C: addiu       $v0, $zero, 0xD0
        ctx->r2 = ADD32(0, 0XD0);
            goto L_00292F28;
    }
    // 0x00292F0C: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x00292F10: beql        $v1, $v0, L_00292F2C
    if (ctx->r3 == ctx->r2) {
        // 0x00292F14: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_00292F2C;
    }
    goto skip_1;
    // 0x00292F14: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_1:
    // 0x00292F18: jal         0x00293310
    // 0x00292F1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00293310(rdram, ctx);
        goto after_9;
    // 0x00292F1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00292F20: j           L_00292F2C
    // 0x00292F24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_00292F2C;
    // 0x00292F24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_00292F28:
    // 0x00292F28: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_00292F2C:
    // 0x00292F2C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00292F30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00292F34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00292F38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00292F3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00292F40: jr          $ra
    // 0x00292F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00292F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00412314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00412314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00412318: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0041231C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00412320: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412324: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB8);
    // 0x00412328: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x0041232C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00412330: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x00412334: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x00412338: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0041233C: beq         $v0, $zero, L_0041241C
    if (ctx->r2 == 0) {
        // 0x00412340: sw          $s1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r17;
            goto L_0041241C;
    }
    // 0x00412340: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00412344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00412348: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0041234C: lw          $a0, 0x70D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70D8);
    // 0x00412350: lui         $a1, 0x800F
    ctx->r5 = S32(0X800F << 16);
    // 0x00412354: lw          $a1, 0x709C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X709C);
    // 0x00412358: lhu         $s2, 0x4($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X4);
    // 0x0041235C: lhu         $s1, 0xA($v1)
    ctx->r17 = MEM_HU(ctx->r3, 0XA);
    // 0x00412360: jal         0x0020185C
    // 0x00412364: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_0;
    // 0x00412364: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x00412368: bne         $v0, $zero, L_00412378
    if (ctx->r2 != 0) {
        // 0x0041236C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00412378;
    }
    // 0x0041236C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00412370: j           L_004123AC
    // 0x00412374: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_004123AC;
    // 0x00412374: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00412378:
    // 0x00412378: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x0041237C: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x00412380: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00412384: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412388: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x0041238C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00412390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00412394: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00412398: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0041239C: jal         0x0020367C
    // 0x004123A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_1;
    // 0x004123A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x004123A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004123A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_004123AC:
    // 0x004123AC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x004123B0: lw          $v0, 0x70D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70D8);
    // 0x004123B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x004123B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004123BC: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x004123C0: blez        $a2, L_004123F0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x004123C4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_004123F0;
    }
    // 0x004123C4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_004123C8:
    // 0x004123C8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x004123CC: bnel        $v0, $s2, L_004123E4
    if (ctx->r2 != ctx->r18) {
        // 0x004123D0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004123E4;
    }
    goto skip_0;
    // 0x004123D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x004123D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x004123D8: beql        $v0, $s1, L_004123E0
    if (ctx->r2 == ctx->r17) {
        // 0x004123DC: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_004123E0;
    }
    goto skip_1;
    // 0x004123DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    skip_1:
L_004123E0:
    // 0x004123E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_004123E4:
    // 0x004123E4: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x004123E8: bne         $v0, $zero, L_004123C8
    if (ctx->r2 != 0) {
        // 0x004123EC: addiu       $v1, $v1, 0x4C
        ctx->r3 = ADD32(ctx->r3, 0X4C);
            goto L_004123C8;
    }
    // 0x004123EC: addiu       $v1, $v1, 0x4C
    ctx->r3 = ADD32(ctx->r3, 0X4C);
L_004123F0:
    // 0x004123F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004123F4: beq         $s0, $v0, L_00412414
    if (ctx->r16 == ctx->r2) {
        // 0x004123F8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00412414;
    }
    // 0x004123F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004123FC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00412400: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00412404: sw          $s3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r19;
    // 0x00412408: sw          $s1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r17;
    // 0x0041240C: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    // 0x00412410: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_00412414:
    // 0x00412414: jal         0x002051F4
    // 0x00412418: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002051F4(rdram, ctx);
        goto after_2;
    // 0x00412418: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0041241C:
    // 0x0041241C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00412420: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00412424: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00412428: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0041242C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00412430: jr          $ra
    // 0x00412434: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00412434: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0028C0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028C0B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0028C0B4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0028C0B8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x0028C0BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0028C0C0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x0028C0C4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0028C0C8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0028C0CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0028C0D0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0028C0D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0028C0D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0028C0DC: sdc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X50, ctx->r29);
    // 0x0028C0E0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x0028C0E4: jal         0x0029B170
    // 0x0028C0E8: addiu       $s4, $s5, 0x20
    ctx->r20 = ADD32(ctx->r21, 0X20);
    func_0029B170(rdram, ctx);
        goto after_0;
    // 0x0028C0E8: addiu       $s4, $s5, 0x20
    ctx->r20 = ADD32(ctx->r21, 0X20);
    after_0:
    // 0x0028C0EC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0028C0F0: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x0028C0F4: addiu       $s6, $zero, 0x0
    ctx->r22 = ADD32(0, 0X0);
    // 0x0028C0F8: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x0028C0FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028C100: lwc1        $f21, -0x5E10($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X5E10);
    // 0x0028C104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028C108: lwc1        $f20, -0x5E0C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5E0C);
L_0028C10C:
    // 0x0028C10C: jal         0x0029B170
    // 0x0028C110: nop

    func_0029B170(rdram, ctx);
        goto after_1;
    // 0x0028C110: nop

    after_1:
    // 0x0028C114: sltu        $a2, $v1, $s3
    ctx->r6 = ctx->r3 < ctx->r19 ? 1 : 0;
    // 0x0028C118: subu        $a1, $v1, $s3
    ctx->r5 = SUB32(ctx->r3, ctx->r19);
    // 0x0028C11C: subu        $a0, $v0, $s2
    ctx->r4 = SUB32(ctx->r2, ctx->r18);
    // 0x0028C120: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x0028C124: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x0028C128: srl         $v0, $a1, 26
    ctx->r2 = S32(U32(ctx->r5) >> 26);
    // 0x0028C12C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028C130: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0028C134: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x0028C138: jal         0x002A4650
    // 0x0028C13C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    func_002A4650(rdram, ctx);
        goto after_2;
    // 0x0028C13C: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    after_2:
    // 0x0028C140: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0028C144: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x0028C148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028C14C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0028C150: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028C154: jal         0x002A50E0
    // 0x0028C158: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A50E0(rdram, ctx);
        goto after_3;
    // 0x0028C158: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0028C15C: blez        $v0, L_0028C174
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0028C160: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0028C174;
    }
    // 0x0028C160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028C164: jal         0x002A5130
    // 0x0028C168: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002A5130(rdram, ctx);
        goto after_4;
    // 0x0028C168: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x0028C16C: j           L_0028C19C
    // 0x0028C170: nop

        goto L_0028C19C;
    // 0x0028C170: nop

L_0028C174:
    // 0x0028C174: and         $a0, $s0, $s6
    ctx->r4 = ctx->r16 & ctx->r22;
    // 0x0028C178: and         $a1, $s1, $s7
    ctx->r5 = ctx->r17 & ctx->r23;
    // 0x0028C17C: srl         $v1, $s1, 1
    ctx->r3 = S32(U32(ctx->r17) >> 1);
    // 0x0028C180: sll         $a2, $s0, 31
    ctx->r6 = S32(ctx->r16 << 31);
    // 0x0028C184: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x0028C188: srl         $v0, $s0, 1
    ctx->r2 = S32(U32(ctx->r16) >> 1);
    // 0x0028C18C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0028C190: jal         0x002A5130
    // 0x0028C194: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    func_002A5130(rdram, ctx);
        goto after_5;
    // 0x0028C194: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    after_5:
    // 0x0028C198: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
L_0028C19C:
    // 0x0028C19C: mul.s       $f0, $f0, $f21
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f21.fl);
    // 0x0028C1A0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0028C1A4: nop

    // 0x0028C1A8: bc1t        L_0028C10C
    if (c1cs) {
        // 0x0028C1AC: nop
    
            goto L_0028C10C;
    }
    // 0x0028C1AC: nop

    // 0x0028C1B0: jal         0x00424508
    // 0x0028C1B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_00424508(rdram, ctx);
        goto after_6;
    // 0x0028C1B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x0028C1B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0028C1BC: lw          $a0, 0xA88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA88);
    // 0x0028C1C0: jal         0x0029AC90
    // 0x0028C1C4: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_7;
    // 0x0028C1C4: nop

    after_7:
    // 0x0028C1C8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028C1CC: lw          $a0, 0x2030($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2030);
    // 0x0028C1D0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028C1D4: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x0028C1D8: ori         $v0, $zero, 0xA529
    ctx->r2 = 0 | 0XA529;
    // 0x0028C1DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028C1E0: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028C1E4: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C1E8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0028C1EC: lw          $v1, 0xA88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XA88);
    // 0x0028C1F0: addiu       $v0, $zero, 0x2955
    ctx->r2 = ADD32(0, 0X2955);
    // 0x0028C1F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028C1F8: sh          $v0, 0x7498($at)
    MEM_H(0X7498, ctx->r1) = ctx->r2;
    // 0x0028C1FC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x0028C200: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028C204: sw          $a0, -0xE80($at)
    MEM_W(-0XE80, ctx->r1) = ctx->r4;
    // 0x0028C208: mflo        $t0
    ctx->r8 = lo;
    // 0x0028C20C: blez        $t0, L_0028C248
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0028C210: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_0028C248;
    }
    // 0x0028C210: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0028C214:
    // 0x0028C214: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028C218: lhu         $v0, 0x7498($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7498);
    // 0x0028C21C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0028C220: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028C224: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028C228: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028C22C: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028C230: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C234: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0028C238: mflo        $t0
    ctx->r8 = lo;
    // 0x0028C23C: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0028C240: bne         $v0, $zero, L_0028C214
    if (ctx->r2 != 0) {
        // 0x0028C244: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_0028C214;
    }
    // 0x0028C244: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_0028C248:
    // 0x0028C248: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028C24C: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028C250: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028C254: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028C258: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C25C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x0028C260: lw          $a1, -0xE80($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XE80);
    // 0x0028C264: mflo        $t0
    ctx->r8 = lo;
    // 0x0028C268: blez        $t0, L_0028C2A4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0028C26C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028C2A4;
    }
    // 0x0028C26C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0028C270:
    // 0x0028C270: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028C274: lhu         $v0, 0x7498($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7498);
    // 0x0028C278: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x0028C27C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028C280: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x0028C284: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0028C288: lw          $v0, 0x2034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2034);
    // 0x0028C28C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C290: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028C294: mflo        $t0
    ctx->r8 = lo;
    // 0x0028C298: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0028C29C: bne         $v0, $zero, L_0028C270
    if (ctx->r2 != 0) {
        // 0x0028C2A0: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_0028C270;
    }
    // 0x0028C2A0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_0028C2A4:
    // 0x0028C2A4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C2A8: addiu       $s0, $s0, -0x5EE4
    ctx->r16 = ADD32(ctx->r16, -0X5EE4);
    // 0x0028C2AC: ori         $v0, $zero, 0xF7A9
    ctx->r2 = 0 | 0XF7A9;
    // 0x0028C2B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028C2B4: sh          $v0, -0xE7C($at)
    MEM_H(-0XE7C, ctx->r1) = ctx->r2;
    // 0x0028C2B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C2BC: beq         $v0, $zero, L_0028C2DC
    if (ctx->r2 == 0) {
        // 0x0028C2C0: nop
    
            goto L_0028C2DC;
    }
    // 0x0028C2C0: nop

L_0028C2C4:
    // 0x0028C2C4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C2C8: jal         0x0028B430
    // 0x0028C2CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_8;
    // 0x0028C2CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_8:
    // 0x0028C2D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C2D4: bne         $v0, $zero, L_0028C2C4
    if (ctx->r2 != 0) {
        // 0x0028C2D8: nop
    
            goto L_0028C2C4;
    }
    // 0x0028C2D8: nop

L_0028C2DC:
    // 0x0028C2DC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0028C2E0: addiu       $s0, $s0, -0xE78
    ctx->r16 = ADD32(ctx->r16, -0XE78);
    // 0x0028C2E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C2E8: beq         $v0, $zero, L_0028C308
    if (ctx->r2 == 0) {
        // 0x0028C2EC: nop
    
            goto L_0028C308;
    }
    // 0x0028C2EC: nop

L_0028C2F0:
    // 0x0028C2F0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C2F4: jal         0x0028B430
    // 0x0028C2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_9;
    // 0x0028C2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_9:
    // 0x0028C2FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C300: bne         $v0, $zero, L_0028C2F0
    if (ctx->r2 != 0) {
        // 0x0028C304: nop
    
            goto L_0028C2F0;
    }
    // 0x0028C304: nop

L_0028C308:
    // 0x0028C308: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C30C: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C310: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C314: beq         $v0, $zero, L_0028C334
    if (ctx->r2 == 0) {
        // 0x0028C318: nop
    
            goto L_0028C334;
    }
    // 0x0028C318: nop

L_0028C31C:
    // 0x0028C31C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C320: jal         0x0028B430
    // 0x0028C324: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_10;
    // 0x0028C324: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_10:
    // 0x0028C328: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C32C: bne         $v0, $zero, L_0028C31C
    if (ctx->r2 != 0) {
        // 0x0028C330: nop
    
            goto L_0028C31C;
    }
    // 0x0028C330: nop

L_0028C334:
    // 0x0028C334: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0028C338: addiu       $s0, $s0, -0x12C
    ctx->r16 = ADD32(ctx->r16, -0X12C);
    // 0x0028C33C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C340: beq         $v0, $zero, L_0028C360
    if (ctx->r2 == 0) {
        // 0x0028C344: nop
    
            goto L_0028C360;
    }
    // 0x0028C344: nop

L_0028C348:
    // 0x0028C348: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C34C: jal         0x0028B430
    // 0x0028C350: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_11;
    // 0x0028C350: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x0028C354: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C358: bne         $v0, $zero, L_0028C348
    if (ctx->r2 != 0) {
        // 0x0028C35C: nop
    
            goto L_0028C348;
    }
    // 0x0028C35C: nop

L_0028C360:
    // 0x0028C360: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C364: addiu       $s0, $s0, -0x5ED4
    ctx->r16 = ADD32(ctx->r16, -0X5ED4);
    // 0x0028C368: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C36C: beq         $v0, $zero, L_0028C38C
    if (ctx->r2 == 0) {
        // 0x0028C370: nop
    
            goto L_0028C38C;
    }
    // 0x0028C370: nop

L_0028C374:
    // 0x0028C374: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C378: jal         0x0028B430
    // 0x0028C37C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_12;
    // 0x0028C37C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_12:
    // 0x0028C380: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C384: bne         $v0, $zero, L_0028C374
    if (ctx->r2 != 0) {
        // 0x0028C388: nop
    
            goto L_0028C374;
    }
    // 0x0028C388: nop

L_0028C38C:
    // 0x0028C38C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x0028C390: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
    // 0x0028C394: beq         $v0, $zero, L_0028C43C
    if (ctx->r2 == 0) {
        // 0x0028C398: nop
    
            goto L_0028C43C;
    }
    // 0x0028C398: nop

    // 0x0028C39C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C3A0: addiu       $s0, $s0, -0x5ED0
    ctx->r16 = ADD32(ctx->r16, -0X5ED0);
    // 0x0028C3A4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C3A8: beq         $v0, $zero, L_0028C3C8
    if (ctx->r2 == 0) {
        // 0x0028C3AC: nop
    
            goto L_0028C3C8;
    }
    // 0x0028C3AC: nop

L_0028C3B0:
    // 0x0028C3B0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C3B4: jal         0x0028B430
    // 0x0028C3B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_13;
    // 0x0028C3B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_13:
    // 0x0028C3BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C3C0: bne         $v0, $zero, L_0028C3B0
    if (ctx->r2 != 0) {
        // 0x0028C3C4: nop
    
            goto L_0028C3B0;
    }
    // 0x0028C3C4: nop

L_0028C3C8:
    // 0x0028C3C8: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x0028C3CC: lw          $s0, 0x48($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X48);
    // 0x0028C3D0: bgez        $s0, L_0028C3E4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C3D4: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C3E4;
    }
    // 0x0028C3D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C3D8: jal         0x0028B430
    // 0x0028C3DC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_14;
    // 0x0028C3DC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_14:
    // 0x0028C3E0: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C3E4:
    // 0x0028C3E4: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C3E8: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x0028C3EC: lui         $a2, 0x6666
    ctx->r6 = S32(0X6666 << 16);
    // 0x0028C3F0: ori         $a2, $a2, 0x6667
    ctx->r6 = ctx->r6 | 0X6667;
L_0028C3F4:
    // 0x0028C3F4: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C3F8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C3FC: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C400: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C404: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C408: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C40C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C410: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C414: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C418: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C41C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C420: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C424: bne         $a1, $zero, L_0028C3F4
    if (ctx->r5 != 0) {
        // 0x0028C428: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C3F4;
    }
    // 0x0028C428: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C42C: jal         0x0028CF38
    // 0x0028C430: nop

    func_0028CF38(rdram, ctx);
        goto after_15;
    // 0x0028C430: nop

    after_15:
    // 0x0028C434: j           L_0028C468
    // 0x0028C438: nop

        goto L_0028C468;
    // 0x0028C438: nop

L_0028C43C:
    // 0x0028C43C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C440: addiu       $s0, $s0, -0x5EC4
    ctx->r16 = ADD32(ctx->r16, -0X5EC4);
    // 0x0028C444: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C448: beq         $v0, $zero, L_0028C468
    if (ctx->r2 == 0) {
        // 0x0028C44C: nop
    
            goto L_0028C468;
    }
    // 0x0028C44C: nop

L_0028C450:
    // 0x0028C450: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C454: jal         0x0028B430
    // 0x0028C458: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_16;
    // 0x0028C458: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_16:
    // 0x0028C45C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C460: bne         $v0, $zero, L_0028C450
    if (ctx->r2 != 0) {
        // 0x0028C464: nop
    
            goto L_0028C450;
    }
    // 0x0028C464: nop

L_0028C468:
    // 0x0028C468: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C46C: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C470: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C474: beq         $v0, $zero, L_0028C494
    if (ctx->r2 == 0) {
        // 0x0028C478: nop
    
            goto L_0028C494;
    }
    // 0x0028C478: nop

L_0028C47C:
    // 0x0028C47C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C480: jal         0x0028B430
    // 0x0028C484: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_17;
    // 0x0028C484: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_17:
    // 0x0028C488: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C48C: bne         $v0, $zero, L_0028C47C
    if (ctx->r2 != 0) {
        // 0x0028C490: nop
    
            goto L_0028C47C;
    }
    // 0x0028C490: nop

L_0028C494:
    // 0x0028C494: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x0028C498: lw          $s1, -0x6770($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6770);
    // 0x0028C49C: beq         $s1, $zero, L_0028C768
    if (ctx->r17 == 0) {
        // 0x0028C4A0: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_0028C768;
    }
    // 0x0028C4A0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0028C4A4: lui         $s2, 0x6666
    ctx->r18 = S32(0X6666 << 16);
    // 0x0028C4A8: ori         $s2, $s2, 0x6667
    ctx->r18 = ctx->r18 | 0X6667;
    // 0x0028C4AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0028C4B0: lwc1        $f20, -0x5E08($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5E08);
L_0028C4B4:
    // 0x0028C4B4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C4B8: addiu       $s0, $s0, -0x5EB8
    ctx->r16 = ADD32(ctx->r16, -0X5EB8);
    // 0x0028C4BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C4C0: beq         $v0, $zero, L_0028C4E0
    if (ctx->r2 == 0) {
        // 0x0028C4C4: nop
    
            goto L_0028C4E0;
    }
    // 0x0028C4C4: nop

L_0028C4C8:
    // 0x0028C4C8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C4CC: jal         0x0028B430
    // 0x0028C4D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_18;
    // 0x0028C4D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_18:
    // 0x0028C4D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C4D8: bne         $v0, $zero, L_0028C4C8
    if (ctx->r2 != 0) {
        // 0x0028C4DC: nop
    
            goto L_0028C4C8;
    }
    // 0x0028C4DC: nop

L_0028C4E0:
    // 0x0028C4E0: bgez        $s3, L_0028C4F4
    if (SIGNED(ctx->r19) >= 0) {
        // 0x0028C4E4: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_0028C4F4;
    }
    // 0x0028C4E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0028C4E8: jal         0x0028B430
    // 0x0028C4EC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_19;
    // 0x0028C4EC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_19:
    // 0x0028C4F0: negu        $a1, $s3
    ctx->r5 = SUB32(0, ctx->r19);
L_0028C4F4:
    // 0x0028C4F4: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C4F8: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_0028C4FC:
    // 0x0028C4FC: mult        $a1, $s2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C500: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C504: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C508: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C50C: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C510: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C514: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C518: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C51C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C520: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C524: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C528: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C52C: bne         $a1, $zero, L_0028C4FC
    if (ctx->r5 != 0) {
        // 0x0028C530: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C4FC;
    }
    // 0x0028C530: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C534: jal         0x0028CF38
    // 0x0028C538: nop

    func_0028CF38(rdram, ctx);
        goto after_20;
    // 0x0028C538: nop

    after_20:
    // 0x0028C53C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C540: addiu       $s0, $s0, -0x5EB0
    ctx->r16 = ADD32(ctx->r16, -0X5EB0);
    // 0x0028C544: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C548: beq         $v0, $zero, L_0028C568
    if (ctx->r2 == 0) {
        // 0x0028C54C: nop
    
            goto L_0028C568;
    }
    // 0x0028C54C: nop

L_0028C550:
    // 0x0028C550: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C554: jal         0x0028B430
    // 0x0028C558: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_21;
    // 0x0028C558: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_21:
    // 0x0028C55C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C560: bne         $v0, $zero, L_0028C550
    if (ctx->r2 != 0) {
        // 0x0028C564: nop
    
            goto L_0028C550;
    }
    // 0x0028C564: nop

L_0028C568:
    // 0x0028C568: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C56C: addiu       $s0, $s0, -0x5ED4
    ctx->r16 = ADD32(ctx->r16, -0X5ED4);
    // 0x0028C570: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C574: beq         $v0, $zero, L_0028C594
    if (ctx->r2 == 0) {
        // 0x0028C578: nop
    
            goto L_0028C594;
    }
    // 0x0028C578: nop

L_0028C57C:
    // 0x0028C57C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C580: jal         0x0028B430
    // 0x0028C584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_22;
    // 0x0028C584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_22:
    // 0x0028C588: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C58C: bne         $v0, $zero, L_0028C57C
    if (ctx->r2 != 0) {
        // 0x0028C590: nop
    
            goto L_0028C57C;
    }
    // 0x0028C590: nop

L_0028C594:
    // 0x0028C594: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0028C598: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0028C59C: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0028C5A0: mfc1        $s0, $f1
    ctx->r16 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0028C5A4: bgez        $s0, L_0028C5B8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C5A8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C5B8;
    }
    // 0x0028C5A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C5AC: jal         0x0028B430
    // 0x0028C5B0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_23;
    // 0x0028C5B0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_23:
    // 0x0028C5B4: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C5B8:
    // 0x0028C5B8: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C5BC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_0028C5C0:
    // 0x0028C5C0: mult        $a1, $s2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C5C4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C5C8: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C5CC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C5D0: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C5D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C5D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C5DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C5E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C5E4: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C5E8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C5EC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C5F0: bne         $a1, $zero, L_0028C5C0
    if (ctx->r5 != 0) {
        // 0x0028C5F4: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C5C0;
    }
    // 0x0028C5F4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C5F8: jal         0x0028CF38
    // 0x0028C5FC: nop

    func_0028CF38(rdram, ctx);
        goto after_24;
    // 0x0028C5FC: nop

    after_24:
    // 0x0028C600: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C604: addiu       $s0, $s0, -0x5ED4
    ctx->r16 = ADD32(ctx->r16, -0X5ED4);
    // 0x0028C608: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C60C: beq         $v0, $zero, L_0028C62C
    if (ctx->r2 == 0) {
        // 0x0028C610: nop
    
            goto L_0028C62C;
    }
    // 0x0028C610: nop

L_0028C614:
    // 0x0028C614: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C618: jal         0x0028B430
    // 0x0028C61C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_25;
    // 0x0028C61C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_25:
    // 0x0028C620: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C624: bne         $v0, $zero, L_0028C614
    if (ctx->r2 != 0) {
        // 0x0028C628: nop
    
            goto L_0028C614;
    }
    // 0x0028C628: nop

L_0028C62C:
    // 0x0028C62C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0028C630: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0028C634: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0028C638: mfc1        $s0, $f1
    ctx->r16 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0028C63C: bgez        $s0, L_0028C650
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C640: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C650;
    }
    // 0x0028C640: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C644: jal         0x0028B430
    // 0x0028C648: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_26;
    // 0x0028C648: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_26:
    // 0x0028C64C: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C650:
    // 0x0028C650: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C654: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_0028C658:
    // 0x0028C658: mult        $a1, $s2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C65C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C660: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C664: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C668: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C66C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C670: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C674: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C678: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C67C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C680: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C684: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C688: bne         $a1, $zero, L_0028C658
    if (ctx->r5 != 0) {
        // 0x0028C68C: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C658;
    }
    // 0x0028C68C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C690: jal         0x0028CF38
    // 0x0028C694: nop

    func_0028CF38(rdram, ctx);
        goto after_27;
    // 0x0028C694: nop

    after_27:
    // 0x0028C698: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C69C: addiu       $s0, $s0, -0x5ED4
    ctx->r16 = ADD32(ctx->r16, -0X5ED4);
    // 0x0028C6A0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C6A4: beq         $v0, $zero, L_0028C6C4
    if (ctx->r2 == 0) {
        // 0x0028C6A8: nop
    
            goto L_0028C6C4;
    }
    // 0x0028C6A8: nop

L_0028C6AC:
    // 0x0028C6AC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C6B0: jal         0x0028B430
    // 0x0028C6B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_28;
    // 0x0028C6B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_28:
    // 0x0028C6B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C6BC: bne         $v0, $zero, L_0028C6AC
    if (ctx->r2 != 0) {
        // 0x0028C6C0: nop
    
            goto L_0028C6AC;
    }
    // 0x0028C6C0: nop

L_0028C6C4:
    // 0x0028C6C4: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0028C6C8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x0028C6CC: trunc.w.s   $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(1 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0028C6D0: mfc1        $s0, $f1
    ctx->r16 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x0028C6D4: bgez        $s0, L_0028C6E8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C6D8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C6E8;
    }
    // 0x0028C6D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C6DC: jal         0x0028B430
    // 0x0028C6E0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_29;
    // 0x0028C6E0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_29:
    // 0x0028C6E4: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C6E8:
    // 0x0028C6E8: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C6EC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_0028C6F0:
    // 0x0028C6F0: mult        $a1, $s2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C6F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C6F8: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C6FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C700: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C704: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C708: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C70C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C710: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C714: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C718: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C71C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C720: bne         $a1, $zero, L_0028C6F0
    if (ctx->r5 != 0) {
        // 0x0028C724: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C6F0;
    }
    // 0x0028C724: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C728: jal         0x0028CF38
    // 0x0028C72C: nop

    func_0028CF38(rdram, ctx);
        goto after_30;
    // 0x0028C72C: nop

    after_30:
    // 0x0028C730: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C734: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C738: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C73C: beq         $v0, $zero, L_0028C75C
    if (ctx->r2 == 0) {
        // 0x0028C740: nop
    
            goto L_0028C75C;
    }
    // 0x0028C740: nop

L_0028C744:
    // 0x0028C744: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C748: jal         0x0028B430
    // 0x0028C74C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_31;
    // 0x0028C74C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_31:
    // 0x0028C750: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C754: bne         $v0, $zero, L_0028C744
    if (ctx->r2 != 0) {
        // 0x0028C758: nop
    
            goto L_0028C744;
    }
    // 0x0028C758: nop

L_0028C75C:
    // 0x0028C75C: lw          $s1, 0x1320($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1320);
    // 0x0028C760: bne         $s1, $zero, L_0028C4B4
    if (ctx->r17 != 0) {
        // 0x0028C764: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_0028C4B4;
    }
    // 0x0028C764: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_0028C768:
    // 0x0028C768: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C76C: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C770: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C774: beq         $v0, $zero, L_0028C794
    if (ctx->r2 == 0) {
        // 0x0028C778: nop
    
            goto L_0028C794;
    }
    // 0x0028C778: nop

L_0028C77C:
    // 0x0028C77C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C780: jal         0x0028B430
    // 0x0028C784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_32;
    // 0x0028C784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_32:
    // 0x0028C788: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C78C: bne         $v0, $zero, L_0028C77C
    if (ctx->r2 != 0) {
        // 0x0028C790: nop
    
            goto L_0028C77C;
    }
    // 0x0028C790: nop

L_0028C794:
    // 0x0028C794: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028C798: lw          $v0, 0x25E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X25E4);
    // 0x0028C79C: beq         $v0, $zero, L_0028CA1C
    if (ctx->r2 == 0) {
        // 0x0028C7A0: nop
    
            goto L_0028CA1C;
    }
    // 0x0028C7A0: nop

    // 0x0028C7A4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C7A8: addiu       $s0, $s0, -0x5EA8
    ctx->r16 = ADD32(ctx->r16, -0X5EA8);
    // 0x0028C7AC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C7B0: beq         $v0, $zero, L_0028C7D0
    if (ctx->r2 == 0) {
        // 0x0028C7B4: nop
    
            goto L_0028C7D0;
    }
    // 0x0028C7B4: nop

L_0028C7B8:
    // 0x0028C7B8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C7BC: jal         0x0028B430
    // 0x0028C7C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_33;
    // 0x0028C7C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_33:
    // 0x0028C7C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C7C8: bne         $v0, $zero, L_0028C7B8
    if (ctx->r2 != 0) {
        // 0x0028C7CC: nop
    
            goto L_0028C7B8;
    }
    // 0x0028C7CC: nop

L_0028C7D0:
    // 0x0028C7D0: lw          $s0, 0x14($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X14);
    // 0x0028C7D4: bgez        $s0, L_0028C7E8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C7D8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C7E8;
    }
    // 0x0028C7D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C7DC: jal         0x0028B430
    // 0x0028C7E0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_34;
    // 0x0028C7E0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_34:
    // 0x0028C7E4: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C7E8:
    // 0x0028C7E8: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C7EC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x0028C7F0: lui         $a2, 0x6666
    ctx->r6 = S32(0X6666 << 16);
    // 0x0028C7F4: ori         $a2, $a2, 0x6667
    ctx->r6 = ctx->r6 | 0X6667;
L_0028C7F8:
    // 0x0028C7F8: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C7FC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C800: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C804: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C808: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C80C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C810: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C814: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C818: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C81C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C820: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C824: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C828: bne         $a1, $zero, L_0028C7F8
    if (ctx->r5 != 0) {
        // 0x0028C82C: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C7F8;
    }
    // 0x0028C82C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C830: jal         0x0028CF38
    // 0x0028C834: nop

    func_0028CF38(rdram, ctx);
        goto after_35;
    // 0x0028C834: nop

    after_35:
    // 0x0028C838: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C83C: addiu       $s0, $s0, -0x5E88
    ctx->r16 = ADD32(ctx->r16, -0X5E88);
    // 0x0028C840: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C844: beq         $v0, $zero, L_0028C864
    if (ctx->r2 == 0) {
        // 0x0028C848: nop
    
            goto L_0028C864;
    }
    // 0x0028C848: nop

L_0028C84C:
    // 0x0028C84C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C850: jal         0x0028B430
    // 0x0028C854: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_36;
    // 0x0028C854: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_36:
    // 0x0028C858: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C85C: bne         $v0, $zero, L_0028C84C
    if (ctx->r2 != 0) {
        // 0x0028C860: nop
    
            goto L_0028C84C;
    }
    // 0x0028C860: nop

L_0028C864:
    // 0x0028C864: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C868: lw          $s0, 0x25E4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X25E4);
    // 0x0028C86C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C870: beq         $v0, $zero, L_0028C890
    if (ctx->r2 == 0) {
        // 0x0028C874: nop
    
            goto L_0028C890;
    }
    // 0x0028C874: nop

L_0028C878:
    // 0x0028C878: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C87C: jal         0x0028B430
    // 0x0028C880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_37;
    // 0x0028C880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_37:
    // 0x0028C884: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C888: bne         $v0, $zero, L_0028C878
    if (ctx->r2 != 0) {
        // 0x0028C88C: nop
    
            goto L_0028C878;
    }
    // 0x0028C88C: nop

L_0028C890:
    // 0x0028C890: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C894: addiu       $s0, $s0, -0x5E80
    ctx->r16 = ADD32(ctx->r16, -0X5E80);
    // 0x0028C898: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C89C: beq         $v0, $zero, L_0028C8BC
    if (ctx->r2 == 0) {
        // 0x0028C8A0: nop
    
            goto L_0028C8BC;
    }
    // 0x0028C8A0: nop

L_0028C8A4:
    // 0x0028C8A4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C8A8: jal         0x0028B430
    // 0x0028C8AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_38;
    // 0x0028C8AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_38:
    // 0x0028C8B0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C8B4: bne         $v0, $zero, L_0028C8A4
    if (ctx->r2 != 0) {
        // 0x0028C8B8: nop
    
            goto L_0028C8A4;
    }
    // 0x0028C8B8: nop

L_0028C8BC:
    // 0x0028C8BC: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0028C8C0: lw          $s0, 0x1FF0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1FF0);
    // 0x0028C8C4: bgez        $s0, L_0028C8D8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028C8C8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028C8D8;
    }
    // 0x0028C8C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028C8CC: jal         0x0028B430
    // 0x0028C8D0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_39;
    // 0x0028C8D0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_39:
    // 0x0028C8D4: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028C8D8:
    // 0x0028C8D8: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028C8DC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x0028C8E0: lui         $a2, 0x6666
    ctx->r6 = S32(0X6666 << 16);
    // 0x0028C8E4: ori         $a2, $a2, 0x6667
    ctx->r6 = ctx->r6 | 0X6667;
L_0028C8E8:
    // 0x0028C8E8: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028C8EC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028C8F0: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028C8F4: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028C8F8: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028C8FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028C900: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028C904: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028C908: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028C90C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028C910: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028C914: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028C918: bne         $a1, $zero, L_0028C8E8
    if (ctx->r5 != 0) {
        // 0x0028C91C: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028C8E8;
    }
    // 0x0028C91C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028C920: jal         0x0028CF38
    // 0x0028C924: nop

    func_0028CF38(rdram, ctx);
        goto after_40;
    // 0x0028C924: nop

    after_40:
    // 0x0028C928: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C92C: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C930: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C934: beq         $v0, $zero, L_0028C954
    if (ctx->r2 == 0) {
        // 0x0028C938: nop
    
            goto L_0028C954;
    }
    // 0x0028C938: nop

L_0028C93C:
    // 0x0028C93C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C940: jal         0x0028B430
    // 0x0028C944: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_41;
    // 0x0028C944: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_41:
    // 0x0028C948: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C94C: bne         $v0, $zero, L_0028C93C
    if (ctx->r2 != 0) {
        // 0x0028C950: nop
    
            goto L_0028C93C;
    }
    // 0x0028C950: nop

L_0028C954:
    // 0x0028C954: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0028C958: lw          $v0, 0x1FF4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1FF4);
    // 0x0028C95C: beq         $v0, $zero, L_0028C9E8
    if (ctx->r2 == 0) {
        // 0x0028C960: nop
    
            goto L_0028C9E8;
    }
    // 0x0028C960: nop

    // 0x0028C964: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C968: addiu       $s0, $s0, -0x5E74
    ctx->r16 = ADD32(ctx->r16, -0X5E74);
    // 0x0028C96C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C970: beq         $v0, $zero, L_0028C990
    if (ctx->r2 == 0) {
        // 0x0028C974: nop
    
            goto L_0028C990;
    }
    // 0x0028C974: nop

L_0028C978:
    // 0x0028C978: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C97C: jal         0x0028B430
    // 0x0028C980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_42;
    // 0x0028C980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_42:
    // 0x0028C984: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C988: bne         $v0, $zero, L_0028C978
    if (ctx->r2 != 0) {
        // 0x0028C98C: nop
    
            goto L_0028C978;
    }
    // 0x0028C98C: nop

L_0028C990:
    // 0x0028C990: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x0028C994: lw          $s0, 0x1FF4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1FF4);
    // 0x0028C998: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C99C: beq         $v0, $zero, L_0028C9BC
    if (ctx->r2 == 0) {
        // 0x0028C9A0: nop
    
            goto L_0028C9BC;
    }
    // 0x0028C9A0: nop

L_0028C9A4:
    // 0x0028C9A4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9A8: jal         0x0028B430
    // 0x0028C9AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_43;
    // 0x0028C9AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_43:
    // 0x0028C9B0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9B4: bne         $v0, $zero, L_0028C9A4
    if (ctx->r2 != 0) {
        // 0x0028C9B8: nop
    
            goto L_0028C9A4;
    }
    // 0x0028C9B8: nop

L_0028C9BC:
    // 0x0028C9BC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C9C0: addiu       $s0, $s0, -0x5E70
    ctx->r16 = ADD32(ctx->r16, -0X5E70);
    // 0x0028C9C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9C8: beq         $v0, $zero, L_0028C9E8
    if (ctx->r2 == 0) {
        // 0x0028C9CC: nop
    
            goto L_0028C9E8;
    }
    // 0x0028C9CC: nop

L_0028C9D0:
    // 0x0028C9D0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9D4: jal         0x0028B430
    // 0x0028C9D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_44;
    // 0x0028C9D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_44:
    // 0x0028C9DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9E0: bne         $v0, $zero, L_0028C9D0
    if (ctx->r2 != 0) {
        // 0x0028C9E4: nop
    
            goto L_0028C9D0;
    }
    // 0x0028C9E4: nop

L_0028C9E8:
    // 0x0028C9E8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028C9EC: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028C9F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028C9F4: beq         $v0, $zero, L_0028CB04
    if (ctx->r2 == 0) {
        // 0x0028C9F8: nop
    
            goto L_0028CB04;
    }
    // 0x0028C9F8: nop

L_0028C9FC:
    // 0x0028C9FC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CA00: jal         0x0028B430
    // 0x0028CA04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_45;
    // 0x0028CA04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_45:
    // 0x0028CA08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CA0C: beq         $v0, $zero, L_0028CAF8
    if (ctx->r2 == 0) {
        // 0x0028CA10: nop
    
            goto L_0028CAF8;
    }
    // 0x0028CA10: nop

    // 0x0028CA14: j           L_0028C9FC
    // 0x0028CA18: nop

        goto L_0028C9FC;
    // 0x0028CA18: nop

L_0028CA1C:
    // 0x0028CA1C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028CA20: addiu       $s0, $s0, -0x5E68
    ctx->r16 = ADD32(ctx->r16, -0X5E68);
    // 0x0028CA24: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CA28: beq         $v0, $zero, L_0028CA48
    if (ctx->r2 == 0) {
        // 0x0028CA2C: nop
    
            goto L_0028CA48;
    }
    // 0x0028CA2C: nop

L_0028CA30:
    // 0x0028CA30: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CA34: jal         0x0028B430
    // 0x0028CA38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_46;
    // 0x0028CA38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_46:
    // 0x0028CA3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CA40: bne         $v0, $zero, L_0028CA30
    if (ctx->r2 != 0) {
        // 0x0028CA44: nop
    
            goto L_0028CA30;
    }
    // 0x0028CA44: nop

L_0028CA48:
    // 0x0028CA48: lw          $s0, 0x14($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X14);
    // 0x0028CA4C: bgez        $s0, L_0028CA60
    if (SIGNED(ctx->r16) >= 0) {
        // 0x0028CA50: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0028CA60;
    }
    // 0x0028CA50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028CA54: jal         0x0028B430
    // 0x0028CA58: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_0028B430(rdram, ctx);
        goto after_47;
    // 0x0028CA58: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_47:
    // 0x0028CA5C: negu        $a1, $s0
    ctx->r5 = SUB32(0, ctx->r16);
L_0028CA60:
    // 0x0028CA60: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    // 0x0028CA64: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x0028CA68: lui         $a2, 0x6666
    ctx->r6 = S32(0X6666 << 16);
    // 0x0028CA6C: ori         $a2, $a2, 0x6667
    ctx->r6 = ctx->r6 | 0X6667;
L_0028CA70:
    // 0x0028CA70: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0028CA74: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x0028CA78: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x0028CA7C: mfhi        $t0
    ctx->r8 = hi;
    // 0x0028CA80: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0028CA84: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0028CA88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0028CA8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0028CA90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0028CA94: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x0028CA98: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x0028CA9C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x0028CAA0: bne         $a1, $zero, L_0028CA70
    if (ctx->r5 != 0) {
        // 0x0028CAA4: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_0028CA70;
    }
    // 0x0028CAA4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x0028CAA8: jal         0x0028CF38
    // 0x0028CAAC: nop

    func_0028CF38(rdram, ctx);
        goto after_48;
    // 0x0028CAAC: nop

    after_48:
    // 0x0028CAB0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028CAB4: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028CAB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CABC: beq         $v0, $zero, L_0028CADC
    if (ctx->r2 == 0) {
        // 0x0028CAC0: nop
    
            goto L_0028CADC;
    }
    // 0x0028CAC0: nop

L_0028CAC4:
    // 0x0028CAC4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CAC8: jal         0x0028B430
    // 0x0028CACC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_49;
    // 0x0028CACC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_49:
    // 0x0028CAD0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CAD4: bne         $v0, $zero, L_0028CAC4
    if (ctx->r2 != 0) {
        // 0x0028CAD8: nop
    
            goto L_0028CAC4;
    }
    // 0x0028CAD8: nop

L_0028CADC:
    // 0x0028CADC: lw          $a0, 0x100($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X100);
    // 0x0028CAE0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x0028CAE4: addiu       $a1, $a1, -0x5E54
    ctx->r5 = ADD32(ctx->r5, -0X5E54);
    // 0x0028CAE8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CAEC: addiu       $a2, $a2, 0x749C
    ctx->r6 = ADD32(ctx->r6, 0X749C);
    // 0x0028CAF0: jal         0x0028B614
    // 0x0028CAF4: nop

    func_0028B614(rdram, ctx);
        goto after_50;
    // 0x0028CAF4: nop

    after_50:
L_0028CAF8:
    // 0x0028CAF8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x0028CAFC: addiu       $s0, $s0, -0x5F10
    ctx->r16 = ADD32(ctx->r16, -0X5F10);
    // 0x0028CB00: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
L_0028CB04:
    // 0x0028CB04: beq         $v0, $zero, L_0028CB24
    if (ctx->r2 == 0) {
        // 0x0028CB08: nop
    
            goto L_0028CB24;
    }
    // 0x0028CB08: nop

L_0028CB0C:
    // 0x0028CB0C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CB10: jal         0x0028B430
    // 0x0028CB14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_0028B430(rdram, ctx);
        goto after_51;
    // 0x0028CB14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_51:
    // 0x0028CB18: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x0028CB1C: bne         $v0, $zero, L_0028CB0C
    if (ctx->r2 != 0) {
        // 0x0028CB20: nop
    
            goto L_0028CB0C;
    }
    // 0x0028CB20: nop

L_0028CB24:
    // 0x0028CB24: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CB28: addiu       $a0, $a0, -0x5E4C
    ctx->r4 = ADD32(ctx->r4, -0X5E4C);
    // 0x0028CB2C: lw          $a1, 0xFC($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XFC);
    // 0x0028CB30: lw          $a3, 0xD4($s4)
    ctx->r7 = MEM_W(ctx->r20, 0XD4);
    // 0x0028CB34: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CB38: addiu       $a2, $a2, -0x5E48
    ctx->r6 = ADD32(ctx->r6, -0X5E48);
    // 0x0028CB3C: jal         0x0028B7C0
    // 0x0028CB40: nop

    func_0028B7C0(rdram, ctx);
        goto after_52;
    // 0x0028CB40: nop

    after_52:
    // 0x0028CB44: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CB48: addiu       $a0, $a0, -0x5E44
    ctx->r4 = ADD32(ctx->r4, -0X5E44);
    // 0x0028CB4C: lw          $a1, 0xE4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XE4);
    // 0x0028CB50: lw          $a3, 0x104($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X104);
    // 0x0028CB54: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CB58: addiu       $a2, $a2, -0x5E40
    ctx->r6 = ADD32(ctx->r6, -0X5E40);
    // 0x0028CB5C: jal         0x0028B7C0
    // 0x0028CB60: nop

    func_0028B7C0(rdram, ctx);
        goto after_53;
    // 0x0028CB60: nop

    after_53:
    // 0x0028CB64: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CB68: addiu       $a0, $a0, -0x5E34
    ctx->r4 = ADD32(ctx->r4, -0X5E34);
    // 0x0028CB6C: lw          $a1, 0x1C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X1C);
    // 0x0028CB70: lw          $a3, 0x24($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X24);
    // 0x0028CB74: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CB78: addiu       $a2, $a2, -0x5E30
    ctx->r6 = ADD32(ctx->r6, -0X5E30);
    // 0x0028CB7C: jal         0x0028B7C0
    // 0x0028CB80: nop

    func_0028B7C0(rdram, ctx);
        goto after_54;
    // 0x0028CB80: nop

    after_54:
    // 0x0028CB84: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CB88: addiu       $a0, $a0, -0x5E2C
    ctx->r4 = ADD32(ctx->r4, -0X5E2C);
    // 0x0028CB8C: lw          $a1, 0x2C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X2C);
    // 0x0028CB90: lw          $a3, 0x34($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X34);
    // 0x0028CB94: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CB98: addiu       $a2, $a2, -0x5E28
    ctx->r6 = ADD32(ctx->r6, -0X5E28);
    // 0x0028CB9C: jal         0x0028B7C0
    // 0x0028CBA0: nop

    func_0028B7C0(rdram, ctx);
        goto after_55;
    // 0x0028CBA0: nop

    after_55:
    // 0x0028CBA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CBA8: addiu       $a0, $a0, -0x5E24
    ctx->r4 = ADD32(ctx->r4, -0X5E24);
    // 0x0028CBAC: lw          $a1, 0xC($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XC);
    // 0x0028CBB0: lw          $a3, 0x14($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X14);
    // 0x0028CBB4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CBB8: addiu       $a2, $a2, -0x5E20
    ctx->r6 = ADD32(ctx->r6, -0X5E20);
    // 0x0028CBBC: jal         0x0028B7C0
    // 0x0028CBC0: nop

    func_0028B7C0(rdram, ctx);
        goto after_56;
    // 0x0028CBC0: nop

    after_56:
    // 0x0028CBC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028CBC8: addiu       $a0, $a0, -0x5E1C
    ctx->r4 = ADD32(ctx->r4, -0X5E1C);
    // 0x0028CBCC: lw          $a1, 0xF8($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XF8);
    // 0x0028CBD0: lw          $a3, 0x10C($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X10C);
    // 0x0028CBD4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0028CBD8: addiu       $a2, $a2, -0x5E18
    ctx->r6 = ADD32(ctx->r6, -0X5E18);
    // 0x0028CBDC: jal         0x0028B7C0
    // 0x0028CBE0: nop

    func_0028B7C0(rdram, ctx);
        goto after_57;
    // 0x0028CBE0: nop

    after_57:
    // 0x0028CBE4: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x0028CBE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028CBEC: beq         $v1, $v0, L_0028CC54
    if (ctx->r3 == ctx->r2) {
        // 0x0028CBF0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_0028CC54;
    }
    // 0x0028CBF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x0028CBF4: beq         $v0, $zero, L_0028CC0C
    if (ctx->r2 == 0) {
        // 0x0028CBF8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_0028CC0C;
    }
    // 0x0028CBF8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028CBFC: beq         $v1, $zero, L_0028CC24
    if (ctx->r3 == 0) {
        // 0x0028CC00: nop
    
            goto L_0028CC24;
    }
    // 0x0028CC00: nop

    // 0x0028CC04: j           L_0028CC6C
    // 0x0028CC08: nop

        goto L_0028CC6C;
    // 0x0028CC08: nop

L_0028CC0C:
    // 0x0028CC0C: beq         $v1, $v0, L_0028CC44
    if (ctx->r3 == ctx->r2) {
        // 0x0028CC10: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_0028CC44;
    }
    // 0x0028CC10: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x0028CC14: beq         $v1, $v0, L_0028CC34
    if (ctx->r3 == ctx->r2) {
        // 0x0028CC18: nop
    
            goto L_0028CC34;
    }
    // 0x0028CC18: nop

    // 0x0028CC1C: j           L_0028CC6C
    // 0x0028CC20: nop

        goto L_0028CC6C;
    // 0x0028CC20: nop

L_0028CC24:
    // 0x0028CC24: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028CC28: addiu       $a0, $a0, 0x7C00
    ctx->r4 = ADD32(ctx->r4, 0X7C00);
    // 0x0028CC2C: j           L_0028CC60
    // 0x0028CC30: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_0028CC60;
    // 0x0028CC30: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_0028CC34:
    // 0x0028CC34: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028CC38: addiu       $a0, $a0, 0x5400
    ctx->r4 = ADD32(ctx->r4, 0X5400);
    // 0x0028CC3C: j           L_0028CC60
    // 0x0028CC40: addiu       $a1, $zero, 0x2800
    ctx->r5 = ADD32(0, 0X2800);
        goto L_0028CC60;
    // 0x0028CC40: addiu       $a1, $zero, 0x2800
    ctx->r5 = ADD32(0, 0X2800);
L_0028CC44:
    // 0x0028CC44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028CC48: addiu       $a0, $a0, -0x380
    ctx->r4 = ADD32(ctx->r4, -0X380);
    // 0x0028CC4C: j           L_0028CC60
    // 0x0028CC50: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
        goto L_0028CC60;
    // 0x0028CC50: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
L_0028CC54:
    // 0x0028CC54: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0028CC58: addiu       $a0, $a0, 0x7C80
    ctx->r4 = ADD32(ctx->r4, 0X7C80);
    // 0x0028CC5C: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
L_0028CC60:
    // 0x0028CC60: lbu         $a3, 0x17($s5)
    ctx->r7 = MEM_BU(ctx->r21, 0X17);
    // 0x0028CC64: jal         0x0028BDFC
    // 0x0028CC68: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_0028BDFC(rdram, ctx);
        goto after_58;
    // 0x0028CC68: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_58:
L_0028CC6C:
    // 0x0028CC6C: jal         0x0029E3B0
    // 0x0028CC70: nop

    func_0029E3B0(rdram, ctx);
        goto after_59;
    // 0x0028CC70: nop

    after_59:
L_0028CC74:
    // 0x0028CC74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0028CC78: lw          $v0, 0x75EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X75EC);
    // 0x0028CC7C: beq         $v0, $zero, L_0028CC74
    if (ctx->r2 == 0) {
        // 0x0028CC80: nop
    
            goto L_0028CC74;
    }
    // 0x0028CC80: nop

    // 0x0028CC84: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0028CC88: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x0028CC8C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0028CC90: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x0028CC94: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0028CC98: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0028CC9C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0028CCA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0028CCA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0028CCA8: ldc1        $f21, 0x50($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X50);
    // 0x0028CCAC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x0028CCB0: jr          $ra
    // 0x0028CCB4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x0028CCB4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_0026D240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D240: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D244: bne         $v0, $zero, L_0026D260
    if (ctx->r2 != 0) {
        // 0x0026D248: nop
    
            goto L_0026D260;
    }
    // 0x0026D248: nop

    // 0x0026D24C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x0026D250: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x0026D254: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0026D258: j           L_0026D278
    // 0x0026D25C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
        goto L_0026D278;
    // 0x0026D25C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
L_0026D260:
    // 0x0026D260: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0026D264: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0026D268: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x0026D26C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x0026D270: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x0026D274: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_0026D278:
    // 0x0026D278: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0026D27C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0026D280: jr          $ra
    // 0x0026D284: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x0026D284: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_004270E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004270E8: bne         $a0, $zero, L_004270F8
    if (ctx->r4 != 0) {
            // 0x004270EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    func_004270F8(rdram, ctx);
    return;
    }
    // 0x004270EC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x004270F0: jr          $ra
    // 0x004270F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004270F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002A157C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A157C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002A1580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002A1584: nor         $s0, $zero, $a0
    ctx->r16 = ~(0 | ctx->r4);
    // 0x002A1588: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x002A158C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x002A1590: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x002A1594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x002A1598: jal         0x002A1384
    // 0x002A159C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    func_002A1384(rdram, ctx);
        goto after_0;
    // 0x002A159C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    after_0:
    // 0x002A15A0: srlv        $v0, $v0, $s0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r16 & 31));
    // 0x002A15A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x002A15A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002A15AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x002A15B0: jr          $ra
    // 0x002A15B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002A15B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00418454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418454: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00418458: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x0041845C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00418460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00418468: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041846C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00418470: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00418474: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00418478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041847C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00418480: lb          $v0, 0x25($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X25);
    // 0x00418484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00418488: jal         0x0041648C
    // 0x0041848C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041848C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00418490: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x00418494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00418498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041849C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004184A0: jr          $ra
    // 0x004184A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x004184A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0025F7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025F7B0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0025F7B4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0025F7B8: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0025F7BC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0025F7C0: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0025F7C4: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025F7C8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025F7CC: bne         $v1, $v0, L_0025F7DC
    if (ctx->r3 != ctx->r2) {
        // 0x0025F7D0: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_0025F7DC;
    }
    // 0x0025F7D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0025F7D4: jal         0x0025E9BC
    // 0x0025F7D8: nop

    func_0025E9BC(rdram, ctx);
        goto after_0;
    // 0x0025F7D8: nop

    after_0:
L_0025F7DC:
    // 0x0025F7DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F7E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025F7E4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0025F7E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0025F7EC: jal         0x00246108
    // 0x0025F7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x0025F7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x0025F7F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0025F7F8: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0025F7FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F800: lwc1        $f0, 0x7914($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7914);
    // 0x0025F804: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0025F808: lwc1        $f0, 0x64($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X64);
    // 0x0025F80C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F810: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F814: lwc1        $f12, 0x7918($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7918);
    // 0x0025F818: mul.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x0025F81C: jal         0x002982F0
    // 0x0025F820: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x0025F820: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x0025F824: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F828: lwc1        $f1, 0x791C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X791C);
    // 0x0025F82C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0025F830: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F834: lwc1        $f1, 0x7920($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7920);
    // 0x0025F838: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F83C: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0025F840: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x0025F844: lui         $a2, 0x4123
    ctx->r6 = S32(0X4123 << 16);
    // 0x0025F848: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x0025F84C: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x0025F850: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0025F854: jal         0x00211774
    // 0x0025F858: nop

    func_00211774(rdram, ctx);
        goto after_3;
    // 0x0025F858: nop

    after_3:
    // 0x0025F85C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F860: lwc1        $f1, 0x7924($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7924);
    // 0x0025F864: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0025F868: nop

    // 0x0025F86C: bc1t        L_0025F88C
    if (c1cs) {
        // 0x0025F870: swc1        $f0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
            goto L_0025F88C;
    }
    // 0x0025F870: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0025F874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0025F878: lwc1        $f1, 0x7928($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7928);
    // 0x0025F87C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0025F880: nop

    // 0x0025F884: bc1f        L_0025F890
    if (!c1cs) {
        // 0x0025F888: nop
    
            goto L_0025F890;
    }
    // 0x0025F888: nop

L_0025F88C:
    // 0x0025F88C: swc1        $f1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
L_0025F890:
    // 0x0025F890: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0025F894: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x0025F898: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0025F89C: lwc1        $f1, 0x6C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X6C);
    // 0x0025F8A0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x0025F8A4: nop

    // 0x0025F8A8: bc1f        L_0025F8D0
    if (!c1cs) {
        // 0x0025F8AC: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_0025F8D0;
    }
    // 0x0025F8AC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x0025F8B0: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x0025F8B4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0025F8B8: lb          $v1, 0x34($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X34);
    // 0x0025F8BC: beq         $v1, $v0, L_0025F8D0
    if (ctx->r3 == ctx->r2) {
        // 0x0025F8C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025F8D0;
    }
    // 0x0025F8C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0025F8C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0025F8C8: jal         0x00243414
    // 0x0025F8CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00243414(rdram, ctx);
        goto after_4;
    // 0x0025F8CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_4:
L_0025F8D0:
    // 0x0025F8D0: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0025F8D4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0025F8D8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0025F8DC: jr          $ra
    // 0x0025F8E0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0025F8E0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00447080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447080: lw          $v0, 0x50C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X50C);
    // 0x00447084: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00447088: jr          $ra
    // 0x0044708C: sw          $v0, 0x50C($a1)
    MEM_W(0X50C, ctx->r5) = ctx->r2;
    return;
    // 0x0044708C: sw          $v0, 0x50C($a1)
    MEM_W(0X50C, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_00469250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00469250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00469254: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00469258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0046925C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00469260: jal         0x00285410
    // 0x00469264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_00285410(rdram, ctx);
        goto after_0;
    // 0x00469264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x00469268: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0046926C: addiu       $a0, $a0, 0x5A50
    ctx->r4 = ADD32(ctx->r4, 0X5A50);
    // 0x00469270: jal         0x0026EDA8
    // 0x00469274: nop

    func_0026EDA8(rdram, ctx);
        goto after_1;
    // 0x00469274: nop

    after_1:
    // 0x00469278: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0046927C: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00469280: jal         0x0025359C
    // 0x00469284: nop

    func_0025359C(rdram, ctx);
        goto after_2;
    // 0x00469284: nop

    after_2:
    // 0x00469288: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0046928C: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x00469290: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x00469294: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x00469298: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x0046929C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004692A0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004692A4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004692A8: sb          $v0, 0x3FE1($at)
    MEM_B(0X3FE1, ctx->r1) = ctx->r2;
    // 0x004692AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004692B0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004692B4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x004692B8: sw          $v0, 0x3FDC($at)
    MEM_W(0X3FDC, ctx->r1) = ctx->r2;
    // 0x004692BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004692C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004692C4: jr          $ra
    // 0x004692C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004692C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00264814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264818: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026481C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00264820: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x00264824: ori         $v0, $v0, 0x2100
    ctx->r2 = ctx->r2 | 0X2100;
    // 0x00264828: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0026482C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264830: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00264834: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00264838: jal         0x00243414
    // 0x0026483C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0026483C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    after_0:
    // 0x00264840: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00264844: jr          $ra
    // 0x00264848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00264848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00284350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284350: jr          $ra
    // 0x00284354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00284354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_004645D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004645D0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x004645D4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x004645D8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x004645DC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x004645E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x004645E4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x004645E8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x004645EC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x004645F0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x004645F4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x004645F8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x004645FC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00464600: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00464604: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00464608: jal         0x00200B00
    // 0x0046460C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x0046460C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x00464610: beq         $v0, $zero, L_00464930
    if (ctx->r2 == 0) {
        // 0x00464614: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_00464930;
    }
    // 0x00464614: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00464618: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x0046461C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00464620: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00464624: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00464628: jal         0x002017E8
    // 0x0046462C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017E8(rdram, ctx);
        goto after_1;
    // 0x0046462C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00464630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00464638: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x0046463C: jal         0x002017E8
    // 0x00464640: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_002017E8(rdram, ctx);
        goto after_2;
    // 0x00464640: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00464644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0046464C: jal         0x002017D4
    // 0x00464650: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00464650: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00464654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00464658: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0046465C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00464660: lw          $s6, 0x4($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X4);
    // 0x00464664: jal         0x002017E8
    // 0x00464668: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_002017E8(rdram, ctx);
        goto after_4;
    // 0x00464668: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x0046466C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x00464670: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x00464674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464678: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0046467C: sll         $v1, $s6, 5
    ctx->r3 = S32(ctx->r22 << 5);
    // 0x00464680: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x00464684: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x00464688: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0046468C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x00464690: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x00464694: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x00464698: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0046469C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x004646A0: jal         0x00205D7C
    // 0x004646A4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    func_00205D7C(rdram, ctx);
        goto after_5;
    // 0x004646A4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    after_5:
    // 0x004646A8: beq         $v0, $zero, L_00464920
    if (ctx->r2 == 0) {
        // 0x004646AC: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_00464920;
    }
    // 0x004646AC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x004646B0: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x004646B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004646B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004646BC: lw          $s4, 0x0($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X0);
    // 0x004646C0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x004646C4: addu        $a1, $s4, $s3
    ctx->r5 = ADD32(ctx->r20, ctx->r19);
    // 0x004646C8: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x004646CC: jal         0x0020192C
    // 0x004646D0: sw          $s3, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_6;
    // 0x004646D0: sw          $s3, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r19;
    after_6:
    // 0x004646D4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x004646D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004646DC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x004646E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004646E4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x004646E8: addu        $s3, $v1, $s3
    ctx->r19 = ADD32(ctx->r3, ctx->r19);
    // 0x004646EC: addu        $s1, $s4, $s3
    ctx->r17 = ADD32(ctx->r20, ctx->r19);
    // 0x004646F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004646F4: jal         0x0020192C
    // 0x004646F8: sw          $s3, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_7;
    // 0x004646F8: sw          $s3, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r19;
    after_7:
    // 0x004646FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x00464700: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00464704: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00464708: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0046470C: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x00464710: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x00464714: addu        $s0, $s4, $s3
    ctx->r16 = ADD32(ctx->r20, ctx->r19);
    // 0x00464718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046471C: jal         0x0020192C
    // 0x00464720: sw          $s3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_8;
    // 0x00464720: sw          $s3, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r19;
    after_8:
    // 0x00464724: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x00464728: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x0046472C: addiu       $fp, $s0, 0x8
    ctx->r30 = ADD32(ctx->r16, 0X8);
    // 0x00464730: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00464734: sw          $s6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r22;
    // 0x00464738: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x0046473C: lw          $s7, 0x4($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X4);
    // 0x00464740: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x00464744: blez        $s7, L_00464768
    if (SIGNED(ctx->r23) <= 0) {
        // 0x00464748: sw          $s1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r17;
            goto L_00464768;
    }
    // 0x00464748: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x0046474C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00464750:
    // 0x00464750: jal         0x0026BAE4
    // 0x00464754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0026BAE4(rdram, ctx);
        goto after_9;
    // 0x00464754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00464758: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0046475C: slt         $v0, $s2, $s7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x00464760: bne         $v0, $zero, L_00464750
    if (ctx->r2 != 0) {
        // 0x00464764: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_00464750;
    }
    // 0x00464764: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_00464768:
    // 0x00464768: blez        $s6, L_0046488C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x0046476C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_0046488C;
    }
    // 0x0046476C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_00464770:
    // 0x00464770: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x00464774: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x00464778: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0046477C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00464780: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x00464784: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x00464788: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x0046478C: jal         0x0026BB30
    // 0x00464790: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_0026BB30(rdram, ctx);
        goto after_10;
    // 0x00464790: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_10:
    // 0x00464794: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x00464798: lw          $a0, 0x70($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X70);
    // 0x0046479C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x004647A0: addu        $at, $t0, $at
    ctx->r1 = ADD32(ctx->r8, ctx->r1);
    // 0x004647A4: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x004647A8: jal         0x002017D4
    // 0x004647AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_11;
    // 0x004647AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_11:
    // 0x004647B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004647B4: jal         0x002017D4
    // 0x004647B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_12;
    // 0x004647B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x004647BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004647C0: jal         0x002017D4
    // 0x004647C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_13;
    // 0x004647C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_13:
    // 0x004647C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004647CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004647D0: jal         0x002017D4
    // 0x004647D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x004647D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_14:
    // 0x004647D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004647DC: jal         0x00201818
    // 0x004647E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_15;
    // 0x004647E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x004647E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004647E8: jal         0x002017D4
    // 0x004647EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x004647EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x004647F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004647F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x004647F8: andi        $v1, $s2, 0x7
    ctx->r3 = ctx->r18 & 0X7;
    // 0x004647FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00464800: bgez        $s2, L_0046480C
    if (SIGNED(ctx->r18) >= 0) {
        // 0x00464804: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_0046480C;
    }
    // 0x00464804: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00464808: addiu       $a0, $s2, 0x7
    ctx->r4 = ADD32(ctx->r18, 0X7);
L_0046480C:
    // 0x0046480C: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x00464810: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00464814: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00464818: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0046481C: beq         $v0, $zero, L_00464830
    if (ctx->r2 == 0) {
        // 0x00464820: nop
    
            goto L_00464830;
    }
    // 0x00464820: nop

    // 0x00464824: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x00464828: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x0046482C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_00464830:
    // 0x00464830: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x00464834: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x00464838: lw          $v1, 0x6D00($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D00);
    // 0x0046483C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00464840: beql        $v0, $zero, L_00464848
    if (ctx->r2 == 0) {
        // 0x00464844: sw          $v1, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r3;
            goto L_00464848;
    }
    goto skip_0;
    // 0x00464844: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    skip_0:
L_00464848:
    // 0x00464848: jal         0x00284188
    // 0x0046484C: nop

    func_00284188(rdram, ctx);
        goto after_17;
    // 0x0046484C: nop

    after_17:
    // 0x00464850: beq         $v0, $zero, L_00464864
    if (ctx->r2 == 0) {
        // 0x00464854: nop
    
            goto L_00464864;
    }
    // 0x00464854: nop

    // 0x00464858: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0046485C: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x00464860: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_00464864:
    // 0x00464864: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x00464868: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x0046486C: beq         $v0, $zero, L_00464880
    if (ctx->r2 == 0) {
        // 0x00464870: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464880;
    }
    // 0x00464870: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00464874: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00464878: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x0046487C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_00464880:
    // 0x00464880: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00464884: bne         $v0, $zero, L_00464770
    if (ctx->r2 != 0) {
        // 0x00464888: addiu       $s5, $s5, 0x14
        ctx->r21 = ADD32(ctx->r21, 0X14);
            goto L_00464770;
    }
    // 0x00464888: addiu       $s5, $s5, 0x14
    ctx->r21 = ADD32(ctx->r21, 0X14);
L_0046488C:
    // 0x0046488C: blez        $s6, L_004648E4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x00464890: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_004648E4;
    }
    // 0x00464890: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00464894: addu        $s0, $fp, $zero
    ctx->r16 = ADD32(ctx->r30, 0);
L_00464898:
    // 0x00464898: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046489C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_004648A0:
    // 0x004648A0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x004648A4: beq         $v0, $zero, L_004648C8
    if (ctx->r2 == 0) {
        // 0x004648A8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_004648C8;
    }
    // 0x004648A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004648AC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x004648B0: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x004648B4: beq         $v0, $zero, L_004648C8
    if (ctx->r2 == 0) {
        // 0x004648B8: nop
    
            goto L_004648C8;
    }
    // 0x004648B8: nop

    // 0x004648BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x004648C0: lw          $v0, 0x6D00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D00);
    // 0x004648C4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_004648C8:
    // 0x004648C8: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x004648CC: bne         $v0, $zero, L_004648A0
    if (ctx->r2 != 0) {
        // 0x004648D0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_004648A0;
    }
    // 0x004648D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x004648D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x004648D8: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x004648DC: bne         $v0, $zero, L_00464898
    if (ctx->r2 != 0) {
        // 0x004648E0: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_00464898;
    }
    // 0x004648E0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_004648E4:
    // 0x004648E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004648E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x004648EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004648F0: addu        $s3, $s3, $t0
    ctx->r19 = ADD32(ctx->r19, ctx->r8);
    // 0x004648F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x004648F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x004648FC: addu        $a1, $t0, $s3
    ctx->r5 = ADD32(ctx->r8, ctx->r19);
    // 0x00464900: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x00464904: jal         0x0020192C
    // 0x00464908: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    func_0020192C(rdram, ctx);
        goto after_18;
    // 0x00464908: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    after_18:
    // 0x0046490C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00464910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00464914: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x00464918: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x0046491C: sw          $s3, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r19;
L_00464920:
    // 0x00464920: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x00464924: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x00464928: jal         0x002057B0
    // 0x0046492C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_19;
    // 0x0046492C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
L_00464930:
    // 0x00464930: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00464934: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x00464938: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x0046493C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00464940: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00464944: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x00464948: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x0046494C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x00464950: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x00464954: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x00464958: jr          $ra
    // 0x0046495C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0046495C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00444B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444B30: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00444B34: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x00444B38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00444B3C: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x00444B40: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00444B44: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x00444B48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00444B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00444B50: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x00444B54: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00444B58: jal         0x00246108
    // 0x00444B5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00444B5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x00444B60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444B64: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00444B68: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00444B6C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x00444B70: jal         0x00245BAC
    // 0x00444B74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x00444B74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x00444B78: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x00444B7C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00444B80: addiu       $s0, $s0, -0x490
    ctx->r16 = ADD32(ctx->r16, -0X490);
    // 0x00444B84: lw          $a1, 0x67C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X67C);
    // 0x00444B88: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x00444B8C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00444B90: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x00444B94: mfhi        $t0
    ctx->r8 = hi;
    // 0x00444B98: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x00444B9C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00444BA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00444BA4: bne         $a1, $v0, L_00444BB4
    if (ctx->r5 != ctx->r2) {
        // 0x00444BA8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444BB4;
    }
    // 0x00444BA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444BAC: jal         0x00409A64
    // 0x00444BB0: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    func_00409A64(rdram, ctx);
        goto after_2;
    // 0x00444BB0: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    after_2:
L_00444BB4:
    // 0x00444BB4: lw          $v0, 0x67C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67C);
    // 0x00444BB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00444BBC: sw          $v0, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = ctx->r2;
    // 0x00444BC0: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x00444BC4: beq         $v0, $zero, L_00444BDC
    if (ctx->r2 == 0) {
        // 0x00444BC8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00444BDC;
    }
    // 0x00444BC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00444BCC: sw          $zero, 0x67C($s0)
    MEM_W(0X67C, ctx->r16) = 0;
    // 0x00444BD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00444BD4: jal         0x00243414
    // 0x00444BD8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00444BD8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_3:
L_00444BDC:
    // 0x00444BDC: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00444BE0: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00444BE4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00444BE8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00444BEC: jr          $ra
    // 0x00444BF0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00444BF0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_0021034C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021034C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x00210350: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x00210354: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x00210358: lwc1        $f7, 0x4($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0021035C: mul.s       $f7, $f7, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f0.fl);
    // 0x00210360: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x00210364: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x00210368: mtc1        $a2, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r6;
    // 0x0021036C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x00210370: mul.s       $f4, $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x00210374: lwc1        $f5, 0x14($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x00210378: mul.s       $f5, $f5, $f1
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x0021037C: lwc1        $f3, 0x18($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x00210380: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x00210384: mtc1        $a3, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r7;
    // 0x00210388: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x0021038C: mul.s       $f2, $f2, $f9
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f9.fl);
    // 0x00210390: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x00210394: mul.s       $f0, $f0, $f9
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f9.fl);
    // 0x00210398: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0021039C: mul.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f9.fl);
    // 0x002103A0: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x002103A4: swc1        $f7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f_odd[(7 - 1) * 2];
    // 0x002103A8: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x002103AC: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x002103B0: swc1        $f5, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f_odd[(5 - 1) * 2];
    // 0x002103B4: swc1        $f3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f_odd[(3 - 1) * 2];
    // 0x002103B8: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x002103BC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x002103C0: jr          $ra
    // 0x002103C4: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x002103C4: swc1        $f1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_0025A304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A304: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0025A308: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x0025A30C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0025A310: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x0025A314: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0025A318: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x0025A31C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x0025A320: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0025A324: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A328: jal         0x0026D5DC
    // 0x0025A32C: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    func_0026D5DC(rdram, ctx);
        goto after_0;
    // 0x0025A32C: addiu       $s0, $v0, 0x14
    ctx->r16 = ADD32(ctx->r2, 0X14);
    after_0:
    // 0x0025A330: lhu         $v0, 0x6A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6A);
    // 0x0025A334: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025A338: beq         $v0, $zero, L_0025A35C
    if (ctx->r2 == 0) {
        // 0x0025A33C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025A35C;
    }
    // 0x0025A33C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025A340: jal         0x0025A5A8
    // 0x0025A344: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0025A5A8(rdram, ctx);
        goto after_1;
    // 0x0025A344: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0025A348: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A34C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A350: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A354: jal         0x0026D5E4
    // 0x0025A358: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_2;
    // 0x0025A358: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_0025A35C:
    // 0x0025A35C: lhu         $v0, 0x6C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6C);
    // 0x0025A360: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025A364: beq         $v0, $zero, L_0025A388
    if (ctx->r2 == 0) {
        // 0x0025A368: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025A388;
    }
    // 0x0025A368: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025A36C: jal         0x0025A62C
    // 0x0025A370: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0025A62C(rdram, ctx);
        goto after_3;
    // 0x0025A370: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0025A374: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A378: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A37C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A380: jal         0x0026D5E4
    // 0x0025A384: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_4;
    // 0x0025A384: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
L_0025A388:
    // 0x0025A388: lhu         $v0, 0x72($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X72);
    // 0x0025A38C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x0025A390: beq         $v0, $zero, L_0025A3B4
    if (ctx->r2 == 0) {
        // 0x0025A394: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0025A3B4;
    }
    // 0x0025A394: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025A398: jal         0x0025A7B8
    // 0x0025A39C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0025A7B8(rdram, ctx);
        goto after_5;
    // 0x0025A39C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0025A3A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0025A3A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A3A8: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A3AC: jal         0x0026D5E4
    // 0x0025A3B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_0026D5E4(rdram, ctx);
        goto after_6;
    // 0x0025A3B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
L_0025A3B4:
    // 0x0025A3B4: jal         0x0026D628
    // 0x0025A3B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_0026D628(rdram, ctx);
        goto after_7;
    // 0x0025A3B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x0025A3BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x0025A3C0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x0025A3C4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x0025A3C8: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x0025A3CC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x0025A3D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x0025A3D4: jr          $ra
    // 0x0025A3D8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x0025A3D8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_002664A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002664A0: lwc1        $f1, 0x180($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X180);
    // 0x002664A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002664A8: lwc1        $f0, 0x7CA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7CA4);
    // 0x002664AC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002664B0: nop

    // 0x002664B4: bc1f        L_002664D0
    if (!c1cs) {
        // 0x002664B8: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_002664D0;
    }
    // 0x002664B8: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x002664BC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x002664C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002664C4: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002664C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002664CC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_002664D0:
    // 0x002664D0: jr          $ra
    // 0x002664D4: nop

    return;
    // 0x002664D4: nop

;}
RECOMP_FUNC void func_0027ACC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027ACC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0027ACC8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x0027ACCC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x0027ACD0: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x0027ACD4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027ACD8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x0027ACDC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x0027ACE0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x0027ACE4: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x0027ACE8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027ACEC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x0027ACF0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0027ACF4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0027ACF8: jr          $ra
    // 0x0027ACFC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x0027ACFC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_00293CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00293CE4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00293CE8: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x00293CEC: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x00293CF0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x00293CF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00293CF8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x00293CFC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x00293D00: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x00293D04: bne         $v0, $zero, L_00293D34
    if (ctx->r2 != 0) {
        // 0x00293D08: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00293D34;
    }
    // 0x00293D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00293D0C: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x00293D10: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x00293D14: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x00293D18: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00293D1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293D20: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293D24: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x00293D28: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00293D2C: jal         0x00291034
    // 0x00293D30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00291034(rdram, ctx);
        goto after_0;
    // 0x00293D30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
L_00293D34:
    // 0x00293D34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00293D38: jr          $ra
    // 0x00293D3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00293D3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00299EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00299EA8: bc1f        L_00299ED0
    if (!c1cs) {
        // 0x00299EAC: nop
    
            goto L_00299ED0;
    }
    // 0x00299EAC: nop

    // 0x00299EB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00299EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00299EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00299EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00299EC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00299EC4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00299EC8: lui         $v0, 0xA460
    ctx->r2 = S32(0XA460 << 16);
    // 0x00299ECC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_00299ED0:
    // 0x00299ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00299ED4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00299ED8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00299EDC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00299EE0: beq         $v0, $zero, L_00299F00
    if (ctx->r2 == 0) {
        // 0x00299EE4: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_00299F00;
    }
    // 0x00299EE4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00299EE8: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x00299EEC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_00299EF0:
    // 0x00299EF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x00299EF4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x00299EF8: bne         $v0, $zero, L_00299EF0
    if (ctx->r2 != 0) {
        // 0x00299EFC: nop
    
            goto L_00299EF0;
    }
    // 0x00299EFC: nop

L_00299F00:
    // 0x00299F00: jal         0x0029BF80
    // 0x00299F04: nop

    func_0029BF80(rdram, ctx);
        goto after_0;
    // 0x00299F04: nop

    after_0:
    // 0x00299F08: lui         $a2, 0xA460
    ctx->r6 = S32(0XA460 << 16);
    // 0x00299F0C: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
    // 0x00299F10: lui         $a1, 0x1FFF
    ctx->r5 = S32(0X1FFF << 16);
    // 0x00299F14: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x00299F18: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x00299F1C: lw          $v1, 0x308($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X308);
    // 0x00299F20: lui         $a0, 0xA460
    ctx->r4 = S32(0XA460 << 16);
    // 0x00299F24: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00299F28: or          $v1, $v1, $s1
    ctx->r3 = ctx->r3 | ctx->r17;
    // 0x00299F2C: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00299F30: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00299F34: beql        $s0, $zero, L_00299F50
    if (ctx->r16 == 0) {
        // 0x00299F38: lui         $v1, 0xA460
        ctx->r3 = S32(0XA460 << 16);
            goto L_00299F50;
    }
    goto skip_0;
    // 0x00299F38: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    skip_0:
    // 0x00299F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00299F40: beq         $s0, $v0, L_00299F58
    if (ctx->r16 == ctx->r2) {
        // 0x00299F44: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00299F58;
    }
    // 0x00299F44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00299F48: j           L_00299F6C
    // 0x00299F4C: nop

        goto L_00299F6C;
    // 0x00299F4C: nop

L_00299F50:
    // 0x00299F50: j           L_00299F60
    // 0x00299F54: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
        goto L_00299F60;
    // 0x00299F54: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
L_00299F58:
    // 0x00299F58: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x00299F5C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
L_00299F60:
    // 0x00299F60: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x00299F64: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00299F68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00299F6C:
    // 0x00299F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00299F70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00299F74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00299F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00299F7C: jr          $ra
    // 0x00299F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00299F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00455C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041CC60:
    // 0x00455C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00455C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00455C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00455C14: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00455C18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00455C1C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00455C20: addiu       $a0, $v0, -0x2
    ctx->r4 = ADD32(ctx->r2, -0X2);
    // 0x00455C24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455C28: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00455C2C: lw          $v1, 0x1C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1C);
    // 0x00455C30: beq         $v0, $zero, L_00455C50
    if (ctx->r2 == 0) {
        // 0x00455C34: nop
    
            goto L_00455C50;
    }
    // 0x00455C34: nop

    // 0x00455C38: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x00455C3C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x00455C40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00455C44: lhu         $s1, 0x10($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X10);
    // 0x00455C48: j           L_0041CC60
    // 0x00455C4C: nop

    entry_0041CC60(rdram, ctx);
    return;
    // 0x00455C4C: nop

L_00455C50:
    // 0x00455C50: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x00455C54: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x00455C58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00455C5C: lhu         $s1, 0x20($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X20);
    // 0x00455C60: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x00455C64: sll         $v1, $a0, 6
    ctx->r3 = S32(ctx->r4 << 6);
    // 0x00455C68: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00455C6C: addiu       $v0, $v0, -0x5475
    ctx->r2 = ADD32(ctx->r2, -0X5475);
    // 0x00455C70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00455C74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00455C78:
    // 0x00455C78: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00455C7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00455C80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00455C84: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x00455C88: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x00455C8C: bne         $v0, $zero, L_00455C78
    if (ctx->r2 != 0) {
        // 0x00455C90: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_00455C78;
    }
    // 0x00455C90: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x00455C94: jal         0x004160F0
    // 0x00455C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x00455C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00455C9C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x00455CA0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00455CA4: addiu       $a1, $a1, 0x1338
    ctx->r5 = ADD32(ctx->r5, 0X1338);
    // 0x00455CA8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x00455CAC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00455CB0: jal         0x0029E3E0
    // 0x00455CB4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x00455CB4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x00455CB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00455CBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00455CC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00455CC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00455CC8: jr          $ra
    // 0x00455CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00455CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0024BAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0024BAD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0024BAD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0024BADC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0024BAE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0024BAE4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x0024BAE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0024BAEC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0024BAF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0024BAF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0024BAF8: lw          $v0, 0xA50($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XA50);
    // 0x0024BAFC: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x0024BB00: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x0024BB04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0024BB08: andi        $s0, $v0, 0x8000
    ctx->r16 = ctx->r2 & 0X8000;
    // 0x0024BB0C: jal         0x002548FC
    // 0x0024BB10: andi        $s2, $v0, 0x4000
    ctx->r18 = ctx->r2 & 0X4000;
    func_002548FC(rdram, ctx);
        goto after_0;
    // 0x0024BB10: andi        $s2, $v0, 0x4000
    ctx->r18 = ctx->r2 & 0X4000;
    after_0:
    // 0x0024BB14: beq         $v0, $zero, L_0024BB24
    if (ctx->r2 == 0) {
        // 0x0024BB18: nop
    
            goto L_0024BB24;
    }
    // 0x0024BB18: nop

    // 0x0024BB1C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x0024BB20: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_0024BB24:
    // 0x0024BB24: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0024BB28: beq         $v1, $zero, L_0024BB38
    if (ctx->r3 == 0) {
        // 0x0024BB2C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_0024BB38;
    }
    // 0x0024BB2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0024BB30: bne         $v1, $v0, L_0024BB64
    if (ctx->r3 != ctx->r2) {
        // 0x0024BB34: nop
    
            goto L_0024BB64;
    }
    // 0x0024BB34: nop

L_0024BB38:
    // 0x0024BB38: bne         $s0, $zero, L_0024BB48
    if (ctx->r16 != 0) {
        // 0x0024BB3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BB48;
    }
    // 0x0024BB3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024BB40: beq         $s2, $zero, L_0024BCF8
    if (ctx->r18 == 0) {
        // 0x0024BB44: nop
    
            goto L_0024BCF8;
    }
    // 0x0024BB44: nop

L_0024BB48:
    // 0x0024BB48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024BB4C: jal         0x0024C2A0
    // 0x0024BB50: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0024C2A0(rdram, ctx);
        goto after_1;
    // 0x0024BB50: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x0024BB54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024BB58: sw          $v0, 0x1284($s3)
    MEM_W(0X1284, ctx->r19) = ctx->r2;
    // 0x0024BB5C: j           L_0024BC38
    // 0x0024BB60: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_0024BC38;
    // 0x0024BB60: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_0024BB64:
    // 0x0024BB64: lw          $v0, 0x38C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38C);
    // 0x0024BB68: beq         $v0, $zero, L_0024BB88
    if (ctx->r2 == 0) {
        // 0x0024BB6C: nop
    
            goto L_0024BB88;
    }
    // 0x0024BB6C: nop

    // 0x0024BB70: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x0024BB74: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024BB78: beq         $v0, $zero, L_0024BB98
    if (ctx->r2 == 0) {
        // 0x0024BB7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BB98;
    }
    // 0x0024BB7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024BB80: j           L_0024BBA4
    // 0x0024BB84: nop

        goto L_0024BBA4;
    // 0x0024BB84: nop

L_0024BB88:
    // 0x0024BB88: lw          $v0, 0x140($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X140);
    // 0x0024BB8C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024BB90: beq         $v0, $zero, L_0024BBA4
    if (ctx->r2 == 0) {
        // 0x0024BB94: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BBA4;
    }
    // 0x0024BB94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0024BB98:
    // 0x0024BB98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0024BB9C: jal         0x0024C2A0
    // 0x0024BBA0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0024C2A0(rdram, ctx);
        goto after_2;
    // 0x0024BBA0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_2:
L_0024BBA4:
    // 0x0024BBA4: beq         $s0, $zero, L_0024BBFC
    if (ctx->r16 == 0) {
        // 0x0024BBA8: nop
    
            goto L_0024BBFC;
    }
    // 0x0024BBA8: nop

    // 0x0024BBAC: beq         $s2, $zero, L_0024BBEC
    if (ctx->r18 == 0) {
        // 0x0024BBB0: nop
    
            goto L_0024BBEC;
    }
    // 0x0024BBB0: nop

    // 0x0024BBB4: lw          $v0, 0x388($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X388);
    // 0x0024BBB8: bne         $v0, $zero, L_0024BBEC
    if (ctx->r2 != 0) {
        // 0x0024BBBC: nop
    
            goto L_0024BBEC;
    }
    // 0x0024BBBC: nop

    // 0x0024BBC0: lw          $v0, 0x384($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X384);
    // 0x0024BBC4: beq         $v0, $zero, L_0024BBD4
    if (ctx->r2 == 0) {
        // 0x0024BBC8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BBD4;
    }
    // 0x0024BBC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024BBCC: j           L_0024BBD8
    // 0x0024BBD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_0024BBD8;
    // 0x0024BBD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_0024BBD4:
    // 0x0024BBD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_0024BBD8:
    // 0x0024BBD8: jal         0x0024C2A0
    // 0x0024BBDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0024C2A0(rdram, ctx);
        goto after_3;
    // 0x0024BBDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x0024BBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0024BBE4: j           L_0024BC38
    // 0x0024BBE8: sw          $v0, 0x388($s1)
    MEM_W(0X388, ctx->r17) = ctx->r2;
        goto L_0024BC38;
    // 0x0024BBE8: sw          $v0, 0x388($s1)
    MEM_W(0X388, ctx->r17) = ctx->r2;
L_0024BBEC:
    // 0x0024BBEC: beq         $s0, $zero, L_0024BBFC
    if (ctx->r16 == 0) {
        // 0x0024BBF0: nop
    
            goto L_0024BBFC;
    }
    // 0x0024BBF0: nop

    // 0x0024BBF4: bne         $s2, $zero, L_0024BC3C
    if (ctx->r18 != 0) {
        // 0x0024BBF8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BC3C;
    }
    // 0x0024BBF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0024BBFC:
    // 0x0024BBFC: lw          $v0, 0x384($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X384);
    // 0x0024BC00: beq         $v0, $zero, L_0024BC18
    if (ctx->r2 == 0) {
        // 0x0024BC04: sw          $zero, 0x388($s1)
        MEM_W(0X388, ctx->r17) = 0;
            goto L_0024BC18;
    }
    // 0x0024BC04: sw          $zero, 0x388($s1)
    MEM_W(0X388, ctx->r17) = 0;
    // 0x0024BC08: beq         $s0, $zero, L_0024BC28
    if (ctx->r16 == 0) {
        // 0x0024BC0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BC28;
    }
    // 0x0024BC0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024BC10: j           L_0024BC3C
    // 0x0024BC14: nop

        goto L_0024BC3C;
    // 0x0024BC14: nop

L_0024BC18:
    // 0x0024BC18: beq         $s0, $zero, L_0024BC38
    if (ctx->r16 == 0) {
        // 0x0024BC1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0024BC38;
    }
    // 0x0024BC1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0024BC20: j           L_0024BC30
    // 0x0024BC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
        goto L_0024BC30;
    // 0x0024BC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0024BC28:
    // 0x0024BC28: beq         $s2, $zero, L_0024BC38
    if (ctx->r18 == 0) {
        // 0x0024BC2C: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0024BC38;
    }
    // 0x0024BC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_0024BC30:
    // 0x0024BC30: jal         0x0024C2A0
    // 0x0024BC34: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_0024C2A0(rdram, ctx);
        goto after_4;
    // 0x0024BC34: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_4:
L_0024BC38:
    // 0x0024BC38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_0024BC3C:
    // 0x0024BC3C: jal         0x0024B88C
    // 0x0024BC40: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_0024B88C(rdram, ctx);
        goto after_5;
    // 0x0024BC40: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x0024BC44: lw          $v1, 0x390($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X390);
    // 0x0024BC48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0024BC4C: beq         $a0, $v1, L_0024BCF8
    if (ctx->r4 == ctx->r3) {
        // 0x0024BC50: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_0024BCF8;
    }
    // 0x0024BC50: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x0024BC54: beq         $a0, $a3, L_0024BCF4
    if (ctx->r4 == ctx->r7) {
        // 0x0024BC58: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_0024BCF4;
    }
    // 0x0024BC58: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x0024BC5C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0024BC60: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x0024BC64: addu        $a1, $s1, $v0
    ctx->r5 = ADD32(ctx->r17, ctx->r2);
    // 0x0024BC68: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x0024BC6C: bne         $v0, $zero, L_0024BC84
    if (ctx->r2 != 0) {
        // 0x0024BC70: nop
    
            goto L_0024BC84;
    }
    // 0x0024BC70: nop

    // 0x0024BC74: jal         0x00275624
    // 0x0024BC78: addiu       $a0, $zero, 0x1455
    ctx->r4 = ADD32(0, 0X1455);
    func_00275624(rdram, ctx);
        goto after_6;
    // 0x0024BC78: addiu       $a0, $zero, 0x1455
    ctx->r4 = ADD32(0, 0X1455);
    after_6:
    // 0x0024BC7C: j           L_0024BCF8
    // 0x0024BC80: nop

        goto L_0024BCF8;
    // 0x0024BC80: nop

L_0024BC84:
    // 0x0024BC84: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x0024BC88: bne         $v0, $a3, L_0024BC98
    if (ctx->r2 != ctx->r7) {
        // 0x0024BC8C: nop
    
            goto L_0024BC98;
    }
    // 0x0024BC8C: nop

    // 0x0024BC90: j           L_0024BCF8
    // 0x0024BC94: sw          $a3, 0x390($s1)
    MEM_W(0X390, ctx->r17) = ctx->r7;
        goto L_0024BCF8;
    // 0x0024BC94: sw          $a3, 0x390($s1)
    MEM_W(0X390, ctx->r17) = ctx->r7;
L_0024BC98:
    // 0x0024BC98: lw          $v0, 0x37C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X37C);
    // 0x0024BC9C: bnel        $a0, $v0, L_0024BCA4
    if (ctx->r4 != ctx->r2) {
        // 0x0024BCA0: sw          $a0, 0x37C($s1)
        MEM_W(0X37C, ctx->r17) = ctx->r4;
            goto L_0024BCA4;
    }
    goto skip_0;
    // 0x0024BCA0: sw          $a0, 0x37C($s1)
    MEM_W(0X37C, ctx->r17) = ctx->r4;
    skip_0:
L_0024BCA4:
    // 0x0024BCA4: lh          $a2, 0x1E($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X1E);
    // 0x0024BCA8: lh          $v0, 0x996($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X996);
    // 0x0024BCAC: lhu         $v1, 0x1E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X1E);
    // 0x0024BCB0: beql        $a2, $v0, L_0024BCF8
    if (ctx->r6 == ctx->r2) {
        // 0x0024BCB4: sw          $a0, 0x390($s1)
        MEM_W(0X390, ctx->r17) = ctx->r4;
            goto L_0024BCF8;
    }
    goto skip_1;
    // 0x0024BCB4: sw          $a0, 0x390($s1)
    MEM_W(0X390, ctx->r17) = ctx->r4;
    skip_1:
    // 0x0024BCB8: sh          $v1, 0xB14($s3)
    MEM_H(0XB14, ctx->r19) = ctx->r3;
    // 0x0024BCBC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0024BCC0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x0024BCC4: bnel        $v0, $zero, L_0024BCF8
    if (ctx->r2 != 0) {
        // 0x0024BCC8: sw          $a0, 0x390($s1)
        MEM_W(0X390, ctx->r17) = ctx->r4;
            goto L_0024BCF8;
    }
    goto skip_2;
    // 0x0024BCC8: sw          $a0, 0x390($s1)
    MEM_W(0X390, ctx->r17) = ctx->r4;
    skip_2:
    // 0x0024BCCC: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x0024BCD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0024BCD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0024BCD8: lw          $v0, -0x9E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X9E8);
    // 0x0024BCDC: lh          $v1, 0xC($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XC);
    // 0x0024BCE0: beq         $v1, $a3, L_0024BCF4
    if (ctx->r3 == ctx->r7) {
        // 0x0024BCE4: addu        $v0, $s3, $v1
        ctx->r2 = ADD32(ctx->r19, ctx->r3);
            goto L_0024BCF4;
    }
    // 0x0024BCE4: addu        $v0, $s3, $v1
    ctx->r2 = ADD32(ctx->r19, ctx->r3);
    // 0x0024BCE8: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0024BCEC: bnel        $v0, $zero, L_0024BCF4
    if (ctx->r2 != 0) {
        // 0x0024BCF0: sw          $v1, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->r3;
            goto L_0024BCF4;
    }
    goto skip_3;
    // 0x0024BCF0: sw          $v1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r3;
    skip_3:
L_0024BCF4:
    // 0x0024BCF4: sw          $a0, 0x390($s1)
    MEM_W(0X390, ctx->r17) = ctx->r4;
L_0024BCF8:
    // 0x0024BCF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0024BCFC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x0024BD00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0024BD04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0024BD08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0024BD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0024BD10: jr          $ra
    // 0x0024BD14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0024BD14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00220D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00220D00: addiu       $sp, $sp, -0x290
    ctx->r29 = ADD32(ctx->r29, -0X290);
    // 0x00220D04: sw          $s7, 0x27C($sp)
    MEM_W(0X27C, ctx->r29) = ctx->r23;
    // 0x00220D08: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x00220D0C: sw          $a1, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r5;
    // 0x00220D10: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00220D14: sw          $ra, 0x284($sp)
    MEM_W(0X284, ctx->r29) = ctx->r31;
    // 0x00220D18: sw          $fp, 0x280($sp)
    MEM_W(0X280, ctx->r29) = ctx->r30;
    // 0x00220D1C: sw          $s6, 0x278($sp)
    MEM_W(0X278, ctx->r29) = ctx->r22;
    // 0x00220D20: sw          $s5, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r21;
    // 0x00220D24: sw          $s4, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r20;
    // 0x00220D28: sw          $s3, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r19;
    // 0x00220D2C: sw          $s2, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r18;
    // 0x00220D30: sw          $s1, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r17;
    // 0x00220D34: sw          $s0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r16;
    // 0x00220D38: sdc1        $f20, 0x288($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X288, ctx->r29);
    // 0x00220D3C: jal         0x00200B00
    // 0x00220D40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00220D40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x00220D44: beq         $v0, $zero, L_002211DC
    if (ctx->r2 == 0) {
        // 0x00220D48: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_002211DC;
    }
    // 0x00220D48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00220D4C: lw          $t0, 0x294($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X294);
    // 0x00220D50: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x00220D54: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00220D58: jal         0x002017D4
    // 0x00220D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00220D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00220D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220D64: sw          $v0, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->r2;
    // 0x00220D68: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00220D6C: jal         0x002017D4
    // 0x00220D70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00220D70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00220D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220D78: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x00220D7C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x00220D80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00220D84: addu        $s1, $s4, $t0
    ctx->r17 = ADD32(ctx->r20, ctx->r8);
    // 0x00220D88: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x00220D8C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00220D90: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00220D94: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x00220D98: sw          $t0, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->r8;
    // 0x00220D9C: jal         0x002017D4
    // 0x00220DA0: sw          $v0, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00220DA0: sw          $v0, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->r2;
    after_3:
    // 0x00220DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00220DA8: sw          $v0, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r2;
    // 0x00220DAC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x00220DB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00220DB4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x00220DB8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x00220DBC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x00220DC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00220DC4: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x00220DC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00220DCC: sw          $t0, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->r8;
    // 0x00220DD0: jal         0x002017D4
    // 0x00220DD4: sw          $v0, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00220DD4: sw          $v0, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r2;
    after_4:
    // 0x00220DD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00220DDC: sw          $v0, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r2;
    // 0x00220DE0: lw          $fp, 0x4($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X4);
    // 0x00220DE4: lw          $a1, 0x294($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X294);
    // 0x00220DE8: lw          $t0, 0x244($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X244);
    // 0x00220DEC: sll         $v0, $fp, 1
    ctx->r2 = S32(ctx->r30 << 1);
    // 0x00220DF0: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x00220DF4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x00220DF8: addiu       $a2, $t0, 0x18
    ctx->r6 = ADD32(ctx->r8, 0X18);
    // 0x00220DFC: lw          $t0, 0x240($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X240);
    // 0x00220E00: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x00220E04: sw          $v0, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r2;
    // 0x00220E08: addu        $a2, $t0, $a2
    ctx->r6 = ADD32(ctx->r8, ctx->r6);
    // 0x00220E0C: jal         0x00205D7C
    // 0x00220E10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_00205D7C(rdram, ctx);
        goto after_5;
    // 0x00220E10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_5:
    // 0x00220E14: beq         $v0, $zero, L_002211CC
    if (ctx->r2 == 0) {
        // 0x00220E18: sw          $v0, 0x25C($sp)
        MEM_W(0X25C, ctx->r29) = ctx->r2;
            goto L_002211CC;
    }
    // 0x00220E18: sw          $v0, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->r2;
    // 0x00220E1C: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    // 0x00220E20: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x00220E24: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    // 0x00220E28: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00220E2C: sw          $t0, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r8;
    // 0x00220E30: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x00220E34: lw          $a0, 0x228($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X228);
    // 0x00220E38: addu        $s0, $s5, $s6
    ctx->r16 = ADD32(ctx->r21, ctx->r22);
    // 0x00220E3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00220E40: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x00220E44: jal         0x0020192C
    // 0x00220E48: sw          $s6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r22;
    func_0020192C(rdram, ctx);
        goto after_6;
    // 0x00220E48: sw          $s6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r22;
    after_6:
    // 0x00220E4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00220E50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00220E54: jal         0x0020192C
    // 0x00220E58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_0020192C(rdram, ctx);
        goto after_7;
    // 0x00220E58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x00220E5C: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x00220E60: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x00220E64: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x00220E68: lw          $a0, 0x58($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X58);
    // 0x00220E6C: jal         0x002017D4
    // 0x00220E70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_002017D4(rdram, ctx);
        goto after_8;
    // 0x00220E70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x00220E74: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x00220E78: sw          $s3, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r19;
    // 0x00220E7C: addiu       $s3, $s5, 0x20
    ctx->r19 = ADD32(ctx->r21, 0X20);
    // 0x00220E80: lw          $t0, 0x228($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X228);
    // 0x00220E84: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00220E88: sw          $s5, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->r21;
    // 0x00220E8C: sw          $v0, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r2;
    // 0x00220E90: blez        $s4, L_00220EEC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00220E94: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_00220EEC;
    }
    // 0x00220E94: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x00220E98: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_00220E9C:
    // 0x00220E9C: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x00220EA0: lw          $a1, 0x14($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X14);
    // 0x00220EA4: lhu         $a2, 0x8($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X8);
    // 0x00220EA8: jal         0x00201848
    // 0x00220EAC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_00201848(rdram, ctx);
        goto after_9;
    // 0x00220EAC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_9:
    // 0x00220EB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00220EB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00220EB8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x00220EBC: addiu       $s1, $s1, 0x90
    ctx->r17 = ADD32(ctx->r17, 0X90);
    // 0x00220EC0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220EC4: addu        $at, $s7, $at
    ctx->r1 = ADD32(ctx->r23, ctx->r1);
    // 0x00220EC8: lw          $v0, -0x71B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X71B0);
    // 0x00220ECC: lw          $a3, 0x258($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X258);
    // 0x00220ED0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x00220ED4: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x00220ED8: jal         0x002141F0
    // 0x00220EDC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_002141F0(rdram, ctx);
        goto after_10;
    // 0x00220EDC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x00220EE0: slt         $v0, $s2, $s4
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00220EE4: bne         $v0, $zero, L_00220E9C
    if (ctx->r2 != 0) {
        // 0x00220EE8: nop
    
            goto L_00220E9C;
    }
    // 0x00220EE8: nop

L_00220EEC:
    // 0x00220EEC: lw          $t0, 0x238($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X238);
    // 0x00220EF0: blez        $t0, L_00220F48
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00220EF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00220F48;
    }
    // 0x00220EF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00220EF8: lw          $s1, 0x250($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X250);
L_00220EFC:
    // 0x00220EFC: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x00220F00: lw          $a1, 0x14($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X14);
    // 0x00220F04: lhu         $a2, 0x28($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X28);
    // 0x00220F08: jal         0x00201848
    // 0x00220F0C: nop

    func_00201848(rdram, ctx);
        goto after_11;
    // 0x00220F0C: nop

    after_11:
    // 0x00220F10: addu        $v1, $s0, $s4
    ctx->r3 = ADD32(ctx->r16, ctx->r20);
    // 0x00220F14: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x00220F18: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x00220F1C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x00220F20: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x00220F24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00220F28: lw          $a3, 0x258($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X258);
    // 0x00220F2C: jal         0x00214564
    // 0x00220F30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_00214564(rdram, ctx);
        goto after_12;
    // 0x00220F30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_12:
    // 0x00220F34: lw          $t0, 0x238($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X238);
    // 0x00220F38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00220F3C: slt         $v0, $s0, $t0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x00220F40: bne         $v0, $zero, L_00220EFC
    if (ctx->r2 != 0) {
        // 0x00220F44: addiu       $s1, $s1, 0x34
        ctx->r17 = ADD32(ctx->r17, 0X34);
            goto L_00220EFC;
    }
    // 0x00220F44: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
L_00220F48:
    // 0x00220F48: lw          $t0, 0x240($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X240);
    // 0x00220F4C: addu        $s6, $s6, $t0
    ctx->r22 = ADD32(ctx->r22, ctx->r8);
    // 0x00220F50: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x00220F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00220F58: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x00220F5C: lw          $a0, 0x22C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X22C);
    // 0x00220F60: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00220F64: sw          $t0, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r8;
    // 0x00220F68: lw          $t0, 0x234($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X234);
    // 0x00220F6C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00220F70: addu        $s0, $t0, $s6
    ctx->r16 = ADD32(ctx->r8, ctx->r22);
    // 0x00220F74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00220F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00220F7C: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x00220F80: jal         0x0020192C
    // 0x00220F84: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    func_0020192C(rdram, ctx);
        goto after_13;
    // 0x00220F84: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    after_13:
    // 0x00220F88: addiu       $v0, $zero, 0x198
    ctx->r2 = ADD32(0, 0X198);
    // 0x00220F8C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00220F90: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x00220F94: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00220F98: lw          $t0, 0x22C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X22C);
    // 0x00220F9C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00220FA0: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x00220FA4: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x00220FA8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x00220FAC: blez        $t0, L_00221094
    if (SIGNED(ctx->r8) <= 0) {
        // 0x00220FB0: sw          $s0, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r16;
            goto L_00221094;
    }
    // 0x00220FB0: sw          $s0, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r16;
    // 0x00220FB4: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00220FB8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
L_00220FBC:
    // 0x00220FBC: lw          $a0, 0x40($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X40);
    // 0x00220FC0: lw          $a1, 0x14($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X14);
    // 0x00220FC4: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x00220FC8: jal         0x00201848
    // 0x00220FCC: nop

    func_00201848(rdram, ctx);
        goto after_14;
    // 0x00220FCC: nop

    after_14:
    // 0x00220FD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00220FD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00220FD8: lw          $a3, 0x258($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X258);
    // 0x00220FDC: jal         0x002150C0
    // 0x00220FE0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    entry_002150C0(rdram, ctx);
        goto after_15;
    // 0x00220FE0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_15:
    // 0x00220FE4: lw          $a0, 0x6C($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X6C);
    // 0x00220FE8: lhu         $s1, 0x16E($s2)
    ctx->r17 = MEM_HU(ctx->r18, 0X16E);
    // 0x00220FEC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00220FF0: addu        $at, $s7, $at
    ctx->r1 = ADD32(ctx->r23, ctx->r1);
    // 0x00220FF4: lw          $s0, -0x7058($at)
    ctx->r16 = MEM_W(ctx->r1, -0X7058);
    // 0x00220FF8: jal         0x002017D4
    // 0x00220FFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x00220FFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_16:
    // 0x00221000: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00221004: jal         0x002017D4
    // 0x00221008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002017D4(rdram, ctx);
        goto after_17;
    // 0x00221008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_17:
    // 0x0022100C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00221010: jal         0x002017D4
    // 0x00221014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_18;
    // 0x00221014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x00221018: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0022101C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00221020: jal         0x002017D4
    // 0x00221024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x00221024: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_19:
    // 0x00221028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0022102C: jal         0x00201818
    // 0x00221030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00201818(rdram, ctx);
        goto after_20;
    // 0x00221030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x00221034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00221038: jal         0x002017D4
    // 0x0022103C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_21;
    // 0x0022103C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x00221040: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00221044: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x00221048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0022104C: bgez        $s1, L_00221058
    if (SIGNED(ctx->r17) >= 0) {
        // 0x00221050: sllv        $v1, $v0, $v1
        ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
            goto L_00221058;
    }
    // 0x00221050: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x00221054: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
L_00221058:
    // 0x00221058: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x0022105C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00221060: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x00221064: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00221068: beql        $v0, $zero, L_00221080
    if (ctx->r2 == 0) {
        // 0x0022106C: addiu       $s2, $s2, 0x198
        ctx->r18 = ADD32(ctx->r18, 0X198);
            goto L_00221080;
    }
    goto skip_0;
    // 0x0022106C: addiu       $s2, $s2, 0x198
    ctx->r18 = ADD32(ctx->r18, 0X198);
    skip_0:
    // 0x00221070: lhu         $v0, 0x16C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16C);
    // 0x00221074: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x00221078: sh          $v0, 0x16C($s2)
    MEM_H(0X16C, ctx->r18) = ctx->r2;
    // 0x0022107C: addiu       $s2, $s2, 0x198
    ctx->r18 = ADD32(ctx->r18, 0X198);
L_00221080:
    // 0x00221080: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x00221084: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00221088: slt         $v0, $s3, $t0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0022108C: bne         $v0, $zero, L_00220FBC
    if (ctx->r2 != 0) {
        // 0x00221090: addiu       $s4, $s4, 0x20
        ctx->r20 = ADD32(ctx->r20, 0X20);
            goto L_00220FBC;
    }
    // 0x00221090: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
L_00221094:
    // 0x00221094: lw          $t0, 0x244($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X244);
    // 0x00221098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0022109C: addu        $s6, $s6, $t0
    ctx->r22 = ADD32(ctx->r22, ctx->r8);
    // 0x002210A0: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x002210A4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x002210A8: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x002210AC: lw          $a0, 0x230($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X230);
    // 0x002210B0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x002210B4: sw          $t0, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r8;
    // 0x002210B8: lw          $t0, 0x234($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X234);
    // 0x002210BC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x002210C0: addu        $s0, $t0, $s6
    ctx->r16 = ADD32(ctx->r8, ctx->r22);
    // 0x002210C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x002210C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002210CC: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x002210D0: jal         0x0020192C
    // 0x002210D4: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    func_0020192C(rdram, ctx);
        goto after_22;
    // 0x002210D4: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    after_22:
    // 0x002210D8: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x002210DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002210E0: sw          $fp, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r30;
    // 0x002210E4: lw          $t0, 0x230($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X230);
    // 0x002210E8: addiu       $s3, $s0, 0x8
    ctx->r19 = ADD32(ctx->r16, 0X8);
    // 0x002210EC: blez        $fp, L_0022111C
    if (SIGNED(ctx->r30) <= 0) {
        // 0x002210F0: addiu       $a1, $t0, 0x8
        ctx->r5 = ADD32(ctx->r8, 0X8);
            goto L_0022111C;
    }
    // 0x002210F0: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x002210F4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002210F8: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_002210FC:
    // 0x002210FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00221100: jal         0x00211F64
    // 0x00221104: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00211F64(rdram, ctx);
        goto after_23;
    // 0x00221104: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_23:
    // 0x00221108: addiu       $s2, $s2, 0x48
    ctx->r18 = ADD32(ctx->r18, 0X48);
    // 0x0022110C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00221110: slt         $v0, $s1, $fp
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x00221114: bne         $v0, $zero, L_002210FC
    if (ctx->r2 != 0) {
        // 0x00221118: addiu       $s0, $s0, 0xC0
        ctx->r16 = ADD32(ctx->r16, 0XC0);
            goto L_002210FC;
    }
    // 0x00221118: addiu       $s0, $s0, 0xC0
    ctx->r16 = ADD32(ctx->r16, 0XC0);
L_0022111C:
    // 0x0022111C: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x00221120: addu        $s6, $s6, $t0
    ctx->r22 = ADD32(ctx->r22, ctx->r8);
    // 0x00221124: lw          $t0, 0x24C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24C);
    // 0x00221128: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0022112C: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x00221130: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x00221134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00221138: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x0022113C: blez        $fp, L_00221164
    if (SIGNED(ctx->r30) <= 0) {
        // 0x00221140: sw          $s6, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r22;
            goto L_00221164;
    }
    // 0x00221140: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x00221144: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00221148: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
L_0022114C:
    // 0x0022114C: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x00221150: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x00221154: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00221158: slt         $v0, $s1, $fp
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x0022115C: bne         $v0, $zero, L_0022114C
    if (ctx->r2 != 0) {
        // 0x00221160: addiu       $s0, $s0, 0xC0
        ctx->r16 = ADD32(ctx->r16, 0XC0);
            goto L_0022114C;
    }
    // 0x00221160: addiu       $s0, $s0, 0xC0
    ctx->r16 = ADD32(ctx->r16, 0XC0);
L_00221164:
    // 0x00221164: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x00221168: blez        $t0, L_002211CC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x0022116C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_002211CC;
    }
    // 0x0022116C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00221170: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00221174: lwc1        $f20, 0x5F68($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F68);
    // 0x00221178: lw          $s0, 0x254($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X254);
L_0022117C:
    // 0x0022117C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x00221180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00221184: jal         0x002671B4
    // 0x00221188: swc1        $f0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f0.u32l;
    func_002671B4(rdram, ctx);
        goto after_24;
    // 0x00221188: swc1        $f0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f0.u32l;
    after_24:
    // 0x0022118C: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00221190: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x00221194: lwc1        $f1, 0x8($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X8);
    // 0x00221198: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x0022119C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x002211A0: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x002211A4: addiu       $a2, $sp, 0x218
    ctx->r6 = ADD32(ctx->r29, 0X218);
    // 0x002211A8: swc1        $f1, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x002211AC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x002211B0: addiu       $a3, $s0, 0x178
    ctx->r7 = ADD32(ctx->r16, 0X178);
    // 0x002211B4: jal         0x00222A9C
    // 0x002211B8: swc1        $f0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f0.u32l;
    func_00222A9C(rdram, ctx);
        goto after_25;
    // 0x002211B8: swc1        $f0, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f0.u32l;
    after_25:
    // 0x002211BC: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x002211C0: slt         $v0, $s3, $t0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x002211C4: bne         $v0, $zero, L_0022117C
    if (ctx->r2 != 0) {
        // 0x002211C8: addiu       $s0, $s0, 0x198
        ctx->r16 = ADD32(ctx->r16, 0X198);
            goto L_0022117C;
    }
    // 0x002211C8: addiu       $s0, $s0, 0x198
    ctx->r16 = ADD32(ctx->r16, 0X198);
L_002211CC:
    // 0x002211CC: lw          $a1, 0x294($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X294);
    // 0x002211D0: lw          $a2, 0x25C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X25C);
    // 0x002211D4: jal         0x002057B0
    // 0x002211D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_26;
    // 0x002211D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_26:
L_002211DC:
    // 0x002211DC: lw          $ra, 0x284($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X284);
    // 0x002211E0: lw          $fp, 0x280($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X280);
    // 0x002211E4: lw          $s7, 0x27C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X27C);
    // 0x002211E8: lw          $s6, 0x278($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X278);
    // 0x002211EC: lw          $s5, 0x274($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X274);
    // 0x002211F0: lw          $s4, 0x270($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X270);
    // 0x002211F4: lw          $s3, 0x26C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X26C);
    // 0x002211F8: lw          $s2, 0x268($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X268);
    // 0x002211FC: lw          $s1, 0x264($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X264);
    // 0x00221200: lw          $s0, 0x260($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X260);
    // 0x00221204: ldc1        $f20, 0x288($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X288);
    // 0x00221208: jr          $ra
    // 0x0022120C: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
    return;
    // 0x0022120C: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
;}
RECOMP_FUNC void func_0045D428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045D428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045D42C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045D430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045D434: sw          $a0, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r4;
    // 0x0045D438: jal         0x00423D30
    // 0x0045D43C: nop

    func_00423D30(rdram, ctx);
        goto after_0;
    // 0x0045D43C: nop

    after_0:
    // 0x0045D440: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045D444: jr          $ra
    // 0x0045D448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045D448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00456214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D348:
    // 0x00456214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00456218: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0045621C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00456220: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00456224: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00456228: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045622C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00456230: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00456234: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x00456238: jal         0x0025340C
    // 0x0045623C: nop

    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x0045623C: nop

    after_0:
    // 0x00456240: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00456244: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00456248: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x0045624C: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x00456250: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456254: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00456258: lwc1        $f1, 0x1FB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB4);
    // 0x0045625C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00456260: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00456264: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00456268: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045626C: lwc1        $f1, 0x1348($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1348);
    // 0x00456270: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00456274: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456278: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0045627C: swc1        $f0, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = ctx->f0.u32l;
    // 0x00456280: bc1f        L_00456298
    if (!c1cs) {
        // 0x00456284: nop
    
            goto L_00456298;
    }
    // 0x00456284: nop

    // 0x00456288: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0045628C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456290: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x00456294: swc1        $f0, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = ctx->f0.u32l;
L_00456298:
    // 0x00456298: lh          $v1, 0x0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X0);
    // 0x0045629C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004562A0: bne         $v1, $v0, L_00456348
    if (ctx->r3 != ctx->r2) {
        // 0x004562A4: nop
    
            goto L_00456348;
    }
    // 0x004562A4: nop

    // 0x004562A8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004562AC: jal         0x00285628
    // 0x004562B0: nop

    func_00285628(rdram, ctx);
        goto after_1;
    // 0x004562B0: nop

    after_1:
    // 0x004562B4: beq         $v0, $zero, L_004562F0
    if (ctx->r2 == 0) {
        // 0x004562B8: nop
    
            goto L_004562F0;
    }
    // 0x004562B8: nop

    // 0x004562BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004562C0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004562C4: lw          $v0, 0x1FB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB0);
    // 0x004562C8: blez        $v0, L_004562F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004562CC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_004562F0;
    }
    // 0x004562CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004562D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004562D4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004562D8: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x004562DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004562E0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x004562E4: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
    // 0x004562E8: j           L_0041D348
    // 0x004562EC: nop

    entry_0041D348(rdram, ctx);
    return;
    // 0x004562EC: nop

L_004562F0:
    // 0x004562F0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x004562F4: jal         0x00285670
    // 0x004562F8: nop

    func_00285670(rdram, ctx);
        goto after_2;
    // 0x004562F8: nop

    after_2:
    // 0x004562FC: beq         $v0, $zero, L_00456348
    if (ctx->r2 == 0) {
        // 0x00456300: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_00456348;
    }
    // 0x00456300: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x00456304: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x00456308: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x0045630C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456310: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00456314: lw          $a0, 0x1FB0($at)
    ctx->r4 = MEM_W(ctx->r1, 0X1FB0);
    // 0x00456318: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045631C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00456320: lw          $v0, 0x1FB8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1FB8);
    // 0x00456324: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00456328: beq         $v0, $zero, L_00456348
    if (ctx->r2 == 0) {
        // 0x0045632C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_00456348;
    }
    // 0x0045632C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x00456330: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456334: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00456338: sw          $v0, 0x1FB0($at)
    MEM_W(0X1FB0, ctx->r1) = ctx->r2;
    // 0x0045633C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456340: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00456344: sw          $zero, 0x1FB4($at)
    MEM_W(0X1FB4, ctx->r1) = 0;
L_00456348:
    // 0x00456348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0045634C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00456350: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00456354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00456358: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045635C: jr          $ra
    // 0x00456360: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00456360: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045B720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045B720: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x0045B724: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0045B728: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x0045B72C: jr          $ra
    // 0x0045B730: nop

    return;
    // 0x0045B730: nop

;}
RECOMP_FUNC void func_002565A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002565A4: lwc1        $f0, 0xAB0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XAB0);
    // 0x002565A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002565AC: lwc1        $f1, 0x71DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X71DC);
    // 0x002565B0: sw          $zero, 0xABC($a0)
    MEM_W(0XABC, ctx->r4) = 0;
    // 0x002565B4: swc1        $f0, 0xAB4($a0)
    MEM_W(0XAB4, ctx->r4) = ctx->f0.u32l;
    // 0x002565B8: jr          $ra
    // 0x002565BC: swc1        $f1, 0xAB8($a0)
    MEM_W(0XAB8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
    return;
    // 0x002565BC: swc1        $f1, 0xAB8($a0)
    MEM_W(0XAB8, ctx->r4) = ctx->f_odd[(1 - 1) * 2];
;}
RECOMP_FUNC void func_002601C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002601C4: jr          $ra
    // 0x002601C8: nop

    return;
    // 0x002601C8: nop

;}
