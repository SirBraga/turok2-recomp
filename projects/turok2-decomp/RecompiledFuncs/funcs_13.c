#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_0029A138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029A138: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x0029A13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // turok2: reconnected split function: a stray ELF symbol at 0x0029A140 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0029A140(rdram, ctx);
;}
RECOMP_FUNC void func_00411C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00411C94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00411C98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411C9C: lwc1        $f2, 0x2034($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00411CA0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x00411CA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411CA8: lwc1        $f3, 0xA6C($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0XA6C);
    // 0x00411CAC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00411CB0: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00411CB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411CB8: lwc1        $f0, 0x2030($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2030);
    // 0x00411CBC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00411CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00411CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00411CC8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00411CCC: lwc1        $f1, 0xA4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XA4);
    // 0x00411CD0: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x00411CD4: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00411CD8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x00411CDC: lwc1        $f1, 0x30($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X30);
    // 0x00411CE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411CE4: lwc1        $f0, 0xA70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA70);
    // 0x00411CE8: c.lt.s      $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl < ctx->f1.fl;
    // 0x00411CEC: mul.s       $f20, $f2, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00411CF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411CF4: lwc1        $f2, 0xA74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XA74);
    // 0x00411CF8: bc1f        L_00411D24
    if (!c1cs) {
        // 0x00411CFC: nop
    
            goto L_00411D24;
    }
    // 0x00411CFC: nop

    // 0x00411D00: sub.s       $f3, $f1, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f4.fl;
    // 0x00411D04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411D08: lwc1        $f0, 0xA78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA78);
    // 0x00411D0C: div.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f2.fl);
    // 0x00411D10: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x00411D14: nop

    // 0x00411D18: bc1tl       L_00411D20
    if (c1cs) {
        // 0x00411D1C: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_00411D20;
    }
    goto skip_0;
    // 0x00411D1C: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_0:
L_00411D20:
    // 0x00411D20: sub.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f3.fl;
L_00411D24:
    // 0x00411D24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00411D28: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00411D2C: lwc1        $f1, 0x1C($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X1C);
    // 0x00411D30: lwc1        $f0, 0x34($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X34);
    // 0x00411D34: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00411D38: nop

    // 0x00411D3C: bc1f        L_00411D6C
    if (!c1cs) {
        // 0x00411D40: lui         $a2, 0xE300
        ctx->r6 = S32(0XE300 << 16);
            goto L_00411D6C;
    }
    // 0x00411D40: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
    // 0x00411D44: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00411D48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411D4C: lwc1        $f0, 0xA7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XA7C);
    // 0x00411D50: div.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = DIV_S(ctx->f3.fl, ctx->f2.fl);
    // 0x00411D54: c.lt.s      $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl < ctx->f3.fl;
    // 0x00411D58: nop

    // 0x00411D5C: bc1tl       L_00411D64
    if (c1cs) {
        // 0x00411D60: mov.s       $f3, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
            goto L_00411D64;
    }
    goto skip_1;
    // 0x00411D60: mov.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f3.fl = ctx->f0.fl;
    skip_1:
L_00411D64:
    // 0x00411D64: sub.s       $f3, $f0, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f0.fl - ctx->f3.fl;
    // 0x00411D68: lui         $a2, 0xE300
    ctx->r6 = S32(0XE300 << 16);
L_00411D6C:
    // 0x00411D6C: ori         $a2, $a2, 0xA01
    ctx->r6 = ctx->r6 | 0XA01;
    // 0x00411D70: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x00411D74: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x00411D78: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x00411D7C: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x00411D80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00411D84: mul.s       $f20, $f20, $f3
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f3.fl);
    // 0x00411D88: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00411D8C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00411D90: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00411D94: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00411D98: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x00411D9C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00411DA0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x00411DA4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x00411DA8: jal         0x00207FEC
    // 0x00411DAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    func_00207FEC(rdram, ctx);
        goto after_0;
    // 0x00411DAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_0:
    // 0x00411DB0: jal         0x00207A70
    // 0x00411DB4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_00207A70(rdram, ctx);
        goto after_1;
    // 0x00411DB4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x00411DB8: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x00411DBC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00411DC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x00411DC4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00411DC8: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x00411DCC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x00411DD0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00411DD4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00411DD8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00411DDC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x00411DE0: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x00411DE4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00411DE8: bgez        $a1, L_00411DF4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00411DEC: sw          $a3, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r7;
            goto L_00411DF4;
    }
    // 0x00411DEC: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x00411DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00411DF4:
    // 0x00411DF4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00411DF8: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00411DFC: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00411E00: bgez        $v1, L_00411E0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00411E04: sll         $a2, $v0, 14
        ctx->r6 = S32(ctx->r2 << 14);
            goto L_00411E0C;
    }
    // 0x00411E04: sll         $a2, $v0, 14
    ctx->r6 = S32(ctx->r2 << 14);
    // 0x00411E08: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00411E0C:
    // 0x00411E0C: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411E10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411E14: lui         $t0, 0xF600
    ctx->r8 = S32(0XF600 << 16);
    // 0x00411E18: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00411E1C: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x00411E20: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00411E24: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x00411E28: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x00411E2C: lw          $a1, 0x2030($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2030);
    // 0x00411E30: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x00411E34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00411E38: bgez        $a1, L_00411E44
    if (SIGNED(ctx->r5) >= 0) {
        // 0x00411E3C: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_00411E44;
    }
    // 0x00411E3C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00411E40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_00411E44:
    // 0x00411E44: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x00411E48: lw          $v1, 0x2034($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2034);
    // 0x00411E4C: andi        $v0, $a1, 0x3FF
    ctx->r2 = ctx->r5 & 0X3FF;
    // 0x00411E50: bgez        $v1, L_00411E5C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00411E54: sll         $a1, $v0, 14
        ctx->r5 = S32(ctx->r2 << 14);
            goto L_00411E5C;
    }
    // 0x00411E54: sll         $a1, $v0, 14
    ctx->r5 = S32(ctx->r2 << 14);
    // 0x00411E58: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00411E5C:
    // 0x00411E5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411E60: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x00411E64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00411E68: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
    // 0x00411E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411E70: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x00411E74: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00411E78: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x00411E7C: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x00411E80: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411E84: nop

    // 0x00411E88: bc1t        L_00411E94
    if (c1cs) {
        // 0x00411E8C: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_00411E94;
    }
    // 0x00411E8C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x00411E90: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
L_00411E94:
    // 0x00411E94: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00411E98: lwc1        $f1, 0xA80($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0XA80);
    // 0x00411E9C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00411EA0: nop

    // 0x00411EA4: bc1tl       L_00411EBC
    if (c1cs) {
        // 0x00411EA8: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00411EBC;
    }
    goto skip_2;
    // 0x00411EA8: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_2:
    // 0x00411EAC: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411EB0: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00411EB4: j           L_00411ED0
    // 0x00411EB8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
        goto L_00411ED0;
    // 0x00411EB8: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411EBC:
    // 0x00411EBC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00411EC0: trunc.w.s   $f5, $f0
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00411EC4: mfc1        $v1, $f5
    ctx->r3 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00411EC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00411ECC: andi        $v0, $v1, 0x3FF
    ctx->r2 = ctx->r3 & 0X3FF;
L_00411ED0:
    // 0x00411ED0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00411ED4: trunc.w.s   $f5, $f20
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f20.fl);
    // 0x00411ED8: mfc1        $a0, $f5
    ctx->r4 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x00411EDC: jal         0x004110CC
    // 0x00411EE0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_004110CC(rdram, ctx);
        goto after_2;
    // 0x00411EE0: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_2:
    // 0x00411EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00411EE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00411EEC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00411EF0: jr          $ra
    // 0x00411EF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00411EF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00205574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00205574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00205578: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0020557C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00205580: jal         0x0029DFF0
    // 0x00205584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x00205584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00205588: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0020558C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205590: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00205598: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0020559C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002055A0: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002055A4: beq         $v1, $v0, L_002055D0
    if (ctx->r3 == ctx->r2) {
        // 0x002055A8: nop
    
            goto L_002055D0;
    }
    // 0x002055A8: nop

    // 0x002055AC: jal         0x0029E010
    // 0x002055B0: nop

    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x002055B0: nop

    after_1:
    // 0x002055B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002055B8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x002055BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x002055C0: jal         0x0029B6F0
    // 0x002055C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x002055C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x002055C8: j           L_002055D8
    // 0x002055CC: nop

        goto L_002055D8;
    // 0x002055CC: nop

L_002055D0:
    // 0x002055D0: jal         0x0029E010
    // 0x002055D4: nop

    func_0029E010(rdram, ctx);
        goto after_3;
    // 0x002055D4: nop

    after_3:
L_002055D8:
    // 0x002055D8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002055DC: addiu       $s0, $s0, -0x7DE8
    ctx->r16 = ADD32(ctx->r16, -0X7DE8);
    // 0x002055E0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002055E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002055E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002055EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002055F0: lw          $s1, -0x7DF8($at)
    ctx->r17 = MEM_W(ctx->r1, -0X7DF8);
    // 0x002055F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002055F8: jal         0x0029DFF0
    // 0x002055FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_0029DFF0(rdram, ctx);
        goto after_4;
    // 0x002055FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_4:
    // 0x00205600: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00205604: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00205608: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0020560C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00205610: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00205614: beq         $v1, $zero, L_0020563C
    if (ctx->r3 == 0) {
        // 0x00205618: nop
    
            goto L_0020563C;
    }
    // 0x00205618: nop

    // 0x0020561C: jal         0x0029E010
    // 0x00205620: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_5;
    // 0x00205620: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x00205624: addiu       $a0, $s0, 0xB98
    ctx->r4 = ADD32(ctx->r16, 0XB98);
    // 0x00205628: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0020562C: jal         0x0029B820
    // 0x00205630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x00205630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x00205634: j           L_00205648
    // 0x00205638: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_00205648;
    // 0x00205638: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_0020563C:
    // 0x0020563C: jal         0x0029E010
    // 0x00205640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00205640: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_7:
    // 0x00205644: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_00205648:
    // 0x00205648: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0020564C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00205650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00205654: jr          $ra
    // 0x00205658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00205658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040E108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040E108: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x0040E10C: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x0040E110: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040E114: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x0040E118: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040E11C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040E120: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040E124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040E128: sw          $ra, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r31;
    // 0x0040E12C: sdc1        $f21, 0xC0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XC0, ctx->r29);
    // 0x0040E130: sdc1        $f20, 0xB8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XB8, ctx->r29);
    // 0x0040E134: jal         0x00246108
    // 0x0040E138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040E138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040E13C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x0040E140: swc1        $f0, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f0.u32l;
    // 0x0040E144: lhu         $v1, 0xB8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XB8);
    // 0x0040E148: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0040E14C: beq         $v1, $v0, L_0040E1A8
    if (ctx->r3 == ctx->r2) {
        // 0x0040E150: slti        $v0, $v1, 0x456
        ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
            goto L_0040E1A8;
    }
    // 0x0040E150: slti        $v0, $v1, 0x456
    ctx->r2 = SIGNED(ctx->r3) < 0X456 ? 1 : 0;
    // 0x0040E154: beq         $v0, $zero, L_0040E16C
    if (ctx->r2 == 0) {
        // 0x0040E158: addiu       $v0, $zero, 0x454
        ctx->r2 = ADD32(0, 0X454);
            goto L_0040E16C;
    }
    // 0x0040E158: addiu       $v0, $zero, 0x454
    ctx->r2 = ADD32(0, 0X454);
    // 0x0040E15C: beq         $v1, $v0, L_0040E180
    if (ctx->r3 == ctx->r2) {
        // 0x0040E160: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040E180;
    }
    // 0x0040E160: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040E164: j           L_0040E1D8
    // 0x0040E168: nop

        goto L_0040E1D8;
    // 0x0040E168: nop

L_0040E16C:
    // 0x0040E16C: addiu       $v0, $zero, 0x456
    ctx->r2 = ADD32(0, 0X456);
    // 0x0040E170: beq         $v1, $v0, L_0040E1C0
    if (ctx->r3 == ctx->r2) {
        // 0x0040E174: nop
    
            goto L_0040E1C0;
    }
    // 0x0040E174: nop

    // 0x0040E178: j           L_0040E1D8
    // 0x0040E17C: nop

        goto L_0040E1D8;
    // 0x0040E17C: nop

L_0040E180:
    // 0x0040E180: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E184: lwc1        $f21, 0x910($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X910);
    // 0x0040E188: lui         $a2, 0xBFC9
    ctx->r6 = S32(0XBFC9 << 16);
    // 0x0040E18C: ori         $a2, $a2, 0xFDC
    ctx->r6 = ctx->r6 | 0XFDC;
    // 0x0040E190: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E194: lwc1        $f20, 0x914($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X914);
    // 0x0040E198: jal         0x0025AD90
    // 0x0040E19C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025AD90(rdram, ctx);
        goto after_1;
    // 0x0040E19C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040E1A0: j           L_0040E1E0
    // 0x0040E1A4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
        goto L_0040E1E0;
    // 0x0040E1A4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_0040E1A8:
    // 0x0040E1A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1AC: lwc1        $f21, 0x918($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X918);
    // 0x0040E1B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1B4: lwc1        $f20, 0x91C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X91C);
    // 0x0040E1B8: j           L_0040E1E0
    // 0x0040E1BC: nop

        goto L_0040E1E0;
    // 0x0040E1BC: nop

L_0040E1C0:
    // 0x0040E1C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1C4: lwc1        $f21, 0x920($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X920);
    // 0x0040E1C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040E1CC: lwc1        $f20, 0x924($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X924);
    // 0x0040E1D0: j           L_0040E1E0
    // 0x0040E1D4: nop

        goto L_0040E1E0;
    // 0x0040E1D4: nop

L_0040E1D8:
    // 0x0040E1D8: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x0040E1DC: mov.s       $f20, $f21
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 21);
    ctx->f20.fl = ctx->f21.fl;
L_0040E1E0:
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
        goto after_2;
    // 0x0040E1F4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_2:
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
        goto after_3;
    // 0x0040E25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
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
RECOMP_FUNC void func_00445FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445FC4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00445FC8: lw          $v0, -0x6770($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6770);
    // 0x00445FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00445FD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00445FD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00445FD8: beq         $v0, $zero, L_004460E0
    if (ctx->r2 == 0) {
        // 0x00445FDC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_004460E0;
    }
    // 0x00445FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00445FE0: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00445FE4: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00445FE8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x00445FEC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00445FF0: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00445FF4: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00445FF8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00445FFC: jal         0x00298470
    // 0x00446000: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_0;
    // 0x00446000: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_0:
    // 0x00446004: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00446008: lwc1        $f1, 0x8DC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X8DC);
    // 0x0044600C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00446010: nop

    // 0x00446014: bc1f        L_004460E0
    if (!c1cs) {
        // 0x00446018: nop
    
            goto L_004460E0;
    }
    // 0x00446018: nop

    // 0x0044601C: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x00446020: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00446024: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x00446028: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x0044602C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446030: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446034: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x00446038: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x0044603C: blez        $v0, L_00446064
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446040: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_00446064;
    }
    // 0x00446040: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x00446044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446048:
    // 0x00446048: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0044604C: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00446050: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x00446054: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446058: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0044605C: bne         $v0, $zero, L_00446048
    if (ctx->r2 != 0) {
        // 0x00446060: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446048;
    }
    // 0x00446060: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446064:
    // 0x00446064: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00446068: blez        $v0, L_00446090
    if (SIGNED(ctx->r2) <= 0) {
        // 0x0044606C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00446090;
    }
    // 0x0044606C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00446070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00446074:
    // 0x00446074: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x00446078: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x0044607C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x00446080: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00446084: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00446088: bne         $v0, $zero, L_00446074
    if (ctx->r2 != 0) {
        // 0x0044608C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00446074;
    }
    // 0x0044608C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00446090:
    // 0x00446090: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00446094: blez        $v0, L_004460BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00446098: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004460BC;
    }
    // 0x00446098: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044609C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004460A0:
    // 0x004460A0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x004460A4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004460A8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x004460AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004460B0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004460B4: bne         $v0, $zero, L_004460A0
    if (ctx->r2 != 0) {
        // 0x004460B8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004460A0;
    }
    // 0x004460B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_004460BC:
    // 0x004460BC: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x004460C0: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x004460C4: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x004460C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004460CC: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x004460D0: beq         $v0, $zero, L_004460E0
    if (ctx->r2 == 0) {
        // 0x004460D4: nop
    
            goto L_004460E0;
    }
    // 0x004460D4: nop

    // 0x004460D8: jalr        $v0
    // 0x004460DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x004460DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_004460E0:
    // 0x004460E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004460E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004460E8: jr          $ra
    // 0x004460EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004460EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002672C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002672C8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002672CC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x002672D0: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x002672D4: beq         $v0, $zero, L_002673C0
    if (ctx->r2 == 0) {
        // 0x002672D8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002673C0;
    }
    // 0x002672D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002672DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002672E0: addu        $at, $at, $v0
    gpr jr_addend_002672E8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x002672E4: lw          $v0, 0x7DA8($at)
    ctx->r2 = ADD32(ctx->r1, 0X7DA8);
    // 0x002672E8: jr          $v0
    // 0x002672EC: nop

    switch (jr_addend_002672E8 >> 2) {
        case 0: goto L_00267340; break;
        case 1: goto L_00267330; break;
        case 2: goto L_00267350; break;
        case 3: goto L_002673C0; break;
        case 4: goto L_00267330; break;
        case 5: goto L_00267340; break;
        case 6: goto L_002673C0; break;
        case 7: goto L_002673B0; break;
        case 8: goto L_00267340; break;
        case 9: goto L_002673C0; break;
        case 10: goto L_00267340; break;
        case 11: goto L_002672F0; break;
        case 12: goto L_00267340; break;
        default: switch_error(__func__, 0x002672E8, 0x800A7DA8);
    }
    // 0x002672EC: nop

L_002672F0:
    // 0x002672F0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x002672F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002672F8: bne         $v1, $v0, L_00267330
    if (ctx->r3 != ctx->r2) {
        // 0x002672FC: lui         $v1, 0x30
        ctx->r3 = S32(0X30 << 16);
            goto L_00267330;
    }
    // 0x002672FC: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00267300: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00267304: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00267308: beq         $v0, $zero, L_00267330
    if (ctx->r2 == 0) {
        // 0x0026730C: nop
    
            goto L_00267330;
    }
    // 0x0026730C: nop

    // 0x00267310: lw          $v0, 0x1A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A8);
    // 0x00267314: lw          $v0, 0xBB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XBB0);
    // 0x00267318: beq         $v0, $zero, L_00267330
    if (ctx->r2 == 0) {
        // 0x0026731C: nop
    
            goto L_00267330;
    }
    // 0x0026731C: nop

    // 0x00267320: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267324: lwc1        $f0, 0x7DDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DDC);
    // 0x00267328: jr          $ra
    // 0x0026732C: nop

    return;
    // 0x0026732C: nop

L_00267330:
    // 0x00267330: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267334: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x00267338: jr          $ra
    // 0x0026733C: nop

    return;
    // 0x0026733C: nop

L_00267340:
    // 0x00267340: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x00267344: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x00267348: jr          $ra
    // 0x0026734C: nop

    return;
    // 0x0026734C: nop

L_00267350:
    // 0x00267350: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x00267354: lhu         $v1, 0x18($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X18);
    // 0x00267358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026735C: bne         $v1, $v0, L_002673A4
    if (ctx->r3 != ctx->r2) {
        // 0x00267360: nop
    
            goto L_002673A4;
    }
    // 0x00267360: nop

    // 0x00267364: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x00267368: lwc1        $f1, 0x1C($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X1C);
    // 0x0026736C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00267370: nop

    // 0x00267374: bc1fl       L_0026737C
    if (!c1cs) {
        // 0x00267378: mov.s       $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
            goto L_0026737C;
    }
    goto skip_0;
    // 0x00267378: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    skip_0:
L_0026737C:
    // 0x0026737C: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x00267380: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00267384: nop

    // 0x00267388: bc1fl       L_00267390
    if (!c1cs) {
        // 0x0026738C: mov.s       $f1, $f0
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
            goto L_00267390;
    }
    goto skip_1;
    // 0x0026738C: mov.s       $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    ctx->f1.fl = ctx->f0.fl;
    skip_1:
L_00267390:
    // 0x00267390: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00267394: lwc1        $f0, 0x7DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DE0);
    // 0x00267398: mul.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0026739C: jr          $ra
    // 0x002673A0: nop

    return;
    // 0x002673A0: nop

L_002673A4:
    // 0x002673A4: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x002673A8: jr          $ra
    // 0x002673AC: nop

    return;
    // 0x002673AC: nop

L_002673B0:
    // 0x002673B0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002673B4: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x002673B8: jr          $ra
    // 0x002673BC: nop

    return;
    // 0x002673BC: nop

L_002673C0:
    // 0x002673C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002673C4: jr          $ra
    // 0x002673C8: nop

    return;
    // 0x002673C8: nop

;}
RECOMP_FUNC void func_0041FEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041FEC4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FEC8: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0041FECC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0041FED0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0041FED4: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0041FED8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0041FEDC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0041FEE0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0041FEE4: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x0041FEE8: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x0041FEEC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0041FEF0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0041FEF4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0041FEF8: beq         $v0, $zero, L_0041FF2C
    if (ctx->r2 == 0) {
        // 0x0041FEFC: sw          $zero, 0x28($sp)
        MEM_W(0X28, ctx->r29) = 0;
            goto L_0041FF2C;
    }
    // 0x0041FEFC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x0041FF00: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FF04: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FF08: beq         $v0, $zero, L_0041FF20
    if (ctx->r2 == 0) {
        // 0x0041FF0C: nop
    
            goto L_0041FF20;
    }
    // 0x0041FF0C: nop

    // 0x0041FF10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041FF14: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041FF18: j           L_0041FF2C
    // 0x0041FF1C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
        goto L_0041FF2C;
    // 0x0041FF1C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_0041FF20:
    // 0x0041FF20: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x0041FF24: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0041FF28: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_0041FF2C:
    // 0x0041FF2C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041FF30: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041FF34: beq         $v0, $zero, L_0041FF4C
    if (ctx->r2 == 0) {
        // 0x0041FF38: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_0041FF4C;
    }
    // 0x0041FF38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
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
L_0041FF4C:
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
RECOMP_FUNC void func_00444734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0044473C: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x00444740: beq         $v0, $zero, L_00444750
    if (ctx->r2 == 0) {
        // 0x00444744: nop
    
            goto L_00444750;
    }
    // 0x00444744: nop

    // 0x00444748: jal         0x00243414
    // 0x0044474C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0044474C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_0:
L_00444750:
    // 0x00444750: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00444754: jr          $ra
    // 0x00444758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00444758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00445110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00445114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00445118: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0044511C: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x00445120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00445124: sdc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X20, ctx->r29);
    // 0x00445128: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0044512C: lwc1        $f12, 0x688($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X688);
    // 0x00445130: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00445134: lwc1        $f14, 0x68C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X68C);
    // 0x00445138: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x0044513C: jal         0x002119FC
    // 0x00445140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00445140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00445144: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445148: lwc1        $f12, 0x8A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X8A0);
    // 0x0044514C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00445150: lwc1        $f14, 0x8A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X8A4);
    // 0x00445154: jal         0x002119FC
    // 0x00445158: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00445158: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x0044515C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    // 0x00445160: jal         0x002982F0
    // 0x00445164: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_2;
    // 0x00445164: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_2:
    // 0x00445168: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0044516C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00445170: jal         0x002974C0
    // 0x00445174: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_3;
    // 0x00445174: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x00445178: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x0044517C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x00445180: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x00445184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00445188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0044518C: ldc1        $f21, 0x20($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X20);
    // 0x00445190: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00445194: jr          $ra
    // 0x00445198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00445198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00462374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00271784:
    // 0x00462374: j           L_00271784
    // 0x00462378: nop

    entry_00271784(rdram, ctx);
    return;
L_00429640:
    // 0x00462378: nop

    // 0x0046237C: jal         0x0029ECD0
    // 0x00462380: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    entry_0029ECD0(rdram, ctx);
        goto after_0;
    // 0x00462380: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    after_0:
    // 0x00462384: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x00462388: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0046238C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x00462390: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00462394: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x00462398: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x0046239C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x004623A0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x004623A4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x004623A8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x004623AC: lbu         $v0, 0x65($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X65);
    // 0x004623B0: beq         $v0, $zero, L_004623C8
    if (ctx->r2 == 0) {
        // 0x004623B4: addu        $s4, $a2, $zero
        ctx->r20 = ADD32(ctx->r6, 0);
            goto L_004623C8;
    }
    // 0x004623B4: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x004623B8: jal         0x00429DE4
    // 0x004623BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_1;
    // 0x004623BC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_1:
    // 0x004623C0: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x004623C4: nop
    
            goto L_00462640;
    }
    // 0x004623C4: nop

L_004623C8:
    // 0x004623C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004623CC: jal         0x0029DFC0
    // 0x004623D0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    func_0029DFC0(rdram, ctx);
        goto after_2;
    // 0x004623D0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    after_2:
    // 0x004623D4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x004623D8: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x004623DC: lw          $v0, 0x8($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X8);
    // 0x004623E0: lw          $v1, 0xC($s6)
    ctx->r3 = MEM_W(ctx->r22, 0XC);
    // 0x004623E4: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x004623E8: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    // 0x004623EC: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
    // 0x004623F0: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x004623F4: lw          $v1, 0x14($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X14);
    // 0x004623F8: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x004623FC: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x00462400: sw          $v1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r3;
    // 0x00462404: sb          $s1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r17;
L_00462408:
    // 0x00462408: jal         0x00429DE4
    // 0x0046240C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_3;
    // 0x0046240C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x00462410: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x00462414: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00462640;
    }
    // 0x00462414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00462418: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0046241C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462420: jal         0x00299680
    // 0x00462424: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x00462424: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x00462428: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x0046242C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_00462640;
    }
    // 0x0046242C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x00462430: ori         $v0, $s1, 0x80
    ctx->r2 = ctx->r17 | 0X80;
    // 0x00462434: sb          $v0, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r2;
    // 0x00462438: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_0046243C:
    // 0x0046243C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00462440: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462444: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x00462448: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x0046244C: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00462450: bne         $v0, $zero, L_0046243C
    if (ctx->r2 != 0) {
        // 0x00462454: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_0046243C;
    }
    // 0x00462454: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x00462458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0046245C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00462460: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x00462464: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462468: jal         0x00299A40
    // 0x0046246C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299A40(rdram, ctx);
        goto after_5;
    // 0x0046246C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x00462470: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x00462474: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00462640;
    }
    // 0x00462474: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00462478: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x0046247C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00462480: jal         0x00299680
    // 0x00462484: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_00299680(rdram, ctx);
        goto after_6;
    // 0x00462484: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x00462488: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x0046248C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00462640;
    }
    // 0x0046248C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462490: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
L_00462494:
    // 0x00462494: addu        $v1, $s3, $s0
    ctx->r3 = ADD32(ctx->r19, ctx->r16);
    // 0x00462498: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x0046249C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x004624A0: bne         $a0, $v0, L_004624BC
    if (ctx->r4 != ctx->r2) {
        // 0x004624A4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_004624BC;
    }
    // 0x004624A4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x004624A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004624AC: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x004624B0: bne         $v0, $zero, L_00462494
    if (ctx->r2 != 0) {
        // 0x004624B4: addu        $v0, $s5, $s0
        ctx->r2 = ADD32(ctx->r21, ctx->r16);
            goto L_00462494;
    }
    // 0x004624B4: addu        $v0, $s5, $s0
    ctx->r2 = ADD32(ctx->r21, ctx->r16);
    // 0x004624B8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_004624BC:
    // 0x004624BC: bnel        $s0, $v0, L_0046251C
    if (ctx->r16 != ctx->r2) {
        // 0x004624C0: sb          $zero, 0x65($s2)
        MEM_B(0X65, ctx->r18) = 0;
            goto L_0046251C;
    }
    goto skip_0;
    // 0x004624C0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    skip_0:
    // 0x004624C4: blezl       $s1, L_0046250C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x004624C8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0046250C;
    }
    goto skip_1;
    // 0x004624C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x004624CC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x004624D0: jal         0x00429DE4
    // 0x004624D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_7;
    // 0x004624D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x004624D8: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x004624DC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00462640;
    }
    // 0x004624DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004624E0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004624E4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004624E8: jal         0x00299680
    // 0x004624EC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_00299680(rdram, ctx);
        goto after_8;
    // 0x004624EC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_8:
    // 0x004624F0: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x004624F4: nop
    
            goto L_00462640;
    }
    // 0x004624F4: nop

    // 0x004624F8: lbu         $v1, 0x18($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X18);
    // 0x004624FC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x00462500: bnel        $v1, $v0, L_0046251C
    if (ctx->r3 != ctx->r2) {
        // 0x00462504: sb          $zero, 0x65($s2)
        MEM_B(0X65, ctx->r18) = 0;
            goto L_0046251C;
    }
    goto skip_2;
    // 0x00462504: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    skip_2:
    // 0x00462508: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0046250C:
    // 0x0046250C: slti        $v0, $s1, 0x3E
    ctx->r2 = SIGNED(ctx->r17) < 0X3E ? 1 : 0;
    // 0x00462510: bnel        $v0, $zero, L_00462408
    if (ctx->r2 != 0) {
        // 0x00462514: sb          $s1, 0x65($s2)
        MEM_B(0X65, ctx->r18) = ctx->r17;
            goto L_00462408;
    }
    goto skip_3;
    // 0x00462514: sb          $s1, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r17;
    skip_3:
    // 0x00462518: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
L_0046251C:
    // 0x0046251C: jal         0x00429DE4
    // 0x00462520: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00429DE4(rdram, ctx);
        goto after_9;
    // 0x00462520: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00462524: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x00462528: addiu       $a2, $s4, 0x1C
        ctx->r6 = ADD32(ctx->r20, 0X1C);
            goto L_00462640;
    }
    // 0x00462528: addiu       $a2, $s4, 0x1C
    ctx->r6 = ADD32(ctx->r20, 0X1C);
    // 0x0046252C: addiu       $a1, $s4, 0x1E
    ctx->r5 = ADD32(ctx->r20, 0X1E);
    // 0x00462530: lhu         $v0, 0x18($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X18);
    // 0x00462534: slt         $v1, $zero, $s1
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00462538: sb          $s1, 0x1A($s4)
    MEM_B(0X1A, ctx->r20) = ctx->r17;
    // 0x0046253C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x00462540: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00462544: sh          $v1, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r3;
    // 0x00462548: lbu         $v0, 0x1B($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1B);
    // 0x0046254C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00462550: sh          $zero, 0x1E($s4)
    MEM_H(0X1E, ctx->r20) = 0;
    // 0x00462554: sh          $zero, 0x1C($s4)
    MEM_H(0X1C, ctx->r20) = 0;
    // 0x00462558: sb          $v0, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r2;
    // 0x0046255C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
L_00462560:
    // 0x00462560: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x00462564: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x00462568: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x0046256C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462570: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x00462574: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x00462578: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x0046257C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00462580: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x00462584: sltiu       $v0, $a0, 0x1C
    ctx->r2 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x00462588: bne         $v0, $zero, L_00462560
    if (ctx->r2 != 0) {
        // 0x0046258C: addu        $v0, $s4, $a0
        ctx->r2 = ADD32(ctx->r20, ctx->r4);
            goto L_00462560;
    }
    // 0x0046258C: addu        $v0, $s4, $a0
    ctx->r2 = ADD32(ctx->r20, ctx->r4);
    // 0x00462590: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462594: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00462598: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x0046259C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x004625A0: sh          $v0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r2;
    // 0x004625A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x004625A8: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    // 0x004625AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x004625B0: sh          $v0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r2;
    // 0x004625B4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x004625B8: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
L_004625BC:
    // 0x004625BC: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x004625C0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x004625C4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004625C8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004625CC: jal         0x00299A40
    // 0x004625D0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00299A40(rdram, ctx);
        goto after_10;
    // 0x004625D0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_10:
    // 0x004625D4: bne         $v0, $zero, L_00462640
    if (ctx->r2 != 0) {
        // 0x004625D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00462640;
    }
    // 0x004625D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x004625DC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x004625E0: bne         $v0, $zero, L_004625BC
    if (ctx->r2 != 0) {
        // 0x004625E4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_004625BC;
    }
    // 0x004625E4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x004625E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004625EC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004625F0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004625F4: jal         0x00299680
    // 0x004625F8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_00299680(rdram, ctx);
        goto after_11;
    // 0x004625F8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_11:
    // 0x004625FC: beq         $v0, $zero, L_00462614
    if (ctx->r2 == 0) {
        // 0x00462600: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00462614;
    }
    // 0x00462600: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00462604: j           L_00429640
    // 0x00462608: nop

    entry_00429640(rdram, ctx);
    return;
    // 0x00462608: nop

L_0046260C:
    // 0x0046260C: j           L_00429640
    // 0x00462610: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    entry_00429640(rdram, ctx);
    return;
    // 0x00462610: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_00462614:
    // 0x00462614: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x00462618: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
L_0046261C:
    // 0x0046261C: addu        $v1, $s4, $s0
    ctx->r3 = ADD32(ctx->r20, ctx->r16);
    // 0x00462620: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x00462624: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00462628: bne         $a0, $v0, L_0046260C
    if (ctx->r4 != ctx->r2) {
        // 0x0046262C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_0046260C;
    }
    // 0x0046262C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00462630: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x00462634: bne         $v0, $zero, L_0046261C
    if (ctx->r2 != 0) {
        // 0x00462638: addu        $v0, $a1, $s0
        ctx->r2 = ADD32(ctx->r5, ctx->r16);
            goto L_0046261C;
    }
    // 0x00462638: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x0046263C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00462640:
    // 0x00462640: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x00462644: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x00462648: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x0046264C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x00462650: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x00462654: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x00462658: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x0046265C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x00462660: jr          $ra
    // 0x00462664: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x00462664: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_0042F670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042F670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0042F674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042F678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0042F67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0042F680: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x0042F684: jalr        $v0
    // 0x0042F688: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0042F688: nop

    after_0:
    // 0x0042F68C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0042F690: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0042F694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0042F698: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0042F69C: jr          $ra
    // 0x0042F6A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0042F6A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0025A524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0025A524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0025A528: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0025A52C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0025A530: lhu         $a3, 0x88($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X88);
    // 0x0025A534: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x0025A538: addiu       $a2, $a2, -0x268
    ctx->r6 = ADD32(ctx->r6, -0X268);
    // 0x0025A53C: jal         0x00245A98
    // 0x0025A540: nop

    func_00245A98(rdram, ctx);
        goto after_0;
    // 0x0025A540: nop

    after_0:
    // 0x0025A544: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0025A548: jr          $ra
    // 0x0025A54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0025A54C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00407E4C:
    // 0x00440DC0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x00440DC4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00440DC8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x00440DCC: lw          $s4, -0x690($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X690);
    // 0x00440DD0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00440DD4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00440DD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00440DDC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x00440DE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00440DE4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00440DE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00440DEC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x00440DF0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x00440DF4: addiu       $fp, $zero, 0x1D
    ctx->r30 = ADD32(0, 0X1D);
    // 0x00440DF8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00440DFC: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
    // 0x00440E00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00440E04: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x00440E08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x00440E0C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x00440E10: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x00440E14: lw          $s7, 0x14C($s4)
    ctx->r23 = MEM_W(ctx->r20, 0X14C);
L_00440E18:
    // 0x00440E18: sllv        $v0, $s6, $s0
    ctx->r2 = S32(ctx->r22 << (ctx->r16 & 31));
    // 0x00440E1C: and         $v0, $s7, $v0
    ctx->r2 = ctx->r23 & ctx->r2;
    // 0x00440E20: beql        $v0, $zero, L_00440ED0
    if (ctx->r2 == 0) {
        // 0x00440E24: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00440ED0;
    }
    goto skip_0;
    // 0x00440E24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00440E28: bnel        $s0, $s6, L_00440E48
    if (ctx->r16 != ctx->r22) {
        // 0x00440E2C: sw          $s0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r16;
            goto L_00440E48;
    }
    goto skip_1;
    // 0x00440E2C: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    skip_1:
    // 0x00440E30: lb          $v0, 0x174($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X174);
    // 0x00440E34: bnel        $v0, $fp, L_00440E48
    if (ctx->r2 != ctx->r30) {
        // 0x00440E38: sw          $s0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r16;
            goto L_00440E48;
    }
    goto skip_2;
    // 0x00440E38: sw          $s0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r16;
    skip_2:
    // 0x00440E3C: sw          $s5, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r21;
    // 0x00440E40: j           L_00407E4C
    // 0x00440E44: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
    entry_00407E4C(rdram, ctx);
    return;
    // 0x00440E44: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
L_00440E48:
    // 0x00440E48: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x00440E4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00440E50: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x00440E54: jal         0x0021DC84
    // 0x00440E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x00440E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00440E5C: jal         0x00284188
    // 0x00440E60: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00440E60: nop

    after_1:
    // 0x00440E64: bnel        $v0, $zero, L_00440E88
    if (ctx->r2 != 0) {
        // 0x00440E68: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00440E88;
    }
    goto skip_3;
    // 0x00440E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_3:
    // 0x00440E6C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00440E70: addiu       $a0, $a0, -0x9D4
    ctx->r4 = ADD32(ctx->r4, -0X9D4);
    // 0x00440E74: jal         0x00236324
    // 0x00440E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    func_00236324(rdram, ctx);
        goto after_2;
    // 0x00440E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    after_2:
    // 0x00440E7C: jal         0x00235898
    // 0x00440E80: nop

    func_00235898(rdram, ctx);
        goto after_3;
    // 0x00440E80: nop

    after_3:
    // 0x00440E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00440E88:
    // 0x00440E88: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00440E8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00440E90: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x00440E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00440E98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00440E9C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00440EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00440EA4: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00440EA8: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00440EAC: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00440EB0: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00440EB4: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00440EB8: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00440EBC: jal         0x0020A33C
    // 0x00440EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_4;
    // 0x00440EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_4:
    // 0x00440EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00440EC8: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00440ECC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00440ED0:
    // 0x00440ED0: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00440ED4: bne         $v0, $zero, L_00440E18
    if (ctx->r2 != 0) {
        // 0x00440ED8: addiu       $s2, $s2, 0x64
        ctx->r18 = ADD32(ctx->r18, 0X64);
            goto L_00440E18;
    }
    // 0x00440ED8: addiu       $s2, $s2, 0x64
    ctx->r18 = ADD32(ctx->r18, 0X64);
    // 0x00440EDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00440EE0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00440EE4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00440EE8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00440EEC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00440EF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00440EF4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00440EF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00440EFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00440F00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00440F04: jr          $ra
    // 0x00440F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00440F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0023C390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C390: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0023C394: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023C398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C39C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023C3A0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0023C3A4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C3A8: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x0023C3AC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x0023C3B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023C3B4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023C3B8: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0023C3BC: jal         0x0020EF2C
    // 0x0023C3C0: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C3C0: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    after_0:
    // 0x0023C3C4: lwc1        $f3, 0x30($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X30);
    // 0x0023C3C8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C3CC: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C3D0: lwc1        $f2, 0x34($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X34);
    // 0x0023C3D4: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0023C3D8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C3DC: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023C3E0: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0023C3E4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C3E8: add.s       $f3, $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f2.fl;
    // 0x0023C3EC: add.s       $f20, $f3, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f3.fl + ctx->f0.fl;
    // 0x0023C3F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0023C3F4: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x0023C3F8: nop

    // 0x0023C3FC: bc1t        L_0023C450
    if (c1cs) {
        // 0x0023C400: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0023C450;
    }
    // 0x0023C400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0023C404: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023C408: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023C40C: jal         0x0020EF2C
    // 0x0023C410: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023C410: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0023C414: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023C418: lwc1        $f1, 0x20($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x0023C41C: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C420: lwc1        $f3, 0x34($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0023C424: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x0023C428: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023C42C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x0023C430: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x0023C434: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0023C438: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0023C43C: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023C444: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x0023C448: j           L_0023C458
    // 0x0023C44C: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
        goto L_0023C458;
    // 0x0023C44C: div.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
L_0023C450:
    // 0x0023C450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0023C454: lwc1        $f0, 0x66A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66A4);
L_0023C458:
    // 0x0023C458: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x0023C45C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023C460: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023C464: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023C468: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023C46C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0023C470: jr          $ra
    // 0x0023C474: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x0023C474: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0023C9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C9CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0023C9D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0023C9D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C9D8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x0023C9DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C9E0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0023C9E4: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x0023C9E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023C9EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0023C9F0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0023C9F4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0023C9F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x0023C9FC: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x0023CA00: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x0023CA04: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0023CA08: sw          $a3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r7;
    // 0x0023CA0C: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x0023CA10: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x0023CA14: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0023CA18: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x0023CA1C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x0023CA20: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x0023CA24: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x0023CA28: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x0023CA2C: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x0023CA30: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x0023CA34: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x0023CA38: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x0023CA3C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x0023CA40: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x0023CA44: lw          $a3, 0x28($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X28);
    // 0x0023CA48: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x0023CA4C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x0023CA50: sw          $a3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r7;
    // 0x0023CA54: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x0023CA58: jal         0x0020EF2C
    // 0x0023CA5C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023CA5C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x0023CA60: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0023CA64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x0023CA68: jal         0x0020EF2C
    // 0x0023CA6C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023CA6C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0023CA70: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x0023CA74: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x0023CA78: jal         0x0020EFDC
    // 0x0023CA7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_0020EFDC(rdram, ctx);
        goto after_2;
    // 0x0023CA7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x0023CA80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0023CA84: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0023CA88: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0023CA8C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0023CA90: jr          $ra
    // 0x0023CA94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x0023CA94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0042E91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042E91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // turok2: reconnected split function: a stray ELF symbol at 0x0042E920 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042E920(rdram, ctx);
;}
RECOMP_FUNC void func_00255C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255C80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00255C84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00255C88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00255C90: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x00255C94: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x00255C98: jal         0x0042EB04
    // 0x00255C9C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    func_0042EB04(rdram, ctx);
        goto after_0;
    // 0x00255C9C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    after_0:
    // 0x00255CA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00255CA4: addiu       $a0, $a0, -0x550F
    ctx->r4 = ADD32(ctx->r4, -0X550F);
    // 0x00255CA8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x00255CAC: beq         $v0, $zero, L_00255D24
    if (ctx->r2 == 0) {
        // 0x00255CB0: addiu       $a0, $a0, -0x1281
        ctx->r4 = ADD32(ctx->r4, -0X1281);
            goto L_00255D24;
    }
    // 0x00255CB0: addiu       $a0, $a0, -0x1281
    ctx->r4 = ADD32(ctx->r4, -0X1281);
    // 0x00255CB4: jal         0x0025340C
    // 0x00255CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0025340C(rdram, ctx);
        goto after_1;
    // 0x00255CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00255CBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00255CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00255CC4: beq         $v1, $v0, L_00255CF4
    if (ctx->r3 == ctx->r2) {
        // 0x00255CC8: nop
    
            goto L_00255CF4;
    }
    // 0x00255CC8: nop

    // 0x00255CCC: beq         $v1, $zero, L_00255CE4
    if (ctx->r3 == 0) {
        // 0x00255CD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_00255CE4;
    }
    // 0x00255CD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00255CD4: beq         $v1, $v0, L_00255D04
    if (ctx->r3 == ctx->r2) {
        // 0x00255CD8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00255D04;
    }
    // 0x00255CD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00255CDC: beq         $v1, $v0, L_00255D14
    if (ctx->r3 == ctx->r2) {
        // 0x00255CE0: nop
    
            goto L_00255D14;
    }
    // 0x00255CE0: nop

L_00255CE4:
    // 0x00255CE4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255CE8: addiu       $a1, $a1, -0x54A0
    ctx->r5 = ADD32(ctx->r5, -0X54A0);
    // 0x00255CEC: j           L_00255D40
    // 0x00255CF0: nop

        goto L_00255D40;
    // 0x00255CF0: nop

L_00255CF4:
    // 0x00255CF4: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255CF8: addiu       $a1, $a1, -0x547C
    ctx->r5 = ADD32(ctx->r5, -0X547C);
    // 0x00255CFC: j           L_00255D40
    // 0x00255D00: nop

        goto L_00255D40;
    // 0x00255D00: nop

L_00255D04:
    // 0x00255D04: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255D08: addiu       $a1, $a1, -0x5458
    ctx->r5 = ADD32(ctx->r5, -0X5458);
    // 0x00255D0C: j           L_00255D40
    // 0x00255D10: nop

        goto L_00255D40;
    // 0x00255D10: nop

L_00255D14:
    // 0x00255D14: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255D18: addiu       $a1, $a1, -0x5434
    ctx->r5 = ADD32(ctx->r5, -0X5434);
    // 0x00255D1C: j           L_00255D40
    // 0x00255D20: nop

        goto L_00255D40;
    // 0x00255D20: nop

L_00255D24:
    // 0x00255D24: lh          $v0, 0x52A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X52A);
    // 0x00255D28: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255D2C: addiu       $a1, $a1, -0x68B8
    ctx->r5 = ADD32(ctx->r5, -0X68B8);
    // 0x00255D30: beq         $v0, $zero, L_00255D40
    if (ctx->r2 == 0) {
        // 0x00255D34: nop
    
            goto L_00255D40;
    }
    // 0x00255D34: nop

    // 0x00255D38: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x00255D3C: addiu       $a1, $a1, -0x6924
    ctx->r5 = ADD32(ctx->r5, -0X6924);
L_00255D40:
    // 0x00255D40: lw          $a0, 0x51C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X51C);
    // 0x00255D44: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x00255D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00255D4C: lw          $a3, 0xA50($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA50);
    // 0x00255D50: jal         0x00416644
    // 0x00255D54: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    func_00416644(rdram, ctx);
        goto after_2;
    // 0x00255D54: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, 0X53C);
    after_2:
    // 0x00255D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00255D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00255D60: jr          $ra
    // 0x00255D64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00255D64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045646C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041D5D8:
    // 0x0045646C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00456470: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00456474: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00456478: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x0045647C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00456480: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00456484: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x00456488: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x0045648C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00456490: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00456494: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x00456498: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0045649C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x004564A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004564A4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004564A8: jal         0x0025340C
    // 0x004564AC: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    func_0025340C(rdram, ctx);
        goto after_0;
    // 0x004564AC: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    after_0:
    // 0x004564B0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x004564B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004564B8: sll         $a1, $v1, 3
    ctx->r5 = S32(ctx->r3 << 3);
    // 0x004564BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004564C0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x004564C4: lwc1        $f1, 0x1FB4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB4);
    // 0x004564C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004564CC: lwc1        $f0, 0x13E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X13E0);
    // 0x004564D0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x004564D4: nop

    // 0x004564D8: bc1f        L_004565E8
    if (!c1cs) {
        // 0x004564DC: lui         $a0, 0xE6C2
        ctx->r4 = S32(0XE6C2 << 16);
            goto L_004565E8;
    }
    // 0x004564DC: lui         $a0, 0xE6C2
    ctx->r4 = S32(0XE6C2 << 16);
    // 0x004564E0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x004564E4: lw          $v1, 0x2030($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2030);
    // 0x004564E8: ori         $a0, $a0, 0xB449
    ctx->r4 = ctx->r4 | 0XB449;
    // 0x004564EC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x004564F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004564F4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004564F8: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x004564FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456500: lwc1        $f0, 0x13E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X13E4);
    // 0x00456504: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00456508: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0045650C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x00456510: lwc1        $f1, 0x1FB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X1FB0);
    // 0x00456514: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00456518: mfhi        $t0
    ctx->r8 = hi;
    // 0x0045651C: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x00456520: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x00456524: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00456528: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x0045652C: mtc1        $v1, $f20
    ctx->f20.u32l = ctx->r3;
    // 0x00456530: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00456534: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x00456538: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x0045653C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00456540: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00456544: lwc1        $f1, 0x30($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X30);
    // 0x00456548: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0045654C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456550: sw          $v0, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = ctx->r2;
    // 0x00456554: mul.s       $f21, $f1, $f2
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x00456558: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0045655C: mfc1        $s0, $f3
    ctx->r16 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00456560: jal         0x0027AF4C
    // 0x00456564: nop

    func_0027AF4C(rdram, ctx);
        goto after_1;
    // 0x00456564: nop

    after_1:
    // 0x00456568: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0045656C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x00456570: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00456574: lwc1        $f1, 0x13E8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X13E8);
    // 0x00456578: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x0045657C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00456580: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00456584: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00456588: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0045658C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00456590: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x00456594: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x00456598: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x0045659C: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004565A0: c.le.s      $f1, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    c1cs = ctx->f1.fl <= ctx->f21.fl;
    // 0x004565A4: nop

    // 0x004565A8: bc1t        L_004565C0
    if (c1cs) {
        // 0x004565AC: addiu       $a1, $v1, -0x2
        ctx->r5 = ADD32(ctx->r3, -0X2);
            goto L_004565C0;
    }
    // 0x004565AC: addiu       $a1, $v1, -0x2
    ctx->r5 = ADD32(ctx->r3, -0X2);
    // 0x004565B0: trunc.w.s   $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f21.fl);
    // 0x004565B4: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004565B8: j           L_0041D5D8
    // 0x004565BC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    entry_0041D5D8(rdram, ctx);
    return;
    // 0x004565BC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
L_004565C0:
    // 0x004565C0: sub.s       $f0, $f21, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f21.fl - ctx->f1.fl;
    // 0x004565C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x004565C8: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x004565CC: mfc1        $a3, $f3
    ctx->r7 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x004565D0: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x004565D4: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x004565D8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x004565DC: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x004565E0: jal         0x002778A8
    // 0x004565E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002778A8(rdram, ctx);
        goto after_2;
    // 0x004565E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_004565E8:
    // 0x004565E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x004565EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x004565F0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x004565F4: jal         0x00416168
    // 0x004565F8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_00416168(rdram, ctx);
        goto after_3;
    // 0x004565F8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x004565FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00456600: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x00456604: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00456608: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x0045660C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00456610: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00456614: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x00456618: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0045661C: jr          $ra
    // 0x00456620: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00456620: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0044034C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044034C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440350: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00440354: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00440358: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0044035C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00440360: addiu       $v0, $v0, -0x620
    ctx->r2 = ADD32(ctx->r2, -0X620);
    // 0x00440364: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x00440368: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x0044036C: jr          $ra
    // 0x00440370: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    return;
    // 0x00440370: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_002A13BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002A13BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002A13C0: sw          $zero, 0x70B0($v1)
    MEM_W(0X70B0, ctx->r3) = 0;
    // 0x002A13C4: j           L_002A13D8
    // 0x002A13C8: nop

        goto L_002A13D8;
    // 0x002A13C8: nop

L_002A13CC:
    // 0x002A13CC: lw          $v0, 0x70B0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70B0);
    // 0x002A13D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x002A13D4: sw          $v0, 0x70B0($v1)
    MEM_W(0X70B0, ctx->r3) = ctx->r2;
L_002A13D8:
    // 0x002A13D8: lw          $v0, 0x70B0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70B0);
    // 0x002A13DC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x002A13E0: bne         $v0, $zero, L_002A13CC
    if (ctx->r2 != 0) {
        // 0x002A13E4: nop
    
            goto L_002A13CC;
    }
    // 0x002A13E4: nop

    // 0x002A13E8: jr          $ra
    // 0x002A13EC: nop

    return;
    // 0x002A13EC: nop

;}
RECOMP_FUNC void func_00420454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00420454: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00420458: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0042045C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00420460: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00420464: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00420468: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x0042046C: beq         $v0, $zero, L_00420484
    if (ctx->r2 == 0) {
        // 0x00420470: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_00420484;
    }
    // 0x00420470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00420474: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x00420478: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x0042047C: j           L_00420490
    // 0x00420480: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00420490;
    // 0x00420480: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00420484:
    // 0x00420484: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x00420488: lb          $s0, 0x4($v0)
    ctx->r16 = MEM_B(ctx->r2, 0X4);
    // 0x0042048C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00420490:
    // 0x00420490: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00420494: jal         0x0041DD90
    // 0x00420498: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0041DD90(rdram, ctx);
        goto after_0;
    // 0x00420498: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x0042049C: beq         $v0, $zero, L_004204B4
    if (ctx->r2 == 0) {
        // 0x004204A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004204B4;
    }
    // 0x004204A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004204A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004204A8: sw          $v0, 0x9BC($at)
    MEM_W(0X9BC, ctx->r1) = ctx->r2;
    // 0x004204AC: j           L_004206A4
    // 0x004204B0: nop

        goto L_004206A4;
    // 0x004204B0: nop

L_004204B4:
    // 0x004204B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004204B8: lw          $v0, 0x9B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B8);
    // 0x004204BC: beq         $v0, $zero, L_00420638
    if (ctx->r2 == 0) {
        // 0x004204C0: nop
    
            goto L_00420638;
    }
    // 0x004204C0: nop

    // 0x004204C4: lw          $a1, 0x20($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X20);
    // 0x004204C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004204CC: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004204D0: jal         0x0025342C
    // 0x004204D4: nop

    func_0025342C(rdram, ctx);
        goto after_1;
    // 0x004204D4: nop

    after_1:
    // 0x004204D8: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x004204DC: addiu       $t1, $t1, 0x7078
    ctx->r9 = ADD32(ctx->r9, 0X7078);
    // 0x004204E0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x004204E4: addiu       $a1, $v0, 0x520
    ctx->r5 = ADD32(ctx->r2, 0X520);
    // 0x004204E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x004204EC: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x004204F0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x004204F4: lbu         $t2, -0x53A8($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X53A8);
    // 0x004204F8: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x004204FC: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, 0X4F8);
L_00420500:
    // 0x00420500: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00420504: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x00420508: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x0042050C: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x00420510: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x00420514: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x00420518: sw          $t5, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r13;
    // 0x0042051C: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x00420520: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00420524: bne         $v1, $v0, L_00420500
    if (ctx->r3 != ctx->r2) {
        // 0x00420528: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_00420500;
    }
    // 0x00420528: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x0042052C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00420530: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00420534: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00420538: addiu       $a0, $a0, -0x5528
    ctx->r4 = ADD32(ctx->r4, -0X5528);
    // 0x0042053C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00420540: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x00420544: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x00420548: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x0042054C: addiu       $v1, $v0, 0x500
    ctx->r3 = ADD32(ctx->r2, 0X500);
    // 0x00420550: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
L_00420554:
    // 0x00420554: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x00420558: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x0042055C: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x00420560: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x00420564: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x00420568: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x0042056C: sw          $t5, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r13;
    // 0x00420570: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x00420574: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00420578: bne         $v1, $v0, L_00420554
    if (ctx->r3 != ctx->r2) {
        // 0x0042057C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_00420554;
    }
    // 0x0042057C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x00420580: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00420584: lw          $v0, 0x201C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X201C);
    // 0x00420588: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x0042058C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x00420590: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00420594: lw          $v1, -0x5524($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5524);
    // 0x00420598: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0042059C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205A0: swc1        $f0, -0x5350($at)
    MEM_W(-0X5350, ctx->r1) = ctx->f0.u32l;
    // 0x004205A4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x004205A8: lui         $t0, 0x800F
    ctx->r8 = S32(0X800F << 16);
    // 0x004205AC: addiu       $t0, $t0, -0x4540
    ctx->r8 = ADD32(ctx->r8, -0X4540);
    // 0x004205B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205B4: swc1        $f0, -0x534C($at)
    MEM_W(-0X534C, ctx->r1) = ctx->f0.u32l;
    // 0x004205B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004205BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004205C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205C4: swc1        $f0, -0x5348($at)
    MEM_W(-0X5348, ctx->r1) = ctx->f0.u32l;
    // 0x004205C8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x004205CC: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    // 0x004205D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x004205D4: sw          $v1, 0x60($at)
    MEM_W(0X60, ctx->r1) = ctx->r3;
    // 0x004205D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205DC: sb          $t2, -0x53A8($at)
    MEM_B(-0X53A8, ctx->r1) = ctx->r10;
    // 0x004205E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004205E4: swc1        $f0, -0x5344($at)
    MEM_W(-0X5344, ctx->r1) = ctx->f0.u32l;
    // 0x004205E8: blez        $a0, L_00420610
    if (SIGNED(ctx->r4) <= 0) {
        // 0x004205EC: addiu       $a3, $v0, 0x684
        ctx->r7 = ADD32(ctx->r2, 0X684);
            goto L_00420610;
    }
    // 0x004205EC: addiu       $a3, $v0, 0x684
    ctx->r7 = ADD32(ctx->r2, 0X684);
L_004205F0:
    // 0x004205F0: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x004205F4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x004205F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x004205FC: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x00420600: lw          $v0, 0x30($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X30);
    // 0x00420604: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00420608: bne         $v0, $zero, L_004205F0
    if (ctx->r2 != 0) {
        // 0x0042060C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_004205F0;
    }
    // 0x0042060C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_00420610:
    // 0x00420610: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
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
L_00420638:
    // 0x00420638: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x0042063C: lw          $a1, 0x9C4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C4);
    // 0x00420640: jal         0x00426064
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00426064(rdram, ctx);
        goto after_2;
    // 0x00420644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
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
        goto after_3;
    // 0x0042069C: nop

    after_3:
    // 0x004206A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_004206A4:
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
RECOMP_FUNC void func_00257644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257644: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257648: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025764C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00257650: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00257654: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00257658: lwc1        $f1, 0x1C($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X1C);
    // 0x0025765C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00257660: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00257664: nop

    // 0x00257668: bc1f        L_00257694
    if (!c1cs) {
        // 0x0025766C: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_00257694;
    }
    // 0x0025766C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00257670: jal         0x002685F0
    // 0x00257674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002685F0(rdram, ctx);
        goto after_0;
    // 0x00257674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00257678: beq         $v0, $zero, L_00257694
    if (ctx->r2 == 0) {
        // 0x0025767C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00257694;
    }
    // 0x0025767C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00257680: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00257684: jal         0x0024E5F0
    // 0x00257688: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0024E5F0(rdram, ctx);
        goto after_1;
    // 0x00257688: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x0025768C: j           L_00257698
    // 0x00257690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00257698;
    // 0x00257690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_00257694:
    // 0x00257694: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00257698:
    // 0x00257698: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0025769C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002576A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002576A4: jr          $ra
    // 0x002576A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002576A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00419788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0041978C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00419790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00419794: jal         0x002859DC
    // 0x00419798: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002859DC(rdram, ctx);
        goto after_0;
    // 0x00419798: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0041979C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x004197A0: beq         $v0, $zero, L_004197D4
    if (ctx->r2 == 0) {
        // 0x004197A4: lui         $v1, 0xFEFF
        ctx->r3 = S32(0XFEFF << 16);
            goto L_004197D4;
    }
    // 0x004197A4: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x004197A8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x004197AC: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x004197B0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x004197B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004197B8: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x004197BC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x004197C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x004197C4: bne         $v1, $v0, L_004197E8
    if (ctx->r3 != ctx->r2) {
        // 0x004197C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004197E8;
    }
    // 0x004197C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004197CC: j           L_004197E8
    // 0x004197D0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_004197E8;
    // 0x004197D0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_004197D4:
    // 0x004197D4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x004197D8: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x004197DC: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x004197E0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x004197E4: sw          $v1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r3;
L_004197E8:
    // 0x004197E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004197EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004197F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004197F4: jr          $ra
    // 0x004197F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004197F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00464E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00464E68: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00464E6C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x00464E70: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x00464E74: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x00464E78: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x00464E7C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x00464E80: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x00464E84: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x00464E88: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x00464E8C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x00464E90: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x00464E94: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x00464E98: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00464E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00464EA0: jal         0x002017D4
    // 0x00464EA4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00464EA4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_0:
    // 0x00464EA8: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00464EAC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00464EB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00464EB4: jal         0x002017D4
    // 0x00464EB8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00464EB8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x00464EBC: lw          $a0, 0x54($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X54);
    // 0x00464EC0: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x00464EC4: jal         0x002017D4
    // 0x00464EC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_002017D4(rdram, ctx);
        goto after_2;
    // 0x00464EC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x00464ECC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00464ED0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00464ED4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x00464ED8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x00464EDC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x00464EE0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00464EE4: bltz        $s0, L_00465084
    if (SIGNED(ctx->r16) < 0) {
        // 0x00464EE8: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_00465084;
    }
    // 0x00464EE8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x00464EEC: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_00464EF0:
    // 0x00464EF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x00464EF4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00464EF8: slt         $v0, $t0, $s6
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00464EFC: bne         $v0, $zero, L_00465064
    if (ctx->r2 != 0) {
        // 0x00464F00: addu        $a2, $s6, $s7
        ctx->r6 = ADD32(ctx->r22, ctx->r23);
            goto L_00465064;
    }
    // 0x00464F00: addu        $a2, $s6, $s7
    ctx->r6 = ADD32(ctx->r22, ctx->r23);
L_00464F04:
    // 0x00464F04: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x00464F08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x00464F0C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x00464F10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00464F14: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x00464F18: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x00464F1C: bne         $v0, $zero, L_00465050
    if (ctx->r2 != 0) {
        // 0x00464F20: nop
    
            goto L_00465050;
    }
    // 0x00464F20: nop

    // 0x00464F24: lw          $a0, 0x50($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X50);
    // 0x00464F28: lw          $a1, 0x20($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X20);
    // 0x00464F2C: jal         0x0020185C
    // 0x00464F30: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_0020185C(rdram, ctx);
        goto after_3;
    // 0x00464F30: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x00464F34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464F38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00464F3C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x00464F40: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x00464F44: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x00464F48: addiu       $v0, $v0, 0xD00
    ctx->r2 = ADD32(ctx->r2, 0XD00);
    // 0x00464F4C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00464F50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00464F54: addiu       $v0, $v0, 0x5F6C
    ctx->r2 = ADD32(ctx->r2, 0X5F6C);
    // 0x00464F58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00464F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00464F60: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x00464F64: jal         0x0020367C
    // 0x00464F68: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_0020367C(rdram, ctx);
        goto after_4;
    // 0x00464F68: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x00464F6C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00464F70: beq         $s5, $zero, L_00465050
    if (ctx->r21 == 0) {
        // 0x00464F74: nop
    
            goto L_00465050;
    }
    // 0x00464F74: nop

    // 0x00464F78: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x00464F7C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x00464F80: beq         $v0, $zero, L_00465044
    if (ctx->r2 == 0) {
        // 0x00464F84: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00465044;
    }
    // 0x00464F84: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00464F88: jal         0x002017D4
    // 0x00464F8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00464F8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x00464F90: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00464F94: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x00464F98: blez        $s3, L_00464FEC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00464F9C: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00464FEC;
    }
    // 0x00464F9C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00464FA0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_00464FA4:
    // 0x00464FA4: sw          $s5, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r21;
    // 0x00464FA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00464FAC: jal         0x00214D04
    // 0x00464FB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_00214D04(rdram, ctx);
        goto after_6;
    // 0x00464FB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x00464FB4: jal         0x00214DBC
    // 0x00464FB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00214DBC(rdram, ctx);
        goto after_7;
    // 0x00464FB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x00464FBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00464FC0: beql        $s0, $zero, L_00464FE0
    if (ctx->r16 == 0) {
        // 0x00464FC4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00464FE0;
    }
    goto skip_0;
    // 0x00464FC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x00464FC8: jal         0x0020BE08
    // 0x00464FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_8;
    // 0x00464FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x00464FD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00464FD4: jal         0x002051F4
    // 0x00464FD8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_9;
    // 0x00464FD8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x00464FDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_00464FE0:
    // 0x00464FE0: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00464FE4: bne         $v0, $zero, L_00464FA4
    if (ctx->r2 != 0) {
        // 0x00464FE8: addiu       $s1, $s1, 0x90
        ctx->r17 = ADD32(ctx->r17, 0X90);
            goto L_00464FA4;
    }
    // 0x00464FE8: addiu       $s1, $s1, 0x90
    ctx->r17 = ADD32(ctx->r17, 0X90);
L_00464FEC:
    // 0x00464FEC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00464FF0: jal         0x002017D4
    // 0x00464FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_10;
    // 0x00464FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x00464FF8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00464FFC: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x00465000: blez        $s3, L_00465044
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00465004: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00465044;
    }
    // 0x00465004: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00465008: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
L_0046500C:
    // 0x0046500C: jal         0x00215944
    // 0x00465010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00215944(rdram, ctx);
        goto after_11;
    // 0x00465010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x00465014: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00465018: beql        $s0, $zero, L_00465038
    if (ctx->r16 == 0) {
        // 0x0046501C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00465038;
    }
    goto skip_1;
    // 0x0046501C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00465020: jal         0x0020BE08
    // 0x00465024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020BE08(rdram, ctx);
        goto after_12;
    // 0x00465024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x00465028: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0046502C: jal         0x002051F4
    // 0x00465030: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002051F4(rdram, ctx);
        goto after_13;
    // 0x00465030: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
    // 0x00465034: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00465038:
    // 0x00465038: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x0046503C: bne         $v0, $zero, L_0046500C
    if (ctx->r2 != 0) {
        // 0x00465040: addiu       $s2, $s2, 0x198
        ctx->r18 = ADD32(ctx->r18, 0X198);
            goto L_0046500C;
    }
    // 0x00465040: addiu       $s2, $s2, 0x198
    ctx->r18 = ADD32(ctx->r18, 0X198);
L_00465044:
    // 0x00465044: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00465048: jal         0x002051F4
    // 0x0046504C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_14;
    // 0x0046504C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_14:
L_00465050:
    // 0x00465050: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x00465054: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00465058: slt         $v0, $t0, $s6
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x0046505C: beq         $v0, $zero, L_00464F04
    if (ctx->r2 == 0) {
        // 0x00465060: addu        $a2, $s6, $s7
        ctx->r6 = ADD32(ctx->r22, ctx->r23);
            goto L_00464F04;
    }
    // 0x00465060: addu        $a2, $s6, $s7
    ctx->r6 = ADD32(ctx->r22, ctx->r23);
L_00465064:
    // 0x00465064: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00465068: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x0046506C: addu        $s7, $s7, $v1
    ctx->r23 = ADD32(ctx->r23, ctx->r3);
    // 0x00465070: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x00465074: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00465078: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x0046507C: beq         $v0, $zero, L_00464EF0
    if (ctx->r2 == 0) {
        // 0x00465080: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_00464EF0;
    }
    // 0x00465080: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_00465084:
    // 0x00465084: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00465088: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x0046508C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x00465090: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x00465094: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x00465098: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x0046509C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x004650A0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x004650A4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x004650A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x004650AC: jr          $ra
    // 0x004650B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x004650B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00289A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289A94: jr          $ra
    // 0x00289A98: nop

    return;
    // 0x00289A98: nop

;}
RECOMP_FUNC void func_00214E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00214E8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00214E90: lhu         $v0, 0x88($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X88);
    // 0x00214E94: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00214E98: bne         $v0, $zero, L_00214ECC
    if (ctx->r2 != 0) {
        // 0x00214E9C: nop
    
            goto L_00214ECC;
    }
    // 0x00214E9C: nop

    // 0x00214EA0: lbu         $v1, 0x8A($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8A);
    // 0x00214EA4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00214EA8: lbu         $v0, 0x6D1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6D1B);
    // 0x00214EAC: beq         $v1, $v0, L_00214ECC
    if (ctx->r3 == ctx->r2) {
        // 0x00214EB0: nop
    
            goto L_00214ECC;
    }
    // 0x00214EB0: nop

    // 0x00214EB4: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x00214EB8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00214EBC: lw          $a1, -0x3528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3528);
    // 0x00214EC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214EC4: jal         0x00205A2C
    // 0x00214EC8: or          $a1, $v0, $a1
    ctx->r5 = ctx->r2 | ctx->r5;
    func_00205A2C(rdram, ctx);
        goto after_0;
    // 0x00214EC8: or          $a1, $v0, $a1
    ctx->r5 = ctx->r2 | ctx->r5;
    after_0:
L_00214ECC:
    // 0x00214ECC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00214ED0: jr          $ra
    // 0x00214ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00214ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0042CF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0042CF90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0042CF94: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x0042CF98: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x0042CF9C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x0042CFA0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x0042CFA4: addiu       $a2, $zero, -0x1B0
    ctx->r6 = ADD32(0, -0X1B0);
    // 0x0042CFA8: addiu       $a1, $zero, 0x1B0
    ctx->r5 = ADD32(0, 0X1B0);
    // 0x0042CFAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0042CFB0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x0042CFB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042CFB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0042CFBC: sw          $s4, 0x3600($s4)
    MEM_W(0X3600, ctx->r20) = ctx->r20;
    // turok2: reconnected split function: a stray ELF symbol at 0x0042CFC0 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_0042CFC0(rdram, ctx);
;}
RECOMP_FUNC void func_00290D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00290D90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00290D94: lwc1        $f0, -0x5C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C90);
    // 0x00290D98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00290D9C: lwc1        $f1, -0x5C8C($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5C8C);
    // 0x00290DA0: bgez        $a0, L_00290DB4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x00290DA4: nop
    
            goto L_00290DB4;
    }
    // 0x00290DA4: nop

    // 0x00290DA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00290DAC: lwc1        $f1, -0x5C88($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5C88);
    // 0x00290DB0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_00290DB4:
    // 0x00290DB4: beq         $a0, $zero, L_00290DD8
    if (ctx->r4 == 0) {
        // 0x00290DB8: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_00290DD8;
    }
    // 0x00290DB8: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_00290DBC:
    // 0x00290DBC: beq         $v0, $zero, L_00290DC8
    if (ctx->r2 == 0) {
        // 0x00290DC0: sra         $a0, $a0, 1
        ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
            goto L_00290DC8;
    }
    // 0x00290DC0: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x00290DC4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
L_00290DC8:
    // 0x00290DC8: nop

    // 0x00290DCC: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00290DD0: bne         $a0, $zero, L_00290DBC
    if (ctx->r4 != 0) {
        // 0x00290DD4: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_00290DBC;
    }
    // 0x00290DD4: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
L_00290DD8:
    // 0x00290DD8: jr          $ra
    // 0x00290DDC: nop

    return;
    // 0x00290DDC: nop

;}
RECOMP_FUNC void func_00226134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00226138: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0022613C: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    // 0x00226140: jal         0x002017D4
    // 0x00226144: nop

    func_002017D4(rdram, ctx);
        goto after_0;
    // 0x00226144: nop

    after_0:
    // 0x00226148: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0022614C: jal         0x002017D4
    // 0x00226150: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x00226150: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00226154: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00226158: jr          $ra
    // 0x0022615C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0022615C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045AB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00421BA8:
    // 0x0045AB04: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AB08: lw          $v0, 0x9B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9B4);
    // 0x0045AB0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0045AB10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0045AB14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0045AB18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0045AB1C: beq         $v0, $zero, L_0045AB44
    if (ctx->r2 == 0) {
        // 0x0045AB20: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0045AB44;
    }
    // 0x0045AB20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0045AB24: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AB28: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0045AB2C: beq         $v0, $zero, L_0045AB64
    if (ctx->r2 == 0) {
        // 0x0045AB30: nop
    
            goto L_0045AB64;
    }
    // 0x0045AB30: nop

    // 0x0045AB34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AB38: addiu       $v0, $v0, 0x47F4
    ctx->r2 = ADD32(ctx->r2, 0X47F4);
    // 0x0045AB3C: j           L_00421BA8
    // 0x0045AB40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00421BA8(rdram, ctx);
    return;
    // 0x0045AB40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0045AB44:
    // 0x0045AB44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AB48: lw          $v0, 0x984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X984);
    // 0x0045AB4C: beq         $v0, $zero, L_0045AB64
    if (ctx->r2 == 0) {
        // 0x0045AB50: nop
    
            goto L_0045AB64;
    }
    // 0x0045AB50: nop

    // 0x0045AB54: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AB58: addiu       $v0, $v0, 0x4804
    ctx->r2 = ADD32(ctx->r2, 0X4804);
    // 0x0045AB5C: j           L_00421BA8
    // 0x0045AB60: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    entry_00421BA8(rdram, ctx);
    return;
    // 0x0045AB60: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0045AB64:
    // 0x0045AB64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045AB68: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045AB6C: beq         $v0, $zero, L_0045ABA8
    if (ctx->r2 == 0) {
        // 0x0045AB70: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0045ABA8;
    }
    // 0x0045AB70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0045AB74: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x0045AB78: lw          $s0, 0x2028($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2028);
    // 0x0045AB7C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0045AB80: addiu       $v0, $v0, 0x48F8
    ctx->r2 = ADD32(ctx->r2, 0X48F8);
    // 0x0045AB84: jal         0x004160F0
    // 0x0045AB88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0045AB88: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0045AB8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0045AB90: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0045AB94: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0045AB98: addiu       $a1, $a1, 0x1410
    ctx->r5 = ADD32(ctx->r5, 0X1410);
    // 0x0045AB9C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0045ABA0: jal         0x0029E3E0
    // 0x0045ABA4: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0045ABA4: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    after_1:
L_0045ABA8:
    // 0x0045ABA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0045ABAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0045ABB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0045ABB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0045ABB8: jr          $ra
    // 0x0045ABBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0045ABBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00261E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00261E10: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00261E14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00261E18: lwc1        $f14, 0x7B3C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B3C);
    // 0x00261E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00261E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00261E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00261E28: jal         0x002119FC
    // 0x00261E2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00261E2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x00261E30: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x00261E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00261E38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00261E3C: jr          $ra
    // 0x00261E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00261E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00202EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00202EEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00202EF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00202EF4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00202EF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00202EFC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x00202F00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00202F04: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00202F08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00202F0C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
L_00202F10:
    // 0x00202F10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202F14: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00202F18: lw          $v0, -0x725C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X725C);
    // 0x00202F1C: beql        $v0, $zero, L_00202F64
    if (ctx->r2 == 0) {
        // 0x00202F20: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_00202F64;
    }
    goto skip_0;
    // 0x00202F20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x00202F24: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x00202F28: lw          $v0, -0x7DE8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7DE8);
    // 0x00202F2C: bnel        $v0, $s0, L_00202F54
    if (ctx->r2 != ctx->r16) {
        // 0x00202F30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00202F54;
    }
    goto skip_1;
    // 0x00202F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x00202F34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202F38: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00202F3C: sw          $zero, -0x7DF8($at)
    MEM_W(-0X7DF8, ctx->r1) = 0;
    // 0x00202F40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00202F44: jal         0x0020656C
    // 0x00202F48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0020656C(rdram, ctx);
        goto after_0;
    // 0x00202F48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00202F4C: j           L_00202F64
    // 0x00202F50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_00202F64;
    // 0x00202F50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00202F54:
    // 0x00202F54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202F58: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00202F5C: sw          $s2, -0x7DF0($at)
    MEM_W(-0X7DF0, ctx->r1) = ctx->r18;
    // 0x00202F60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_00202F64:
    // 0x00202F64: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x00202F68: bne         $v0, $zero, L_00202F10
    if (ctx->r2 != 0) {
        // 0x00202F6C: sll         $v1, $s0, 2
        ctx->r3 = S32(ctx->r16 << 2);
            goto L_00202F10;
    }
    // 0x00202F6C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x00202F70: beq         $s1, $zero, L_00203050
    if (ctx->r17 == 0) {
        // 0x00202F74: nop
    
            goto L_00203050;
    }
    // 0x00202F74: nop

    // 0x00202F78: jal         0x0029DFF0
    // 0x00202F7C: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x00202F7C: nop

    after_1:
    // 0x00202F80: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00202F84: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00202F88: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00202F8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00202F90: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00202F94: beq         $v1, $zero, L_00202FC0
    if (ctx->r3 == 0) {
        // 0x00202F98: nop
    
            goto L_00202FC0;
    }
    // 0x00202F98: nop

    // 0x00202F9C: jal         0x0029E010
    // 0x00202FA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x00202FA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00202FA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00202FA8: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00202FAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202FB0: jal         0x0029B820
    // 0x00202FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00202FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00202FB8: j           L_00202FCC
    // 0x00202FBC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_00202FCC;
    // 0x00202FBC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00202FC0:
    // 0x00202FC0: jal         0x0029E010
    // 0x00202FC4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x00202FC4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
    // 0x00202FC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00202FCC:
    // 0x00202FCC: blez        $s1, L_00202FF8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x00202FD0: nop
    
            goto L_00202FF8;
    }
    // 0x00202FD0: nop

L_00202FD4:
    // 0x00202FD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00202FD8: addiu       $a0, $a0, -0x7230
    ctx->r4 = ADD32(ctx->r4, -0X7230);
    // 0x00202FDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00202FE0: jal         0x0029B6F0
    // 0x00202FE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x00202FE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x00202FE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00202FEC: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x00202FF0: bne         $v0, $zero, L_00202FD4
    if (ctx->r2 != 0) {
        // 0x00202FF4: nop
    
            goto L_00202FD4;
    }
    // 0x00202FF4: nop

L_00202FF8:
    // 0x00202FF8: jal         0x0029DFF0
    // 0x00202FFC: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x00202FFC: nop

    after_6:
    // 0x00203000: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00203004: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00203008: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x0020300C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00203010: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00203014: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00203018: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020301C: beq         $v1, $v0, L_00203048
    if (ctx->r3 == ctx->r2) {
        // 0x00203020: nop
    
            goto L_00203048;
    }
    // 0x00203020: nop

    // 0x00203024: jal         0x0029E010
    // 0x00203028: nop

    func_0029E010(rdram, ctx);
        goto after_7;
    // 0x00203028: nop

    after_7:
    // 0x0020302C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00203030: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00203034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00203038: jal         0x0029B6F0
    // 0x0020303C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x0020303C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x00203040: j           L_00203050
    // 0x00203044: nop

        goto L_00203050;
    // 0x00203044: nop

L_00203048:
    // 0x00203048: jal         0x0029E010
    // 0x0020304C: nop

    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x0020304C: nop

    after_9:
L_00203050:
    // 0x00203050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00203054: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00203058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0020305C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00203060: jr          $ra
    // 0x00203064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00203064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0040DBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040DBD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0040DBDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0040DBE0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x0040DBE4: beq         $v0, $zero, L_0040DBF4
    if (ctx->r2 == 0) {
        // 0x0040DBE8: nop
    
            goto L_0040DBF4;
    }
    // 0x0040DBE8: nop

    // 0x0040DBEC: jal         0x00243414
    // 0x0040DBF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x0040DBF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_0040DBF4:
    // 0x0040DBF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040DBF8: jr          $ra
    // 0x0040DBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0040DBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0027AD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027AD88: jr          $ra
    // 0x0027AD8C: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
    return;
    // 0x0027AD8C: sw          $a1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0027BB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027BB80: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BB84: lw          $v0, 0x56B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56B4);
    // 0x0027BB88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0027BB8C: bne         $v0, $zero, L_0027BBA4
    if (ctx->r2 != 0) {
        // 0x0027BB90: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0027BBA4;
    }
    // 0x0027BB90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0027BB94: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BB98: lw          $v0, 0x56B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56B8);
    // 0x0027BB9C: beq         $v0, $zero, L_0027BBB0
    if (ctx->r2 == 0) {
        // 0x0027BBA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_0027BBB0;
    }
    // 0x0027BBA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0027BBA4:
    // 0x0027BBA4: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0027BBA8: addiu       $v0, $v0, 0x56B0
    ctx->r2 = ADD32(ctx->r2, 0X56B0);
    // 0x0027BBAC: lw          $v0, 0x1B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B4);
L_0027BBB0:
    // 0x0027BBB0: beq         $v0, $zero, L_0027BC28
    if (ctx->r2 == 0) {
        // 0x0027BBB4: nop
    
            goto L_0027BC28;
    }
    // 0x0027BBB4: nop

    // 0x0027BBB8: jal         0x0042F344
    // 0x0027BBBC: nop

    func_0042F344(rdram, ctx);
        goto after_0;
    // 0x0027BBBC: nop

    after_0:
    // 0x0027BBC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x0027BBC4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
L_0027BBC8:
    // 0x0027BBC8: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BBCC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BBD0: lw          $v0, 0x5F6C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F6C);
    // 0x0027BBD4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BBD8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BBDC: lw          $v1, 0x5F70($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5F70);
    // 0x0027BBE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x0027BBE4: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BBE8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BBEC: sw          $zero, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = 0;
    // 0x0027BBF0: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BBF4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BBF8: sw          $zero, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = 0;
    // 0x0027BBFC: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BC00: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BC04: sw          $zero, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = 0;
    // 0x0027BC08: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x0027BC0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0027BC10: lui         $at, 0x800F
    ctx->r1 = S32(0X800F << 16);
    // 0x0027BC14: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0027BC18: sw          $v0, 0x5F74($at)
    MEM_W(0X5F74, ctx->r1) = ctx->r2;
    // 0x0027BC1C: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x0027BC20: bne         $v0, $zero, L_0027BBC8
    if (ctx->r2 != 0) {
        // 0x0027BC24: addiu       $a0, $a0, 0x224
        ctx->r4 = ADD32(ctx->r4, 0X224);
            goto L_0027BBC8;
    }
    // 0x0027BC24: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
L_0027BC28:
    // 0x0027BC28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0027BC2C: jr          $ra
    // 0x0027BC30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0027BC30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00445684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00445684: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x00445688: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0044568C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00445690: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x00445694: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00445698: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0044569C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x004456A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004456A4: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x004456A8: jal         0x00246108
    // 0x004456AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x004456AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x004456B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004456B4: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x004456B8: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x004456BC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x004456C0: jal         0x00245BAC
    // 0x004456C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x004456C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004456C8: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x004456CC: beq         $v0, $zero, L_004456E0
    if (ctx->r2 == 0) {
        // 0x004456D0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_004456E0;
    }
    // 0x004456D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004456D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004456D8: jal         0x00243414
    // 0x004456DC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x004456DC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
L_004456E0:
    // 0x004456E0: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x004456E4: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x004456E8: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x004456EC: jr          $ra
    // 0x004456F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x004456F0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_00254044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00254044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00254048: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025404C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00254050: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00254054: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00254058: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x0025405C: lw          $a2, 0x520($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X520);
    // 0x00254060: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x00254064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00254068: beql        $v1, $v0, L_00254070
    if (ctx->r3 == ctx->r2) {
        // 0x0025406C: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_00254070;
    }
    goto skip_0;
    // 0x0025406C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_00254070:
    // 0x00254070: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x00254074: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x00254078: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0025407C: jal         0x00225EBC
    // 0x00254080: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x00254080: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x00254084: bnel        $v0, $zero, L_002540B8
    if (ctx->r2 != 0) {
        // 0x00254088: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_002540B8;
    }
    goto skip_1;
    // 0x00254088: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x0025408C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x00254090: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x00254094: jal         0x00225EBC
    // 0x00254098: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x00254098: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x0025409C: bnel        $v0, $zero, L_002540B8
    if (ctx->r2 != 0) {
        // 0x002540A0: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_002540B8;
    }
    goto skip_2;
    // 0x002540A0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x002540A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002540A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x002540AC: jal         0x00225EBC
    // 0x002540B0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x002540B0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x002540B4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_002540B8:
    // 0x002540B8: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x002540BC: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x002540C0: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x002540C4: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x002540C8: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x002540CC: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x002540D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x002540D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002540D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002540DC: jr          $ra
    // 0x002540E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x002540E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0028D820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028D820: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0028D824: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0028D828: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0028D82C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x0028D830: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028D834: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028D838: jal         0x00266B80
    // 0x0028D83C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x0028D83C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x0028D840: lui         $v1, 0x7FF8
    ctx->r3 = S32(0X7FF8 << 16);
    // 0x0028D844: addu        $s4, $v0, $v1
    ctx->r20 = ADD32(ctx->r2, ctx->r3);
    // 0x0028D848: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x0028D84C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0028D850: sltu        $v0, $v0, $s4
    ctx->r2 = ctx->r2 < ctx->r20 ? 1 : 0;
    // 0x0028D854: beql        $v0, $zero, L_0028D85C
    if (ctx->r2 == 0) {
        // 0x0028D858: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_0028D85C;
    }
    goto skip_0;
    // 0x0028D858: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    skip_0:
L_0028D85C:
    // 0x0028D85C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D860: addiu       $a0, $a0, 0x6A0
    ctx->r4 = ADD32(ctx->r4, 0X6A0);
    // 0x0028D864: addiu       $v1, $zero, 0xCF7
    ctx->r3 = ADD32(0, 0XCF7);
L_0028D868:
    // 0x0028D868: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x0028D86C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028D870: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028D874: bne         $v0, $zero, L_0028D868
    if (ctx->r2 != 0) {
        // 0x0028D878: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0028D868;
    }
    // 0x0028D878: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0028D87C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0028D880: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D884: addiu       $a0, $a0, 0x1298
    ctx->r4 = ADD32(ctx->r4, 0X1298);
    // 0x0028D888: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_0028D88C:
    // 0x0028D88C: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x0028D890: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028D894: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028D898: bne         $v0, $zero, L_0028D88C
    if (ctx->r2 != 0) {
        // 0x0028D89C: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0028D88C;
    }
    // 0x0028D89C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0028D8A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0028D8A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0028D8A8: addiu       $a0, $a0, 0xFC0
    ctx->r4 = ADD32(ctx->r4, 0XFC0);
    // 0x0028D8AC: addiu       $v1, $zero, 0x17F
    ctx->r3 = ADD32(0, 0X17F);
L_0028D8B0:
    // 0x0028D8B0: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x0028D8B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028D8B8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x0028D8BC: bne         $v0, $zero, L_0028D8B0
    if (ctx->r2 != 0) {
        // 0x0028D8C0: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_0028D8B0;
    }
    // 0x0028D8C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x0028D8C4: jal         0x0029E2F0
    // 0x0028D8C8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_0029E2F0(rdram, ctx);
        goto after_1;
    // 0x0028D8C8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_1:
    // 0x0028D8CC: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
    // 0x0028D8D0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x0028D8D4: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_0028D8D8:
    // 0x0028D8D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0028D8DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D8E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028D8E4: sh          $a0, 0x1318($at)
    MEM_H(0X1318, ctx->r1) = ctx->r4;
    // 0x0028D8E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D8EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028D8F0: sb          $v1, 0x131A($at)
    MEM_B(0X131A, ctx->r1) = ctx->r3;
    // 0x0028D8F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D8F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0028D8FC: sb          $v1, 0x131B($at)
    MEM_B(0X131B, ctx->r1) = ctx->r3;
    // 0x0028D900: sltiu       $v0, $s1, 0x18
    ctx->r2 = ctx->r17 < 0X18 ? 1 : 0;
    // 0x0028D904: bne         $v0, $zero, L_0028D8D8
    if (ctx->r2 != 0) {
        // 0x0028D908: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_0028D8D8;
    }
    // 0x0028D908: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x0028D90C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0028D910: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0028D914: addiu       $v0, $v0, 0x1294
    ctx->r2 = ADD32(ctx->r2, 0X1294);
    // 0x0028D918: addiu       $s3, $v0, -0x4
    ctx->r19 = ADD32(ctx->r2, -0X4);
    // 0x0028D91C: addiu       $s2, $v0, -0x2D4
    ctx->r18 = ADD32(ctx->r2, -0X2D4);
    // 0x0028D920: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x0028D924: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
L_0028D928:
    // 0x0028D928: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x0028D92C: sll         $s0, $s1, 4
    ctx->r16 = S32(ctx->r17 << 4);
    // 0x0028D930: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D934: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028D938: sw          $zero, 0xFC0($at)
    MEM_W(0XFC0, ctx->r1) = 0;
    // 0x0028D93C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D940: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028D944: sw          $zero, 0xFC4($at)
    MEM_W(0XFC4, ctx->r1) = 0;
    // 0x0028D948: jal         0x0028E9E0
    // 0x0028D94C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_0028E9E0(rdram, ctx);
        goto after_2;
    // 0x0028D94C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0028D950: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0028D954: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x0028D958: sb          $s1, 0xFCA($at)
    MEM_B(0XFCA, ctx->r1) = ctx->r17;
    // 0x0028D95C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0028D960: sltiu       $v0, $s1, 0x18
    ctx->r2 = ctx->r17 < 0X18 ? 1 : 0;
    // 0x0028D964: bne         $v0, $zero, L_0028D928
    if (ctx->r2 != 0) {
        // 0x0028D968: addiu       $s2, $s2, 0x10
        ctx->r18 = ADD32(ctx->r18, 0X10);
            goto L_0028D928;
    }
    // 0x0028D968: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x0028D96C: addiu       $s1, $s3, -0xBCC
    ctx->r17 = ADD32(ctx->r19, -0XBCC);
    // 0x0028D970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0028D974: addiu       $a1, $s3, -0xBB4
    ctx->r5 = ADD32(ctx->r19, -0XBB4);
    // 0x0028D978: jal         0x0029B030
    // 0x0028D97C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x0028D97C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_3:
    // 0x0028D980: addiu       $s0, $s3, -0x150
    ctx->r16 = ADD32(ctx->r19, -0X150);
    // 0x0028D984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028D988: addiu       $a1, $s3, -0x138
    ctx->r5 = ADD32(ctx->r19, -0X138);
    // 0x0028D98C: jal         0x0029B030
    // 0x0028D990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x0028D990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x0028D994: addiu       $a0, $s3, -0x118
    ctx->r4 = ADD32(ctx->r19, -0X118);
    // 0x0028D998: addiu       $a1, $s3, -0x100
    ctx->r5 = ADD32(ctx->r19, -0X100);
    // 0x0028D99C: jal         0x0029B030
    // 0x0028D9A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x0028D9A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0028D9A4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x0028D9A8: sh          $v0, 0xCB8($s1)
    MEM_H(0XCB8, ctx->r17) = ctx->r2;
    // 0x0028D9AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x0028D9B0: sh          $v0, 0xCBA($s1)
    MEM_H(0XCBA, ctx->r17) = ctx->r2;
    // 0x0028D9B4: addiu       $v0, $s3, 0x8
    ctx->r2 = ADD32(ctx->r19, 0X8);
    // 0x0028D9B8: lui         $s2, 0x15
    ctx->r18 = S32(0X15 << 16);
    // 0x0028D9BC: addiu       $s2, $s2, -0x6000
    ctx->r18 = ADD32(ctx->r18, -0X6000);
    // 0x0028D9C0: sw          $v0, 0xCC4($s1)
    MEM_W(0XCC4, ctx->r17) = ctx->r2;
    // 0x0028D9C4: lui         $v0, 0xB000
    ctx->r2 = S32(0XB000 << 16);
    // 0x0028D9C8: or          $v0, $s2, $v0
    ctx->r2 = ctx->r18 | ctx->r2;
    // 0x0028D9CC: sw          $zero, 0xCB4($s1)
    MEM_W(0XCB4, ctx->r17) = 0;
    // 0x0028D9D0: sw          $v0, 0xCBC($s1)
    MEM_W(0XCBC, ctx->r17) = ctx->r2;
    // 0x0028D9D4: jal         0x00266B80
    // 0x0028D9D8: sh          $zero, 0xCCE($s1)
    MEM_H(0XCCE, ctx->r17) = 0;
    func_00266B80(rdram, ctx);
        goto after_6;
    // 0x0028D9D8: sh          $zero, 0xCCE($s1)
    MEM_H(0XCCE, ctx->r17) = 0;
    after_6:
    // 0x0028D9DC: lui         $v1, 0x4F
    ctx->r3 = S32(0X4F << 16);
    // 0x0028D9E0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0028D9E4: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0028D9E8: beq         $v1, $zero, L_0028DA08
    if (ctx->r3 == 0) {
        // 0x0028D9EC: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_0028DA08;
    }
    // 0x0028D9EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0028D9F0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x0028D9F4: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x0028D9F8: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    // 0x0028D9FC: addiu       $a2, $a2, -0x3520
    ctx->r6 = ADD32(ctx->r6, -0X3520);
    // 0x0028DA00: jal         0x00201DBC
    // 0x0028DA04: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_00201DBC(rdram, ctx);
        goto after_7;
    // 0x0028DA04: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_7:
L_0028DA08:
    // 0x0028DA08: beq         $s4, $zero, L_0028DA48
    if (ctx->r20 == 0) {
        // 0x0028DA0C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028DA48;
    }
    // 0x0028DA0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028DA10: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x0028DA14: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x0028DA18: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    // 0x0028DA1C: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x0028DA20: addu        $a3, $s4, $a3
    ctx->r7 = ADD32(ctx->r20, ctx->r7);
    // 0x0028DA24: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x0028DA28: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0028DA2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028DA30: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x0028DA34: jal         0x0028EE40
    // 0x0028DA38: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_0028EE40(rdram, ctx);
        goto after_8;
    // 0x0028DA38: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_8:
    // 0x0028DA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0028DA40: sh          $v0, 0xCCC($s1)
    MEM_H(0XCCC, ctx->r17) = ctx->r2;
    // 0x0028DA44: sh          $v0, 0xCCE($s1)
    MEM_H(0XCCE, ctx->r17) = ctx->r2;
L_0028DA48:
    // 0x0028DA48: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x0028DA4C: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x0028DA50: addiu       $s0, $s3, -0xE0
    ctx->r16 = ADD32(ctx->r19, -0XE0);
L_0028DA54:
    // 0x0028DA54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0028DA58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028DA5C: jal         0x0029B820
    // 0x0028DA60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x0028DA60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x0028DA64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0028DA68: sltiu       $v0, $s1, 0x8
    ctx->r2 = ctx->r17 < 0X8 ? 1 : 0;
    // 0x0028DA6C: bne         $v0, $zero, L_0028DA54
    if (ctx->r2 != 0) {
        // 0x0028DA70: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_0028DA54;
    }
    // 0x0028DA70: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x0028DA74: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x0028DA78: addiu       $a1, $s2, -0xA7C
    ctx->r5 = ADD32(ctx->r18, -0XA7C);
    // 0x0028DA7C: addiu       $a2, $s2, -0xA80
    ctx->r6 = ADD32(ctx->r18, -0XA80);
    // 0x0028DA80: jal         0x0029B950
    // 0x0028DA84: sh          $zero, -0xA80($s2)
    MEM_H(-0XA80, ctx->r18) = 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x0028DA84: sh          $zero, -0xA80($s2)
    MEM_H(-0XA80, ctx->r18) = 0;
    after_10:
    // 0x0028DA88: addiu       $a0, $s2, -0x7B0
    ctx->r4 = ADD32(ctx->r18, -0X7B0);
    // 0x0028DA8C: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x0028DA90: jal         0x00266C5C
    // 0x0028DA94: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_00266C5C(rdram, ctx);
        goto after_11;
    // 0x0028DA94: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_11:
    // 0x0028DA98: addiu       $s0, $s2, -0x9E0
    ctx->r16 = ADD32(ctx->r18, -0X9E0);
    // 0x0028DA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028DAA0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x0028DAA4: lui         $a2, 0x29
    ctx->r6 = S32(0X29 << 16);
    // 0x0028DAA8: addiu       $a2, $a2, -0x185C
    ctx->r6 = ADD32(ctx->r6, -0X185C);
    // 0x0028DAAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0028DAB0: addiu       $v0, $s2, -0x5B0
    ctx->r2 = ADD32(ctx->r18, -0X5B0);
    // 0x0028DAB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028DAB8: addiu       $v0, $zero, 0x93
    ctx->r2 = ADD32(0, 0X93);
    // 0x0028DABC: jal         0x0029B060
    // 0x0028DAC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_12;
    // 0x0028DAC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x0028DAC4: jal         0x0029BB10
    // 0x0028DAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_13;
    // 0x0028DAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x0028DACC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0028DAD0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x0028DAD4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x0028DAD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028DADC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028DAE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028DAE4: jr          $ra
    // 0x0028DAE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0028DAE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0045A940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0045A940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0045A944: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0045A948: jal         0x00285A80
    // 0x0045A94C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_00285A80(rdram, ctx);
        goto after_0;
    // 0x0045A94C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0045A950: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0045A954: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0045A958: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x0045A95C: lw          $a1, 0x54($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X54);
    // 0x0045A960: jal         0x0042C620
    // 0x0045A964: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_0042C620(rdram, ctx);
        goto after_1;
    // 0x0045A964: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x0045A968: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0045A96C: jr          $ra
    // 0x0045A970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0045A970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0021793C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0021793C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x00217940: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00217944: jr          $ra
    // 0x00217948: nop

    return;
    // 0x00217948: nop

;}
RECOMP_FUNC void func_00285788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00285788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0028578C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00285790: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x00285794: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x00285798: beq         $v0, $zero, L_002857BC
    if (ctx->r2 == 0) {
        // 0x0028579C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_002857BC;
    }
    // 0x0028579C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x002857A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x002857A4: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x002857A8: beq         $v0, $zero, L_002857BC
    if (ctx->r2 == 0) {
        // 0x002857AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_002857BC;
    }
    // 0x002857AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002857B0: jal         0x00275624
    // 0x002857B4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_00275624(rdram, ctx);
        goto after_0;
    // 0x002857B4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x002857B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_002857BC:
    // 0x002857BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002857C0: jr          $ra
    // 0x002857C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002857C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00275BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00275BE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x00275BEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00275BF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00275BF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00275BF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x00275BFC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00275C00: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00275C04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00275C08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x00275C0C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x00275C10: jal         0x00200500
    // 0x00275C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_00200500(rdram, ctx);
        goto after_0;
    // 0x00275C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x00275C18: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x00275C1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00275C20: jal         0x00200500
    // 0x00275C24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_00200500(rdram, ctx);
        goto after_1;
    // 0x00275C24: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x00275C28: blez        $s3, L_00275C4C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00275C2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00275C4C;
    }
    // 0x00275C2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_00275C30:
    // 0x00275C30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00275C34: jal         0x00200574
    // 0x00275C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00200574(rdram, ctx);
        goto after_2;
    // 0x00275C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00275C3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00275C40: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00275C44: bne         $v0, $zero, L_00275C30
    if (ctx->r2 != 0) {
        // 0x00275C48: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_00275C30;
    }
    // 0x00275C48: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
L_00275C4C:
    // 0x00275C4C: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x00275C50: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x00275C54: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x00275C58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00275C5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00275C60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00275C64: jr          $ra
    // 0x00275C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x00275C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0026BB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026BB30: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x0026BB34: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x0026BB38: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x0026BB3C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x0026BB40: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0026BB44: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x0026BB48: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x0026BB4C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x0026BB50: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
L_0026BB54:
    // 0x0026BB54: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x0026BB58: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x0026BB5C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x0026BB60: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0026BB64: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x0026BB68: bne         $v0, $a3, L_0026BB78
    if (ctx->r2 != ctx->r7) {
        // 0x0026BB6C: sll         $v0, $v0, 5
        ctx->r2 = S32(ctx->r2 << 5);
            goto L_0026BB78;
    }
    // 0x0026BB6C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x0026BB70: j           L_0026BB80
    // 0x0026BB74: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
        goto L_0026BB80;
    // 0x0026BB74: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
L_0026BB78:
    // 0x0026BB78: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x0026BB7C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
L_0026BB80:
    // 0x0026BB80: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x0026BB84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0026BB88: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0026BB8C: bne         $v0, $zero, L_0026BB54
    if (ctx->r2 != 0) {
        // 0x0026BB90: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0026BB54;
    }
    // 0x0026BB90: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x0026BB94: jr          $ra
    // 0x0026BB98: nop

    return;
    // 0x0026BB98: nop

;}
RECOMP_FUNC void func_00447B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00447B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00447B70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00447B74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00447B78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00447B7C: lwc1        $f0, 0x93C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X93C);
    // 0x00447B80: lwc1        $f1, 0x180($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X180);
    // 0x00447B84: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00447B88: nop

    // 0x00447B8C: bc1f        L_00447BD4
    if (!c1cs) {
        // 0x00447B90: nop
    
            goto L_00447BD4;
    }
    // 0x00447B90: nop

    // 0x00447B94: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00447B98: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00447B9C: jal         0x002532A8
    // 0x00447BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x00447BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00447BA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00447BA8: beq         $a0, $zero, L_00447BD4
    if (ctx->r4 == 0) {
        // 0x00447BAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00447BD4;
    }
    // 0x00447BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00447BB0: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x00447BB4: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
    // 0x00447BB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00447BBC: sw          $v0, 0x9E4($a0)
    MEM_W(0X9E4, ctx->r4) = ctx->r2;
    // 0x00447BC0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00447BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00447BC8: ori         $v0, $v0, 0x120
    ctx->r2 = ctx->r2 | 0X120;
    // 0x00447BCC: jal         0x00248BA8
    // 0x00447BD0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x00447BD0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_1:
L_00447BD4:
    // 0x00447BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00447BD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447BDC: jr          $ra
    // 0x00447BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00226650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00226650: jr          $ra
    // 0x00226654: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x00226654: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_00450910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00427E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00427E5C: beql        $v0, $zero, L_00427EA4
    if (ctx->r2 == 0) {
        // 0x00427E60: addiu       $sp, $sp, -0x130
        ctx->r29 = ADD32(ctx->r29, -0X130);
            goto L_00427EA4;
    }
    goto skip_0;
    // 0x00427E60: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    skip_0:
    // 0x00427E64: sw          $s3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r19;
    // 0x00427E68: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x00427E6C: sw          $s6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r22;
    // 0x00427E70: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00427E74: sw          $ra, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r31;
    // 0x00427E78: sw          $s5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r21;
    // 0x00427E7C: sw          $s4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r20;
    // 0x00427E80: sw          $s2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r18;
    // 0x00427E84: sw          $s1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r17;
    // 0x00427E88: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x00427E8C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x00427E90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00427E94: bne         $v0, $zero, L_00427EA4
    if (ctx->r2 != 0) {
        // 0x00427E98: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_00427EA4;
    }
    // 0x00427E98: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00427E9C: j           L_00427F50
    // 0x00427EA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_00427F50;
    // 0x00427EA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_00427EA4:
    // 0x00427EA4: jal         0x00429DFC
    // 0x00427EA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00429DFC(rdram, ctx);
        goto after_0;
    // 0x00427EA8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x00427EAC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x00427EB0: beq         $v0, $v1, L_00427F50
    if (ctx->r2 == ctx->r3) {
        // 0x00427EB4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_00427F50;
    }
    // 0x00427EB4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00427EB8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x00427EBC: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x00427EC0: beq         $v0, $zero, L_00427F44
    if (ctx->r2 == 0) {
        // 0x00427EC4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_00427F44;
    }
    // 0x00427EC4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00427EC8: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
    // 0x00427ECC: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x00427ED0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_00427ED4:
    // 0x00427ED4: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x00427ED8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00427EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00427EE0: jal         0x00429AA4
    // 0x00427EE4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_00429AA4(rdram, ctx);
        goto after_1;
    // 0x00427EE4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00427EE8: bne         $v0, $zero, L_00427F50
    if (ctx->r2 != 0) {
        // 0x00427EEC: nop
    
            goto L_00427F50;
    }
    // 0x00427EEC: nop

    // 0x00427EF0: bne         $s0, $zero, L_00427EFC
    if (ctx->r16 != 0) {
        // 0x00427EF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00427EFC;
    }
    // 0x00427EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00427EF8: lw          $v0, 0x60($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X60);
L_00427EFC:
    // 0x00427EFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00427F00: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00427F04: beq         $v0, $zero, L_00427F2C
    if (ctx->r2 == 0) {
        // 0x00427F08: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_00427F2C;
    }
    // 0x00427F08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x00427F0C: addu        $v1, $v0, $s5
    ctx->r3 = ADD32(ctx->r2, ctx->r21);
L_00427F10:
    // 0x00427F10: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x00427F14: beql        $v0, $s4, L_00427F1C
    if (ctx->r2 == ctx->r20) {
        // 0x00427F18: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_00427F1C;
    }
    goto skip_1;
    // 0x00427F18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
L_00427F1C:
    // 0x00427F1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00427F20: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x00427F24: bne         $v0, $zero, L_00427F10
    if (ctx->r2 != 0) {
        // 0x00427F28: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00427F10;
    }
    // 0x00427F28: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00427F2C:
    // 0x00427F2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x00427F30: lbu         $v1, 0x64($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X64);
    // 0x00427F34: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x00427F38: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x00427F3C: bnel        $v0, $zero, L_00427ED4
    if (ctx->r2 != 0) {
        // 0x00427F40: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00427ED4;
    }
    goto skip_2;
    // 0x00427F40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    skip_2:
L_00427F44:
    // 0x00427F44: sll         $v0, $s2, 8
    ctx->r2 = S32(ctx->r18 << 8);
    // 0x00427F48: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x00427F4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00427F50:
    // 0x00427F50: lw          $ra, 0x12C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X12C);
    // 0x00427F54: lw          $s6, 0x128($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X128);
    // 0x00427F58: lw          $s5, 0x124($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X124);
    // 0x00427F5C: lw          $s4, 0x120($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X120);
    // 0x00427F60: lw          $s3, 0x11C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X11C);
    // 0x00427F64: lw          $s2, 0x118($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X118);
    // 0x00427F68: lw          $s1, 0x114($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X114);
    // 0x00427F6C: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x00427F70: jr          $ra
    // 0x00427F74: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x00427F74: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_00271F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00271F6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00271F70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00271F74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00271F78: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00271F7C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x00271F80: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x00271F84: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x00271F88: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x00271F8C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x00271F90: addiu       $s3, $s2, 0x10
    ctx->r19 = ADD32(ctx->r18, 0X10);
    // 0x00271F94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00271F98: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x00271F9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00271FA0: sdc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X38, ctx->r29);
    // 0x00271FA4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x00271FA8: swc1        $f0, 0x4C($s3)
    MEM_W(0X4C, ctx->r19) = ctx->f0.u32l;
    // 0x00271FAC: swc1        $f0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->f0.u32l;
    // 0x00271FB0: lh          $a1, 0xA($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XA);
    // 0x00271FB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00271FB8: beq         $a1, $v0, L_00272004
    if (ctx->r5 == ctx->r2) {
        // 0x00271FBC: addiu       $s1, $s2, 0x60
        ctx->r17 = ADD32(ctx->r18, 0X60);
            goto L_00272004;
    }
    // 0x00271FBC: addiu       $s1, $s2, 0x60
    ctx->r17 = ADD32(ctx->r18, 0X60);
    // 0x00271FC0: lw          $a0, 0xB0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XB0);
    // 0x00271FC4: jal         0x00271790
    // 0x00271FC8: nop

    func_00271790(rdram, ctx);
        goto after_0;
    // 0x00271FC8: nop

    after_0:
    // 0x00271FCC: lwl         $a3, 0x0($v0)
    ctx->r7 = do_lwl(rdram, ctx->r7, ctx->r2, 0X0);
    // 0x00271FD0: lwr         $a3, 0x3($v0)
    ctx->r7 = do_lwr(rdram, ctx->r7, ctx->r2, 0X3);
    // 0x00271FD4: lwl         $t0, 0x4($v0)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r2, 0X4);
    // 0x00271FD8: lwr         $t0, 0x7($v0)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r2, 0X7);
    // 0x00271FDC: lwl         $t1, 0x8($v0)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r2, 0X8);
    // 0x00271FE0: lwr         $t1, 0xB($v0)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r2, 0XB);
    // 0x00271FE4: swl         $a3, 0x60($s2)
    do_swl(rdram, 0X60, ctx->r18, ctx->r7);
    // 0x00271FE8: swr         $a3, 0x63($s2)
    do_swr(rdram, 0X63, ctx->r18, ctx->r7);
    // 0x00271FEC: swl         $t0, 0x64($s2)
    do_swl(rdram, 0X64, ctx->r18, ctx->r8);
    // 0x00271FF0: swr         $t0, 0x67($s2)
    do_swr(rdram, 0X67, ctx->r18, ctx->r8);
    // 0x00271FF4: swl         $t1, 0x68($s2)
    do_swl(rdram, 0X68, ctx->r18, ctx->r9);
    // 0x00271FF8: swr         $t1, 0x6B($s2)
    do_swr(rdram, 0X6B, ctx->r18, ctx->r9);
    // 0x00271FFC: j           L_0027201C
    // 0x00272000: nop

        goto L_0027201C;
    // 0x00272000: nop

L_00272004:
    // 0x00272004: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x00272008: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x0027200C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x00272010: jal         0x0026D200
    // 0x00272014: nop

    func_0026D200(rdram, ctx);
        goto after_1;
    // 0x00272014: nop

    after_1:
    // 0x00272018: sh          $v0, 0x60($s2)
    MEM_H(0X60, ctx->r18) = ctx->r2;
L_0027201C:
    // 0x0027201C: jal         0x002768A4
    // 0x00272020: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_002768A4(rdram, ctx);
        goto after_2;
    // 0x00272020: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00272024: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00272028: jal         0x002768B0
    // 0x0027202C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_002768B0(rdram, ctx);
        goto after_3;
    // 0x0027202C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x00272030: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00272034: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00272038: mtc1        $v0, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r2;
    // 0x0027203C: cvt.s.w     $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    ctx->f21.fl = CVT_S_W(ctx->f_odd[(21 - 1) * 2]);
    // 0x00272040: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00272044: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x00272048: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x0027204C: mtc1        $s0, $f20
    ctx->f20.u32l = ctx->r16;
    // 0x00272050: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00272054: jal         0x002119FC
    // 0x00272058: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00272058: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_4:
    // 0x0027205C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00272060: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00272064: nop

    // 0x00272068: bc1f        L_00272080
    if (!c1cs) {
        // 0x0027206C: mov.s       $f12, $f21
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
            goto L_00272080;
    }
    // 0x0027206C: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x00272070: jal         0x002119FC
    // 0x00272074: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00272074: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_5:
    // 0x00272078: j           L_0027208C
    // 0x0027207C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
        goto L_0027208C;
    // 0x0027207C: sub.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f0.fl;
L_00272080:
    // 0x00272080: jal         0x002119FC
    // 0x00272084: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_002119FC(rdram, ctx);
        goto after_6;
    // 0x00272084: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_6:
    // 0x00272088: add.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f0.fl;
L_0027208C:
    // 0x0027208C: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x00272090: mfc1        $v0, $f3
    ctx->r2 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x00272094: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00272098: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x0027209C: jal         0x0026D210
    // 0x002720A0: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    func_0026D210(rdram, ctx);
        goto after_7;
    // 0x002720A0: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    after_7:
    // 0x002720A4: mtc1        $s0, $f12
    ctx->f12.u32l = ctx->r16;
    // 0x002720A8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x002720AC: jal         0x0026D200
    // 0x002720B0: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_0026D200(rdram, ctx);
        goto after_8;
    // 0x002720B0: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_8:
    // 0x002720B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x002720B8: andi        $v0, $s5, 0x40
    ctx->r2 = ctx->r21 & 0X40;
    // 0x002720BC: beq         $v0, $zero, L_002720E8
    if (ctx->r2 == 0) {
        // 0x002720C0: andi        $v0, $s5, 0x80
        ctx->r2 = ctx->r21 & 0X80;
            goto L_002720E8;
    }
    // 0x002720C0: andi        $v0, $s5, 0x80
    ctx->r2 = ctx->r21 & 0X80;
    // 0x002720C4: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x002720C8: jal         0x0026D210
    // 0x002720CC: nop

    func_0026D210(rdram, ctx);
        goto after_9;
    // 0x002720CC: nop

    after_9:
    // 0x002720D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002720D4: lwc1        $f12, -0x7F04($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7F04);
    // 0x002720D8: jal         0x0026D200
    // 0x002720DC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_0026D200(rdram, ctx);
        goto after_10;
    // 0x002720DC: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_10:
    // 0x002720E0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x002720E4: andi        $v0, $s5, 0x80
    ctx->r2 = ctx->r21 & 0X80;
L_002720E8:
    // 0x002720E8: beq         $v0, $zero, L_00272110
    if (ctx->r2 == 0) {
        // 0x002720EC: nop
    
            goto L_00272110;
    }
    // 0x002720EC: nop

    // 0x002720F0: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x002720F4: jal         0x0026D210
    // 0x002720F8: nop

    func_0026D210(rdram, ctx);
        goto after_11;
    // 0x002720F8: nop

    after_11:
    // 0x002720FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272100: lwc1        $f12, -0x7F00($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7F00);
    // 0x00272104: jal         0x0026D200
    // 0x00272108: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    func_0026D200(rdram, ctx);
        goto after_12;
    // 0x00272108: sub.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f12.fl;
    after_12:
    // 0x0027210C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_00272110:
    // 0x00272110: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x00272114: jal         0x0026D210
    // 0x00272118: nop

    func_0026D210(rdram, ctx);
        goto after_13;
    // 0x00272118: nop

    after_13:
    // 0x0027211C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272120: lwc1        $f12, -0x7EFC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7EFC);
    // 0x00272124: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x00272128: nop

    // 0x0027212C: bc1f        L_00272140
    if (!c1cs) {
        // 0x00272130: nop
    
            goto L_00272140;
    }
    // 0x00272130: nop

    // 0x00272134: jal         0x0026D200
    // 0x00272138: nop

    func_0026D200(rdram, ctx);
        goto after_14;
    // 0x00272138: nop

    after_14:
    // 0x0027213C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_00272140:
    // 0x00272140: lhu         $v0, 0x6($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6);
    // 0x00272144: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x00272148: beq         $v0, $zero, L_002721AC
    if (ctx->r2 == 0) {
        // 0x0027214C: nop
    
            goto L_002721AC;
    }
    // 0x0027214C: nop

    // 0x00272150: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x00272154: jal         0x0026D210
    // 0x00272158: nop

    func_0026D210(rdram, ctx);
        goto after_15;
    // 0x00272158: nop

    after_15:
    // 0x0027215C: swc1        $f0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f0.u32l;
    // 0x00272160: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    // 0x00272164: jal         0x0026D210
    // 0x00272168: nop

    func_0026D210(rdram, ctx);
        goto after_16;
    // 0x00272168: nop

    after_16:
    // 0x0027216C: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    // 0x00272170: jal         0x0026D210
    // 0x00272174: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_0026D210(rdram, ctx);
        goto after_17;
    // 0x00272174: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_17:
    // 0x00272178: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x0027217C: bne         $v0, $zero, L_0027218C
    if (ctx->r2 != 0) {
        // 0x00272180: sub.s       $f20, $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_0027218C;
    }
    // 0x00272180: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x00272184: j           L_0027219C
    // 0x00272188: sw          $zero, 0x70($s2)
    MEM_W(0X70, ctx->r18) = 0;
        goto L_0027219C;
    // 0x00272188: sw          $zero, 0x70($s2)
    MEM_W(0X70, ctx->r18) = 0;
L_0027218C:
    // 0x0027218C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x00272190: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x00272194: div.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00272198: swc1        $f0, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f0.u32l;
L_0027219C:
    // 0x0027219C: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    // 0x002721A0: jal         0x0026D210
    // 0x002721A4: nop

    func_0026D210(rdram, ctx);
        goto after_18;
    // 0x002721A4: nop

    after_18:
    // 0x002721A8: swc1        $f0, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = ctx->f0.u32l;
L_002721AC:
    // 0x002721AC: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x002721B0: jal         0x0026D210
    // 0x002721B4: nop

    func_0026D210(rdram, ctx);
        goto after_19;
    // 0x002721B4: nop

    after_19:
    // 0x002721B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002721BC: lwc1        $f1, -0x7EF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EF8);
    // 0x002721C0: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x002721C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002721C8: lwc1        $f1, -0x7EF4($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X7EF4);
    // 0x002721CC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x002721D0: trunc.w.s   $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f0.fl);
    // 0x002721D4: mfc1        $a0, $f3
    ctx->r4 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x002721D8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x002721DC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x002721E0: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x002721E4: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x002721E8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x002721EC: nop

    // 0x002721F0: bc1t        L_00272234
    if (c1cs) {
        // 0x002721F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00272234;
    }
    // 0x002721F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002721F8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x002721FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00272200: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00272204: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x00272208: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027220C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x00272210: lwc1        $f2, 0x284C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x00272214: sub.s       $f1, $f0, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00272218: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027221C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00272220: lwc1        $f0, 0x284C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X284C);
    // 0x00272224: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x00272228: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027222C: j           L_00272240
    // 0x00272230: add.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f1.fl;
        goto L_00272240;
    // 0x00272230: add.s       $f12, $f2, $f1
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f1.fl;
L_00272234:
    // 0x00272234: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00272238: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0027223C: lwc1        $f12, 0x284C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X284C);
L_00272240:
    // 0x00272240: jal         0x0026D200
    // 0x00272244: swc1        $f12, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f12.u32l;
    func_0026D200(rdram, ctx);
        goto after_20;
    // 0x00272244: swc1        $f12, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f12.u32l;
    after_20:
    // 0x00272248: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x0027224C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x00272250: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x00272254: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x00272258: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x0027225C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00272260: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00272264: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00272268: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x0027226C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00272270: jr          $ra
    // 0x00272274: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00272274: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00292F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00292F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00292F4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00292F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00292F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00292F58: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00292F5C: sw          $a2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r6;
    // 0x00292F60: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x00292F64: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x00292F68: jal         0x00293354
    // 0x00292F6C: sw          $a1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r5;
    func_00293354(rdram, ctx);
        goto after_0;
    // 0x00292F6C: sw          $a1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r5;
    after_0:
    // 0x00292F70: lui         $v1, 0x4D54
    ctx->r3 = S32(0X4D54 << 16);
    // 0x00292F74: ori         $v1, $v1, 0x6864
    ctx->r3 = ctx->r3 | 0X6864;
    // 0x00292F78: bne         $v0, $v1, L_00293018
    if (ctx->r2 != ctx->r3) {
        // 0x00292F7C: nop
    
            goto L_00293018;
    }
    // 0x00292F7C: nop

    // 0x00292F80: jal         0x00293354
    // 0x00292F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293354(rdram, ctx);
        goto after_1;
    // 0x00292F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00292F88: jal         0x00293324
    // 0x00292F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293324(rdram, ctx);
        goto after_2;
    // 0x00292F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x00292F90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00292F94: bne         $v0, $zero, L_00293018
    if (ctx->r2 != 0) {
        // 0x00292F98: nop
    
            goto L_00293018;
    }
    // 0x00292F98: nop

    // 0x00292F9C: jal         0x00293324
    // 0x00292FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293324(rdram, ctx);
        goto after_3;
    // 0x00292FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x00292FA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00292FA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00292FAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00292FB0: bne         $v0, $v1, L_00293018
    if (ctx->r2 != ctx->r3) {
        // 0x00292FB4: nop
    
            goto L_00293018;
    }
    // 0x00292FB4: nop

    // 0x00292FB8: jal         0x00293324
    // 0x00292FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293324(rdram, ctx);
        goto after_4;
    // 0x00292FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x00292FC0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x00292FC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00292FC8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00292FCC: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x00292FD0: bne         $v0, $zero, L_00293018
    if (ctx->r2 != 0) {
        // 0x00292FD4: nop
    
            goto L_00293018;
    }
    // 0x00292FD4: nop

    // 0x00292FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00292FDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00292FE0: lwc1        $f0, -0x5BE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5BE0);
    // 0x00292FE4: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00292FE8: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00292FEC: div.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00292FF0: jal         0x00293354
    // 0x00292FF4: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    func_00293354(rdram, ctx);
        goto after_5;
    // 0x00292FF4: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x00292FF8: lui         $v1, 0x4D54
    ctx->r3 = S32(0X4D54 << 16);
    // 0x00292FFC: ori         $v1, $v1, 0x726B
    ctx->r3 = ctx->r3 | 0X726B;
    // 0x00293000: bne         $v0, $v1, L_00293018
    if (ctx->r2 != ctx->r3) {
        // 0x00293004: nop
    
            goto L_00293018;
    }
    // 0x00293004: nop

    // 0x00293008: jal         0x00293354
    // 0x0029300C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00293354(rdram, ctx);
        goto after_6;
    // 0x0029300C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x00293010: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00293014: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_00293018:
    // 0x00293018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029301C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00293020: jr          $ra
    // 0x00293024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00293024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00260B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00260B38: jr          $ra
    // 0x00260B3C: nop

    return;
    // 0x00260B3C: nop

;}
