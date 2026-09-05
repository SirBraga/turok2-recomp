#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void entry_00403C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403C08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00403C0C: jr          $ra
    // 0x00403C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00403CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403CE0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00403CE4: addiu       $v0, $v0, -0x9F8
    ctx->r2 = ADD32(ctx->r2, -0X9F8);
    // 0x00403CE8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x00403CEC: sb          $zero, 0x3C8($v0)
    MEM_B(0X3C8, ctx->r2) = 0;
    // 0x00403CF0: jr          $ra
    // 0x00403CF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
    return;
    // 0x00403CF4: sb          $zero, 0x3C9($v0)
    MEM_B(0X3C9, ctx->r2) = 0;
;}
RECOMP_FUNC void entry_0040456C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040456C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00404570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00404574: jr          $ra
    // 0x00404578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00404578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00404750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404750: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404754: lw          $a0, -0x67C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67C);
    // 0x00404758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x0040475C: jal         0x00243414
    // 0x00404760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00404760: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
    // 0x00404764: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404768: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x0040476C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404770: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00404774: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x00404778: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x0040477C: nop
    
            goto L_004049EC;
    }
    // 0x0040477C: nop

    // 0x00404780: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00404784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x00404788: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x0040478C: nop

    // 0x00404790: bc1f        L_004048B8
    if (!c1cs) {
        // 0x00404794: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_004048B8;
    }
    // 0x00404794: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x00404798: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x0040479C: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x004047A0: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x004047A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047A8: lwc1        $f1, 0x3BC($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3BC);
    // 0x004047AC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047B0: lwc1        $f2, 0x3C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3C0);
    // 0x004047B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047B8: lwc1        $f3, 0x3C4($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3C4);
    // 0x004047BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004047C0: lwc1        $f0, 0x3C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3C8);
    // 0x004047C4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x004047C8: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x004047CC: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x004047D0: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x004047D4: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x004047D8: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x004047DC: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x004047E0: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x004047E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004047E8: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x004047EC: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x004047F0: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x004047F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x004047F8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x004047FC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x00404800: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x00404804: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x00404808: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x0040480C: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x00404810: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00404814: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00404818: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x0040481C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x00404820: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x00404824: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x00404828: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0040482C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x00404830: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00404834: jal         0x00228108
    // 0x00404838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_1;
    // 0x00404838: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_1:
    // 0x0040483C: beq         $v0, $zero, L_004048B0
    if (ctx->r2 == 0) {
        // 0x00404840: nop
    
            goto L_004048B0;
    }
    // 0x00404840: nop

    // 0x00404844: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404848: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x0040484C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00404850: beq         $v1, $zero, L_004048A0
    if (ctx->r3 == 0) {
        // 0x00404854: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004048A0;
    }
    // 0x00404854: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404858: bnel        $v0, $zero, L_004048A0
    if (ctx->r2 != 0) {
        // 0x0040485C: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_004048A0;
    }
    goto skip_0;
    // 0x0040485C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_0:
    // 0x00404860: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404864: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404868: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x0040486C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404870: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404874: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404878: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040487C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404880: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x00404884: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00404888: beq         $v0, $v1, L_0040489C
    if (ctx->r2 == ctx->r3) {
        // 0x0040488C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_0040489C;
    }
    // 0x0040488C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00404890: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x00404894: j           L_004048A0
    // 0x00404898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
        goto L_004048A0;
    // 0x00404898: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_0040489C:
    // 0x0040489C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_004048A0:
    // 0x004048A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048A4: lwc1        $f0, 0x3CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3CC);
    // 0x004048A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004048AC: swc1        $f0, -0x6A4($at)
    MEM_W(-0X6A4, ctx->r1) = ctx->f0.u32l;
L_004048B0:
    // 0x004048B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004048B4: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
L_004048B8:
    // 0x004048B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004048BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004048C0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x004048C4: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x004048C8: nop
    
            goto L_004049EC;
    }
    // 0x004048C8: nop

    // 0x004048CC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x004048D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x004048D4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x004048D8: nop

    // 0x004048DC: bc1f        L_004049EC
    if (!c1cs) {
        // 0x004048E0: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_004049EC;
    }
    // 0x004048E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x004048E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004048E8: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x004048EC: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x004048F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048F4: lwc1        $f1, 0x3D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3D0);
    // 0x004048F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048FC: lwc1        $f2, 0x3D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3D4);
    // 0x00404900: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404904: lwc1        $f3, 0x3D8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3D8);
    // 0x00404908: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040490C: lwc1        $f0, 0x3DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3DC);
    // 0x00404910: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00404914: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x00404918: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040491C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x00404920: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00404924: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x00404928: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x0040492C: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x00404930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00404934: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x00404938: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x0040493C: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x00404940: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00404944: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00404948: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0040494C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x00404950: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x00404954: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x00404958: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x0040495C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00404960: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00404964: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00404968: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x0040496C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x00404970: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x00404974: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00404978: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0040497C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00404980: jal         0x00228108
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_2;
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_2:
    // 0x00404988: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x0040498C: nop
    
            goto L_004049EC;
    }
    // 0x0040498C: nop

    // 0x00404990: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404994: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x00404998: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040499C: beq         $v1, $zero, L_004049EC
    if (ctx->r3 == 0) {
        // 0x004049A0: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004049EC;
    }
    // 0x004049A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004049A4: bnel        $v0, $zero, L_004049EC
    if (ctx->r2 != 0) {
        // 0x004049A8: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_004049EC;
    }
    goto skip_1;
    // 0x004049A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x004049AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049B0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x004049B4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x004049B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004049BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049C0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x004049C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004049C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004049CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x004049D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004049D4: beq         $v0, $v1, L_004049E8
    if (ctx->r2 == ctx->r3) {
        // 0x004049D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004049E8;
    }
    // 0x004049D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049DC: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x004049E0: j           L_004049EC
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
        goto L_004049EC;
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_004049E8:
    // 0x004049E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_004049EC:
    // 0x004049EC: beq         $s3, $zero, L_00404A8C
    if (ctx->r19 == 0) {
        // 0x004049F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00404A8C;
    }
    // 0x004049F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049F4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x004049F8: addiu       $s1, $s1, -0x5EC
    ctx->r17 = ADD32(ctx->r17, -0X5EC);
    // 0x004049FC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00404A00: beq         $v1, $v0, L_00404A8C
    if (ctx->r3 == ctx->r2) {
        // 0x00404A04: nop
    
            goto L_00404A8C;
    }
    // 0x00404A04: nop

    // 0x00404A08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A0C: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404A10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00404A14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404A18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A1C: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404A28: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00404A2C: lw          $v1, -0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X8);
    // 0x00404A30: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x00404A34: beq         $v1, $zero, L_00404A8C
    if (ctx->r3 == 0) {
        // 0x00404A38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00404A8C;
    }
    // 0x00404A38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404A3C: beq         $s0, $v0, L_00404A88
    if (ctx->r16 == ctx->r2) {
        // 0x00404A40: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_00404A88;
    }
    // 0x00404A40: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x00404A44: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00404A48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00404A4C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00404A50: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00404A54: jal         0x002119FC
    // 0x00404A58: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00404A58: nop

    after_3:
    // 0x00404A5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404A60: lwc1        $f1, 0x3E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3E0);
    // 0x00404A64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404A68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00404A6C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x00404A70: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00404A74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00404A78: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00404A7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00404A80: j           L_00404A8C
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_00404A8C;
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00404A88:
    // 0x00404A88: swc1        $f20, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f20.u32l;
L_00404A8C:
    // 0x00404A8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00404A90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00404A94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404A98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x00404A9C: beq         $a0, $zero, L_00404AE4
    if (ctx->r4 == 0) {
        // 0x00404AA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00404AE4;
    }
    // 0x00404AA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404AA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x00404AAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00404AB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_00404AB4:
    // 0x00404AB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x00404AB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x00404ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00404AC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x00404AC4: blez        $v1, L_00404AD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00404AC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_00404AD8;
    }
    // 0x00404AC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x00404ACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x00404AD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404AD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_00404AD8:
    // 0x00404AD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00404ADC: bnel        $a0, $zero, L_00404AB4
    if (ctx->r4 != 0) {
        // 0x00404AE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_00404AB4;
    }
    goto skip_2;
    // 0x00404AE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_2:
L_00404AE4:
    // 0x00404AE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404AE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00404AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00404AF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00404AF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00404AF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00404AFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00404B04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00404B08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00404B0C: jal         0x00246108
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_4;
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_4:
    // 0x00404B14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00404B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00404B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00404B24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404B2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x00404B30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00404B38: bne         $v0, $s1, L_00404B4C
    if (ctx->r2 != ctx->r17) {
        // 0x00404B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B4C;
    }
    // 0x00404B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B40: jal         0x00404FE0
    // 0x00404B44: nop

    func_00404FE0(rdram, ctx);
        goto after_5;
    // 0x00404B44: nop

    after_5:
    // 0x00404B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B4C:
    // 0x00404B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B50: jal         0x004050E0
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_6;
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00404B58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00404B5C: bne         $v0, $s1, L_00404B70
    if (ctx->r2 != ctx->r17) {
        // 0x00404B60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B70;
    }
    // 0x00404B60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B64: jal         0x00405288
    // 0x00404B68: nop

    func_00405288(rdram, ctx);
        goto after_7;
    // 0x00404B68: nop

    after_7:
    // 0x00404B6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B70:
    // 0x00404B70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B74: jal         0x004053C4
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_8;
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_8:
    // 0x00404B7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x00404B80: beq         $v0, $zero, L_00404C08
    if (ctx->r2 == 0) {
        // 0x00404B84: nop
    
            goto L_00404C08;
    }
    // 0x00404B84: nop

    // 0x00404B88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x00404B8C: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404B90: nop
    
            goto L_00404BF8;
    }
    // 0x00404B90: nop

    // 0x00404B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404B98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x00404B9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00404BA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00404BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404BAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00404BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00404BB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00404BB8: bne         $v0, $s3, L_00404BF8
    if (ctx->r2 != ctx->r19) {
        // 0x00404BBC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BBC: nop

    // 0x00404BC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x00404BC4: bne         $v1, $v0, L_00404BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00404BC8: nop
    
            goto L_00404BF8;
    }
    // 0x00404BC8: nop

    // 0x00404BCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x00404BD0: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404BD4: nop
    
            goto L_00404BF8;
    }
    // 0x00404BD4: nop

    // 0x00404BD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x00404BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404BE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404BE4: nop

    // 0x00404BE8: bc1f        L_00404BF8
    if (!c1cs) {
        // 0x00404BEC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BEC: nop

    // 0x00404BF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x00404BF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00404BF8:
    // 0x00404BF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404C00: bne         $v0, $zero, L_00404C20
    if (ctx->r2 != 0) {
        // 0x00404C04: nop
    
            goto L_00404C20;
    }
    // 0x00404C04: nop

L_00404C08:
    // 0x00404C08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404C0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00404C10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00404C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404C18: beql        $v1, $v0, L_00404C20
    if (ctx->r3 == ctx->r2) {
        // 0x00404C1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_00404C20;
    }
    goto skip_3;
    // 0x00404C1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_3:
L_00404C20:
    // 0x00404C20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00404C24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x00404C28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x00404C2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x00404C30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x00404C34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x00404C38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x00404C3C: jr          $ra
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void entry_004048A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004048A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048A4: lwc1        $f0, 0x3CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3CC);
    // 0x004048A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004048AC: swc1        $f0, -0x6A4($at)
    MEM_W(-0X6A4, ctx->r1) = ctx->f0.u32l;
    // 0x004048B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x004048B4: addiu       $s0, $s0, -0x6B0
    ctx->r16 = ADD32(ctx->r16, -0X6B0);
    // 0x004048B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x004048BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x004048C0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x004048C4: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x004048C8: nop
    
            goto L_004049EC;
    }
    // 0x004048C8: nop

    // 0x004048CC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x004048D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x004048D4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x004048D8: nop

    // 0x004048DC: bc1f        L_004049EC
    if (!c1cs) {
        // 0x004048E0: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_004049EC;
    }
    // 0x004048E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x004048E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004048E8: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    // 0x004048EC: lw          $a3, -0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, -0X4);
    // 0x004048F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048F4: lwc1        $f1, 0x3D0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3D0);
    // 0x004048F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004048FC: lwc1        $f2, 0x3D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3D4);
    // 0x00404900: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404904: lwc1        $f3, 0x3D8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X3D8);
    // 0x00404908: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0040490C: lwc1        $f0, 0x3DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3DC);
    // 0x00404910: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x00404914: addiu       $a2, $zero, 0x387
    ctx->r6 = ADD32(0, 0X387);
    // 0x00404918: swc1        $f1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x0040491C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x00404920: swc1        $f3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x00404924: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x00404928: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x0040492C: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x00404930: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00404934: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x00404938: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x0040493C: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x00404940: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x00404944: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x00404948: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x0040494C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x00404950: lw          $t0, 0x18($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18);
    // 0x00404954: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x00404958: lw          $t2, 0x20($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X20);
    // 0x0040495C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x00404960: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x00404964: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x00404968: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x0040496C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x00404970: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x00404974: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x00404978: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x0040497C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x00404980: jal         0x00228108
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_00228108(rdram, ctx);
        goto after_0;
    // 0x00404984: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x00404988: beq         $v0, $zero, L_004049EC
    if (ctx->r2 == 0) {
        // 0x0040498C: nop
    
            goto L_004049EC;
    }
    // 0x0040498C: nop

    // 0x00404990: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404994: lw          $v1, 0xBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XBC);
    // 0x00404998: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x0040499C: beq         $v1, $zero, L_004049EC
    if (ctx->r3 == 0) {
        // 0x004049A0: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_004049EC;
    }
    // 0x004049A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x004049A4: bnel        $v0, $zero, L_004049EC
    if (ctx->r2 != 0) {
        // 0x004049A8: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_004049EC;
    }
    goto skip_0;
    // 0x004049A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_0:
    // 0x004049AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049B0: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x004049B4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x004049B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x004049BC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004049C0: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x004049C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004049C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004049CC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x004049D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x004049D4: beq         $v0, $v1, L_004049E8
    if (ctx->r2 == ctx->r3) {
        // 0x004049D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_004049E8;
    }
    // 0x004049D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049DC: sb          $v1, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r3;
    // 0x004049E0: j           L_004049EC
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
        goto L_004049EC;
    // 0x004049E4: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
L_004049E8:
    // 0x004049E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_004049EC:
    // 0x004049EC: beq         $s3, $zero, L_00404A8C
    if (ctx->r19 == 0) {
        // 0x004049F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00404A8C;
    }
    // 0x004049F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049F4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x004049F8: addiu       $s1, $s1, -0x5EC
    ctx->r17 = ADD32(ctx->r17, -0X5EC);
    // 0x004049FC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00404A00: beq         $v1, $v0, L_00404A8C
    if (ctx->r3 == ctx->r2) {
        // 0x00404A04: nop
    
            goto L_00404A8C;
    }
    // 0x00404A04: nop

    // 0x00404A08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A0C: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404A10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00404A14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404A18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A1C: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404A28: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00404A2C: lw          $v1, -0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X8);
    // 0x00404A30: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x00404A34: beq         $v1, $zero, L_00404A8C
    if (ctx->r3 == 0) {
        // 0x00404A38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00404A8C;
    }
    // 0x00404A38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404A3C: beq         $s0, $v0, L_00404A88
    if (ctx->r16 == ctx->r2) {
        // 0x00404A40: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_00404A88;
    }
    // 0x00404A40: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x00404A44: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00404A48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00404A4C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00404A50: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00404A54: jal         0x002119FC
    // 0x00404A58: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00404A58: nop

    after_1:
    // 0x00404A5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404A60: lwc1        $f1, 0x3E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3E0);
    // 0x00404A64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404A68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00404A6C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x00404A70: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00404A74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00404A78: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00404A7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00404A80: j           L_00404A8C
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_00404A8C;
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00404A88:
    // 0x00404A88: swc1        $f20, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f20.u32l;
L_00404A8C:
    // 0x00404A8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00404A90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00404A94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404A98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x00404A9C: beq         $a0, $zero, L_00404AE4
    if (ctx->r4 == 0) {
        // 0x00404AA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00404AE4;
    }
    // 0x00404AA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404AA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x00404AAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00404AB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_00404AB4:
    // 0x00404AB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x00404AB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x00404ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00404AC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x00404AC4: blez        $v1, L_00404AD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00404AC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_00404AD8;
    }
    // 0x00404AC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x00404ACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x00404AD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404AD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_00404AD8:
    // 0x00404AD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00404ADC: bnel        $a0, $zero, L_00404AB4
    if (ctx->r4 != 0) {
        // 0x00404AE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_00404AB4;
    }
    goto skip_1;
    // 0x00404AE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_1:
L_00404AE4:
    // 0x00404AE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404AE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00404AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00404AF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00404AF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00404AF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00404AFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00404B04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00404B08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00404B0C: jal         0x00246108
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_2;
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x00404B14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00404B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00404B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00404B24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404B2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x00404B30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00404B38: bne         $v0, $s1, L_00404B4C
    if (ctx->r2 != ctx->r17) {
        // 0x00404B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B4C;
    }
    // 0x00404B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B40: jal         0x00404FE0
    // 0x00404B44: nop

    func_00404FE0(rdram, ctx);
        goto after_3;
    // 0x00404B44: nop

    after_3:
    // 0x00404B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B4C:
    // 0x00404B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B50: jal         0x004050E0
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_4;
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x00404B58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00404B5C: bne         $v0, $s1, L_00404B70
    if (ctx->r2 != ctx->r17) {
        // 0x00404B60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B70;
    }
    // 0x00404B60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B64: jal         0x00405288
    // 0x00404B68: nop

    func_00405288(rdram, ctx);
        goto after_5;
    // 0x00404B68: nop

    after_5:
    // 0x00404B6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B70:
    // 0x00404B70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B74: jal         0x004053C4
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_6;
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x00404B7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x00404B80: beq         $v0, $zero, L_00404C08
    if (ctx->r2 == 0) {
        // 0x00404B84: nop
    
            goto L_00404C08;
    }
    // 0x00404B84: nop

    // 0x00404B88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x00404B8C: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404B90: nop
    
            goto L_00404BF8;
    }
    // 0x00404B90: nop

    // 0x00404B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404B98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x00404B9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00404BA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00404BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404BAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00404BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00404BB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00404BB8: bne         $v0, $s3, L_00404BF8
    if (ctx->r2 != ctx->r19) {
        // 0x00404BBC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BBC: nop

    // 0x00404BC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x00404BC4: bne         $v1, $v0, L_00404BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00404BC8: nop
    
            goto L_00404BF8;
    }
    // 0x00404BC8: nop

    // 0x00404BCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x00404BD0: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404BD4: nop
    
            goto L_00404BF8;
    }
    // 0x00404BD4: nop

    // 0x00404BD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x00404BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404BE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404BE4: nop

    // 0x00404BE8: bc1f        L_00404BF8
    if (!c1cs) {
        // 0x00404BEC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BEC: nop

    // 0x00404BF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x00404BF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00404BF8:
    // 0x00404BF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404C00: bne         $v0, $zero, L_00404C20
    if (ctx->r2 != 0) {
        // 0x00404C04: nop
    
            goto L_00404C20;
    }
    // 0x00404C04: nop

L_00404C08:
    // 0x00404C08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404C0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00404C10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00404C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404C18: beql        $v1, $v0, L_00404C20
    if (ctx->r3 == ctx->r2) {
        // 0x00404C1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_00404C20;
    }
    goto skip_2;
    // 0x00404C1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_2:
L_00404C20:
    // 0x00404C20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00404C24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x00404C28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x00404C2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x00404C30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x00404C34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x00404C38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x00404C3C: jr          $ra
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void entry_004049EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004049EC: beq         $s3, $zero, L_00404A8C
    if (ctx->r19 == 0) {
        // 0x004049F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00404A8C;
    }
    // 0x004049F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x004049F4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x004049F8: addiu       $s1, $s1, -0x5EC
    ctx->r17 = ADD32(ctx->r17, -0X5EC);
    // 0x004049FC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x00404A00: beq         $v1, $v0, L_00404A8C
    if (ctx->r3 == ctx->r2) {
        // 0x00404A04: nop
    
            goto L_00404A8C;
    }
    // 0x00404A04: nop

    // 0x00404A08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A0C: lw          $v1, -0x5EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5EC);
    // 0x00404A10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00404A14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00404A18: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00404A1C: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00404A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00404A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00404A28: lwc1        $f20, 0xC($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0XC);
    // 0x00404A2C: lw          $v1, -0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, -0X8);
    // 0x00404A30: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x00404A34: beq         $v1, $zero, L_00404A8C
    if (ctx->r3 == 0) {
        // 0x00404A38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00404A8C;
    }
    // 0x00404A38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00404A3C: beq         $s0, $v0, L_00404A88
    if (ctx->r16 == ctx->r2) {
        // 0x00404A40: addiu       $s0, $s0, -0x3
        ctx->r16 = ADD32(ctx->r16, -0X3);
            goto L_00404A88;
    }
    // 0x00404A40: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x00404A44: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x00404A48: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00404A4C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00404A50: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x00404A54: jal         0x002119FC
    // 0x00404A58: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00404A58: nop

    after_0:
    // 0x00404A5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404A60: lwc1        $f1, 0x3E0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3E0);
    // 0x00404A64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x00404A68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x00404A6C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x00404A70: mtc1        $v0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r2;
    // 0x00404A74: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x00404A78: sub.s       $f1, $f20, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f20.fl - ctx->f1.fl;
    // 0x00404A7C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00404A80: j           L_00404A8C
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
        goto L_00404A8C;
    // 0x00404A84: swc1        $f1, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
L_00404A88:
    // 0x00404A88: swc1        $f20, -0xAC($s1)
    MEM_W(-0XAC, ctx->r17) = ctx->f20.u32l;
L_00404A8C:
    // 0x00404A8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00404A90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00404A94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404A98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x00404A9C: beq         $a0, $zero, L_00404AE4
    if (ctx->r4 == 0) {
        // 0x00404AA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00404AE4;
    }
    // 0x00404AA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404AA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x00404AAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00404AB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_00404AB4:
    // 0x00404AB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x00404AB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x00404ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00404AC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x00404AC4: blez        $v1, L_00404AD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00404AC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_00404AD8;
    }
    // 0x00404AC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x00404ACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x00404AD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404AD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_00404AD8:
    // 0x00404AD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00404ADC: bnel        $a0, $zero, L_00404AB4
    if (ctx->r4 != 0) {
        // 0x00404AE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_00404AB4;
    }
    goto skip_0;
    // 0x00404AE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_0:
L_00404AE4:
    // 0x00404AE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404AE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00404AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00404AF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00404AF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00404AF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00404AFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00404B04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00404B08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00404B0C: jal         0x00246108
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_1;
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x00404B14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00404B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00404B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00404B24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404B2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x00404B30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00404B38: bne         $v0, $s1, L_00404B4C
    if (ctx->r2 != ctx->r17) {
        // 0x00404B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B4C;
    }
    // 0x00404B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B40: jal         0x00404FE0
    // 0x00404B44: nop

    func_00404FE0(rdram, ctx);
        goto after_2;
    // 0x00404B44: nop

    after_2:
    // 0x00404B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B4C:
    // 0x00404B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B50: jal         0x004050E0
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_3;
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_3:
    // 0x00404B58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00404B5C: bne         $v0, $s1, L_00404B70
    if (ctx->r2 != ctx->r17) {
        // 0x00404B60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B70;
    }
    // 0x00404B60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B64: jal         0x00405288
    // 0x00404B68: nop

    func_00405288(rdram, ctx);
        goto after_4;
    // 0x00404B68: nop

    after_4:
    // 0x00404B6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B70:
    // 0x00404B70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B74: jal         0x004053C4
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_5;
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_5:
    // 0x00404B7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x00404B80: beq         $v0, $zero, L_00404C08
    if (ctx->r2 == 0) {
        // 0x00404B84: nop
    
            goto L_00404C08;
    }
    // 0x00404B84: nop

    // 0x00404B88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x00404B8C: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404B90: nop
    
            goto L_00404BF8;
    }
    // 0x00404B90: nop

    // 0x00404B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404B98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x00404B9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00404BA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00404BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404BAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00404BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00404BB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00404BB8: bne         $v0, $s3, L_00404BF8
    if (ctx->r2 != ctx->r19) {
        // 0x00404BBC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BBC: nop

    // 0x00404BC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x00404BC4: bne         $v1, $v0, L_00404BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00404BC8: nop
    
            goto L_00404BF8;
    }
    // 0x00404BC8: nop

    // 0x00404BCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x00404BD0: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404BD4: nop
    
            goto L_00404BF8;
    }
    // 0x00404BD4: nop

    // 0x00404BD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x00404BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404BE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404BE4: nop

    // 0x00404BE8: bc1f        L_00404BF8
    if (!c1cs) {
        // 0x00404BEC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BEC: nop

    // 0x00404BF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x00404BF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00404BF8:
    // 0x00404BF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404C00: bne         $v0, $zero, L_00404C20
    if (ctx->r2 != 0) {
        // 0x00404C04: nop
    
            goto L_00404C20;
    }
    // 0x00404C04: nop

L_00404C08:
    // 0x00404C08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404C0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00404C10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00404C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404C18: beql        $v1, $v0, L_00404C20
    if (ctx->r3 == ctx->r2) {
        // 0x00404C1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_00404C20;
    }
    goto skip_1;
    // 0x00404C1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_1:
L_00404C20:
    // 0x00404C20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00404C24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x00404C28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x00404C2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x00404C30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x00404C34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x00404C38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x00404C3C: jr          $ra
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void entry_00404A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404A8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x00404A90: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x00404A94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404A98: addiu       $v0, $v0, -0x6A8
    ctx->r2 = ADD32(ctx->r2, -0X6A8);
    // 0x00404A9C: beq         $a0, $zero, L_00404AE4
    if (ctx->r4 == 0) {
        // 0x00404AA0: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_00404AE4;
    }
    // 0x00404AA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x00404AA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00404AA8: lwc1        $f0, 0x3E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3E4);
    // 0x00404AAC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x00404AB0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
L_00404AB4:
    // 0x00404AB4: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x00404AB8: sw          $zero, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = 0;
    // 0x00404ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00404AC0: lw          $v1, 0x144($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X144);
    // 0x00404AC4: blez        $v1, L_00404AD8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x00404AC8: sw          $v0, 0x1F8($a0)
        MEM_W(0X1F8, ctx->r4) = ctx->r2;
            goto L_00404AD8;
    }
    // 0x00404AC8: sw          $v0, 0x1F8($a0)
    MEM_W(0X1F8, ctx->r4) = ctx->r2;
    // 0x00404ACC: lw          $v0, -0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, -0X8);
    // 0x00404AD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00404AD4: sw          $v0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r2;
L_00404AD8:
    // 0x00404AD8: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00404ADC: bnel        $a0, $zero, L_00404AB4
    if (ctx->r4 != 0) {
        // 0x00404AE0: sw          $zero, 0x1EC($a0)
        MEM_W(0X1EC, ctx->r4) = 0;
            goto L_00404AB4;
    }
    goto skip_0;
    // 0x00404AE0: sw          $zero, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = 0;
    skip_0:
L_00404AE4:
    // 0x00404AE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404AE8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x00404AEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x00404AF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00404AF4: lui         $s0, 0x800F
    ctx->r16 = S32(0X800F << 16);
    // 0x00404AF8: addiu       $s0, $s0, 0x1F50
    ctx->r16 = ADD32(ctx->r16, 0X1F50);
    // 0x00404AFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x00404B04: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x00404B08: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x00404B0C: jal         0x00246108
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00404B10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x00404B14: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x00404B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B1C: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x00404B20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00404B24: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00404B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00404B2C: addiu       $s0, $s0, -0x5EC
    ctx->r16 = ADD32(ctx->r16, -0X5EC);
    // 0x00404B30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00404B34: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x00404B38: bne         $v0, $s1, L_00404B4C
    if (ctx->r2 != ctx->r17) {
        // 0x00404B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B4C;
    }
    // 0x00404B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B40: jal         0x00404FE0
    // 0x00404B44: nop

    func_00404FE0(rdram, ctx);
        goto after_1;
    // 0x00404B44: nop

    after_1:
    // 0x00404B48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B4C:
    // 0x00404B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B50: jal         0x004050E0
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004050E0(rdram, ctx);
        goto after_2;
    // 0x00404B54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x00404B58: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00404B5C: bne         $v0, $s1, L_00404B70
    if (ctx->r2 != ctx->r17) {
        // 0x00404B60: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00404B70;
    }
    // 0x00404B60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00404B64: jal         0x00405288
    // 0x00404B68: nop

    func_00405288(rdram, ctx);
        goto after_3;
    // 0x00404B68: nop

    after_3:
    // 0x00404B6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00404B70:
    // 0x00404B70: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x00404B74: jal         0x004053C4
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_004053C4(rdram, ctx);
        goto after_4;
    // 0x00404B78: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x00404B7C: lw          $v0, -0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X8);
    // 0x00404B80: beq         $v0, $zero, L_00404C08
    if (ctx->r2 == 0) {
        // 0x00404B84: nop
    
            goto L_00404C08;
    }
    // 0x00404B84: nop

    // 0x00404B88: lw          $v0, -0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XBC);
    // 0x00404B8C: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404B90: nop
    
            goto L_00404BF8;
    }
    // 0x00404B90: nop

    // 0x00404B94: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404B98: lw          $v0, -0x5EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5EC);
    // 0x00404B9C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x00404BA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x00404BA4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BA8: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404BAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00404BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00404BB4: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00404BB8: bne         $v0, $s3, L_00404BF8
    if (ctx->r2 != ctx->r19) {
        // 0x00404BBC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BBC: nop

    // 0x00404BC0: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x00404BC4: bne         $v1, $v0, L_00404BF8
    if (ctx->r3 != ctx->r2) {
        // 0x00404BC8: nop
    
            goto L_00404BF8;
    }
    // 0x00404BC8: nop

    // 0x00404BCC: lw          $v0, -0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XC4);
    // 0x00404BD0: bne         $v0, $zero, L_00404BF8
    if (ctx->r2 != 0) {
        // 0x00404BD4: nop
    
            goto L_00404BF8;
    }
    // 0x00404BD4: nop

    // 0x00404BD8: lwc1        $f1, -0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, -0XC);
    // 0x00404BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00404BE0: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00404BE4: nop

    // 0x00404BE8: bc1f        L_00404BF8
    if (!c1cs) {
        // 0x00404BEC: nop
    
            goto L_00404BF8;
    }
    // 0x00404BEC: nop

    // 0x00404BF0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x00404BF4: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_00404BF8:
    // 0x00404BF8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00404BFC: lw          $v0, -0x5F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5F4);
    // 0x00404C00: bne         $v0, $zero, L_00404C20
    if (ctx->r2 != 0) {
        // 0x00404C04: nop
    
            goto L_00404C20;
    }
    // 0x00404C04: nop

L_00404C08:
    // 0x00404C08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00404C0C: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x00404C10: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x00404C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404C18: beql        $v1, $v0, L_00404C20
    if (ctx->r3 == ctx->r2) {
        // 0x00404C1C: sw          $zero, 0x4($a0)
        MEM_W(0X4, ctx->r4) = 0;
            goto L_00404C20;
    }
    goto skip_1;
    // 0x00404C1C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    skip_1:
L_00404C20:
    // 0x00404C20: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x00404C24: lw          $s4, 0xF8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XF8);
    // 0x00404C28: lw          $s3, 0xF4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XF4);
    // 0x00404C2C: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x00404C30: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x00404C34: lw          $s0, 0xE8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XE8);
    // 0x00404C38: ldc1        $f20, 0x100($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X100);
    // 0x00404C3C: jr          $ra
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x00404C40: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void entry_00404FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404FB4: jal         0x00243414
    // 0x00404FB8: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00404FB8: nop

    after_0:
    // 0x00404FBC: j           L_00404FC8
    // 0x00404FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_00404FC8;
    // 0x00404FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00404FC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_00404FC8:
    // 0x00404FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00404FCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00404FD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00404FD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00404FD8: jr          $ra
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00404FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00404FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00404FCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00404FD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00404FD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00404FD8: jr          $ra
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00404FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00405054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405040:
    // 0x00405054: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x00405058: addiu       $s0, $s0, -0x5F0
    ctx->r16 = ADD32(ctx->r16, -0X5F0);
    // 0x0040505C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_00405060:
    // 0x00405060: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405064: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x00405068: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0040506C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405070: lw          $v1, -0x5F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F0);
    // 0x00405074: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x00405078: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x0040507C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405080: lw          $v1, -0x5F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5F4);
    // 0x00405084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405088: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x0040508C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405090: beq         $v0, $s1, L_00405040
    if (ctx->r2 == ctx->r17) {
        // 0x00405094: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00405040;
    }
    // 0x00405094: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405098: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040509C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004050A0: lwc1        $f14, 0x41C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X41C);
    // 0x004050A4: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x004050A8: lwc1        $f20, 0x10($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X10);
    // 0x004050AC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004050B0: jal         0x002119FC
    // 0x004050B4: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004050B4: nop

    after_0:
    // 0x004050B8: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004050BC: nop

    // 0x004050C0: bc1t        L_00405060
    if (c1cs) {
        // 0x004050C4: nop
    
            goto L_00405060;
    }
    // 0x004050C4: nop

    // 0x004050C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004050CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004050D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004050D4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004050D8: jr          $ra
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004050C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004050C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004050CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004050D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004050D4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004050D8: jr          $ra
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004050DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00405268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405268: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040526C: sb          $zero, -0x5E8($at)
    MEM_B(-0X5E8, ctx->r1) = 0;
    // 0x00405270: j           L_0040527C
    // 0x00405274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_0040527C;
    // 0x00405274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00405278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0040527C:
    // 0x0040527C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00405280: jr          $ra
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_0040527C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040527C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00405280: jr          $ra
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00405284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00405338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405328:
    // 0x00405338: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x0040533C: addiu       $s0, $s0, -0x5DC
    ctx->r16 = ADD32(ctx->r16, -0X5DC);
    // 0x00405340: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_00405344:
    // 0x00405344: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x00405348: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x0040534C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x00405350: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405354: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x00405358: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x0040535C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405360: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405364: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040536C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x00405370: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405374: beq         $v0, $s1, L_00405328
    if (ctx->r2 == ctx->r17) {
        // 0x00405378: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00405328;
    }
    // 0x00405378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x0040537C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405384: lwc1        $f14, 0x440($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X440);
    // 0x00405388: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x0040538C: lwc1        $f20, 0x8($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X8);
    // 0x00405390: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00405394: jal         0x002119FC
    // 0x00405398: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00405398: nop

    after_0:
    // 0x0040539C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004053A0: nop

    // 0x004053A4: bc1t        L_00405344
    if (c1cs) {
        // 0x004053A8: nop
    
            goto L_00405344;
    }
    // 0x004053A8: nop

    // 0x004053AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004053B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004053B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004053B8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004053BC: jr          $ra
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004053AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004053AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004053B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004053B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004053B8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x004053BC: jr          $ra
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004053C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004054C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004054C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x004054C8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x004054CC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x004054D0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x004054D4: jal         0x00275544
    // 0x004054D8: nop

    func_00275544(rdram, ctx);
        goto after_0;
    // 0x004054D8: nop

    after_0:
    // 0x004054DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004054E0: sw          $s1, -0x5D8($at)
    MEM_W(-0X5D8, ctx->r1) = ctx->r17;
    // 0x004054E4: j           L_004056C8
    // 0x004054E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004056C8;
    // 0x004054E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004054EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004054F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004054F4: lw          $a0, -0x5D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5D8);
    // 0x004054F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x004054FC: addiu       $a1, $a1, -0x5E0
    ctx->r5 = ADD32(ctx->r5, -0X5E0);
    // 0x00405500: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x00405504: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405508: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040550C: lw          $a0, -0x5E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E0);
    // 0x00405510: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405514: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405518: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x0040551C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x00405520: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x00405524: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x00405528: j           L_004056C8
    // 0x0040552C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
        goto L_004056C8;
    // 0x0040552C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x00405530: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00405534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405538: sw          $v0, -0x5D8($at)
    MEM_W(-0X5D8, ctx->r1) = ctx->r2;
    // 0x0040553C: j           L_004056C8
    // 0x00405540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_004056C8;
    // 0x00405540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00405544: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405548: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0040554C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405550: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405554: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405558: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040555C: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x00405560: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405564: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405568: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0040556C: jal         0x002119FC
    // 0x00405570: nop

    func_002119FC(rdram, ctx);
        goto after_1;
    // 0x00405570: nop

    after_1:
    // 0x00405574: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x00405578: addiu       $a2, $a2, -0x5E4
    ctx->r6 = ADD32(ctx->r6, -0X5E4);
    // 0x0040557C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405580: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x00405584: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405588: lwc1        $f1, 0x460($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X460);
    // 0x0040558C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x00405590: lw          $a1, -0x5E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5E0);
    // 0x00405594: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0040559C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004055A0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004055A4: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x004055A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004055AC: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x004055B0: lwc1        $f1, 0xC($v0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x004055B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004055B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004055BC: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004055C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004055C4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x004055C8: swc1        $f1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f_odd[(1 - 1) * 2];
    // 0x004055CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x004055D0: blez        $v0, L_00405674
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004055D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00405674;
    }
    // 0x004055D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x004055D8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x004055DC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x004055E0: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
L_004055E4:
    // 0x004055E4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x004055E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004055EC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x004055F0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004055F4: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x004055F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004055FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405600: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405604: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00405608: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0040560C: bne         $v0, $t0, L_00405640
    if (ctx->r2 != ctx->r8) {
        // 0x00405610: nop
    
            goto L_00405640;
    }
    // 0x00405610: nop

    // 0x00405614: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405618: lw          $v0, -0x5D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D8);
    // 0x0040561C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405620: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405624: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405628: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x0040562C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x00405630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00405634: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00405638: bnel        $v0, $zero, L_00405640
    if (ctx->r2 != 0) {
        // 0x0040563C: sw          $zero, 0x0($a3)
        MEM_W(0X0, ctx->r7) = 0;
            goto L_00405640;
    }
    goto skip_0;
    // 0x0040563C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    skip_0:
L_00405640:
    // 0x00405640: lw          $v0, -0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, -0X4);
    // 0x00405644: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00405648: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x0040564C: lw          $v1, -0x5D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D8);
    // 0x00405650: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405658: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x0040565C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00405660: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x00405664: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x00405668: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0040566C: bne         $v0, $zero, L_004055E4
    if (ctx->r2 != 0) {
        // 0x00405670: nop
    
            goto L_004055E4;
    }
    // 0x00405670: nop

L_00405674:
    // 0x00405674: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405678: lw          $v1, -0x5DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5DC);
    // 0x0040567C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00405680: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405684: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00405688: lw          $v1, -0x5E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E0);
    // 0x0040568C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00405690: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00405694: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x00405698: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0040569C: bne         $v1, $v0, L_004056C8
    if (ctx->r3 != ctx->r2) {
        // 0x004056A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004056C8;
    }
    // 0x004056A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x004056A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004056A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004056AC: addiu       $v1, $v1, -0x5DC
    ctx->r3 = ADD32(ctx->r3, -0X5DC);
    // 0x004056B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x004056B4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x004056B8: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x004056BC: j           L_004056C8
    // 0x004056C0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
        goto L_004056C8;
    // 0x004056C0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x004056C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004056C8:
    // 0x004056C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004056CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004056D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004056D4: jr          $ra
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_004056C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004056C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x004056CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x004056D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x004056D4: jr          $ra
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x004056D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void entry_00405850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405850:
    // 0x00405850: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405854: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405858: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x0040585C: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x00405860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405864: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0040586C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405870: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405878: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x0040587C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405880: bne         $v0, $s0, L_00405890
    if (ctx->r2 != ctx->r16) {
        // 0x00405884: nop
    
            goto L_00405890;
    }
    // 0x00405884: nop

    // 0x00405888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0040588C: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00405890:
    // 0x00405890: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405894: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405898: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040589C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004058A0: lwc1        $f14, 0x464($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X464);
    // 0x004058A4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004058A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004058AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004058B0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004058B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004058B8: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x004058BC: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x004058C0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x004058C4: jal         0x002119FC
    // 0x004058C8: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x004058C8: nop

    after_0:
    // 0x004058CC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x004058D0: nop

    // 0x004058D4: bc1t        L_00405850
    if (c1cs) {
        // 0x004058D8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405850;
    }
    // 0x004058D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004058DC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x004058E0: jal         0x00404C44
    // 0x004058E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_1;
    // 0x004058E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x004058E8: bne         $v0, $zero, L_0040593C
    if (ctx->r2 != 0) {
        // 0x004058EC: nop
    
            goto L_0040593C;
    }
    // 0x004058EC: nop

    // 0x004058F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004058F4: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    // 0x004058F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x004058FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00405900: bne         $v1, $v0, L_0040593C
    if (ctx->r3 != ctx->r2) {
        // 0x00405904: nop
    
            goto L_0040593C;
    }
    // 0x00405904: nop

    // 0x00405908: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x0040590C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405910: lwc1        $f0, 0x468($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X468);
    // 0x00405914: c.lt.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl < ctx->f1.fl;
    // 0x00405918: nop

    // 0x0040591C: bc1f        L_0040593C
    if (!c1cs) {
        // 0x00405920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040593C;
    }
    // 0x00405920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00405924: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00405928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0040592C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00405930: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00405934: jal         0x00243414
    // 0x00405938: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00405938: nop

    after_2:
L_0040593C:
    // 0x0040593C: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405940: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405944: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405948: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040594C: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405950: jr          $ra
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_00405934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405934: jal         0x00243414
    // 0x00405938: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00405938: nop

    after_0:
    // 0x0040593C: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405940: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405944: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405948: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x0040594C: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405950: jr          $ra
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_00405AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405AA8: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x00405AAC: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x00405AB0: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x00405AB4: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405AB8: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405ABC: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00405AC0: jr          $ra
    // 0x00405AC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405AC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_00405F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00405F0C:
    // 0x00405F0C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405F10: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405F14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00405F18: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x00405F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00405F20: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405F24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405F28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405F2C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405F30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F34: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00405F38: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00405F3C: bne         $v0, $s0, L_00405F4C
    if (ctx->r2 != ctx->r16) {
        // 0x00405F40: nop
    
            goto L_00405F4C;
    }
    // 0x00405F40: nop

    // 0x00405F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F48: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00405F4C:
    // 0x00405F4C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00405F50: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00405F54: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x00405F58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405F5C: lwc1        $f14, 0x498($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X498);
    // 0x00405F60: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00405F64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00405F68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00405F6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00405F70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00405F74: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00405F78: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00405F7C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x00405F80: jal         0x002119FC
    // 0x00405F84: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00405F84: nop

    after_0:
    // 0x00405F88: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00405F8C: nop

    // 0x00405F90: bc1t        L_00405F0C
    if (c1cs) {
        // 0x00405F94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405F0C;
    }
    // 0x00405F94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405F98: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00405F9C: jal         0x00404C44
    // 0x00405FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_00404C44(rdram, ctx);
        goto after_1;
    // 0x00405FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00405FA4: bne         $v0, $zero, L_00405FE4
    if (ctx->r2 != 0) {
        // 0x00405FA8: nop
    
            goto L_00405FE4;
    }
    // 0x00405FA8: nop

    // 0x00405FAC: lwc1        $f1, 0x3C($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x00405FB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405FB4: lwc1        $f0, 0x49C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X49C);
    // 0x00405FB8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00405FBC: nop

    // 0x00405FC0: bc1f        L_00405FE4
    if (!c1cs) {
        // 0x00405FC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00405FE4;
    }
    // 0x00405FC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00405FC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00405FCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00405FD0: lwc1        $f0, 0x4A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A0);
    // 0x00405FD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00405FD8: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00405FDC: jal         0x00243414
    // 0x00405FE0: nop

    func_00243414(rdram, ctx);
        goto after_2;
    // 0x00405FE0: nop

    after_2:
L_00405FE4:
    // 0x00405FE4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405FE8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405FEC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405FF0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00405FF4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405FF8: jr          $ra
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_00405FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00405FDC: jal         0x00243414
    // 0x00405FE0: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00405FE0: nop

    after_0:
    // 0x00405FE4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00405FE8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00405FEC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00405FF0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00405FF4: ldc1        $f20, 0xB0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XB0);
    // 0x00405FF8: jr          $ra
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x00405FFC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void entry_004063E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004063E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004063E8: lwc1        $f20, 0x4B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x004063EC: jal         0x002982F0
    // 0x004063F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_0;
    // 0x004063F0: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_0:
    // 0x004063F4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x004063F8: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x004063FC: jal         0x002974C0
    // 0x00406400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    func_002974C0(rdram, ctx);
        goto after_1;
    // 0x00406400: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
    after_1:
    // 0x00406404: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x00406408: j           L_00406460
    // 0x0040640C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
        goto L_00406460;
    // 0x0040640C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x00406410: lwc1        $f14, -0x41C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, -0X41C);
    // 0x00406414: lui         $a2, 0x45A0
    ctx->r6 = S32(0X45A0 << 16);
    // 0x00406418: jal         0x0021160C
    // 0x0040641C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_0021160C(rdram, ctx);
        goto after_2;
    // 0x0040641C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x00406420: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x00406424: jal         0x002982F0
    // 0x00406428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x00406428: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_3:
    // 0x0040642C: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00406430: lwc1        $f1, 0x18($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X18);
    // 0x00406434: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00406438: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x0040643C: jal         0x002974C0
    // 0x00406440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x00406440: swc1        $f1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x00406444: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x00406448: lwc1        $f1, 0x20($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, 0X20);
    // 0x0040644C: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00406450: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406454: lwc1        $f0, 0x4B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4B8);
    // 0x00406458: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0040645C: swc1        $f1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f_odd[(1 - 1) * 2];
L_00406460:
    // 0x00406460: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00406464: addiu       $a0, $a0, -0x61F
    ctx->r4 = ADD32(ctx->r4, -0X61F);
    // 0x00406468: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0040646C: beq         $v0, $zero, L_00406570
    if (ctx->r2 == 0) {
        // 0x00406470: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00406570;
    }
    // 0x00406470: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406474: lw          $v1, -0x9($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X9);
    // 0x00406478: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x0040647C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00406570;
    }
    // 0x0040647C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00406480: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x00406484: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00406570;
    }
    // 0x00406484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406488: lw          $a0, 0x23($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X23);
    // 0x0040648C: bnel        $a0, $v0, L_00406564
    if (ctx->r4 != ctx->r2) {
        // 0x00406490: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00406564;
    }
    goto skip_0;
    // 0x00406490: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00406494: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406498: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0040649C: beq         $v1, $a0, L_004064CC
    if (ctx->r3 == ctx->r4) {
        // 0x004064A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004064CC;
    }
    // 0x004064A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004064A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004064AC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x004064B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004064B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004064BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064C0: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x004064C4: j           L_004064D8
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_004064D8;
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064CC:
    // 0x004064CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064D0: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x004064D4: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064D8:
    // 0x004064D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004064DC: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x004064E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004064E4: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x004064E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004064EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004064F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004064F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004064F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004064FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406500: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00406504: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00406508: bne         $v0, $s0, L_00406518
    if (ctx->r2 != ctx->r16) {
        // 0x0040650C: nop
    
            goto L_00406518;
    }
    // 0x0040650C: nop

    // 0x00406510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406514: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00406518:
    // 0x00406518: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040651C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406520: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00406524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406528: lwc1        $f14, 0x4BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BC);
    // 0x0040652C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00406530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00406534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00406538: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0040653C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406540: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00406544: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00406548: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0040654C: jal         0x002119FC
    // 0x00406550: nop

    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00406550: nop

    after_5:
    // 0x00406554: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00406558: nop

    // 0x0040655C: bc1t        L_004064D8
    if (c1cs) {
        // 0x00406560: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004064D8;
    }
    // 0x00406560: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00406564:
    // 0x00406564: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00406568: jal         0x00404C44
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00404C44(rdram, ctx);
        goto after_6;
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
L_00406570:
    // 0x00406570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0040657C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0040658C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406590: jr          $ra
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_00406460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406460: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00406464: addiu       $a0, $a0, -0x61F
    ctx->r4 = ADD32(ctx->r4, -0X61F);
    // 0x00406468: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x0040646C: beq         $v0, $zero, L_00406570
    if (ctx->r2 == 0) {
        // 0x00406470: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_00406570;
    }
    // 0x00406470: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406474: lw          $v1, -0x9($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X9);
    // 0x00406478: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x0040647C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_00406570;
    }
    // 0x0040647C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x00406480: beq         $v1, $v0, L_00406570
    if (ctx->r3 == ctx->r2) {
        // 0x00406484: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00406570;
    }
    // 0x00406484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406488: lw          $a0, 0x23($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X23);
    // 0x0040648C: bnel        $a0, $v0, L_00406564
    if (ctx->r4 != ctx->r2) {
        // 0x00406490: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00406564;
    }
    goto skip_0;
    // 0x00406490: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x00406494: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406498: lw          $v1, -0x600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X600);
    // 0x0040649C: beq         $v1, $a0, L_004064CC
    if (ctx->r3 == ctx->r4) {
        // 0x004064A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_004064CC;
    }
    // 0x004064A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x004064A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064A8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x004064AC: lw          $v1, -0x604($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X604);
    // 0x004064B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004064B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x004064B8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x004064BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064C0: swc1        $f0, -0x608($at)
    MEM_W(-0X608, ctx->r1) = ctx->f0.u32l;
    // 0x004064C4: j           L_004064D8
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_004064D8;
    // 0x004064C8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064CC:
    // 0x004064CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004064D0: sw          $zero, -0x608($at)
    MEM_W(-0X608, ctx->r1) = 0;
    // 0x004064D4: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_004064D8:
    // 0x004064D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004064DC: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x004064E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004064E4: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x004064E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004064EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004064F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004064F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004064F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004064FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406500: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00406504: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00406508: bne         $v0, $s0, L_00406518
    if (ctx->r2 != ctx->r16) {
        // 0x0040650C: nop
    
            goto L_00406518;
    }
    // 0x0040650C: nop

    // 0x00406510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406514: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00406518:
    // 0x00406518: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040651C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406520: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00406524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406528: lwc1        $f14, 0x4BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BC);
    // 0x0040652C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00406530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00406534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00406538: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0040653C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406540: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00406544: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00406548: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0040654C: jal         0x002119FC
    // 0x00406550: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00406550: nop

    after_0:
    // 0x00406554: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00406558: nop

    // 0x0040655C: bc1t        L_004064D8
    if (c1cs) {
        // 0x00406560: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004064D8;
    }
    // 0x00406560: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_00406564:
    // 0x00406564: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00406568: jal         0x00404C44
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00404C44(rdram, ctx);
        goto after_1;
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
L_00406570:
    // 0x00406570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0040657C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0040658C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406590: jr          $ra
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_004064D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004064D8:
    // 0x004064D8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x004064DC: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x004064E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x004064E4: lw          $a0, -0x604($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X604);
    // 0x004064E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004064EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x004064F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x004064F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004064F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x004064FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406500: sw          $v0, -0x600($at)
    MEM_W(-0X600, ctx->r1) = ctx->r2;
    // 0x00406504: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x00406508: bne         $v0, $s0, L_00406518
    if (ctx->r2 != ctx->r16) {
        // 0x0040650C: nop
    
            goto L_00406518;
    }
    // 0x0040650C: nop

    // 0x00406510: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406514: sw          $zero, -0x600($at)
    MEM_W(-0X600, ctx->r1) = 0;
L_00406518:
    // 0x00406518: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x0040651C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00406520: lw          $v0, -0x600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X600);
    // 0x00406524: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406528: lwc1        $f14, 0x4BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BC);
    // 0x0040652C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x00406530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x00406534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00406538: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0040653C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00406540: sw          $v0, -0x5FC($at)
    MEM_W(-0X5FC, ctx->r1) = ctx->r2;
    // 0x00406544: lwc1        $f20, 0xC($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0XC);
    // 0x00406548: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x0040654C: jal         0x002119FC
    // 0x00406550: nop

    func_002119FC(rdram, ctx);
        goto after_0;
    // 0x00406550: nop

    after_0:
    // 0x00406554: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x00406558: nop

    // 0x0040655C: bc1t        L_004064D8
    if (c1cs) {
        // 0x00406560: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_004064D8;
    }
    // 0x00406560: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00406564: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x00406568: jal         0x00404C44
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_00404C44(rdram, ctx);
        goto after_1;
    // 0x0040656C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_1:
    // 0x00406570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0040657C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0040658C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406590: jr          $ra
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_00406570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406570: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406574: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406578: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x0040657C: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406580: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406584: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406588: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x0040658C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406590: jr          $ra
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x00406594: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void entry_0040675C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040675C: lui         $a2, 0x3E86
    ctx->r6 = S32(0X3E86 << 16);
    // 0x00406760: ori         $a2, $a2, 0xA93
    ctx->r6 = ctx->r6 | 0XA93;
    // 0x00406764: mfc1        $a3, $f21
    ctx->r7 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x00406768: jal         0x00245BAC
    // 0x0040676C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_00245BAC(rdram, ctx);
        goto after_0;
    // 0x0040676C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x00406770: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x00406774: addiu       $s1, $s1, -0x624
    ctx->r17 = ADD32(ctx->r17, -0X624);
    // 0x00406778: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x0040677C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x00406780: bne         $v1, $v0, L_0040686C
    if (ctx->r3 != ctx->r2) {
        // 0x00406784: nop
    
            goto L_0040686C;
    }
    // 0x00406784: nop

    // 0x00406788: lwc1        $f1, 0xC($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0XC);
    // 0x0040678C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00406790: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00406794: nop

    // 0x00406798: bc1f        L_00406848
    if (!c1cs) {
        // 0x0040679C: nop
    
            goto L_00406848;
    }
    // 0x0040679C: nop

    // 0x004067A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004067A4: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x004067A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067AC: lwc1        $f0, 0x4D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D0);
    // 0x004067B0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004067B4: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x004067B8: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x004067BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067C0: lwc1        $f21, 0x4D4($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4D4);
    // 0x004067C4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x004067C8: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x004067CC: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x004067D0: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x004067D4: jal         0x002982F0
    // 0x004067D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002982F0(rdram, ctx);
        goto after_1;
    // 0x004067D8: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_1:
    // 0x004067DC: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x004067E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004067E4: lwc1        $f20, 0x4D8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4D8);
    // 0x004067E8: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x004067EC: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x004067F0: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x004067F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x004067F8: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x004067FC: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00406800: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x00406804: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00406808: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0040680C: lwc1        $f12, -0x3C4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, -0X3C4);
    // 0x00406810: mul.s       $f12, $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f21.fl);
    // 0x00406814: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x00406818: jal         0x002974C0
    // 0x0040681C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    func_002974C0(rdram, ctx);
        goto after_2;
    // 0x0040681C: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_2:
    // 0x00406820: lwc1        $f1, -0x3C0($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, -0X3C0);
    // 0x00406824: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x00406828: neg.s       $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = -ctx->f1.fl;
    // 0x0040682C: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x00406830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00406834: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00406838: mul.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0040683C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x00406840: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x00406844: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_00406848:
    // 0x00406848: lb          $v0, 0xC7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC7);
    // 0x0040684C: beq         $v0, $zero, L_0040686C
    if (ctx->r2 == 0) {
        // 0x00406850: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0040686C;
    }
    // 0x00406850: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406854: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00406858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040685C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00406860: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x00406864: jal         0x00243414
    // 0x00406868: nop

    func_00243414(rdram, ctx);
        goto after_3;
    // 0x00406868: nop

    after_3:
L_0040686C:
    // 0x0040686C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00406870: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00406874: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00406878: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040687C: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00406880: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00406884: jr          $ra
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00406864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406864: jal         0x00243414
    // 0x00406868: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00406868: nop

    after_0:
    // 0x0040686C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00406870: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00406874: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00406878: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0040687C: ldc1        $f21, 0x38($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X38);
    // 0x00406880: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x00406884: jr          $ra
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00406888: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00406948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406948: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0040694C: beq         $s1, $zero, L_00406A1C
    if (ctx->r17 == 0) {
        // 0x00406950: nop
    
            goto L_00406A1C;
    }
    // 0x00406950: nop

    // 0x00406954: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x00406958: addiu       $s2, $s2, -0x618
    ctx->r18 = ADD32(ctx->r18, -0X618);
    // 0x0040695C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x00406960: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00406964: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x00406968: nop

    // 0x0040696C: bc1f        L_00406A1C
    if (!c1cs) {
        // 0x00406970: addiu       $a1, $s4, 0x4
        ctx->r5 = ADD32(ctx->r20, 0X4);
            goto L_00406A1C;
    }
    // 0x00406970: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    // 0x00406974: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x00406978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x0040697C: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x00406980: lw          $t1, 0x8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X8);
    // 0x00406984: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x00406988: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x0040698C: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x00406990: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x00406994: jal         0x0020EF2C
    // 0x00406998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x00406998: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_0:
    // 0x0040699C: jal         0x0020EAA0
    // 0x004069A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_0020EAA0(rdram, ctx);
        goto after_1;
    // 0x004069A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x004069A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004069A8: jal         0x002685F0
    // 0x004069AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    func_002685F0(rdram, ctx);
        goto after_2;
    // 0x004069AC: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
    after_2:
    // 0x004069B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004069B4: lwc1        $f20, 0x4DC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4DC);
    // 0x004069B8: beq         $v0, $zero, L_004069C8
    if (ctx->r2 == 0) {
        // 0x004069BC: nop
    
            goto L_004069C8;
    }
    // 0x004069BC: nop

    // 0x004069C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004069C4: lwc1        $f20, 0x4E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4E0);
L_004069C8:
    // 0x004069C8: jal         0x002982F0
    // 0x004069CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x004069CC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_3:
    // 0x004069D0: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x004069D4: lwc1        $f1, 0x18($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X18);
    // 0x004069D8: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004069DC: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    // 0x004069E0: jal         0x002974C0
    // 0x004069E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x004069E4: swc1        $f1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    after_4:
    // 0x004069E8: mul.s       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x004069EC: lwc1        $f1, 0x20($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X20);
    // 0x004069F0: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x004069F4: swc1        $f1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f_odd[(1 - 1) * 2];
    // 0x004069F8: lwc1        $f1, -0x4($s2)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r18, -0X4);
    // 0x004069FC: c.lt.s      $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f22.fl < ctx->f1.fl;
    // 0x00406A00: nop

    // 0x00406A04: bc1f        L_00406A1C
    if (!c1cs) {
        // 0x00406A08: nop
    
            goto L_00406A1C;
    }
    // 0x00406A08: nop

    // 0x00406A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00406A10: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x00406A14: sub.s       $f0, $f1, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x00406A18: swc1        $f0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f0.u32l;
L_00406A1C:
    // 0x00406A1C: lb          $v0, 0xC7($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC7);
    // 0x00406A20: beq         $v0, $zero, L_00406A7C
    if (ctx->r2 == 0) {
        // 0x00406A24: nop
    
            goto L_00406A7C;
    }
    // 0x00406A24: nop

    // 0x00406A28: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00406A2C: addiu       $v1, $v1, -0x61C
    ctx->r3 = ADD32(ctx->r3, -0X61C);
    // 0x00406A30: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x00406A34: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00406A38: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00406A3C: nop

    // 0x00406A40: bc1f        L_00406A7C
    if (!c1cs) {
        // 0x00406A44: nop
    
            goto L_00406A7C;
    }
    // 0x00406A44: nop

    // 0x00406A48: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x00406A4C: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00406A50: nop

    // 0x00406A54: bc1f        L_00406A7C
    if (!c1cs) {
        // 0x00406A58: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_00406A7C;
    }
    // 0x00406A58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x00406A5C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x00406A60: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x00406A64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00406A68: lwc1        $f0, 0x4E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4E4);
    // 0x00406A6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00406A70: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x00406A74: jal         0x00243414
    // 0x00406A78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    func_00243414(rdram, ctx);
        goto after_5;
    // 0x00406A78: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    after_5:
L_00406A7C:
    // 0x00406A7C: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x00406A80: lw          $s4, 0xD0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XD0);
    // 0x00406A84: lw          $s3, 0xCC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XCC);
    // 0x00406A88: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x00406A8C: lw          $s1, 0xC4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC4);
    // 0x00406A90: lw          $s0, 0xC0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC0);
    // 0x00406A94: ldc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0XE8);
    // 0x00406A98: ldc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0XE0);
    // 0x00406A9C: ldc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0XD8);
    // 0x00406AA0: jr          $ra
    // 0x00406AA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x00406AA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void entry_00406B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406B20: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00406B24: addiu       $a3, $a3, -0x62E
    ctx->r7 = ADD32(ctx->r7, -0X62E);
    // 0x00406B28: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x00406B2C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00406B30: addiu       $a0, $a0, 0x1C40
    ctx->r4 = ADD32(ctx->r4, 0X1C40);
    // 0x00406B34: addiu       $a1, $zero, -0x301
    ctx->r5 = ADD32(0, -0X301);
    // 0x00406B38: lui         $a2, 0x800F
    ctx->r6 = S32(0X800F << 16);
    // 0x00406B3C: addiu       $a2, $a2, 0x1F50
    ctx->r6 = ADD32(ctx->r6, 0X1F50);
    // 0x00406B40: sw          $zero, 0x18($t1)
    MEM_W(0X18, ctx->r9) = 0;
    // 0x00406B44: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x00406B48: sw          $zero, 0x20($t1)
    MEM_W(0X20, ctx->r9) = 0;
    // 0x00406B4C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x00406B50: sw          $t0, 0x32($a3)
    MEM_W(0X32, ctx->r7) = ctx->r8;
    // 0x00406B54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x00406B58: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x00406B5C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x00406B60: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x00406B64: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00406B68: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x00406B6C: lw          $a2, 0x6($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X6);
    // 0x00406B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00406B74: bne         $a2, $v0, L_00406C10
    if (ctx->r6 != ctx->r2) {
        // 0x00406B78: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_00406C10;
    }
    // 0x00406B78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00406B7C: lwc1        $f0, 0x6A($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6A);
    // 0x00406B80: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x00406B84: lwc1        $f0, 0x6E($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X6E);
    // 0x00406B88: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x00406B8C: lwc1        $f0, 0x72($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X72);
    // 0x00406B90: sw          $zero, 0x50($t1)
    MEM_W(0X50, ctx->r9) = 0;
    // 0x00406B94: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x00406B98: lw          $a0, -0x3CA($a3)
    ctx->r4 = MEM_W(ctx->r7, -0X3CA);
    // 0x00406B9C: addiu       $v1, $a3, -0x3CA
    ctx->r3 = ADD32(ctx->r7, -0X3CA);
    // 0x00406BA0: bne         $a0, $a1, L_00406BC0
    if (ctx->r4 != ctx->r5) {
        // 0x00406BA4: sw          $a1, 0xA($a3)
        MEM_W(0XA, ctx->r7) = ctx->r5;
            goto L_00406BC0;
    }
    // 0x00406BA4: sw          $a1, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r5;
    // 0x00406BA8: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BAC: addiu       $v0, $v0, 0x13B4
    ctx->r2 = ADD32(ctx->r2, 0X13B4);
    // 0x00406BB0: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BB4: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BB8: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406BBC: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406BC0:
    // 0x00406BC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406BC4: bne         $a0, $v0, L_00406BE4
    if (ctx->r4 != ctx->r2) {
        // 0x00406BC8: nop
    
            goto L_00406BE4;
    }
    // 0x00406BC8: nop

    // 0x00406BCC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BD0: addiu       $v0, $v0, 0x1424
    ctx->r2 = ADD32(ctx->r2, 0X1424);
    // 0x00406BD4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BD8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BDC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406BE0: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406BE4:
    // 0x00406BE4: bne         $a0, $a2, L_00406C04
    if (ctx->r4 != ctx->r6) {
        // 0x00406BE8: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_00406C04;
    }
    // 0x00406BE8: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x00406BEC: lui         $v0, 0x43
    ctx->r2 = S32(0X43 << 16);
    // 0x00406BF0: addiu       $v0, $v0, 0x14CC
    ctx->r2 = ADD32(ctx->r2, 0X14CC);
    // 0x00406BF4: sw          $t0, 0x408($v1)
    MEM_W(0X408, ctx->r3) = ctx->r8;
    // 0x00406BF8: sb          $a1, 0x410($v1)
    MEM_B(0X410, ctx->r3) = ctx->r5;
    // 0x00406BFC: sw          $t0, 0x40C($v1)
    MEM_W(0X40C, ctx->r3) = ctx->r8;
    // 0x00406C00: sw          $v0, 0x404($v1)
    MEM_W(0X404, ctx->r3) = ctx->r2;
L_00406C04:
    // 0x00406C04: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C08: j           L_00406C38
    // 0x00406C0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_00406C38;
    // 0x00406C0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_00406C10:
    // 0x00406C10: lbu         $v0, -0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, -0X1);
    // 0x00406C14: bne         $v0, $zero, L_00406C30
    if (ctx->r2 != 0) {
        // 0x00406C18: addu        $a0, $t1, $zero
        ctx->r4 = ADD32(ctx->r9, 0);
            goto L_00406C30;
    }
    // 0x00406C18: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x00406C1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00406C20: sw          $v0, 0xA($a3)
    MEM_W(0XA, ctx->r7) = ctx->r2;
    // 0x00406C24: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C28: j           L_00406C38
    // 0x00406C2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_00406C38;
    // 0x00406C2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_00406C30:
    // 0x00406C30: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x00406C34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_00406C38:
    // 0x00406C38: jal         0x00243414
    // 0x00406C3C: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00406C3C: nop

    after_0:
    // 0x00406C40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00406C44: jr          $ra
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_00406C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00406C38: jal         0x00243414
    // 0x00406C3C: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00406C3C: nop

    after_0:
    // 0x00406C40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00406C44: jr          $ra
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00406C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void entry_004072B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004072B8: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004072BC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x004072C0: jr          $ra
    // 0x004072C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    return;
    // 0x004072C4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void entry_0040778C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040778C: jal         0x00243414
    // 0x00407790: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407790: nop

    after_0:
    // 0x00407794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x00407798: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0040779C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x004077A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x004077A4: jr          $ra
    // 0x004077A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x004077A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_0040799C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040799C: jal         0x00243414
    // 0x004079A0: nop

    func_00243414(rdram, ctx);
        goto after_0;
    // 0x004079A0: nop

    after_0:
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
RECOMP_FUNC void entry_00407A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00407A6C: lb          $v0, 0xC7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC7);
    // 0x00407A70: beq         $v0, $zero, L_00407AA8
    if (ctx->r2 == 0) {
        // 0x00407A74: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00407AA8;
    }
    // 0x00407A74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00407A78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00407A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407A80: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00407A84: addiu       $v1, $v1, -0x5FC
    ctx->r3 = ADD32(ctx->r3, -0X5FC);
    // 0x00407A88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00407A8C: lwc1        $f0, 0x558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X558);
    // 0x00407A90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00407A94: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x00407A98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x00407A9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x00407AA0: jal         0x00243414
    // 0x00407AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x00407AA4: sw          $v0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r2;
    after_0:
L_00407AA8:
    // 0x00407AA8: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x00407AAC: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x00407AB0: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x00407AB4: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x00407AB8: jr          $ra
    // 0x00407ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x00407ABC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void entry_00407D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void entry_00407E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00407E18:
    // 0x00407E4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00407E50: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x00407E54: jal         0x0021DC84
    // 0x00407E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x00407E58: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x00407E5C: jal         0x00284188
    // 0x00407E60: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00407E60: nop

    after_1:
    // 0x00407E64: bnel        $v0, $zero, L_00407E88
    if (ctx->r2 != 0) {
        // 0x00407E68: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00407E88;
    }
    goto skip_0;
    // 0x00407E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x00407E6C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x00407E70: addiu       $a0, $a0, -0x9D4
    ctx->r4 = ADD32(ctx->r4, -0X9D4);
    // 0x00407E74: jal         0x00236324
    // 0x00407E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    func_00236324(rdram, ctx);
        goto after_2;
    // 0x00407E78: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    after_2:
    // 0x00407E7C: jal         0x00235898
    // 0x00407E80: nop

    func_00235898(rdram, ctx);
        goto after_3;
    // 0x00407E80: nop

    after_3:
    // 0x00407E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00407E88:
    // 0x00407E88: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x00407E8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00407E90: lb          $v0, 0x151($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X151);
    // 0x00407E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00407E98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00407E9C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x00407EA0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00407EA4: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00407EA8: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00407EAC: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00407EB0: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00407EB4: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00407EB8: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00407EBC: jal         0x0020A33C
    // 0x00407EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_4;
    // 0x00407EC0: addu        $a3, $s3, $a3
    ctx->r7 = ADD32(ctx->r19, ctx->r7);
    after_4:
    // 0x00407EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00407EC8: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
    // 0x00407ECC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00407ED0: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x00407ED4: bne         $v0, $zero, L_00407E18
    if (ctx->r2 != 0) {
        // 0x00407ED8: addiu       $s2, $s2, 0x64
        ctx->r18 = ADD32(ctx->r18, 0X64);
            goto L_00407E18;
    }
    // 0x00407ED8: addiu       $s2, $s2, 0x64
    ctx->r18 = ADD32(ctx->r18, 0X64);
    // 0x00407EDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x00407EE0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x00407EE4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x00407EE8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00407EEC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00407EF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00407EF4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00407EF8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00407EFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00407F00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00407F04: jr          $ra
    // 0x00407F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x00407F08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void entry_00408120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408120: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x00408124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408128: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040812C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00408130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408134: jr          $ra
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_00408124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408128: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x0040812C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x00408130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408134: jr          $ra
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x00408138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void entry_004084AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004084AC: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x004084B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004084B4: beq         $v1, $v0, L_00408580
    if (ctx->r3 == ctx->r2) {
        // 0x004084B8: nop
    
            goto L_00408580;
    }
    // 0x004084B8: nop

    // 0x004084BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x004084C0: lw          $a0, -0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14C);
    // 0x004084C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x004084C8: lw          $a1, -0x6770($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6770);
    // 0x004084CC: beq         $a0, $zero, L_00408580
    if (ctx->r4 == 0) {
        // 0x004084D0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_00408580;
    }
    // 0x004084D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x004084D4: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x004084D8: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x004084DC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
L_004084E0:
    // 0x004084E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x004084E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x004084E8: bne         $v0, $t1, L_00408574
    if (ctx->r2 != ctx->r9) {
        // 0x004084EC: nop
    
            goto L_00408574;
    }
    // 0x004084EC: nop

    // 0x004084F0: lw          $v0, 0x1B8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1B8);
    // 0x004084F4: bne         $v0, $zero, L_00408574
    if (ctx->r2 != 0) {
        // 0x004084F8: nop
    
            goto L_00408574;
    }
    // 0x004084F8: nop

    // 0x004084FC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x00408500: bne         $v0, $zero, L_0040854C
    if (ctx->r2 != 0) {
        // 0x00408504: nop
    
            goto L_0040854C;
    }
    // 0x00408504: nop

    // 0x00408508: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x0040850C: lh          $v0, 0x44($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X44);
    // 0x00408510: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00408514: beq         $v0, $zero, L_00408528
    if (ctx->r2 == 0) {
        // 0x00408518: nop
    
            goto L_00408528;
    }
    // 0x00408518: nop

    // 0x0040851C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
    // 0x00408520: j           L_00408560
    // 0x00408524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_00408560;
    // 0x00408524: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_00408528:
    // 0x00408528: lw          $v1, 0x140($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X140);
    // 0x0040852C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00408530: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x00408534: sw          $v0, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r2;
    // 0x00408538: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x0040853C: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x00408540: sw          $v1, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r3;
    // 0x00408544: j           L_00408574
    // 0x00408548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
        goto L_00408574;
    // 0x00408548: sw          $v0, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r2;
L_0040854C:
    // 0x0040854C: lw          $v1, 0x1C0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C0);
    // 0x00408550: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00408554: bne         $v1, $v0, L_00408574
    if (ctx->r3 != ctx->r2) {
        // 0x00408558: nop
    
            goto L_00408574;
    }
    // 0x00408558: nop

    // 0x0040855C: lw          $v0, 0x140($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X140);
L_00408560:
    // 0x00408560: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x00408564: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00408568: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0040856C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00408570: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
L_00408574:
    // 0x00408574: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00408578: bne         $a0, $zero, L_004084E0
    if (ctx->r4 != 0) {
        // 0x0040857C: nop
    
            goto L_004084E0;
    }
    // 0x0040857C: nop

L_00408580:
    // 0x00408580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040858C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408590: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00408594: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00408598: jr          $ra
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00408560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004084E0:
    // 0x00408560: sw          $a1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r5;
    // 0x00408564: sw          $a1, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r5;
    // 0x00408568: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x0040856C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x00408570: sw          $v0, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r2;
    // 0x00408574: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00408578: bne         $a0, $zero, L_004084E0
    if (ctx->r4 != 0) {
        // 0x0040857C: nop
    
            goto L_004084E0;
    }
    // 0x0040857C: nop

    // 0x00408580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040858C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408590: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00408594: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00408598: jr          $ra
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00408574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_004084E0:
    // 0x00408574: lw          $a0, 0x28C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28C);
    // 0x00408578: bne         $a0, $zero, L_004084E0
    if (ctx->r4 != 0) {
        // 0x0040857C: nop
    
            goto L_004084E0;
    }
    // 0x0040857C: nop

    // 0x00408580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x00408584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x00408588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0040858C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00408590: ldc1        $f21, 0x28($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X28);
    // 0x00408594: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x00408598: jr          $ra
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x0040859C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void entry_00408690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408690:
    // 0x00408690: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00408694: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408698: bne         $v0, $v1, L_004086AC
    if (ctx->r2 != ctx->r3) {
        // 0x0040869C: nop
    
            goto L_004086AC;
    }
    // 0x0040869C: nop

    // 0x004086A0: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x004086A4: bnel        $v0, $zero, L_004086C0
    if (ctx->r2 != 0) {
        // 0x004086A8: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_004086C0;
    }
    goto skip_0;
    // 0x004086A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    skip_0:
L_004086AC:
    // 0x004086AC: lw          $s0, 0x28C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X28C);
    // 0x004086B0: beq         $s0, $zero, L_00408750
    if (ctx->r16 == 0) {
        // 0x004086B4: nop
    
            goto L_00408750;
    }
    // 0x004086B4: nop

    // 0x004086B8: j           L_00408690
    // 0x004086BC: nop

        goto L_00408690;
    // 0x004086BC: nop

L_004086C0:
    // 0x004086C0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x004086C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x004086C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004086CC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x004086D0: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x004086D4: jal         0x00246690
    // 0x004086D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_00246690(rdram, ctx);
        goto after_0;
    // 0x004086D8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_0:
    // 0x004086DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x004086E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004086E4: ori         $a2, $zero, 0xFF00
    ctx->r6 = 0 | 0XFF00;
    // 0x004086E8: lui         $a3, 0x424C
    ctx->r7 = S32(0X424C << 16);
    // 0x004086EC: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x004086F0: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x004086F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x004086F8: jal         0x00245828
    // 0x004086FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_00245828(rdram, ctx);
        goto after_1;
    // 0x004086FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x00408700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00408704: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00408708: jal         0x0025B2D4
    // 0x0040870C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_0025B2D4(rdram, ctx);
        goto after_2;
    // 0x0040870C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x00408710: j           L_00408750
    // 0x00408714: nop

        goto L_00408750;
    // 0x00408714: nop

    // 0x00408718: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x0040871C: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408720: beq         $v1, $zero, L_00408750
    if (ctx->r3 == 0) {
        // 0x00408724: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_00408750;
    }
    // 0x00408724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_00408728:
    // 0x00408728: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0040872C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408730: bne         $v0, $a0, L_00408744
    if (ctx->r2 != ctx->r4) {
        // 0x00408734: nop
    
            goto L_00408744;
    }
    // 0x00408734: nop

    // 0x00408738: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x0040873C: bne         $v0, $zero, L_00408750
    if (ctx->r2 != 0) {
        // 0x00408740: nop
    
            goto L_00408750;
    }
    // 0x00408740: nop

L_00408744:
    // 0x00408744: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x00408748: bne         $v1, $zero, L_00408728
    if (ctx->r3 != 0) {
        // 0x0040874C: nop
    
            goto L_00408728;
    }
    // 0x0040874C: nop

L_00408750:
    // 0x00408750: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x00408754: bne         $a0, $zero, L_00408764
    if (ctx->r4 != 0) {
        // 0x00408758: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00408764;
    }
    // 0x00408758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040875C: j           L_00408898
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_00408898;
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_00408764:
    // 0x00408764: bne         $a0, $v0, L_004087C4
    if (ctx->r4 != ctx->r2) {
        // 0x00408768: nop
    
            goto L_004087C4;
    }
    // 0x00408768: nop

    // 0x0040876C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408770: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408774: beql        $v1, $zero, L_004087A8
    if (ctx->r3 == 0) {
        // 0x00408778: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004087A8;
    }
    goto skip_1;
    // 0x00408778: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x0040877C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00408780:
    // 0x00408780: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408784: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408788: bne         $v0, $a0, L_0040879C
    if (ctx->r2 != ctx->r4) {
        // 0x0040878C: nop
    
            goto L_0040879C;
    }
    // 0x0040878C: nop

    // 0x00408790: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408794: bne         $v0, $zero, L_004087A8
    if (ctx->r2 != 0) {
        // 0x00408798: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004087A8;
    }
    // 0x00408798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0040879C:
    // 0x0040879C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x004087A0: bne         $v1, $zero, L_00408780
    if (ctx->r3 != 0) {
        // 0x004087A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00408780;
    }
    // 0x004087A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004087A8:
    // 0x004087A8: bnel        $v0, $zero, L_00408898
    if (ctx->r2 != 0) {
        // 0x004087AC: sw          $zero, 0x40($s1)
        MEM_W(0X40, ctx->r17) = 0;
            goto L_00408898;
    }
    goto skip_2;
    // 0x004087AC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    skip_2:
    // 0x004087B0: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087B8: lwc1        $f0, 0x5A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A0);
    // 0x004087BC: j           L_004087D0
    // 0x004087C0: nop

        goto L_004087D0;
    // 0x004087C0: nop

L_004087C4:
    // 0x004087C4: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087CC: lwc1        $f0, 0x5A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A4);
L_004087D0:
    // 0x004087D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004087D4: nop

    // 0x004087D8: bc1t        L_00408898
    if (c1cs) {
        // 0x004087DC: nop
    
            goto L_00408898;
    }
    // 0x004087DC: nop

    // 0x004087E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004087E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004087E8: jal         0x002532A8
    // 0x004087EC: nop

    func_002532A8(rdram, ctx);
        goto after_3;
    // 0x004087EC: nop

    after_3:
    // 0x004087F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004087F4: beq         $a0, $zero, L_00408898
    if (ctx->r4 == 0) {
        // 0x004087F8: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00408898;
    }
    // 0x004087F8: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x004087FC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408800: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00408804: beq         $v1, $v0, L_00408850
    if (ctx->r3 == ctx->r2) {
        // 0x00408808: slti        $v0, $v1, 0x1C85
        ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
            goto L_00408850;
    }
    // 0x00408808: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x0040880C: beq         $v0, $zero, L_0040882C
    if (ctx->r2 == 0) {
        // 0x00408810: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0040882C;
    }
    // 0x00408810: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00408814: beq         $v1, $v0, L_00408848
    if (ctx->r3 == ctx->r2) {
        // 0x00408818: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00408848;
    }
    // 0x00408818: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0040881C: beq         $v1, $v0, L_00408888
    if (ctx->r3 == ctx->r2) {
        // 0x00408820: addiu       $a1, $zero, 0xBB7
        ctx->r5 = ADD32(0, 0XBB7);
            goto L_00408888;
    }
    // 0x00408820: addiu       $a1, $zero, 0xBB7
    ctx->r5 = ADD32(0, 0XBB7);
    // 0x00408824: j           L_00408880
    // 0x00408828: nop

        goto L_00408880;
    // 0x00408828: nop

L_0040882C:
    // 0x0040882C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00408830: beq         $v1, $v0, L_00408858
    if (ctx->r3 == ctx->r2) {
        // 0x00408834: addiu       $v0, $zero, 0x1D4C
        ctx->r2 = ADD32(0, 0X1D4C);
            goto L_00408858;
    }
    // 0x00408834: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00408838: beq         $v1, $v0, L_0040886C
    if (ctx->r3 == ctx->r2) {
        // 0x0040883C: nop
    
            goto L_0040886C;
    }
    // 0x0040883C: nop

    // 0x00408840: j           L_00408880
    // 0x00408844: nop

        goto L_00408880;
    // 0x00408844: nop

L_00408848:
    // 0x00408848: j           L_00408888
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
        goto L_00408888;
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
L_00408850:
    // 0x00408850: j           L_00408888
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
        goto L_00408888;
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
L_00408858:
    // 0x00408858: lw          $v0, 0x9E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E4);
    // 0x0040885C: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408860: addiu       $a1, $zero, 0x1CE9
        ctx->r5 = ADD32(0, 0X1CE9);
            goto L_00408888;
    }
    // 0x00408860: addiu       $a1, $zero, 0x1CE9
    ctx->r5 = ADD32(0, 0X1CE9);
    // 0x00408864: j           L_00408888
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
        goto L_00408888;
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
L_0040886C:
    // 0x0040886C: lw          $v0, 0x9E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E8);
    // 0x00408870: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408874: addiu       $a1, $zero, 0x1D4D
        ctx->r5 = ADD32(0, 0X1D4D);
            goto L_00408888;
    }
    // 0x00408874: addiu       $a1, $zero, 0x1D4D
    ctx->r5 = ADD32(0, 0X1D4D);
    // 0x00408878: j           L_00408888
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
        goto L_00408888;
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
L_00408880:
    // 0x00408880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00408884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
L_00408888:
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_4;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_00408898:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408750: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x00408754: bne         $a0, $zero, L_00408764
    if (ctx->r4 != 0) {
        // 0x00408758: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_00408764;
    }
    // 0x00408758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0040875C: j           L_00408898
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
        goto L_00408898;
    // 0x00408760: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
L_00408764:
    // 0x00408764: bne         $a0, $v0, L_004087C4
    if (ctx->r4 != ctx->r2) {
        // 0x00408768: nop
    
            goto L_004087C4;
    }
    // 0x00408768: nop

    // 0x0040876C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408770: lw          $v1, -0x14C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14C);
    // 0x00408774: beql        $v1, $zero, L_004087A8
    if (ctx->r3 == 0) {
        // 0x00408778: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_004087A8;
    }
    goto skip_0;
    // 0x00408778: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x0040877C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_00408780:
    // 0x00408780: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00408784: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x00408788: bne         $v0, $a0, L_0040879C
    if (ctx->r2 != ctx->r4) {
        // 0x0040878C: nop
    
            goto L_0040879C;
    }
    // 0x0040878C: nop

    // 0x00408790: lw          $v0, 0x144($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X144);
    // 0x00408794: bne         $v0, $zero, L_004087A8
    if (ctx->r2 != 0) {
        // 0x00408798: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_004087A8;
    }
    // 0x00408798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0040879C:
    // 0x0040879C: lw          $v1, 0x28C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X28C);
    // 0x004087A0: bne         $v1, $zero, L_00408780
    if (ctx->r3 != 0) {
        // 0x004087A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_00408780;
    }
    // 0x004087A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_004087A8:
    // 0x004087A8: bnel        $v0, $zero, L_00408898
    if (ctx->r2 != 0) {
        // 0x004087AC: sw          $zero, 0x40($s1)
        MEM_W(0X40, ctx->r17) = 0;
            goto L_00408898;
    }
    goto skip_1;
    // 0x004087AC: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    skip_1:
    // 0x004087B0: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087B8: lwc1        $f0, 0x5A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A0);
    // 0x004087BC: j           L_004087D0
    // 0x004087C0: nop

        goto L_004087D0;
    // 0x004087C0: nop

L_004087C4:
    // 0x004087C4: lwc1        $f1, 0x40($s1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r17, 0X40);
    // 0x004087C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004087CC: lwc1        $f0, 0x5A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A4);
L_004087D0:
    // 0x004087D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004087D4: nop

    // 0x004087D8: bc1t        L_00408898
    if (c1cs) {
        // 0x004087DC: nop
    
            goto L_00408898;
    }
    // 0x004087DC: nop

    // 0x004087E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004087E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004087E8: jal         0x002532A8
    // 0x004087EC: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x004087EC: nop

    after_0:
    // 0x004087F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004087F4: beq         $a0, $zero, L_00408898
    if (ctx->r4 == 0) {
        // 0x004087F8: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00408898;
    }
    // 0x004087F8: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x004087FC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408800: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00408804: beq         $v1, $v0, L_00408850
    if (ctx->r3 == ctx->r2) {
        // 0x00408808: slti        $v0, $v1, 0x1C85
        ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
            goto L_00408850;
    }
    // 0x00408808: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x0040880C: beq         $v0, $zero, L_0040882C
    if (ctx->r2 == 0) {
        // 0x00408810: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0040882C;
    }
    // 0x00408810: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00408814: beq         $v1, $v0, L_00408848
    if (ctx->r3 == ctx->r2) {
        // 0x00408818: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00408848;
    }
    // 0x00408818: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0040881C: beq         $v1, $v0, L_00408888
    if (ctx->r3 == ctx->r2) {
        // 0x00408820: addiu       $a1, $zero, 0xBB7
        ctx->r5 = ADD32(0, 0XBB7);
            goto L_00408888;
    }
    // 0x00408820: addiu       $a1, $zero, 0xBB7
    ctx->r5 = ADD32(0, 0XBB7);
    // 0x00408824: j           L_00408880
    // 0x00408828: nop

        goto L_00408880;
    // 0x00408828: nop

L_0040882C:
    // 0x0040882C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00408830: beq         $v1, $v0, L_00408858
    if (ctx->r3 == ctx->r2) {
        // 0x00408834: addiu       $v0, $zero, 0x1D4C
        ctx->r2 = ADD32(0, 0X1D4C);
            goto L_00408858;
    }
    // 0x00408834: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00408838: beq         $v1, $v0, L_0040886C
    if (ctx->r3 == ctx->r2) {
        // 0x0040883C: nop
    
            goto L_0040886C;
    }
    // 0x0040883C: nop

    // 0x00408840: j           L_00408880
    // 0x00408844: nop

        goto L_00408880;
    // 0x00408844: nop

L_00408848:
    // 0x00408848: j           L_00408888
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
        goto L_00408888;
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
L_00408850:
    // 0x00408850: j           L_00408888
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
        goto L_00408888;
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
L_00408858:
    // 0x00408858: lw          $v0, 0x9E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E4);
    // 0x0040885C: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408860: addiu       $a1, $zero, 0x1CE9
        ctx->r5 = ADD32(0, 0X1CE9);
            goto L_00408888;
    }
    // 0x00408860: addiu       $a1, $zero, 0x1CE9
    ctx->r5 = ADD32(0, 0X1CE9);
    // 0x00408864: j           L_00408888
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
        goto L_00408888;
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
L_0040886C:
    // 0x0040886C: lw          $v0, 0x9E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E8);
    // 0x00408870: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408874: addiu       $a1, $zero, 0x1D4D
        ctx->r5 = ADD32(0, 0X1D4D);
            goto L_00408888;
    }
    // 0x00408874: addiu       $a1, $zero, 0x1D4D
    ctx->r5 = ADD32(0, 0X1D4D);
    // 0x00408878: j           L_00408888
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
        goto L_00408888;
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
L_00408880:
    // 0x00408880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00408884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
L_00408888:
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_00408898:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_004087D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004087D0: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x004087D4: nop

    // 0x004087D8: bc1t        L_00408898
    if (c1cs) {
        // 0x004087DC: nop
    
            goto L_00408898;
    }
    // 0x004087DC: nop

    // 0x004087E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x004087E4: addiu       $a0, $a0, -0x6790
    ctx->r4 = ADD32(ctx->r4, -0X6790);
    // 0x004087E8: jal         0x002532A8
    // 0x004087EC: nop

    func_002532A8(rdram, ctx);
        goto after_0;
    // 0x004087EC: nop

    after_0:
    // 0x004087F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x004087F4: beq         $a0, $zero, L_00408898
    if (ctx->r4 == 0) {
        // 0x004087F8: addiu       $v0, $zero, 0x1C84
        ctx->r2 = ADD32(0, 0X1C84);
            goto L_00408898;
    }
    // 0x004087F8: addiu       $v0, $zero, 0x1C84
    ctx->r2 = ADD32(0, 0X1C84);
    // 0x004087FC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x00408800: lw          $v1, 0x48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X48);
    // 0x00408804: beq         $v1, $v0, L_00408850
    if (ctx->r3 == ctx->r2) {
        // 0x00408808: slti        $v0, $v1, 0x1C85
        ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
            goto L_00408850;
    }
    // 0x00408808: slti        $v0, $v1, 0x1C85
    ctx->r2 = SIGNED(ctx->r3) < 0X1C85 ? 1 : 0;
    // 0x0040880C: beq         $v0, $zero, L_0040882C
    if (ctx->r2 == 0) {
        // 0x00408810: addiu       $v0, $zero, 0x1BBC
        ctx->r2 = ADD32(0, 0X1BBC);
            goto L_0040882C;
    }
    // 0x00408810: addiu       $v0, $zero, 0x1BBC
    ctx->r2 = ADD32(0, 0X1BBC);
    // 0x00408814: beq         $v1, $v0, L_00408848
    if (ctx->r3 == ctx->r2) {
        // 0x00408818: addiu       $v0, $zero, 0x1C20
        ctx->r2 = ADD32(0, 0X1C20);
            goto L_00408848;
    }
    // 0x00408818: addiu       $v0, $zero, 0x1C20
    ctx->r2 = ADD32(0, 0X1C20);
    // 0x0040881C: beq         $v1, $v0, L_00408888
    if (ctx->r3 == ctx->r2) {
        // 0x00408820: addiu       $a1, $zero, 0xBB7
        ctx->r5 = ADD32(0, 0XBB7);
            goto L_00408888;
    }
    // 0x00408820: addiu       $a1, $zero, 0xBB7
    ctx->r5 = ADD32(0, 0XBB7);
    // 0x00408824: j           L_00408880
    // 0x00408828: nop

        goto L_00408880;
    // 0x00408828: nop

L_0040882C:
    // 0x0040882C: addiu       $v0, $zero, 0x1CE8
    ctx->r2 = ADD32(0, 0X1CE8);
    // 0x00408830: beq         $v1, $v0, L_00408858
    if (ctx->r3 == ctx->r2) {
        // 0x00408834: addiu       $v0, $zero, 0x1D4C
        ctx->r2 = ADD32(0, 0X1D4C);
            goto L_00408858;
    }
    // 0x00408834: addiu       $v0, $zero, 0x1D4C
    ctx->r2 = ADD32(0, 0X1D4C);
    // 0x00408838: beq         $v1, $v0, L_0040886C
    if (ctx->r3 == ctx->r2) {
        // 0x0040883C: nop
    
            goto L_0040886C;
    }
    // 0x0040883C: nop

    // 0x00408840: j           L_00408880
    // 0x00408844: nop

        goto L_00408880;
    // 0x00408844: nop

L_00408848:
    // 0x00408848: j           L_00408888
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
        goto L_00408888;
    // 0x0040884C: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
L_00408850:
    // 0x00408850: j           L_00408888
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
        goto L_00408888;
    // 0x00408854: addiu       $a1, $zero, 0xF9F
    ctx->r5 = ADD32(0, 0XF9F);
L_00408858:
    // 0x00408858: lw          $v0, 0x9E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E4);
    // 0x0040885C: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408860: addiu       $a1, $zero, 0x1CE9
        ctx->r5 = ADD32(0, 0X1CE9);
            goto L_00408888;
    }
    // 0x00408860: addiu       $a1, $zero, 0x1CE9
    ctx->r5 = ADD32(0, 0X1CE9);
    // 0x00408864: j           L_00408888
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
        goto L_00408888;
    // 0x00408868: addiu       $a1, $zero, 0x1387
    ctx->r5 = ADD32(0, 0X1387);
L_0040886C:
    // 0x0040886C: lw          $v0, 0x9E8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9E8);
    // 0x00408870: beq         $v0, $zero, L_00408888
    if (ctx->r2 == 0) {
        // 0x00408874: addiu       $a1, $zero, 0x1D4D
        ctx->r5 = ADD32(0, 0X1D4D);
            goto L_00408888;
    }
    // 0x00408874: addiu       $a1, $zero, 0x1D4D
    ctx->r5 = ADD32(0, 0X1D4D);
    // 0x00408878: j           L_00408888
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
        goto L_00408888;
    // 0x0040887C: addiu       $a1, $zero, 0x176F
    ctx->r5 = ADD32(0, 0X176F);
L_00408880:
    // 0x00408880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00408884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
L_00408888:
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_1;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_00408898:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408880: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x00408884: lw          $a1, 0x48($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X48);
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_0;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408888: sw          $zero, 0xA28($a0)
    MEM_W(0XA28, ctx->r4) = 0;
    // 0x0040888C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00408890: jal         0x00248BA8
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_00248BA8(rdram, ctx);
        goto after_0;
    // 0x00408894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408898: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0040889C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x004088A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x004088A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x004088A8: jr          $ra
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x004088AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00408AD0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x00408AD4: lw          $v1, -0x49C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X49C);
    // 0x00408AD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x00408ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00408AE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00408AE4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x00408AE8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x00408AEC: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x00408AF0: jal         0x0020B6A0
    // 0x00408AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_0020B6A0(rdram, ctx);
        goto after_0;
    // 0x00408AF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x00408AF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00408AFC: jal         0x002051F4
    // 0x00408B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_1;
    // 0x00408B00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x00408B04: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x00408B08: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x00408B0C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x00408B10: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x00408B14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x00408B18: jr          $ra
    // 0x00408B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00408B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void entry_00408CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00408C44:
    // 0x00408CCC: sw          $a3, 0x1C8($a2)
    MEM_W(0X1C8, ctx->r6) = ctx->r7;
    // 0x00408CD0: sw          $a3, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = ctx->r7;
    // 0x00408CD4: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x00408CD8: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x00408CDC: sw          $v0, 0x140($a2)
    MEM_W(0X140, ctx->r6) = ctx->r2;
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
