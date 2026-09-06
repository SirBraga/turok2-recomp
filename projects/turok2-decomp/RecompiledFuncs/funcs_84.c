#include "recomp.h"
#include "funcs.h"

extern void turok2_patch_scene_draw_emit(uint8_t* rdram, recomp_context* ctx);
extern void turok2_patch_scene_vis_pass(uint8_t* rdram, recomp_context* ctx);
extern void turok2_patch_scene_sec_try(uint8_t* rdram, recomp_context* ctx);
extern int turok2_scene_force_sec(void);

RECOMP_FUNC void func_00284358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284358: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x0028435C: lw          $v1, 0x1BB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1BB0);
    // 0x00284360: lw          $v0, 0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X38);
    // 0x00284364: beq         $v0, $zero, L_00284378
    if (ctx->r2 == 0) {
            // 0x00284368: nop

    func_00284378(rdram, ctx);
    return;
    }
    // 0x00284368: nop

    // 0x0028436C: lw          $v0, 0xA8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XA8);
    // 0x00284370: jr          $ra
    // 0x00284374: nop

    return;
    // 0x00284374: nop

;}
RECOMP_FUNC void func_002222E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002222E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x002222E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002222E8: addiu       $v0, $v0, -0x5520
    ctx->r2 = ADD32(ctx->r2, -0X5520);
    // 0x002222EC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x002222F0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x002222F4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x002222F8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x002222FC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x00222300: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x00222304: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x00222308: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0022230C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x00222310: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x00222314: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x00222318: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x0022231C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00222320: lbu         $v0, 0x11($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11);
    // 0x00222324: lw          $t1, 0x64($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X64);
    // 0x00222328: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
        turok2_patch_world_draw_gate(rdram, ctx);

    // 0x0022232C: beq         $v0, $zero, L_00222344
    if (ctx->r2 == 0) {
        // 0x00222330: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_00222344;
    }
    // 0x00222330: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00222334: jal         0x00221D3C
    // 0x00222338: nop

    func_00221D3C(rdram, ctx);
        goto after_0;
    // 0x00222338: nop

    after_0:
    // 0x0022233C: j           L_002228B4
    // 0x00222340: nop

        goto L_002228B4;
    // 0x00222340: nop

L_00222344:
    // 0x00222344: jal         0x00281194
    // 0x00222348: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_00281194(rdram, ctx);
        goto after_1;
    // 0x00222348: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x0022234C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00222350: lw          $v1, 0x74($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X74);
    // 0x00222354: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00222358: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x0022235C: blez        $a1, L_00222384
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00222360: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_00222384;
    }
    // 0x00222360: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00222364: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
L_00222368:
    // 0x00222368: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x0022236C: beql        $v0, $a2, L_0022238C
    if (ctx->r2 == ctx->r6) {
        // 0x00222370: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_0022238C;
    }
    goto skip_0;
    // 0x00222370: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    skip_0:
    // 0x00222374: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00222378: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x0022237C: bne         $v0, $zero, L_00222368
    if (ctx->r2 != 0) {
        // 0x00222380: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_00222368;
    }
    // 0x00222380: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_00222384:
    // 0x00222384: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x00222388: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_0022238C:
    // 0x0022238C: beq         $s1, $zero, L_002223C0
    if (ctx->r17 == 0) {
        // 0x00222390: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_002223C0;
    }
    // 0x00222390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00222394: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x00222398: beq         $t1, $v0, L_002223C0
    if (ctx->r9 == ctx->r2) {
        // 0x0022239C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002223C0;
    }
    // 0x0022239C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002223A0: jal         0x00253720
    // 0x002223A4: addiu       $a1, $zero, 0x111F
    ctx->r5 = ADD32(0, 0X111F);
    func_00253720(rdram, ctx);
        goto after_2;
    // 0x002223A4: addiu       $a1, $zero, 0x111F
    ctx->r5 = ADD32(0, 0X111F);
    after_2:
    // 0x002223A8: beq         $v0, $zero, L_002223C0
    if (ctx->r2 == 0) {
        // 0x002223AC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_002223C0;
    }
    // 0x002223AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x002223B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x002223B4: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x002223B8: beq         $v0, $zero, L_002223C4
    if (ctx->r2 == 0) {
        // 0x002223BC: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_002223C4;
    }
    // 0x002223BC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_002223C0:
    // 0x002223C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_002223C4:
    // 0x002223C4: lui         $a1, 0xE300
    ctx->r5 = S32(0XE300 << 16);
    // 0x002223C8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x002223CC: addiu       $s0, $s0, -0x71DC
    ctx->r16 = ADD32(ctx->r16, -0X71DC);
    // 0x002223D0: ori         $a1, $a1, 0xA01
    ctx->r5 = ctx->r5 | 0XA01;
    // 0x002223D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x002223D8: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x002223DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x002223E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002223E4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002223E8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002223EC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x002223F0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x002223F4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x002223F8: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x002223FC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00222400: jal         0x0020B5D4
    // 0x00222404: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    func_0020B5D4(rdram, ctx);
        goto after_3;
    // 0x00222404: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    after_3:
    // 0x00222408: beq         $s1, $zero, L_00222490
    if (ctx->r17 == 0) {
        // 0x0022240C: sw          $zero, 0x1064($s4)
        MEM_W(0X1064, ctx->r20) = 0;
            goto L_00222490;
    }
    // 0x0022240C: sw          $zero, 0x1064($s4)
    MEM_W(0X1064, ctx->r20) = 0;
    // 0x00222410: lw          $v0, 0xA1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA1C);
    // 0x00222414: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x00222418: beq         $v0, $zero, L_00222490
    if (ctx->r2 == 0) {
        // 0x0022241C: lui         $a0, 0xDB04
        ctx->r4 = S32(0XDB04 << 16);
            goto L_00222490;
    }
    // 0x0022241C: lui         $a0, 0xDB04
    ctx->r4 = S32(0XDB04 << 16);
    // 0x00222420: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x00222424: lui         $a1, 0xDB04
    ctx->r5 = S32(0XDB04 << 16);
    // 0x00222428: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x0022242C: lui         $a2, 0xDB04
    ctx->r6 = S32(0XDB04 << 16);
    // 0x00222430: ori         $a2, $a2, 0x14
    ctx->r6 = ctx->r6 | 0X14;
    // 0x00222434: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x00222438: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x0022243C: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x00222440: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x00222444: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x00222448: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x0022244C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x00222450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x00222454: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x00222458: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x0022245C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00222460: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x00222464: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x00222468: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x0022246C: ori         $a0, $zero, 0xFFFF
    ctx->r4 = 0 | 0XFFFF;
    // 0x00222470: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    // 0x00222474: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x00222478: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x0022247C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x00222480: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00222484: sw          $a3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r7;
    // 0x00222488: j           L_00222508
    // 0x0022248C: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
        goto L_00222508;
    // 0x0022248C: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
L_00222490:
    // 0x00222490: lui         $a1, 0xDB04
    ctx->r5 = S32(0XDB04 << 16);
    // 0x00222494: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x00222498: lui         $a2, 0xDB04
    ctx->r6 = S32(0XDB04 << 16);
    // 0x0022249C: ori         $a2, $a2, 0xC
    ctx->r6 = ctx->r6 | 0XC;
    // 0x002224A0: lui         $a3, 0xDB04
    ctx->r7 = S32(0XDB04 << 16);
    // 0x002224A4: ori         $a3, $a3, 0x14
    ctx->r7 = ctx->r7 | 0X14;
    // 0x002224A8: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x002224AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x002224B0: addiu       $a0, $a0, -0x71DC
    ctx->r4 = ADD32(ctx->r4, -0X71DC);
    // 0x002224B4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x002224B8: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x002224BC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002224C0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x002224C4: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x002224C8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x002224CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x002224D0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x002224D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x002224D8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x002224DC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x002224E0: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x002224E4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x002224E8: ori         $a1, $zero, 0xFFFE
    ctx->r5 = 0 | 0XFFFE;
    // 0x002224EC: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x002224F0: sw          $a3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r7;
    // 0x002224F4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x002224F8: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x002224FC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00222500: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x00222504: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
L_00222508:
    // 0x00222508: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x0022250C: lw          $t1, 0x14A8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X14A8);
        turok2_patch_scene_draw_note(rdram, ctx);

    // 0x00222510: addiu       $v0, $s4, 0x14AC
    ctx->r2 = ADD32(ctx->r20, 0X14AC);
    // 0x00222514: blez        $t1, L_002228AC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x00222518: sw          $t1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r9;
            goto L_002228AC;
    }
    // 0x00222518: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0022251C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
L_00222520:
        turok2_patch_scene_sec_try(rdram, ctx);
        if (turok2_scene_force_sec()) {
            goto L_00222584;
        }
    // 0x00222520: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x00222524: lwc1        $f0, 0x338($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X338);
    // 0x00222528: lwc1        $f1, 0x8($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X8);
    // 0x0022252C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222530: nop

    // 0x00222534: bc1f        L_00222898
    if (!c1cs) {
        // 0x00222538: nop
    
            goto L_00222898;
    }
    // 0x00222538: nop

    // 0x0022253C: lwc1        $f1, 0x0($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X0);
    // 0x00222540: lwc1        $f0, 0x344($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X344);
    // 0x00222544: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222548: nop

    // 0x0022254C: bc1f        L_00222898
    if (!c1cs) {
        // 0x00222550: nop
    
            goto L_00222898;
    }
    // 0x00222550: nop

    // 0x00222554: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00222558: lwc1        $f0, 0x340($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X340);
    // 0x0022255C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222560: nop

    // 0x00222564: bc1f        L_00222898
    if (!c1cs) {
        // 0x00222568: nop
    
            goto L_00222898;
    }
    // 0x00222568: nop

    // 0x0022256C: lwc1        $f1, 0x4($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0X4);
    // 0x00222570: lwc1        $f0, 0x34C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X34C);
    // 0x00222574: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222578: nop

    // 0x0022257C: bc1f        L_00222898
    if (!c1cs) {
        // 0x00222580: nop
    
            goto L_00222898;
    }
    // 0x00222580: nop

L_00222584:
    // 0x00222584: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x00222588: jal         0x0020565C
    // 0x0022258C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_0020565C(rdram, ctx);
        goto after_4;
    // 0x0022258C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x00222590: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00222594: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00222598: lw          $s7, 0x0($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X0);
    // 0x0022259C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002225A0: jal         0x002017D4
    // 0x002225A4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x002225A4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_5:
    // 0x002225A8: lw          $s6, 0x4($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X4);
    // 0x002225AC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x002225B0: blez        $s6, L_00222748
    if (SIGNED(ctx->r22) <= 0) {
        // 0x002225B4: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_00222748;
    }
    // 0x002225B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002225B8: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
L_002225BC:
    // 0x002225BC: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x002225C0: addu        $s0, $t1, $s3
    ctx->r16 = ADD32(ctx->r9, ctx->r19);
    // 0x002225C4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x002225C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x002225CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x002225D0: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
        turok2_patch_scene_vis_pass(rdram, ctx);

    // 0x002225D4: beql        $v0, $zero, L_0022273C
    if (ctx->r2 == 0) {
        // 0x002225D8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_1;
    // 0x002225D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x002225DC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x002225E0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x002225E4: lw          $v1, 0x6D20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6D20);
    // 0x002225E8: bne         $v1, $zero, L_002225FC
    if (ctx->r3 != 0) {
        // 0x002225EC: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_002225FC;
    }
    // 0x002225EC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x002225F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002225F4: jal         0x00214D04
    // 0x002225F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00214D04(rdram, ctx);
        goto after_6;
    // 0x002225F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_002225FC:
    // 0x002225FC: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x00222600: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00222604: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
        turok2_patch_scene_vis_pass(rdram, ctx);

    // 0x00222608: beql        $v0, $zero, L_0022273C
    if (ctx->r2 == 0) {
        // 0x0022260C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_2;
    // 0x0022260C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
        if (turok2_scene_force_sec()) {
            goto L_002226B0;
        }
    // 0x00222610: lwc1        $f1, 0x344($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X344);
    // 0x00222614: lwc1        $f0, 0x68($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X68);
    // 0x00222618: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022261C: nop

    // 0x00222620: bc1fl       L_0022273C
    if (!c1cs) {
        // 0x00222624: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_3;
    // 0x00222624: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x00222628: lwc1        $f1, 0x338($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X338);
    // 0x0022262C: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x00222630: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222634: nop

    // 0x00222638: bc1fl       L_0022273C
    if (!c1cs) {
        // 0x0022263C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_4;
    // 0x0022263C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x00222640: lwc1        $f1, 0x34C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34C);
    // 0x00222644: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x00222648: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022264C: nop

    // 0x00222650: bc1fl       L_0022273C
    if (!c1cs) {
        // 0x00222654: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_5;
    // 0x00222654: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x00222658: lwc1        $f1, 0x340($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X340);
    // 0x0022265C: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x00222660: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222664: nop

    // 0x00222668: bc1fl       L_0022273C
    if (!c1cs) {
        // 0x0022266C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_6;
    // 0x0022266C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x00222670: lwc1        $f1, 0x348($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X348);
    // 0x00222674: lwc1        $f0, 0x6C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x00222678: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x0022267C: nop

    // 0x00222680: bc1fl       L_0022273C
    if (!c1cs) {
        // 0x00222684: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_7;
    // 0x00222684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x00222688: lwc1        $f1, 0x33C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X33C);
    // 0x0022268C: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
    // 0x00222690: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222694: nop

    // 0x00222698: bc1f        L_00222738
    if (!c1cs) {
        // 0x0022269C: addiu       $a0, $s2, 0x2D8
        ctx->r4 = ADD32(ctx->r18, 0X2D8);
            goto L_00222738;
    }
    // 0x0022269C: addiu       $a0, $s2, 0x2D8
    ctx->r4 = ADD32(ctx->r18, 0X2D8);
    // 0x002226A0: jal         0x0026F60C
    // 0x002226A4: addiu       $a1, $s0, 0x68
    ctx->r5 = ADD32(ctx->r16, 0X68);
    func_0026F60C(rdram, ctx);
        goto after_7;
    // 0x002226A4: addiu       $a1, $s0, 0x68
    ctx->r5 = ADD32(ctx->r16, 0X68);
    after_7:
    // 0x002226A8: beql        $v0, $zero, L_0022273C
        turok2_patch_scene_vis_pass(rdram, ctx);
    if (ctx->r2 == 0) {
        // 0x002226AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022273C;
    }
    goto skip_8;
    // 0x002226AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
L_002226B0:
    // 0x002226B0: lhu         $v0, 0x88($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X88);
    // 0x002226B4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x002226B8: beq         $v0, $zero, L_002226FC
    if (ctx->r2 == 0) {
        // 0x002226BC: nop
    
            goto L_002226FC;
    }
    // 0x002226BC: nop

    // 0x002226C0: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x002226C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x002226C8: bne         $v0, $t1, L_002226DC
    if (ctx->r2 != ctx->r9) {
        // 0x002226CC: nop
    
            goto L_002226DC;
    }
    // 0x002226CC: nop

    // 0x002226D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x002226D4: beq         $t1, $zero, L_002226FC
    if (ctx->r9 == 0) {
        // 0x002226D8: nop
    
            goto L_002226FC;
    }
    // 0x002226D8: nop

L_002226DC:
    // 0x002226DC: lw          $v1, 0xBF4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XBF4);
    // 0x002226E0: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x002226E4: beq         $v1, $t1, L_002226FC
    if (ctx->r3 == ctx->r9) {
        // 0x002226E8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_002226FC;
    }
    // 0x002226E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x002226EC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x002226F0: sw          $s0, 0xAF4($v0)
    MEM_W(0XAF4, ctx->r2) = ctx->r16;
    // 0x002226F4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x002226F8: sw          $v0, 0xBF4($s4)
    MEM_W(0XBF4, ctx->r20) = ctx->r2;
L_002226FC:
    // 0x002226FC: lhu         $v0, 0x88($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X88);
    // 0x00222700: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x00222704: beq         $v0, $zero, L_0022272C
    if (ctx->r2 == 0) {
        // 0x00222708: addiu       $t1, $zero, 0x40
        ctx->r9 = ADD32(0, 0X40);
            goto L_0022272C;
    }
    // 0x00222708: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x0022270C: lw          $v1, 0x1064($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X1064);
    // 0x00222710: beq         $v1, $t1, L_00222738
    if (ctx->r3 == ctx->r9) {
        // 0x00222714: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00222738;
    }
    // 0x00222714: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00222718: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x0022271C: sw          $s0, 0x1068($v0)
    MEM_W(0X1068, ctx->r2) = ctx->r16;
    // 0x00222720: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00222724: j           L_00222738
    // 0x00222728: sw          $v0, 0x1064($s4)
    MEM_W(0X1064, ctx->r20) = ctx->r2;
        goto L_00222738;
    // 0x00222728: sw          $v0, 0x1064($s4)
    MEM_W(0X1064, ctx->r20) = ctx->r2;
L_0022272C:
    // 0x0022272C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00222730: jal         0x00214844
    // 0x00222734: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00214844(rdram, ctx);
        goto after_8;
    // 0x00222734: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_8:
L_00222738:
    // 0x00222738: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0022273C:
    // 0x0022273C: slt         $v0, $s1, $s6
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x00222740: bne         $v0, $zero, L_002225BC
    if (ctx->r2 != 0) {
        // 0x00222744: addiu       $s3, $s3, 0x90
        ctx->r19 = ADD32(ctx->r19, 0X90);
            goto L_002225BC;
    }
    // 0x00222744: addiu       $s3, $s3, 0x90
    ctx->r19 = ADD32(ctx->r19, 0X90);
L_00222748:
    // 0x00222748: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x0022274C: jal         0x002017D4
    // 0x00222750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_9;
    // 0x00222750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x00222754: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00222758: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x0022275C: blez        $s3, L_00222898
    if (SIGNED(ctx->r19) <= 0) {
        // 0x00222760: addiu       $a0, $v0, 0x8
        ctx->r4 = ADD32(ctx->r2, 0X8);
            goto L_00222898;
    }
    // 0x00222760: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x00222764: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_00222768:
    // 0x00222768: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0022276C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x00222770: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00222774: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
        turok2_patch_scene_vis_pass(rdram, ctx);
    // 0x00222778: beql        $v0, $zero, L_0022288C
    if (ctx->r2 == 0) {
        // 0x0022277C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_9;
    // 0x0022277C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x00222780: lhu         $v1, 0x16C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16C);
    // 0x00222784: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x00222788: bnel        $v0, $zero, L_0022288C
    if (ctx->r2 != 0) {
        // 0x0022278C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_10;
    // 0x0022278C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x00222790: lw          $v0, 0x190($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X190);
    // 0x00222794: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x00222798: and         $v0, $t1, $v0
    ctx->r2 = ctx->r9 & ctx->r2;
        turok2_patch_scene_vis_pass(rdram, ctx);
    // 0x0022279C: beql        $v0, $zero, L_0022288C
    if (ctx->r2 == 0) {
        // 0x002227A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_11;
    // 0x002227A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
        if (turok2_scene_force_sec()) {
            goto L_00222850;
        }
    // 0x002227A4: lwc1        $f1, 0x344($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X344);
    // 0x002227A8: lwc1        $f0, 0x14C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x002227AC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002227B0: nop

    // 0x002227B4: bc1fl       L_0022288C
    if (!c1cs) {
        // 0x002227B8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_12;
    // 0x002227B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x002227BC: lwc1        $f1, 0x338($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X338);
    // 0x002227C0: lwc1        $f0, 0x158($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X158);
    // 0x002227C4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002227C8: nop

    // 0x002227CC: bc1fl       L_0022288C
    if (!c1cs) {
        // 0x002227D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_13;
    // 0x002227D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x002227D4: lwc1        $f1, 0x34C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X34C);
    // 0x002227D8: lwc1        $f0, 0x154($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X154);
    // 0x002227DC: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x002227E0: nop

    // 0x002227E4: bc1fl       L_0022288C
    if (!c1cs) {
        // 0x002227E8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_14;
    // 0x002227E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_14:
    // 0x002227EC: lwc1        $f1, 0x340($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X340);
    // 0x002227F0: lwc1        $f0, 0x160($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X160);
    // 0x002227F4: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002227F8: nop

    // 0x002227FC: bc1fl       L_0022288C
    if (!c1cs) {
        // 0x00222800: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_15;
    // 0x00222800: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_15:
    // 0x00222804: lwc1        $f1, 0x348($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X348);
    // 0x00222808: lwc1        $f0, 0x150($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X150);
    // 0x0022280C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00222810: nop

    // 0x00222814: bc1fl       L_0022288C
    if (!c1cs) {
        // 0x00222818: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_16;
    // 0x00222818: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_16:
    // 0x0022281C: lwc1        $f1, 0x33C($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X33C);
    // 0x00222820: lwc1        $f0, 0x15C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x00222824: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00222828: nop

    // 0x0022282C: bc1f        L_00222888
    if (!c1cs) {
        // 0x00222830: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_00222888;
    }
    // 0x00222830: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x00222834: beql        $v0, $zero, L_0022288C
    if (ctx->r2 == 0) {
        // 0x00222838: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_17;
    // 0x00222838: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_17:
    // 0x0022283C: addiu       $a0, $s2, 0x2D8
    ctx->r4 = ADD32(ctx->r18, 0X2D8);
    // 0x00222840: jal         0x0026F60C
    // 0x00222844: addiu       $a1, $s0, 0x14C
    ctx->r5 = ADD32(ctx->r16, 0X14C);
    func_0026F60C(rdram, ctx);
        goto after_10;
    // 0x00222844: addiu       $a1, $s0, 0x14C
    ctx->r5 = ADD32(ctx->r16, 0X14C);
    after_10:
    // 0x00222848: beql        $v0, $zero, L_0022288C
        turok2_patch_scene_vis_pass(rdram, ctx);
    if (ctx->r2 == 0) {
        // 0x0022284C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_0022288C;
    }
    goto skip_18;
    // 0x0022284C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_18:
L_00222850:
    // 0x00222850: lhu         $v0, 0x16C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16C);
    // 0x00222854: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x00222858: beq         $v0, $zero, L_00222880
    if (ctx->r2 == 0) {
        // 0x0022285C: addiu       $t1, $zero, 0x40
        ctx->r9 = ADD32(0, 0X40);
            goto L_00222880;
    }
    // 0x0022285C: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x00222860: lw          $v1, 0x1064($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X1064);
    // 0x00222864: beq         $v1, $t1, L_00222888
    if (ctx->r3 == ctx->r9) {
        // 0x00222868: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00222888;
    }
    // 0x00222868: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0022286C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x00222870: sw          $s0, 0x1068($v0)
    MEM_W(0X1068, ctx->r2) = ctx->r16;
    // 0x00222874: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x00222878: j           L_00222888
    // 0x0022287C: sw          $v0, 0x1064($s4)
    MEM_W(0X1064, ctx->r20) = ctx->r2;
        goto L_00222888;
    // 0x0022287C: sw          $v0, 0x1064($s4)
    MEM_W(0X1064, ctx->r20) = ctx->r2;
L_00222880:
    // 0x00222880: jal         0x002152AC
    // 0x00222884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        turok2_patch_scene_draw_emit(rdram, ctx);
    func_002152AC(rdram, ctx);
        goto after_11;
    // 0x00222884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
L_00222888:
    // 0x00222888: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_0022288C:
    // 0x0022288C: slt         $v0, $s1, $s3
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x00222890: bne         $v0, $zero, L_00222768
    if (ctx->r2 != 0) {
        // 0x00222894: addiu       $s0, $s0, 0x198
        ctx->r16 = ADD32(ctx->r16, 0X198);
            goto L_00222768;
    }
    // 0x00222894: addiu       $s0, $s0, 0x198
    ctx->r16 = ADD32(ctx->r16, 0X198);
L_00222898:
    // 0x00222898: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x0022289C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x002228A0: slt         $v0, $fp, $t1
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x002228A4: bne         $v0, $zero, L_00222520
    if (ctx->r2 != 0) {
        // 0x002228A8: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_00222520;
    }
    // 0x002228A8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_002228AC:
    // 0x002228AC: jal         0x0020B624
    // 0x002228B0: nop

    func_0020B624(rdram, ctx);
        goto after_12;
    // 0x002228B0: nop

    after_12:
L_002228B4:
    // 0x002228B4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x002228B8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x002228BC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x002228C0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x002228C4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x002228C8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x002228CC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x002228D0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002228D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002228D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002228DC: jr          $ra
    // 0x002228E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x002228E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0044BE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044BE4C: sra         $v1, $a1, 3
    ctx->r3 = S32(SIGNED(ctx->r5) >> 3);
    // 0x0044BE50: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x0044BE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0044BE58: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x0044BE5C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x0044BE60: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x0044BE64: jr          $ra
    // 0x0044BE68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    return;
    // 0x0044BE68: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
;}
RECOMP_FUNC void func_002628B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002628B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002628BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002628C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x002628C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x002628C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002628CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x002628D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002628D4: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x002628D8: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x002628DC: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x002628E0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x002628E4: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x002628E8: jal         0x0024646C
    // 0x002628EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_0024646C(rdram, ctx);
        goto after_0;
    // 0x002628EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x002628F0: lui         $s1, 0x800F
    ctx->r17 = S32(0X800F << 16);
    // 0x002628F4: addiu       $s1, $s1, 0x7078
    ctx->r17 = ADD32(ctx->r17, 0X7078);
    // 0x002628F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002628FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00262900: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00262904: jal         0x00220260
    // 0x00262908: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    func_00220260(rdram, ctx);
        goto after_1;
    // 0x00262908: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    after_1:
    // 0x0026290C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00262910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00262914: jal         0x0026E110
    // 0x00262918: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_0026E110(rdram, ctx);
        goto after_2;
    // 0x00262918: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0026291C: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x00262920: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x00262924: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x00262928: and         $a0, $v0, $v1
    ctx->r4 = ctx->r2 & ctx->r3;
    // 0x0026292C: sw          $a0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r4;
    // 0x00262930: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00262934: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00262938: beq         $v1, $v0, L_00262948
    if (ctx->r3 == ctx->r2) {
        // 0x0026293C: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_00262948;
    }
    // 0x0026293C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x00262940: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x00262944: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
L_00262948:
    // 0x00262948: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0026294C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00262950: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00262954: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00262958: jr          $ra
    // 0x0026295C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0026295C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00407CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00407CB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00407CB8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00407CBC: addiu       $s0, $s0, -0x6790
    ctx->r16 = ADD32(ctx->r16, -0X6790);
    // 0x00407CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00407CC4: sw          $zero, 0xF8($a1)
    MEM_W(0XF8, ctx->r5) = 0;
    // 0x00407CC8: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    // 0x00407CCC: jal         0x002535E4
    // 0x00407CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002535E4(rdram, ctx);
        goto after_0;
    // 0x00407CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x00407CD4: jal         0x002532A8
    // 0x00407CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002532A8(rdram, ctx);
        goto after_1;
    // 0x00407CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00407CDC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00407CE0: lw          $v1, 0x9D0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X9D0);
    // 0x00407CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00407CE8: beq         $v1, $zero, L_00407D40
    if (ctx->r3 == 0) {
        // 0x00407CEC: sw          $v0, 0x9F0($a0)
        MEM_W(0X9F0, ctx->r4) = ctx->r2;
            goto L_00407D40;
    }
    // 0x00407CEC: sw          $v0, 0x9F0($a0)
    MEM_W(0X9F0, ctx->r4) = ctx->r2;
    // 0x00407CF0: lw          $v0, 0x9D4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9D4);
    // 0x00407CF4: beq         $v0, $zero, L_00407D40
    if (ctx->r2 == 0) {
        // 0x00407CF8: nop
    
            goto L_00407D40;
    }
    // 0x00407CF8: nop

    // 0x00407CFC: lw          $v0, 0x9D8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9D8);
    // 0x00407D00: beq         $v0, $zero, L_00407D40
    if (ctx->r2 == 0) {
        // 0x00407D04: nop
    
            goto L_00407D40;
    }
    // 0x00407D04: nop

    // 0x00407D08: lw          $v0, 0x9DC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9DC);
    // 0x00407D0C: beq         $v0, $zero, L_00407D40
    if (ctx->r2 == 0) {
        // 0x00407D10: nop
    
            goto L_00407D40;
    }
    // 0x00407D10: nop

    // 0x00407D14: lw          $v0, 0x9E0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E0);
    // 0x00407D18: beq         $v0, $zero, L_00407D40
    if (ctx->r2 == 0) {
        // 0x00407D1C: nop
    
            goto L_00407D40;
    }
    // 0x00407D1C: nop

    // 0x00407D20: jal         0x00412438
    // 0x00407D24: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    func_00412438(rdram, ctx);
        goto after_2;
    // 0x00407D24: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    after_2:
    // 0x00407D28: lui         $a0, 0x7FF
    ctx->r4 = S32(0X7FF << 16);
    // 0x00407D2C: addiu       $v1, $s0, 0x1268
    ctx->r3 = ADD32(ctx->r16, 0X1268);
    // 0x00407D30: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00407D34: ori         $a0, $a0, 0x19
    ctx->r4 = ctx->r4 | 0X19;
    // 0x00407D38: j           L_00407D58
    // 0x00407D3C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
        goto L_00407D58;
    // 0x00407D3C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
L_00407D40:
    // 0x00407D40: jal         0x00412438
    // 0x00407D44: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_00412438(rdram, ctx);
        goto after_3;
    // 0x00407D44: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_3:
    // 0x00407D48: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00407D4C: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x00407D50: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00407D54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_00407D58:
    // 0x00407D58: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00407D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00407D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00407D64: jr          $ra
    // 0x00407D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00407D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00451E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00451E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00451E58: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x00451E5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00451E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00451E64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00451E68: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x00451E6C: addiu       $s0, $s0, -0x5528
    ctx->r16 = ADD32(ctx->r16, -0X5528);
    // 0x00451E70: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00451E74: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x00451E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00451E7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00451E80: lb          $v0, 0x2A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2A);
    // 0x00451E84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00451E88: jal         0x0041648C
    // 0x00451E8C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x00451E8C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x00451E90: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
    // 0x00451E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00451E98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00451E9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00451EA0: jr          $ra
    // 0x00451EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00451EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_002935B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002935B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002935B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x002935B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002935BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x002935C0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002935C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002935C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x002935CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x002935D0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002935D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002935D8: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x002935DC: addiu       $v0, $zero, 0x3E80
    ctx->r2 = ADD32(0, 0X3E80);
    // 0x002935E0: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x002935E4: sw          $v1, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r3;
    // 0x002935E8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x002935EC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x002935F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002935F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002935F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x002935FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00293600: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x00293604: jal         0x002912A0
    // 0x00293608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_0;
    // 0x00293608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0029360C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00293610: sw          $a0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r4;
    // 0x00293614: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00293618: beq         $v0, $zero, L_00293638
    if (ctx->r2 == 0) {
        // 0x0029361C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00293638;
    }
    // 0x0029361C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_00293620:
    // 0x00293620: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x00293624: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x00293628: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0029362C: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x00293630: bne         $v0, $zero, L_00293620
    if (ctx->r2 != 0) {
        // 0x00293634: addiu       $a0, $a0, 0x30
        ctx->r4 = ADD32(ctx->r4, 0X30);
            goto L_00293620;
    }
    // 0x00293634: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
L_00293638:
    // 0x00293638: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0029363C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x00293640: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x00293644: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00293648: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0029364C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00293650: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00293654: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x00293658: jal         0x002912A0
    // 0x0029365C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002912A0(rdram, ctx);
        goto after_1;
    // 0x0029365C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x00293660: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x00293664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00293668: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x0029366C: jal         0x00290F20
    // 0x00293670: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00290F20(rdram, ctx);
        goto after_2;
    // 0x00293670: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00293674: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00293678: lw          $v0, 0x7760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7760);
    // 0x0029367C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00293680: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x00293684: sw          $s1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r17;
    // 0x00293688: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x0029368C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00293690: lui         $v0, 0x29
    ctx->r2 = S32(0X29 << 16);
    // 0x00293694: addiu       $v0, $v0, 0x3B1C
    ctx->r2 = ADD32(ctx->r2, 0X3B1C);
    // 0x00293698: jal         0x00293F10
    // 0x0029369C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    func_00293F10(rdram, ctx);
        goto after_3;
    // 0x0029369C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    after_3:
    // 0x002936A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002936A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x002936A8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x002936AC: lw          $a2, 0x48($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X48);
    // 0x002936B0: jal         0x00291034
    // 0x002936B4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00291034(rdram, ctx);
        goto after_4;
    // 0x002936B4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x002936B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x002936BC: jal         0x00290F9C
    // 0x002936C0: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    func_00290F9C(rdram, ctx);
        goto after_5;
    // 0x002936C0: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    after_5:
    // 0x002936C4: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x002936C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x002936CC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x002936D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x002936D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x002936D8: jr          $ra
    // 0x002936DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x002936DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_00425638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00425638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0042563C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00425640: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00425644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00425648: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0042564C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00425650: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x00425654: beq         $a1, $zero, L_00425664
    if (ctx->r5 == 0) {
        // 0x00425658: nop
    
            goto L_00425664;
    }
    // 0x00425658: nop

    // 0x0042565C: jal         0x002052D8
    // 0x00425660: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_0;
    // 0x00425660: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_00425664:
    // 0x00425664: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x00425668: beq         $a1, $zero, L_00425678
    if (ctx->r5 == 0) {
        // 0x0042566C: nop
    
            goto L_00425678;
    }
    // 0x0042566C: nop

    // 0x00425670: jal         0x002052D8
    // 0x00425674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_1;
    // 0x00425674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_00425678:
    // 0x00425678: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x0042567C: beq         $a1, $zero, L_0042568C
    if (ctx->r5 == 0) {
        // 0x00425680: nop
    
            goto L_0042568C;
    }
    // 0x00425680: nop

    // 0x00425684: jal         0x002052D8
    // 0x00425688: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_2;
    // 0x00425688: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_0042568C:
    // 0x0042568C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    // 0x00425690: beq         $a1, $zero, L_004256A4
    if (ctx->r5 == 0) {
        // 0x00425694: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_004256A4;
    }
    // 0x00425694: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00425698: jal         0x002052D8
    // 0x0042569C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_3;
    // 0x0042569C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x004256A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_004256A4:
    // 0x004256A4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_004256A8:
    // 0x004256A8: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x004256AC: beql        $a1, $zero, L_004256C0
    if (ctx->r5 == 0) {
        // 0x004256B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_004256C0;
    }
    goto skip_0;
    // 0x004256B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x004256B4: jal         0x002052D8
    // 0x004256B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_4;
    // 0x004256B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x004256BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_004256C0:
    // 0x004256C0: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x004256C4: bne         $v0, $zero, L_004256A8
    if (ctx->r2 != 0) {
        // 0x004256C8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_004256A8;
    }
    // 0x004256C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x004256CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x004256D0: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x004256D4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x004256D8: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x004256DC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x004256E0: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x004256E4: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_004256E8:
    // 0x004256E8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x004256EC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x004256F0: bgez        $v1, L_004256E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x004256F4: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_004256E8;
    }
    // 0x004256F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x004256F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x004256FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00425700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00425704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00425708: jr          $ra
    // 0x0042570C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0042570C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0045A8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004218F4:
    // 0x0045A8C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0045A8CC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0045A8D0: beq         $v0, $zero, L_0045A8E8
    if (ctx->r2 == 0) {
        // 0x0045A8D4: nop
    
            goto L_0045A8E8;
    }
    // 0x0045A8D4: nop

    // 0x0045A8D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0045A8DC: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0045A8E0: j           L_004218F4
    // 0x0045A8E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    entry_004218F4(rdram, ctx);
    return;
    // 0x0045A8E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_0045A8E8:
    // 0x0045A8E8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x0045A8EC: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x0045A8F0: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
    // 0x0045A8F4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x0045A8F8: jr          $ra
    // 0x0045A8FC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    return;
    // 0x0045A8FC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_0040B3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040B3A8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x0040B3AC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x0040B3B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0040B3B4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x0040B3B8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040B3BC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x0040B3C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x0040B3C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040B3C8: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x0040B3CC: jal         0x00246108
    // 0x0040B3D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0040B3D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0040B3D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B3D8: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x0040B3DC: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x0040B3E0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0040B3E4: jal         0x00245BAC
    // 0x0040B3E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00245BAC(rdram, ctx);
        goto after_1;
    // 0x0040B3E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0040B3EC: lb          $v0, 0xC7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC7);
    // 0x0040B3F0: beq         $v0, $zero, L_0040B404
    if (ctx->r2 == 0) {
        // 0x0040B3F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0040B404;
    }
    // 0x0040B3F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0040B3F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0040B3FC: jal         0x00243414
    // 0x0040B400: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x0040B400: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_0040B404:
    // 0x0040B404: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x0040B408: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x0040B40C: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040B410: jr          $ra
    // 0x0040B414: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x0040B414: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_002188AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002188AC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x002188B0: jr          $ra
    // 0x002188B4: nop

    return;
    // 0x002188B4: nop

;}
RECOMP_FUNC void func_0026F024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F024: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0026F028: beq         $v0, $zero, L_0026F038
    if (ctx->r2 == 0) {
            // 0x0026F02C: addiu       $v0, $a0, -0xFA0
    ctx->r2 = ADD32(ctx->r4, -0XFA0);
    func_0026F038(rdram, ctx);
    return;
    }
    // 0x0026F02C: addiu       $v0, $a0, -0xFA0
    ctx->r2 = ADD32(ctx->r4, -0XFA0);
    // 0x0026F030: jr          $ra
    // 0x0026F034: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x0026F034: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void func_0029DF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029DF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029DF34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0029DF38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0029DF3C: jal         0x0029DFF0
    // 0x0029DF40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_0029DFF0(rdram, ctx);
        goto after_0;
    // 0x0029DF40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x0029DF44: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0029DF48: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x0029DF4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0029DF50: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x0029DF54: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x0029DF58: jal         0x0029E010
    // 0x0029DF5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_1;
    // 0x0029DF5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0029DF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0029DF64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0029DF68: jr          $ra
    // 0x0029DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029DF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00263594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00263594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00263598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0026359C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002635A0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x002635A4: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x002635A8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x002635AC: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x002635B0: jal         0x002119FC
    // 0x002635B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x002635B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x002635B8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x002635BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x002635C0: addiu       $v1, $v1, -0x5528
    ctx->r3 = ADD32(ctx->r3, -0X5528);
    // 0x002635C4: swc1        $f2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f2.u32l;
    // 0x002635C8: lbu         $v0, 0x19($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X19);
    // 0x002635CC: beq         $v0, $zero, L_00263630
    if (ctx->r2 == 0) {
        // 0x002635D0: nop
    
            goto L_00263630;
    }
    // 0x002635D0: nop

    // 0x002635D4: lw          $v1, -0x1238($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1238);
    // 0x002635D8: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x002635DC: bne         $v0, $zero, L_00263630
    if (ctx->r2 != 0) {
        // 0x002635E0: addiu       $v1, $v1, -0x2
        ctx->r3 = ADD32(ctx->r3, -0X2);
            goto L_00263630;
    }
    // 0x002635E0: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
    // 0x002635E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002635E8: lwc1        $f0, 0x7BD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7BD0);
    // 0x002635EC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x002635F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002635F4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x002635F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002635FC: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x00263600: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00263604: mtc1        $v1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r3;
    // 0x00263608: cvt.d.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.d = CVT_D_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x0026360C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x00263610: bgezl       $v1, L_00263628
    if (SIGNED(ctx->r3) >= 0) {
        // 0x00263614: cvt.s.d     $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
            goto L_00263628;
    }
    goto skip_0;
    // 0x00263614: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
    skip_0:
    // 0x00263618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x0026361C: ldc1        $f0, 0x7BD8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X7BD8);
    // 0x00263620: add.d       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.d); NAN_CHECK(ctx->f0.d); 
    ctx->f1.d = ctx->f1.d + ctx->f0.d;
    // 0x00263624: cvt.s.d     $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.d); 
    ctx->f0.fl = CVT_S_D(ctx->f1.d);
L_00263628:
    // 0x00263628: mul.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0026362C: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
L_00263630:
    // 0x00263630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00263634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00263638: jr          $ra
    // 0x0026363C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026363C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002627B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002627B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002627BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002627C0: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x002627C4: beq         $v0, $zero, L_002627E0
    if (ctx->r2 == 0) {
        // 0x002627C8: nop
    
            goto L_002627E0;
    }
    // 0x002627C8: nop

    // 0x002627CC: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x002627D0: beq         $v0, $zero, L_002627E0
    if (ctx->r2 == 0) {
        // 0x002627D4: nop
    
            goto L_002627E0;
    }
    // 0x002627D4: nop

    // 0x002627D8: jalr        $v0
    // 0x002627DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x002627DC: nop

    after_0:
L_002627E0:
    // 0x002627E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002627E4: jr          $ra
    // 0x002627E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002627E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_004540B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0041C3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C3C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041C3C8: lhu         $v0, -0x5518($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5518);
    // 0x0041C3CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C3D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0041C3D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0041C3D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041C3DC: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x0041C3E0: bne         $s0, $zero, L_0041C3F8
    if (ctx->r16 != 0) {
        // 0x0041C3E4: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_0041C3F8;
    }
    // 0x0041C3E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0041C3E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C3EC: addiu       $v0, $v0, 0x4008
    ctx->r2 = ADD32(ctx->r2, 0X4008);
    // 0x0041C3F0: j           L_0041C440
    // 0x0041C3F4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C440;
    // 0x0041C3F4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C3F8:
    // 0x0041C3F8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0041C3FC: bne         $s0, $v0, L_0041C414
    if (ctx->r16 != ctx->r2) {
        // 0x0041C400: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_0041C414;
    }
    // 0x0041C400: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x0041C404: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C408: addiu       $v0, $v0, 0x4020
    ctx->r2 = ADD32(ctx->r2, 0X4020);
    // 0x0041C40C: j           L_0041C440
    // 0x0041C410: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
        goto L_0041C440;
    // 0x0041C410: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_0041C414:
    // 0x0041C414: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041C418: addiu       $v0, $v0, 0x4038
    ctx->r2 = ADD32(ctx->r2, 0X4038);
    // 0x0041C41C: jal         0x004160F0
    // 0x0041C420: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_004160F0(rdram, ctx);
        goto after_0;
    // 0x0041C420: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x0041C424: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x0041C428: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041C42C: addiu       $a1, $a1, 0x1310
    ctx->r5 = ADD32(ctx->r5, 0X1310);
    // 0x0041C430: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0041C434: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x0041C438: jal         0x0029E3E0
    // 0x0041C43C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_0029E3E0(rdram, ctx);
        goto after_1;
    // 0x0041C43C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
L_0041C440:
    // 0x0041C440: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0041C444: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0041C448: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0041C44C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C450: jr          $ra
    // 0x0041C454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00214B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00214B58: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x00214B5C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x00214B60: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00214B64: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x00214B68: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x00214B6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214B70: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x00214B74: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00214B78: addiu       $v0, $v0, 0x5808
    ctx->r2 = ADD32(ctx->r2, 0X5808);
    // 0x00214B7C: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x00214B80: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x00214B84: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x00214B88: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x00214B8C: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x00214B90: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x00214B94: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x00214B98: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x00214B9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00214BA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00214BA4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214BA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x00214BAC: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x00214BB0: jal         0x0020367C
    // 0x00214BB4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00214BB4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00214BB8: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x00214BBC: beq         $s6, $zero, L_00214CD4
    if (ctx->r22 == 0) {
        // 0x00214BC0: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_00214CD4;
    }
    // 0x00214BC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x00214BC4: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x00214BC8: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x00214BCC: jal         0x0020185C
    // 0x00214BD0: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_0020185C(rdram, ctx);
        goto after_1;
    // 0x00214BD0: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_1:
    // 0x00214BD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214BD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00214BDC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x00214BE0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x00214BE4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x00214BE8: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x00214BEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00214BF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00214BF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00214BF8: jal         0x0020367C
    // 0x00214BFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_0020367C(rdram, ctx);
        goto after_2;
    // 0x00214BFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x00214C00: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x00214C04: beq         $s5, $zero, L_00214CC8
    if (ctx->r21 == 0) {
        // 0x00214C08: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_00214CC8;
    }
    // 0x00214C08: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00214C0C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x00214C10: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x00214C14: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x00214C18: blez        $s4, L_00214CBC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x00214C1C: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_00214CBC;
    }
    // 0x00214C1C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00214C20: addiu       $s7, $zero, 0x8
    ctx->r23 = ADD32(0, 0X8);
    // 0x00214C24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_00214C28:
    // 0x00214C28: bne         $fp, $zero, L_00214C3C
    if (ctx->r30 != 0) {
        // 0x00214C2C: nop
    
            goto L_00214C3C;
    }
    // 0x00214C2C: nop

    // 0x00214C30: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x00214C34: bnel        $v0, $s7, L_00214CB0
    if (ctx->r2 != ctx->r23) {
        // 0x00214C38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_00214CB0;
    }
    goto skip_0;
    // 0x00214C38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_00214C3C:
    // 0x00214C3C: lhu         $v0, 0x88($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X88);
    // 0x00214C40: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x00214C44: bne         $v0, $zero, L_00214C64
    if (ctx->r2 != 0) {
        // 0x00214C48: addiu       $a0, $s2, 0x28
        ctx->r4 = ADD32(ctx->r18, 0X28);
            goto L_00214C64;
    }
    // 0x00214C48: addiu       $a0, $s2, 0x28
    ctx->r4 = ADD32(ctx->r18, 0X28);
    // 0x00214C4C: beq         $s3, $zero, L_00214C60
    if (ctx->r19 == 0) {
        // 0x00214C50: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_00214C60;
    }
    // 0x00214C50: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00214C54: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x00214C58: jal         0x0020D908
    // 0x00214C5C: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    func_0020D908(rdram, ctx);
        goto after_3;
    // 0x00214C5C: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    after_3:
L_00214C60:
    // 0x00214C60: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_00214C64:
    // 0x00214C64: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x00214C68: jal         0x0020F85C
    // 0x00214C6C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_0020F85C(rdram, ctx);
        goto after_4;
    // 0x00214C6C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_4:
    // 0x00214C70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00214C74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00214C78: lhu         $a2, 0x2($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2);
    // 0x00214C7C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x00214C80: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x00214C84: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x00214C88: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00214C8C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00214C90: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00214C94: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x00214C98: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x00214C9C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x00214CA0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x00214CA4: jal         0x00236EA0
    // 0x00214CA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_00236EA0(rdram, ctx);
        goto after_5;
    // 0x00214CA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_5:
    // 0x00214CAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_00214CB0:
    // 0x00214CB0: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x00214CB4: bne         $v0, $zero, L_00214C28
    if (ctx->r2 != 0) {
        // 0x00214CB8: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_00214C28;
    }
    // 0x00214CB8: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_00214CBC:
    // 0x00214CBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214CC0: jal         0x002051F4
    // 0x00214CC4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_002051F4(rdram, ctx);
        goto after_6;
    // 0x00214CC4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_6:
L_00214CC8:
    // 0x00214CC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00214CCC: jal         0x002051F4
    // 0x00214CD0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_002051F4(rdram, ctx);
        goto after_7;
    // 0x00214CD0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_7:
L_00214CD4:
    // 0x00214CD4: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x00214CD8: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x00214CDC: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x00214CE0: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x00214CE4: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x00214CE8: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x00214CEC: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x00214CF0: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x00214CF4: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x00214CF8: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x00214CFC: jr          $ra
    // 0x00214D00: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x00214D00: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_002764C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002764C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x002764C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x002764CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002764D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x002764D4: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x002764D8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x002764DC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x002764E0: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x002764E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x002764E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x002764EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x002764F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x002764F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002764F8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002764FC: addiu       $v0, $v0, 0x1DBC
    ctx->r2 = ADD32(ctx->r2, 0X1DBC);
    // 0x00276500: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x00276504: lw          $v0, 0xAC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XAC);
    // 0x00276508: bne         $v0, $zero, L_002765D8
    if (ctx->r2 != 0) {
        // 0x0027650C: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_002765D8;
    }
    // 0x0027650C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x00276510: lw          $a0, 0xDC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XDC);
    // 0x00276514: addiu       $v0, $s1, 0xD8
    ctx->r2 = ADD32(ctx->r17, 0XD8);
    // 0x00276518: beq         $a0, $v0, L_002765B0
    if (ctx->r4 == ctx->r2) {
        // 0x0027651C: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_002765B0;
    }
    // 0x0027651C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00276520: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00276524: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00276528: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    // 0x0027652C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00276530: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00276534: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00276538: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x0027653C: jal         0x0029E460
    // 0x00276540: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    func_0029E460(rdram, ctx);
        goto after_0;
    // 0x00276540: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x00276544: sw          $s3, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r19;
    // 0x00276548: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x0027654C: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x00276550: lwc1        $f0, 0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X4);
    // 0x00276554: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x00276558: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0027655C: addiu       $v0, $s1, 0x4
    ctx->r2 = ADD32(ctx->r17, 0X4);
    // 0x00276560: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00276564: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x00276568: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x0027656C: lh          $a1, 0x40($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X40);
    // 0x00276570: beq         $v1, $v0, L_00276598
    if (ctx->r3 == ctx->r2) {
        // 0x00276574: nop
    
            goto L_00276598;
    }
    // 0x00276574: nop

    // 0x00276578: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_0027657C:
    // 0x0027657C: lh          $v0, 0x40($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X40);
    // 0x00276580: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x00276584: bne         $v0, $zero, L_00276598
    if (ctx->r2 != 0) {
        // 0x00276588: nop
    
            goto L_00276598;
    }
    // 0x00276588: nop

    // 0x0027658C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00276590: bne         $v1, $a0, L_0027657C
    if (ctx->r3 != ctx->r4) {
        // 0x00276594: nop
    
            goto L_0027657C;
    }
    // 0x00276594: nop

L_00276598:
    // 0x00276598: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0027659C: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x002765A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x002765A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x002765A8: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x002765AC: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
L_002765B0:
    // 0x002765B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002765B4: sh          $zero, 0x2AB4($v0)
    MEM_H(0X2AB4, ctx->r2) = 0;
    // 0x002765B8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x002765BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x002765C0: sh          $v0, 0x2AB6($v1)
    MEM_H(0X2AB6, ctx->r3) = ctx->r2;
    // 0x002765C4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002765C8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x002765CC: sw          $v1, 0x2A88($v0)
    MEM_W(0X2A88, ctx->r2) = ctx->r3;
    // 0x002765D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x002765D4: sw          $v1, 0x2A84($v0)
    MEM_W(0X2A84, ctx->r2) = ctx->r3;
L_002765D8:
    // 0x002765D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x002765DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x002765E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x002765E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x002765E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x002765EC: jr          $ra
    // 0x002765F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x002765F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0029BF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029BF80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0029BF84: bgez        $a0, L_0029BFB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x0029BF88: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_0029BFB0;
    }
    // 0x0029BF88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0029BF8C: lui         $v0, 0x9FFF
    ctx->r2 = S32(0X9FFF << 16);
    // 0x0029BF90: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0029BF94: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x0029BF98: bne         $v0, $zero, L_0029BFB4
    if (ctx->r2 != 0) {
        // 0x0029BF9C: lui         $v1, 0x1FFF
        ctx->r3 = S32(0X1FFF << 16);
            goto L_0029BFB4;
    }
    // 0x0029BF9C: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x0029BFA0: lui         $v0, 0x1FFF
    ctx->r2 = S32(0X1FFF << 16);
    // 0x0029BFA4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x0029BFA8: j           L_0029BFD4
    // 0x0029BFAC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
        goto L_0029BFD4;
    // 0x0029BFAC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_0029BFB0:
    // 0x0029BFB0: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
L_0029BFB4:
    // 0x0029BFB4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x0029BFB8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x0029BFBC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x0029BFC0: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x0029BFC4: beq         $v0, $zero, L_0029BFD4
    if (ctx->r2 == 0) {
        // 0x0029BFC8: and         $v0, $a0, $v1
        ctx->r2 = ctx->r4 & ctx->r3;
            goto L_0029BFD4;
    }
    // 0x0029BFC8: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x0029BFCC: jal         0x0029E140
    // 0x0029BFD0: nop

    func_0029E140(rdram, ctx);
        goto after_0;
    // 0x0029BFD0: nop

    after_0:
L_0029BFD4:
        turok2_patch_v2p(rdram, ctx);

    // 0x0029BFD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0029BFD8: jr          $ra
    // 0x0029BFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0029BFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0045E808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_0041B1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B1C0: jr          $ra
    // 0x0041B1C4: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
    return;
    // 0x0041B1C4: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
;}
RECOMP_FUNC void func_0043FE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0043FE0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0043FE10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0043FE14: addiu       $a0, $a0, -0x600
    ctx->r4 = ADD32(ctx->r4, -0X600);
    // 0x0043FE18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0043FE1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0043FE20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0043FE24: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0043FE28: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x0043FE2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0043FE30: beql        $v1, $v0, L_0043FE60
    if (ctx->r3 == ctx->r2) {
        // 0x0043FE34: sw          $zero, -0x8($a0)
        MEM_W(-0X8, ctx->r4) = 0;
            goto L_0043FE60;
    }
    goto skip_0;
    // 0x0043FE34: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    skip_0:
    // 0x0043FE38: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FE3C: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043FE40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043FE44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FE48: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FE4C: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043FE50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043FE54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FE58: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0043FE5C: swc1        $f0, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f0.u32l;
L_0043FE60:
    // 0x0043FE60: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0043FE64: addiu       $s0, $s0, -0x600
    ctx->r16 = ADD32(ctx->r16, -0X600);
    // 0x0043FE68: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_0043FE6C:
    // 0x0043FE6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043FE70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0043FE74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x0043FE78: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FE7C: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043FE80: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043FE84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FE88: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FE8C: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043FE90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043FE94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FE98: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0043FE9C: beql        $v0, $s1, L_0043FEA4
    if (ctx->r2 == ctx->r17) {
        // 0x0043FEA0: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_0043FEA4;
    }
    goto skip_1;
    // 0x0043FEA0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
L_0043FEA4:
    // 0x0043FEA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x0043FEA8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FEAC: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0043FEB0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0043FEB4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0043FEB8: lwc1        $f14, 0x500($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X500);
    // 0x0043FEBC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0043FEC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0043FEC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FEC8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0043FECC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x0043FED0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0043FED4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0043FED8: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0043FEDC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0043FEE0: jal         0x002119FC
    // 0x0043FEE4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x0043FEE4: nop

    after_0:
    // 0x0043FEE8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0043FEEC: nop

    // 0x0043FEF0: bc1t        L_0043FE6C
    if (c1cs) {
        // 0x0043FEF4: nop
    
            goto L_0043FE6C;
    }
    // 0x0043FEF4: nop

    // 0x0043FEF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0043FEFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0043FF00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0043FF04: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0043FF08: jr          $ra
    // 0x0043FF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0043FF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0040734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040734C: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00407350: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00407354: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x00407358: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x0040735C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00407360: addiu       $v0, $v0, -0x620
    ctx->r2 = ADD32(ctx->r2, -0X620);
    // 0x00407364: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x00407368: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x0040736C: jr          $ra
    // 0x00407370: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    return;
    // 0x00407370: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_00259584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00259584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00259588: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0025958C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00259590: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x00259594: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x00259598: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025959C: lw          $s0, 0x1A8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A8);
    // 0x002595A0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x002595A4: lh          $a1, 0x996($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X996);
    // 0x002595A8: jal         0x0024E700
    // 0x002595AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0024E700(rdram, ctx);
        goto after_0;
    // 0x002595AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x002595B0: bne         $v0, $zero, L_002595CC
    if (ctx->r2 != 0) {
        // 0x002595B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_002595CC;
    }
    // 0x002595B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002595B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002595BC: jal         0x00243414
    // 0x002595C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_1;
    // 0x002595C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x002595C4: j           L_00259618
    // 0x002595C8: nop

        goto L_00259618;
    // 0x002595C8: nop

L_002595CC:
    // 0x002595CC: lw          $v0, 0xA68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA68);
    // 0x002595D0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x002595D4: beq         $v0, $zero, L_002595EC
    if (ctx->r2 == 0) {
        // 0x002595D8: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_002595EC;
    }
    // 0x002595D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x002595DC: jal         0x00243414
    // 0x002595E0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_00243414(rdram, ctx);
        goto after_2;
    // 0x002595E0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
    // 0x002595E4: j           L_00259618
    // 0x002595E8: nop

        goto L_00259618;
    // 0x002595E8: nop

L_002595EC:
    // 0x002595EC: lw          $v0, 0xA64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA64);
    // 0x002595F0: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x002595F4: bne         $v0, $zero, L_00259608
    if (ctx->r2 != 0) {
        // 0x002595F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00259608;
    }
    // 0x002595F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002595FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00259600: jal         0x00243414
    // 0x00259604: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00259604: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
L_00259608:
    // 0x00259608: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0025960C: beq         $v0, $zero, L_00259618
    if (ctx->r2 == 0) {
        // 0x00259610: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00259618;
    }
    // 0x00259610: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00259614: sb          $v0, 0x35($s2)
    MEM_B(0X35, ctx->r18) = ctx->r2;
L_00259618:
    // 0x00259618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0025961C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00259620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00259624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00259628: jr          $ra
    // 0x0025962C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0025962C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00257014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00257014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00257018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0025701C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x00257020: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x00257024: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x00257028: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0025702C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00257030: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x00257034: jal         0x00210EF0
    // 0x00257038: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_00210EF0(rdram, ctx);
        goto after_0;
    // 0x00257038: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x0025703C: jal         0x00210EF0
    // 0x00257040: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_00210EF0(rdram, ctx);
        goto after_1;
    // 0x00257040: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x00257044: blez        $s0, L_00257074
    if (SIGNED(ctx->r16) <= 0) {
        // 0x00257048: nop
    
            goto L_00257074;
    }
    // 0x00257048: nop

    // 0x0025704C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00257050: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00257054: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00257058: nop

    // 0x0025705C: bc1fl       L_002570A8
    if (!c1cs) {
        // 0x00257060: sub.s       $f3, $f1, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_002570A8;
    }
    goto skip_0;
    // 0x00257060: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    skip_0:
    // 0x00257064: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257068: lwc1        $f0, 0x7218($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7218);
    // 0x0025706C: j           L_00257098
    // 0x00257070: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
        goto L_00257098;
    // 0x00257070: add.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl + ctx->f0.fl;
L_00257074:
    // 0x00257074: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x00257078: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0025707C: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00257080: nop

    // 0x00257084: bc1fl       L_002570A8
    if (!c1cs) {
        // 0x00257088: sub.s       $f3, $f1, $f0
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
            goto L_002570A8;
    }
    goto skip_1;
    // 0x00257088: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
    skip_1:
    // 0x0025708C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00257090: lwc1        $f0, 0x721C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X721C);
    // 0x00257094: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
L_00257098:
    // 0x00257098: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x0025709C: lwc1        $f1, 0x24($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X24);
    // 0x002570A0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x002570A4: sub.s       $f3, $f1, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = ctx->f1.fl - ctx->f0.fl;
L_002570A8:
    // 0x002570A8: mul.s       $f1, $f3, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f3.fl, ctx->f20.fl);
    // 0x002570AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x002570B0: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x002570B4: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x002570B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002570BC: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x002570C0: nop

    // 0x002570C4: bc1f        L_002570D0
    if (!c1cs) {
        // 0x002570C8: mov.s       $f2, $f1
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
            goto L_002570D0;
    }
    // 0x002570C8: mov.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.fl = ctx->f1.fl;
    // 0x002570CC: neg.s       $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = -ctx->f1.fl;
L_002570D0:
    // 0x002570D0: c.lt.s      $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f3.fl < ctx->f0.fl;
    // 0x002570D4: nop

    // 0x002570D8: bc1f        L_002570FC
    if (!c1cs) {
        // 0x002570DC: nop
    
            goto L_002570FC;
    }
    // 0x002570DC: nop

    // 0x002570E0: neg.s       $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = -ctx->f3.fl;
    // 0x002570E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x002570E8: nop

    // 0x002570EC: bc1tl       L_0025710C
    if (c1cs) {
        // 0x002570F0: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0025710C;
    }
    goto skip_2;
    // 0x002570F0: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_2:
    // 0x002570F4: j           L_0025710C
    // 0x002570F8: nop

        goto L_0025710C;
    // 0x002570F8: nop

L_002570FC:
    // 0x002570FC: c.lt.s      $f3, $f2
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f3.fl < ctx->f2.fl;
    // 0x00257100: nop

    // 0x00257104: bc1tl       L_0025710C
    if (c1cs) {
        // 0x00257108: mov.s       $f1, $f3
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
            goto L_0025710C;
    }
    goto skip_3;
    // 0x00257108: mov.s       $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    ctx->f1.fl = ctx->f3.fl;
    skip_3:
L_0025710C:
    // 0x0025710C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00257110: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00257114: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x00257118: mov.s       $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    ctx->f0.fl = ctx->f1.fl;
    // 0x0025711C: jr          $ra
    // 0x00257120: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00257120: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00415FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00415FB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00415FBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00415FC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00415FC4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00415FC8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00415FCC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00415FD0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00415FD4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00415FD8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00415FDC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00415FE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00415FE4: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x00415FE8: beq         $s1, $zero, L_004160C4
    if (ctx->r17 == 0) {
        // 0x00415FEC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_004160C4;
    }
    // 0x00415FEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x00415FF0: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x00415FF4: lw          $s3, 0x20($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X20);
    // 0x00415FF8: lw          $s4, 0x1C($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X1C);
    // 0x00415FFC: lw          $s5, 0x20($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X20);
    // 0x00416000: lw          $s6, 0x24($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X24);
    // 0x00416004: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00416008: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0041600C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00416010: blez        $v1, L_00416048
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00416014: addiu       $a1, $v0, 0x1D8
        ctx->r5 = ADD32(ctx->r2, 0X1D8);
            goto L_00416048;
    }
    // 0x00416014: addiu       $a1, $v0, 0x1D8
    ctx->r5 = ADD32(ctx->r2, 0X1D8);
    // 0x00416018: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0041601C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x00416020: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_00416024:
    // 0x00416024: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x00416028: bne         $v0, $t0, L_00416034
    if (ctx->r2 != ctx->r8) {
        // 0x0041602C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00416034;
    }
    // 0x0041602C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00416030: addiu       $v1, $zero, 0x330
    ctx->r3 = ADD32(0, 0X330);
L_00416034:
    // 0x00416034: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x00416038: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0041603C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x00416040: bne         $v0, $zero, L_00416024
    if (ctx->r2 != 0) {
        // 0x00416044: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_00416024;
    }
    // 0x00416044: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_00416048:
    // 0x00416048: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0041604C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x00416050: addiu       $a3, $a3, 0xC54
    ctx->r7 = ADD32(ctx->r7, 0XC54);
    // 0x00416054: jal         0x00204EDC
    // 0x00416058: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_00204EDC(rdram, ctx);
        goto after_0;
    // 0x00416058: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x0041605C: beql        $v0, $zero, L_004160C8
    if (ctx->r2 == 0) {
        // 0x00416060: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004160C8;
    }
    goto skip_0;
    // 0x00416060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x00416064: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00416068: beq         $s0, $zero, L_004160C4
    if (ctx->r16 == 0) {
        // 0x0041606C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_004160C4;
    }
    // 0x0041606C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00416070: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x00416074: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00416078: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x0041607C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x00416080: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x00416084: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x00416088: jal         0x00414EA8
    // 0x0041608C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_00414EA8(rdram, ctx);
        goto after_1;
    // 0x0041608C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_1:
    // 0x00416090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00416094: jal         0x00200518
    // 0x00416098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_2;
    // 0x00416098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x0041609C: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x004160A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004160A4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x004160A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x004160AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x004160B0: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x004160B4: beql        $v0, $zero, L_004160BC
    if (ctx->r2 == 0) {
        // 0x004160B8: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_004160BC;
    }
    goto skip_1;
    // 0x004160B8: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_1:
L_004160BC:
    // 0x004160BC: j           L_004160C8
    // 0x004160C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_004160C8;
    // 0x004160C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_004160C4:
    // 0x004160C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004160C8:
    // 0x004160C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x004160CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x004160D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x004160D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x004160D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x004160DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x004160E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004160E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004160E8: jr          $ra
    // 0x004160EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004160EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_00201818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00201818: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x0020181C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00201820: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x00201824: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x00201828: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x0020182C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00201830: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x00201834: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x00201838: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0020183C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x00201840: jr          $ra
    // 0x00201844: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x00201844: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_0023DB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023DB98: lwc1        $f1, 0x4($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x0023DB9C: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x0023DBA0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x0023DBA4: nop

    // 0x0023DBA8: bc1f        L_0023DBB4
    if (!c1cs) {
        // 0x0023DBAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023DBB4;
    }
    // 0x0023DBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023DBB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_0023DBB4:
    // 0x0023DBB4: jr          $ra
    // 0x0023DBB8: nop

    return;
    // 0x0023DBB8: nop

;}
RECOMP_FUNC void func_00417EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00417EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00417EC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00417EC4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00417EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00417ECC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x00417ED0: sw          $zero, -0x5310($at)
    MEM_W(-0X5310, ctx->r1) = 0;
    // 0x00417ED4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00417ED8: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00417EDC: jal         0x00285A80
    // 0x00417EE0: nop

    func_00285A80(rdram, ctx);
        goto after_0;
    // 0x00417EE0: nop

    after_0:
    // 0x00417EE4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00417EE8: jal         0x00285AE0
    // 0x00417EEC: nop

    func_00285AE0(rdram, ctx);
        goto after_1;
    // 0x00417EEC: nop

    after_1:
    // 0x00417EF0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x00417EF4: jal         0x00285BD0
    // 0x00417EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_00285BD0(rdram, ctx);
        goto after_2;
    // 0x00417EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x00417EFC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x00417F00: sw          $zero, 0xBF8($v0)
    MEM_W(0XBF8, ctx->r2) = 0;
    // 0x00417F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00417F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00417F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00417F10: jr          $ra
    // 0x00417F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00417F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0028FA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028FA0C: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
;}
RECOMP_FUNC void func_00266794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00266794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x00266798: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026679C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x002667A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x002667A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x002667A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x002667AC: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x002667B0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x002667B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x002667B8: jal         0x00243414
    // 0x002667BC: sw          $v0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002667BC: sw          $v0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->r2;
    after_0:
    // 0x002667C0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002667C4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x002667C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x002667CC: lwc1        $f0, 0x7CB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7CB0);
    // 0x002667D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x002667D4: swc1        $f0, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f0.u32l;
    // 0x002667D8: jal         0x00220408
    // 0x002667DC: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    func_00220408(rdram, ctx);
        goto after_1;
    // 0x002667DC: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x002667E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002667E4: bne         $v0, $v1, L_00266800
    if (ctx->r2 != ctx->r3) {
        // 0x002667E8: addiu       $v1, $zero, -0x2001
        ctx->r3 = ADD32(0, -0X2001);
            goto L_00266800;
    }
    // 0x002667E8: addiu       $v1, $zero, -0x2001
    ctx->r3 = ADD32(0, -0X2001);
    // 0x002667EC: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x002667F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002667F4: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x002667F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002667FC: sw          $v0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r2;
L_00266800:
    // 0x00266800: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x00266804: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00266808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026680C: jr          $ra
    // 0x00266810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00266810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00284144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284144: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284148: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x0028414C: lw          $v0, 0xE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XE0);
    // 0x00284150: xori        $v0, $v0, 0x50
    ctx->r2 = ctx->r2 ^ 0X50;
    // 0x00284154: jr          $ra
    // 0x00284158: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x00284158: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_0026EFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026EFAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x0026EFB0: jr          $ra
    // 0x0026EFB4: nop

    return;
    // 0x0026EFB4: nop

;}
RECOMP_FUNC void func_0041B608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B608: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B60C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B610: xori        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 ^ 0X100;
    // 0x0041B614: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B618: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B61C: jr          $ra
    // 0x0041B620: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B620: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_0028FA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0028FA10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0028FA14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0028FA18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0028FA1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0028FA20: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x0028FA24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0028FA28: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0028FA2C: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x0028FA30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x0028FA34: lw          $v1, 0x7760($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7760);
    // 0x0028FA38: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0028FA3C: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x0028FA40: addiu       $v0, $zero, 0x1E8
    ctx->r2 = ADD32(0, 0X1E8);
    // 0x0028FA44: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x0028FA48: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x0028FA4C: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    // 0x0028FA50: addiu       $v0, $zero, 0x3E80
    ctx->r2 = ADD32(0, 0X3E80);
    // 0x0028FA54: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x0028FA58: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0028FA5C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x0028FA60: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x0028FA64: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x0028FA68: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x0028FA6C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x0028FA70: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x0028FA74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028FA78: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x0028FA7C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x0028FA80: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0028FA84: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x0028FA88: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x0028FA8C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x0028FA90: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x0028FA94: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x0028FA98: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x0028FA9C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x0028FAA0: sb          $v0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r2;
    // 0x0028FAA4: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x0028FAA8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x0028FAAC: jal         0x002912A0
    // 0x0028FAB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_002912A0(rdram, ctx);
        goto after_0;
    // 0x0028FAB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x0028FAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0028FAB8: jal         0x002928F0
    // 0x0028FABC: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    func_002928F0(rdram, ctx);
        goto after_1;
    // 0x0028FABC: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    after_1:
    // 0x0028FAC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028FAC4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0028FAC8: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x0028FACC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028FAD0: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x0028FAD4: jal         0x002912A0
    // 0x0028FAD8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_002912A0(rdram, ctx);
        goto after_2;
    // 0x0028FAD8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x0028FADC: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x0028FAE0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0028FAE4: blez        $v1, L_0028FB10
    if (SIGNED(ctx->r3) <= 0) {
        // 0x0028FAE8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_0028FB10;
    }
    // 0x0028FAE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028FAEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_0028FAF0:
    // 0x0028FAF0: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x0028FAF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x0028FAF8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0028FAFC: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x0028FB00: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0028FB04: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0028FB08: bne         $v0, $zero, L_0028FAF0
    if (ctx->r2 != 0) {
        // 0x0028FB0C: addiu       $v1, $v1, 0x38
        ctx->r3 = ADD32(ctx->r3, 0X38);
            goto L_0028FAF0;
    }
    // 0x0028FB0C: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
L_0028FB10:
    // 0x0028FB10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x0028FB14: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0028FB18: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x0028FB1C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x0028FB20: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x0028FB24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0028FB28: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x0028FB2C: jal         0x002912A0
    // 0x0028FB30: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_002912A0(rdram, ctx);
        goto after_3;
    // 0x0028FB30: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_3:
    // 0x0028FB34: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x0028FB38: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x0028FB3C: jal         0x00290F20
    // 0x0028FB40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_00290F20(rdram, ctx);
        goto after_4;
    // 0x0028FB40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_4:
    // 0x0028FB44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0028FB48: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x0028FB4C: lw          $a0, 0x7760($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7760);
    // 0x0028FB50: lui         $v0, 0x29
    ctx->r2 = S32(0X29 << 16);
    // 0x0028FB54: addiu       $v0, $v0, -0x480
    ctx->r2 = ADD32(ctx->r2, -0X480);
    // 0x0028FB58: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x0028FB5C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x0028FB60: jal         0x00293F10
    // 0x0028FB64: sw          $a1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r5;
    func_00293F10(rdram, ctx);
        goto after_5;
    // 0x0028FB64: sw          $a1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r5;
    after_5:
    // 0x0028FB68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0028FB6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0028FB70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0028FB74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0028FB78: jr          $ra
    // 0x0028FB7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x0028FB7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_00233000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00233000: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x00233004: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x00233008: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0023300C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x00233010: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00233014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00233018: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x0023301C: jal         0x00281194
    // 0x00233020: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    func_00281194(rdram, ctx);
        goto after_0;
    // 0x00233020: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    after_0:
    // 0x00233024: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00233028: beq         $s0, $zero, L_002330FC
    if (ctx->r16 == 0) {
        // 0x0023302C: addiu       $v1, $sp, 0x18
        ctx->r3 = ADD32(ctx->r29, 0X18);
            goto L_002330FC;
    }
    // 0x0023302C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00233030: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x00233034: bne         $v0, $zero, L_00233100
    if (ctx->r2 != 0) {
        // 0x00233038: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_00233100;
    }
    // 0x00233038: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x0023303C: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x00233040: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00233044: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
L_00233048:
    // 0x00233048: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0023304C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x00233050: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00233054: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00233058: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0023305C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x00233060: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00233064: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00233068: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x0023306C: bne         $v0, $a0, L_00233048
    if (ctx->r2 != ctx->r4) {
        // 0x00233070: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00233048;
    }
    // 0x00233070: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00233074: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00233078: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x0023307C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x00233080: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x00233084: lw          $t0, 0x114($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X114);
    // 0x00233088: lw          $t1, 0x118($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X118);
    // 0x0023308C: lw          $t2, 0x11C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X11C);
    // 0x00233090: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x00233094: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x00233098: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x0023309C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x002330A0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x002330A4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x002330A8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x002330AC: jal         0x00239F00
    // 0x002330B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00239F00(rdram, ctx);
        goto after_1;
    // 0x002330B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x002330B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x002330B8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x002330BC: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x002330C0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
L_002330C4:
    // 0x002330C4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x002330C8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x002330CC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x002330D0: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x002330D4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x002330D8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x002330DC: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x002330E0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x002330E4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x002330E8: bne         $v1, $a0, L_002330C4
    if (ctx->r3 != ctx->r4) {
        // 0x002330EC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_002330C4;
    }
    // 0x002330EC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x002330F0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x002330F4: j           L_00233174
    // 0x002330F8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_00233174;
    // 0x002330F8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_002330FC:
    // 0x002330FC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_00233100:
    // 0x00233100: addiu       $a0, $s1, 0x30
    ctx->r4 = ADD32(ctx->r17, 0X30);
L_00233104:
    // 0x00233104: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00233108: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x0023310C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x00233110: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x00233114: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00233118: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x0023311C: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x00233120: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x00233124: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x00233128: bne         $v0, $a0, L_00233104
    if (ctx->r2 != ctx->r4) {
        // 0x0023312C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_00233104;
    }
    // 0x0023312C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x00233130: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x00233134: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x00233138: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0023313C: addiu       $v0, $v0, 0x1B40
    ctx->r2 = ADD32(ctx->r2, 0X1B40);
    // 0x00233140: lw          $t0, 0x114($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X114);
    // 0x00233144: lw          $t1, 0x118($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X118);
    // 0x00233148: lw          $t2, 0x11C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X11C);
    // 0x0023314C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x00233150: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x00233154: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x00233158: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0023315C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x00233160: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x00233164: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x00233168: jal         0x00239F00
    // 0x0023316C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_00239F00(rdram, ctx);
        goto after_2;
    // 0x0023316C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00233170: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_00233174:
    // 0x00233174: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x00233178: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0023317C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x00233180: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x00233184: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x00233188: jr          $ra
    // 0x0023318C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0023318C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_0041F0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041F0C8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0041F0CC: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x0041F0D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0041F0D4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x0041F0D8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x0041F0DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x0041F0E0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x0041F0E4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x0041F0E8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x0041F0EC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x0041F0F0: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    // 0x0041F0F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x0041F0F8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x0041F0FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x0041F100: beq         $v0, $zero, L_0041F118
    if (ctx->r2 == 0) {
        // 0x0041F104: sw          $s1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r17;
            goto L_0041F118;
    }
    // 0x0041F104: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x0041F108: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F10C: lw          $v0, 0x2028($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2028);
    // 0x0041F110: j           L_0041F124
    // 0x0041F114: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
        goto L_0041F124;
    // 0x0041F114: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_0041F118:
    // 0x0041F118: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x0041F11C: lw          $a2, 0x1C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1C);
    // 0x0041F120: lb          $v0, 0x4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4);
L_0041F124:
    // 0x0041F124: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0041F128: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0041F12C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x0041F130: lw          $v0, 0x70A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70A8);
    // 0x0041F134: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0041F138: lw          $v1, 0x984($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X984);
    // 0x0041F13C: beq         $v1, $zero, L_0041F220
    if (ctx->r3 == 0) {
        // 0x0041F140: addiu       $s3, $v0, 0x688
        ctx->r19 = ADD32(ctx->r2, 0X688);
            goto L_0041F220;
    }
    // 0x0041F140: addiu       $s3, $v0, 0x688
    ctx->r19 = ADD32(ctx->r2, 0X688);
    // 0x0041F144: jal         0x00426E6C
    // 0x0041F148: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00426E6C(rdram, ctx);
        goto after_0;
    // 0x0041F148: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x0041F14C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041F150: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x0041F154: jal         0x004267A0
    // 0x0041F158: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_004267A0(rdram, ctx);
        goto after_1;
    // 0x0041F158: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x0041F15C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041F160: bne         $s0, $zero, L_0041F220
    if (ctx->r16 != 0) {
        // 0x0041F164: nop
    
            goto L_0041F220;
    }
    // 0x0041F164: nop

    // 0x0041F168: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0041F16C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x0041F170: bne         $v0, $zero, L_0041F1EC
    if (ctx->r2 != 0) {
        // 0x0041F174: nop
    
            goto L_0041F1EC;
    }
    // 0x0041F174: nop

    // 0x0041F178: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041F17C: jal         0x0042670C
    // 0x0041F180: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_0042670C(rdram, ctx);
        goto after_2;
    // 0x0041F180: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x0041F184: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041F188: bne         $s0, $zero, L_0041F1EC
    if (ctx->r16 != 0) {
        // 0x0041F18C: nop
    
            goto L_0041F1EC;
    }
    // 0x0041F18C: nop

    // 0x0041F190: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0041F194: beq         $v0, $zero, L_0041F1EC
    if (ctx->r2 == 0) {
        // 0x0041F198: nop
    
            goto L_0041F1EC;
    }
    // 0x0041F198: nop

    // 0x0041F19C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x0041F1A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041F1A4: jal         0x00426A94
    // 0x0041F1A8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_00426A94(rdram, ctx);
        goto after_3;
    // 0x0041F1A8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x0041F1AC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x0041F1B0: bne         $s0, $zero, L_0041F1EC
    if (ctx->r16 != 0) {
        // 0x0041F1B4: addu        $a1, $s3, $zero
        ctx->r5 = ADD32(ctx->r19, 0);
            goto L_0041F1EC;
    }
    // 0x0041F1B4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x0041F1B8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x0041F1BC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x0041F1C0: addiu       $a3, $a3, 0x45CC
    ctx->r7 = ADD32(ctx->r7, 0X45CC);
    // 0x0041F1C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0041F1C8: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x0041F1CC: lw          $a2, 0x2018($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2018);
    // 0x0041F1D0: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x0041F1D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F1D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0041F1DC: addiu       $v0, $v0, 0x45D8
    ctx->r2 = ADD32(ctx->r2, 0X45D8);
    // 0x0041F1E0: jal         0x00426164
    // 0x0041F1E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00426164(rdram, ctx);
        goto after_4;
    // 0x0041F1E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x0041F1E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_0041F1EC:
    // 0x0041F1EC: beq         $s5, $zero, L_0041F220
    if (ctx->r21 == 0) {
        // 0x0041F1F0: nop
    
            goto L_0041F220;
    }
    // 0x0041F1F0: nop

    // 0x0041F1F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F1F8: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F1FC: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x0041F200: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F204: addiu       $a1, $a1, -0x3E3C
    ctx->r5 = ADD32(ctx->r5, -0X3E3C);
    // 0x0041F208: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F20C: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F210: jal         0x00416644
    // 0x0041F214: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_5;
    // 0x0041F214: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
    // 0x0041F218: j           L_0041F304
    // 0x0041F21C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_0041F304;
    // 0x0041F21C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0041F220:
    // 0x0041F220: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F224: lw          $v0, 0x2010($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2010);
    // 0x0041F228: bne         $v0, $zero, L_0041F240
    if (ctx->r2 != 0) {
        // 0x0041F22C: nop
    
            goto L_0041F240;
    }
    // 0x0041F22C: nop

    // 0x0041F230: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0041F234: lw          $v0, 0x2014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2014);
    // 0x0041F238: beq         $v0, $zero, L_0041F248
    if (ctx->r2 == 0) {
        // 0x0041F23C: nop
    
            goto L_0041F248;
    }
    // 0x0041F23C: nop

L_0041F240:
    // 0x0041F240: jal         0x002053A8
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002053A8(rdram, ctx);
        goto after_6;
    // 0x0041F244: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
L_0041F248:
    // 0x0041F248: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F24C: lw          $a1, 0x2010($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2010);
    // 0x0041F250: beq         $a1, $zero, L_0041F260
    if (ctx->r5 == 0) {
        // 0x0041F254: nop
    
            goto L_0041F260;
    }
    // 0x0041F254: nop

    // 0x0041F258: jal         0x002052D8
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_7;
    // 0x0041F25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
L_0041F260:
    // 0x0041F260: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x0041F264: lw          $a1, 0x2014($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2014);
    // 0x0041F268: beq         $a1, $zero, L_0041F278
    if (ctx->r5 == 0) {
        // 0x0041F26C: nop
    
            goto L_0041F278;
    }
    // 0x0041F26C: nop

    // 0x0041F270: jal         0x002052D8
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002052D8(rdram, ctx);
        goto after_8;
    // 0x0041F274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
L_0041F278:
    // 0x0041F278: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F27C: sw          $zero, 0x2010($at)
    MEM_W(0X2010, ctx->r1) = 0;
    // 0x0041F280: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F284: sw          $zero, 0x2014($at)
    MEM_W(0X2014, ctx->r1) = 0;
    // 0x0041F288: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F28C: sw          $zero, 0x2018($at)
    MEM_W(0X2018, ctx->r1) = 0;
    // 0x0041F290: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0041F294: sw          $zero, 0x201C($at)
    MEM_W(0X201C, ctx->r1) = 0;
    // 0x0041F298: beq         $s6, $zero, L_0041F304
    if (ctx->r22 == 0) {
        // 0x0041F29C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0041F304;
    }
    // 0x0041F29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0041F2A0: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2A4: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2A4: nop

    // 0x0041F2A8: jal         0x00412B14
    // 0x0041F2AC: nop

    func_00412B14(rdram, ctx);
        goto after_9;
    // 0x0041F2AC: nop

    after_9:
    // 0x0041F2B0: jal         0x00412438
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    func_00412438(rdram, ctx);
        goto after_10;
    // 0x0041F2B4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_10:
    // 0x0041F2B8: bne         $s0, $zero, L_0041F2D8
    if (ctx->r16 != 0) {
        // 0x0041F2BC: nop
    
            goto L_0041F2D8;
    }
    // 0x0041F2BC: nop

    // 0x0041F2C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2C4: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2C8: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2CC: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x0041F2D0: j           L_0041F2E8
    // 0x0041F2D4: nop

        goto L_0041F2E8;
    // 0x0041F2D4: nop

L_0041F2D8:
    // 0x0041F2D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x0041F2DC: addiu       $a0, $a0, -0x61D4
    ctx->r4 = ADD32(ctx->r4, -0X61D4);
    // 0x0041F2E0: lui         $a1, 0x44
    ctx->r5 = S32(0X44 << 16);
    // 0x0041F2E4: addiu       $a1, $a1, -0x4208
    ctx->r5 = ADD32(ctx->r5, -0X4208);
L_0041F2E8:
    // 0x0041F2E8: lui         $v0, 0x44
    ctx->r2 = S32(0X44 << 16);
    // 0x0041F2EC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x0041F2F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041F2F4: lw          $a3, 0xA50($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XA50);
    // 0x0041F2F8: jal         0x00416644
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_00416644(rdram, ctx);
        goto after_11;
    // 0x0041F2FC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_11:
    // 0x0041F300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0041F304:
    // 0x0041F304: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0041F308: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0041F30C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0041F310: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x0041F314: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x0041F318: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0041F31C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0041F320: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0041F324: jr          $ra
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x0041F328: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_00235F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00235F48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00235F4C: lw          $v0, -0x535C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X535C);
    // 0x00235F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00235F54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00235F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00235F5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00235F60: sw          $zero, -0x3040($at)
    MEM_W(-0X3040, ctx->r1) = 0;
    // 0x00235F64: bne         $v0, $zero, L_00235F7C
    if (ctx->r2 != 0) {
        // 0x00235F68: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_00235F7C;
    }
    // 0x00235F68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00235F6C: jal         0x002366C8
    // 0x00235F70: nop

    func_002366C8(rdram, ctx);
        goto after_0;
    // 0x00235F70: nop

    after_0:
    // 0x00235F74: jal         0x002367A0
    // 0x00235F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_002367A0(rdram, ctx);
        goto after_1;
    // 0x00235F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_00235F7C:
    // 0x00235F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00235F80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00235F84: jr          $ra
    // 0x00235F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00235F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026E3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026E3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0026E3AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x0026E3B0: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x0026E3B4: sltiu       $v0, $v0, 0x100
    ctx->r2 = ctx->r2 < 0X100 ? 1 : 0;
    // 0x0026E3B8: bne         $v0, $zero, L_0026E3D4
    if (ctx->r2 != 0) {
        // 0x0026E3BC: nop
    
            goto L_0026E3D4;
    }
    // 0x0026E3BC: nop

    // 0x0026E3C0: lhu         $a0, 0x6($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X6);
    // 0x0026E3C4: jal         0x0027580C
    // 0x0026E3C8: nop

    func_0027580C(rdram, ctx);
        goto after_0;
    // 0x0026E3C8: nop

    after_0:
    // 0x0026E3CC: j           L_0026E3E0
    // 0x0026E3D0: nop

        goto L_0026E3E0;
    // 0x0026E3D0: nop

L_0026E3D4:
    // 0x0026E3D4: lhu         $a0, 0x6($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X6);
    // 0x0026E3D8: jal         0x002759C4
    // 0x0026E3DC: nop

    func_002759C4(rdram, ctx);
        goto after_1;
    // 0x0026E3DC: nop

    after_1:
L_0026E3E0:
    // 0x0026E3E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0026E3E4: jr          $ra
    // 0x0026E3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x0026E3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440894: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00440898: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0044089C: lwc1        $f0, 0x54C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X54C);
    // 0x004408A0: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004408A4: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x004408A8: jr          $ra
    // 0x004408AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004408AC: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_0045C9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00284240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00284240: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00284244: lw          $v0, 0x1BB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1BB0);
    // 0x00284248: lw          $v0, 0x3C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C);
    // 0x0028424C: jr          $ra
    // 0x00284250: nop

    return;
    // 0x00284250: nop

;}
RECOMP_FUNC void func_00265F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00265F84: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00265F88: addiu       $s0, $s0, 0x1810
    ctx->r16 = ADD32(ctx->r16, 0X1810);
    // 0x00265F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
;}
RECOMP_FUNC void func_00418EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00418EAC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00418EB0: lbu         $v1, -0x5504($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5504);
    // 0x00418EB4: beq         $v1, $zero, L_00418ECC
    if (ctx->r3 == 0) {
        // 0x00418EB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00418ECC;
    }
    // 0x00418EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00418EBC: beq         $v1, $v0, L_00418EDC
    if (ctx->r3 == ctx->r2) {
        // 0x00418EC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00418EDC;
    }
    // 0x00418EC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00418EC4: j           L_00418EEC
    // 0x00418EC8: nop

        goto L_00418EEC;
    // 0x00418EC8: nop

L_00418ECC:
    // 0x00418ECC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418ED0: addiu       $v0, $v0, 0x617C
    ctx->r2 = ADD32(ctx->r2, 0X617C);
    // 0x00418ED4: j           L_00418EE8
    // 0x00418ED8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00418EE8;
    // 0x00418ED8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418EDC:
    // 0x00418EDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00418EE0: addiu       $v0, $v0, 0x6164
    ctx->r2 = ADD32(ctx->r2, 0X6164);
    // 0x00418EE4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00418EE8:
    // 0x00418EE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00418EEC:
    // 0x00418EEC: jr          $ra
    // 0x00418EF0: nop

    return;
    // 0x00418EF0: nop

;}
RECOMP_FUNC void func_004198B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004198B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004198B4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x004198B8: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x004198BC: addiu       $a2, $a2, -0x6038
    ctx->r6 = ADD32(ctx->r6, -0X6038);
    // 0x004198C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x004198C4: jal         0x00416894
    // 0x004198C8: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x004198C8: nop

    after_0:
    // 0x004198CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004198D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004198D4: jr          $ra
    // 0x004198D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004198D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00218218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218218: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x0021821C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x00218220: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x00218224: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00218228: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x0021822C: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x00218230: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x00218234: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00218238: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x0021823C: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x00218240: jr          $ra
    // 0x00218244: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    return;
    // 0x00218244: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_00450E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00450E7C: jr          $ra
    // 0x00450E80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00450E80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00289A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00289A84: jr          $ra
    // 0x00289A88: nop

    return;
    // 0x00289A88: nop

;}
RECOMP_FUNC void func_00288C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00288C80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00288C84: lw          $v0, 0x6D14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D14);
    // 0x00288C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00288C8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00288C90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00288C94: beq         $v0, $zero, L_00288CA4
    if (ctx->r2 == 0) {
        // 0x00288C98: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_00288CA4;
    }
    // 0x00288C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00288C9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288CA0: sw          $zero, 0x6D14($at)
    MEM_W(0X6D14, ctx->r1) = 0;
L_00288CA4:
    // 0x00288CA4: jal         0x0028D23C
    // 0x00288CA8: nop

    func_0028D23C(rdram, ctx);
        goto after_0;
    // 0x00288CA8: nop

    after_0:
    // 0x00288CAC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288CB0: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288CB4: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288CB8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x00288CBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00288CC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00288CC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288CC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00288CCC: lw          $v0, 0x6D7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6D7C);
    // 0x00288CD0: beql        $v0, $zero, L_00288CF0
    if (ctx->r2 == 0) {
        // 0x00288CD4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_00288CF0;
    }
    goto skip_0;
    // 0x00288CD4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    skip_0:
    // 0x00288CD8: jalr        $v0
    // 0x00288CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00288CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x00288CE0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x00288CE4: addu        $at, $s0, $at
    ctx->r1 = ADD32(ctx->r16, ctx->r1);
    // 0x00288CE8: lw          $v1, 0x3FD8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3FD8);
    // 0x00288CEC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_00288CF0:
    // 0x00288CF0: beq         $v1, $v0, L_00288D18
    if (ctx->r3 == ctx->r2) {
        // 0x00288CF4: nop
    
            goto L_00288D18;
    }
    // 0x00288CF4: nop

    // 0x00288CF8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00288CFC: lw          $v0, -0x4EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EF0);
        turok2_patch_retrace_guard(rdram, ctx);

    // 0x00288D00: beq         $v0, $zero, L_00288D18
    if (ctx->r2 == 0) {
        // 0x00288D04: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_00288D18;
    }
    // 0x00288D04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00288D08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
        turok2_patch_scale_frontend_hold(rdram, ctx);

    // 0x00288D0C: sw          $v0, -0x4EF0($at)
    MEM_W(-0X4EF0, ctx->r1) = ctx->r2;
    // 0x00288D10: jal         0x00287ABC
    // 0x00288D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00287ABC(rdram, ctx);
        goto after_2;
    // 0x00288D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_00288D18:
    // 0x00288D18: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00288D1C: lw          $v0, 0x6D24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D24);
    // 0x00288D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00288D24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00288D28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00288D2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00288D30: sw          $v0, 0x6D24($at)
    MEM_W(0X6D24, ctx->r1) = ctx->r2;
    // 0x00288D34: jr          $ra
    // 0x00288D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00288D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
