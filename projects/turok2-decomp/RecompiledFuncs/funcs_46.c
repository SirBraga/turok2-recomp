#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_004242EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004242EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x004242F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x004242F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x004242F8: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x004242FC: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x00424300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00424304: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x00424308: beq         $v1, $v0, L_00424338
    if (ctx->r3 == ctx->r2) {
        // 0x0042430C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_00424338;
    }
    // 0x0042430C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x00424310: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x00424314: beq         $v0, $zero, L_0042432C
    if (ctx->r2 == 0) {
        // 0x00424318: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0042432C;
    }
    // 0x00424318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0042431C: beq         $v1, $zero, L_00424334
    if (ctx->r3 == 0) {
        // 0x00424320: sll         $v1, $s0, 3
        ctx->r3 = S32(ctx->r16 << 3);
            goto L_00424334;
    }
    // 0x00424320: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x00424324: j           L_00424340
    // 0x00424328: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
        goto L_00424340;
    // 0x00424328: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
L_0042432C:
    // 0x0042432C: bne         $v1, $v0, L_0042433C
    if (ctx->r3 != ctx->r2) {
        // 0x00424330: sll         $v1, $s0, 3
        ctx->r3 = S32(ctx->r16 << 3);
            goto L_0042433C;
    }
    // 0x00424330: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
L_00424334:
    // 0x00424334: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_00424338:
    // 0x00424338: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
L_0042433C:
    // 0x0042433C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
L_00424340:
    // 0x00424340: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424344: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x00424348: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0042434C: lw          $a0, 0x2038($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2038);
    // 0x00424350: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424354: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00424358: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0042435C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00424360: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00424364: addiu       $a0, $a0, 0x2054
    ctx->r4 = ADD32(ctx->r4, 0X2054);
    // 0x00424368: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x0042436C: jal         0x00266B80
    // 0x00424370: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    func_00266B80(rdram, ctx);
        goto after_0;
    // 0x00424370: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    after_0:
    // 0x00424374: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x00424378: beq         $v0, $v1, L_00424388
    if (ctx->r2 == ctx->r3) {
        // 0x0042437C: ori         $a1, $zero, 0xF660
        ctx->r5 = 0 | 0XF660;
            goto L_00424388;
    }
    // 0x0042437C: ori         $a1, $zero, 0xF660
    ctx->r5 = 0 | 0XF660;
    // 0x00424380: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x00424384: ori         $a1, $a1, 0xA300
    ctx->r5 = ctx->r5 | 0XA300;
L_00424388:
    // 0x00424388: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x0042438C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424390: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x00424394: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424398: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x0042439C: lw          $v1, 0x204C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X204C);
    // 0x004243A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004243A4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x004243A8: bne         $v1, $zero, L_004243B4
    if (ctx->r3 != 0) {
        // 0x004243AC: nop
    
            goto L_004243B4;
    }
    // 0x004243AC: nop

    // 0x004243B0: break       7
    do_break(4342704);
L_004243B4:
    // 0x004243B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x004243B8: bne         $v1, $at, L_004243CC
    if (ctx->r3 != ctx->r1) {
        // 0x004243BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_004243CC;
    }
    // 0x004243BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x004243C0: bne         $v0, $at, L_004243CC
    if (ctx->r2 != ctx->r1) {
        // 0x004243C4: nop
    
            goto L_004243CC;
    }
    // 0x004243C4: nop

    // 0x004243C8: break       6
    do_break(4342728);
L_004243CC:
    // 0x004243CC: mfhi        $v1
    ctx->r3 = hi;
    // 0x004243D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004243D4: sw          $v1, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r3;
    // 0x004243D8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x004243DC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x004243E0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x004243E4: mflo        $a2
    ctx->r6 = lo;
    // 0x004243E8: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x004243EC: beq         $v0, $zero, L_00424458
    if (ctx->r2 == 0) {
        // 0x004243F0: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_00424458;
    }
    // 0x004243F0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x004243F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004243F8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004243FC: lw          $a0, 0x204C($at)
    ctx->r4 = MEM_W(ctx->r1, 0X204C);
L_00424400:
    // 0x00424400: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x00424404: lw          $v0, 0x2038($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2038);
    // 0x00424408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x0042440C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x00424410: bne         $a0, $zero, L_0042441C
    if (ctx->r4 != 0) {
        // 0x00424414: nop
    
            goto L_0042441C;
    }
    // 0x00424414: nop

    // 0x00424418: break       7
    do_break(4342808);
L_0042441C:
    // 0x0042441C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x00424420: bne         $a0, $at, L_00424434
    if (ctx->r4 != ctx->r1) {
        // 0x00424424: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_00424434;
    }
    // 0x00424424: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x00424428: bne         $v0, $at, L_00424434
    if (ctx->r2 != ctx->r1) {
        // 0x0042442C: nop
    
            goto L_00424434;
    }
    // 0x0042442C: nop

    // 0x00424430: break       6
    do_break(4342832);
L_00424434:
    // 0x00424434: mfhi        $v1
    ctx->r3 = hi;
    // 0x00424438: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0042443C: sw          $v1, 0x2038($at)
    MEM_W(0X2038, ctx->r1) = ctx->r3;
    // 0x00424440: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x00424444: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00424448: mflo        $v1
    ctx->r3 = lo;
    // 0x0042444C: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x00424450: bne         $v0, $zero, L_00424400
    if (ctx->r2 != 0) {
        // 0x00424454: nop
    
            goto L_00424400;
    }
    // 0x00424454: nop

L_00424458:
    // 0x00424458: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x0042445C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x00424460: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424464: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x00424468: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x0042446C: lw          $a0, 0x2038($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2038);
    // 0x00424470: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x00424474: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x00424478: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x0042447C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00424480: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x00424484: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x00424488: lw          $a0, 0x203C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X203C);
    // 0x0042448C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00424490: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x00424494: lw          $a1, 0x2054($at)
    ctx->r5 = MEM_W(ctx->r1, 0X2054);
    // 0x00424498: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x0042449C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x004244A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x004244A4: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x004244A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244AC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004244B0: lw          $v1, 0x2054($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2054);
    // 0x004244B4: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x004244B8: bnel        $v0, $zero, L_004244C0
    if (ctx->r2 != 0) {
        // 0x004244BC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_004244C0;
    }
    goto skip_0;
    // 0x004244BC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_004244C0:
    // 0x004244C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244C4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x004244C8: lw          $v1, 0x2058($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2058);
    // 0x004244CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244D0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x004244D4: lw          $a0, 0x2058($at)
    ctx->r4 = MEM_W(ctx->r1, 0X2058);
    // 0x004244D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244DC: sw          $a1, 0x2030($at)
    MEM_W(0X2030, ctx->r1) = ctx->r5;
    // 0x004244E0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x004244E4: bnel        $v0, $zero, L_004244EC
    if (ctx->r2 != 0) {
        // 0x004244E8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_004244EC;
    }
    goto skip_1;
    // 0x004244E8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_004244EC:
    // 0x004244EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x004244F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x004244F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004244F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x004244FC: sw          $v1, 0x2034($at)
    MEM_W(0X2034, ctx->r1) = ctx->r3;
    // turok2: reconnected split function: a stray ELF symbol at 0x00424500 ended
    // this function early, leaving it without its epilogue. On the
    // hardware execution simply continues into the next instruction.
    func_00424500(rdram, ctx);
;}
RECOMP_FUNC void func_00264740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00264740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264744: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00264748: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x0026474C: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x00264750: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
    // 0x00264754: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x00264758: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x0026475C: beq         $v0, $zero, L_00264770
    if (ctx->r2 == 0) {
        // 0x00264760: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_00264770;
    }
    // 0x00264760: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00264764: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264768: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x0026476C: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
L_00264770:
    // 0x00264770: andi        $v0, $a3, 0x8000
    ctx->r2 = ctx->r7 & 0X8000;
    // 0x00264774: beq         $v0, $zero, L_0026478C
    if (ctx->r2 == 0) {
        // 0x00264778: nop
    
            goto L_0026478C;
    }
    // 0x00264778: nop

    // 0x0026477C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x00264780: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x00264784: beql        $v0, $zero, L_0026478C
    if (ctx->r2 == 0) {
        // 0x00264788: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_0026478C;
    }
    goto skip_0;
    // 0x00264788: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
L_0026478C:
    // 0x0026478C: beq         $v1, $zero, L_002647B0
    if (ctx->r3 == 0) {
        // 0x00264790: nop
    
            goto L_002647B0;
    }
    // 0x00264790: nop

    // 0x00264794: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00264798: lwc1        $f0, 0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6D28);
    // 0x0026479C: lwc1        $f2, 0x38($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X38);
    // 0x002647A0: lwc1        $f1, 0x64($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X64);
    // 0x002647A4: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x002647A8: sub.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f0.fl;
    // 0x002647AC: swc1        $f1, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f_odd[(1 - 1) * 2];
L_002647B0:
    // 0x002647B0: lwc1        $f1, 0x64($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X64);
    // 0x002647B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x002647B8: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x002647BC: nop

    // 0x002647C0: bc1f        L_002647D0
    if (!c1cs) {
        // 0x002647C4: nop
    
            goto L_002647D0;
    }
    // 0x002647C4: nop

    // 0x002647C8: jal         0x00243414
    // 0x002647CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00243414(rdram, ctx);
        goto after_0;
    // 0x002647CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_002647D0:
    // 0x002647D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002647D4: jr          $ra
    // 0x002647D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002647D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00293E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00293E30: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x00293E34: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x00293E38: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x00293E3C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x00293E40: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x00293E44: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x00293E48: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x00293E4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00293E50: jr          $ra
    // 0x00293E54: sh          $a2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r6;
    return;
    // 0x00293E54: sh          $a2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r6;
    // 0x00293E58: nop

    // 0x00293E5C: lw          $v0, 0x80($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X80);
;}
RECOMP_FUNC void func_00455960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0041C9C8:
    // 0x00455960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00455964: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00455968: addiu       $a0, $a0, -0x5350
    ctx->r4 = ADD32(ctx->r4, -0X5350);
    // 0x0045596C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00455970: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x00455974: beq         $v0, $zero, L_00455994
    if (ctx->r2 == 0) {
        // 0x00455978: nop
    
            goto L_00455994;
    }
    // 0x00455978: nop

    // 0x0045597C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x00455980: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x00455984: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x00455988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0045598C: beql        $v1, $v0, L_00455994
    if (ctx->r3 == ctx->r2) {
        // 0x00455990: sw          $v1, 0x40($a0)
        MEM_W(0X40, ctx->r4) = ctx->r3;
            goto L_00455994;
    }
    goto skip_0;
    // 0x00455990: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    skip_0:
L_00455994:
    // 0x00455994: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x00455998: lw          $v1, -0x6760($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6760);
    // 0x0045599C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004559A0: bne         $v1, $v0, L_004559C0
    if (ctx->r3 != ctx->r2) {
        // 0x004559A4: nop
    
            goto L_004559C0;
    }
    // 0x004559A4: nop

    // 0x004559A8: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004559AC: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x004559B0: jal         0x00430250
    // 0x004559B4: nop

    func_00430250(rdram, ctx);
        goto after_0;
    // 0x004559B4: nop

    after_0:
    // 0x004559B8: j           L_0041C9C8
    // 0x004559BC: nop

    entry_0041C9C8(rdram, ctx);
    return;
    // 0x004559BC: nop

L_004559C0:
    // 0x004559C0: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x004559C4: sw          $zero, 0x510($v0)
    MEM_W(0X510, ctx->r2) = 0;
    // 0x004559C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004559CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004559D0: jr          $ra
    // 0x004559D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004559D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00255EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00255EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00255EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00255EC0: jal         0x0042EB04
    // 0x00255EC4: sw          $zero, 0xBFC($s0)
    MEM_W(0XBFC, ctx->r16) = 0;
    func_0042EB04(rdram, ctx);
        goto after_0;
    // 0x00255EC4: sw          $zero, 0xBFC($s0)
    MEM_W(0XBFC, ctx->r16) = 0;
    after_0:
    // 0x00255EC8: lui         $a0, 0xFF7F
    ctx->r4 = S32(0XFF7F << 16);
    // 0x00255ECC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x00255ED0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x00255ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00255ED8: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x00255EDC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x00255EE0: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x00255EE4: sw          $zero, 0x1298($s0)
    MEM_W(0X1298, ctx->r16) = 0;
    // 0x00255EE8: sw          $v1, 0xC04($s0)
    MEM_W(0XC04, ctx->r16) = ctx->r3;
    // 0x00255EEC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x00255EF0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x00255EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00255EF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00255EFC: jr          $ra
    // 0x00255F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00255F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00419664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419668: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0041966C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x00419670: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00419674: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x00419678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0041967C: jal         0x00288C5C
    // 0x00419680: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_00288C5C(rdram, ctx);
        goto after_0;
    // 0x00419680: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x00419684: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x00419688: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x0041968C: sw          $zero, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = 0;
    // 0x00419690: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x00419694: jal         0x00285A80
    // 0x00419698: nop

    func_00285A80(rdram, ctx);
        goto after_1;
    // 0x00419698: nop

    after_1:
    // 0x0041969C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004196A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004196A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004196A8: jr          $ra
    // 0x004196AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004196AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00255048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00255048: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x0025504C: addu        $a3, $t1, $zero
    ctx->r7 = ADD32(ctx->r9, 0);
    // 0x00255050: addu        $t0, $t1, $zero
    ctx->r8 = ADD32(ctx->r9, 0);
L_00255054:
    // 0x00255054: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x00255058: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x0025505C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00255060: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x00255064: lw          $v1, -0x9E8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X9E8);
    // 0x00255068: beql        $v0, $zero, L_002550C0
    if (ctx->r2 == 0) {
        // 0x0025506C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_002550C0;
    }
    goto skip_0;
    // 0x0025506C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x00255070: lw          $v0, 0x3C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C8);
    // 0x00255074: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00255078: beq         $v0, $zero, L_0025508C
    if (ctx->r2 == 0) {
        // 0x0025507C: nop
    
            goto L_0025508C;
    }
    // 0x0025507C: nop

    // 0x00255080: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00255084: j           L_00255094
    // 0x00255088: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
        goto L_00255094;
    // 0x00255088: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
L_0025508C:
    // 0x0025508C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00255090: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_00255094:
    // 0x00255094: bne         $v0, $zero, L_002550A4
    if (ctx->r2 != 0) {
        // 0x00255098: nop
    
            goto L_002550A4;
    }
    // 0x00255098: nop

    // 0x0025509C: j           L_002550C0
    // 0x002550A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_002550C0;
    // 0x002550A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_002550A4:
    // 0x002550A4: lh          $a2, 0xC($v1)
    ctx->r6 = MEM_H(ctx->r3, 0XC);
    // 0x002550A8: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x002550AC: lb          $v0, 0x972($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X972);
    // 0x002550B0: beq         $v0, $zero, L_002550C0
    if (ctx->r2 == 0) {
        // 0x002550B4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_002550C0;
    }
    // 0x002550B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x002550B8: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x002550BC: xor         $v1, $v0, $v1
    ctx->r3 = ctx->r2 ^ ctx->r3;
L_002550C0:
    // 0x002550C0: beq         $v1, $zero, L_002550CC
    if (ctx->r3 == 0) {
        // 0x002550C4: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_002550CC;
    }
    // 0x002550C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x002550C8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_002550CC:
    // 0x002550CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x002550D0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x002550D4: slti        $v0, $a3, 0x23
    ctx->r2 = SIGNED(ctx->r7) < 0X23 ? 1 : 0;
    // 0x002550D8: bne         $v0, $zero, L_00255054
    if (ctx->r2 != 0) {
        // 0x002550DC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_00255054;
    }
    // 0x002550DC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x002550E0: jr          $ra
    // 0x002550E4: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    return;
    // 0x002550E4: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
;}
RECOMP_FUNC void func_0026C5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026C5C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0026C5C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0026C5CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0026C5D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x0026C5D4: beq         $s1, $zero, L_0026C664
    if (ctx->r17 == 0) {
        // 0x0026C5D8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_0026C664;
    }
    // 0x0026C5D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x0026C5DC: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x0026C5E0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x0026C5E4: bne         $v0, $zero, L_0026C62C
    if (ctx->r2 != 0) {
        // 0x0026C5E8: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_0026C62C;
    }
    // 0x0026C5E8: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x0026C5EC: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x0026C5F0: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x0026C5F4: beq         $a0, $zero, L_0026C604
    if (ctx->r4 == 0) {
        // 0x0026C5F8: sh          $v0, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r2;
            goto L_0026C604;
    }
    // 0x0026C5F8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x0026C5FC: jal         0x0026CE44
    // 0x0026C600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_0;
    // 0x0026C600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_0026C604:
    // 0x0026C604: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x0026C608: beq         $a0, $zero, L_0026C618
    if (ctx->r4 == 0) {
        // 0x0026C60C: nop
    
            goto L_0026C618;
    }
    // 0x0026C60C: nop

    // 0x0026C610: jal         0x0026CE44
    // 0x0026C614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_1;
    // 0x0026C614: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
L_0026C618:
    // 0x0026C618: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x0026C61C: beq         $a0, $zero, L_0026C62C
    if (ctx->r4 == 0) {
        // 0x0026C620: nop
    
            goto L_0026C62C;
    }
    // 0x0026C620: nop

    // 0x0026C624: jal         0x0026CE44
    // 0x0026C628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_0026CE44(rdram, ctx);
        goto after_2;
    // 0x0026C628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_0026C62C:
    // 0x0026C62C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x0026C630: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026C634: jal         0x0022425C
    // 0x0026C638: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_0022425C(rdram, ctx);
        goto after_3;
    // 0x0026C638: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x0026C63C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x0026C640: beq         $a0, $zero, L_0026C664
    if (ctx->r4 == 0) {
        // 0x0026C644: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_0026C664;
    }
    // 0x0026C644: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0026C648: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    // 0x0026C64C: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x0026C650: lbu         $v1, 0x5B($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5B);
    // 0x0026C654: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x0026C658: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x0026C65C: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    // 0x0026C660: sb          $v1, 0x5B($a0)
    MEM_B(0X5B, ctx->r4) = ctx->r3;
L_0026C664:
    // 0x0026C664: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x0026C668: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x0026C66C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x0026C670: jr          $ra
    // 0x0026C674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0026C674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00409A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00409A64: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x00409A68: sw          $s6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r22;
    // 0x00409A6C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00409A70: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00409A74: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00409A78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x00409A7C: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x00409A80: sw          $s5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r21;
    // 0x00409A84: sw          $s4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r20;
    // 0x00409A88: sw          $s3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r19;
    // 0x00409A8C: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x00409A90: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    // 0x00409A94: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x00409A98: sdc1        $f26, 0x108($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X108, ctx->r29);
    // 0x00409A9C: sdc1        $f25, 0x100($sp)
    CHECK_FR(ctx, 25);
    SD(ctx->f25.u64, 0X100, ctx->r29);
    // 0x00409AA0: sdc1        $f24, 0xF8($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0XF8, ctx->r29);
    // 0x00409AA4: sdc1        $f23, 0xF0($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0XF0, ctx->r29);
    // 0x00409AA8: sdc1        $f22, 0xE8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0XE8, ctx->r29);
    // 0x00409AAC: sdc1        $f21, 0xE0($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0XE0, ctx->r29);
    // 0x00409AB0: sdc1        $f20, 0xD8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0XD8, ctx->r29);
    // 0x00409AB4: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x00409AB8: jal         0x00246108
    // 0x00409ABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x00409ABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x00409AC0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x00409AC4: beq         $a0, $zero, L_00409AE0
    if (ctx->r4 == 0) {
        // 0x00409AC8: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_00409AE0;
    }
    // 0x00409AC8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x00409ACC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x00409AD0: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x00409AD4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00409AD8: bnel        $v0, $zero, L_00409AE0
    if (ctx->r2 != 0) {
        // 0x00409ADC: sw          $a0, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r4;
            goto L_00409AE0;
    }
    goto skip_0;
    // 0x00409ADC: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    skip_0:
L_00409AE0:
    // 0x00409AE0: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x00409AE4: beq         $v0, $zero, L_00409D08
    if (ctx->r2 == 0) {
        // 0x00409AE8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_00409D08;
    }
    // 0x00409AE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00409AEC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x00409AF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409AF4: lwc1        $f20, 0x5F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5F8);
    // 0x00409AF8: lui         $s1, 0x43
    ctx->r17 = S32(0X43 << 16);
    // 0x00409AFC: addiu       $s1, $s1, 0x1D20
    ctx->r17 = ADD32(ctx->r17, 0X1D20);
L_00409B00:
    // 0x00409B00: bgez        $s4, L_00409B5C
    if (SIGNED(ctx->r20) >= 0) {
        // 0x00409B04: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_00409B5C;
    }
    // 0x00409B04: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x00409B08: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x00409B0C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x00409B10: jal         0x0020EF2C
    // 0x00409B14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x00409B14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x00409B18: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x00409B1C: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x00409B20: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x00409B24: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x00409B28: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x00409B2C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x00409B30: add.s       $f1, $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f0.fl;
    // 0x00409B34: jal         0x00298470
    // 0x00409B38: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    func_00298470(rdram, ctx);
        goto after_2;
    // 0x00409B38: add.s       $f12, $f1, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f1.fl + ctx->f12.fl;
    after_2:
    // 0x00409B3C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x00409B40: nop

    // 0x00409B44: bc1tl       L_00409B4C
    if (c1cs) {
        // 0x00409B48: addu        $s4, $s0, $zero
        ctx->r20 = ADD32(ctx->r16, 0);
            goto L_00409B4C;
    }
    goto skip_1;
    // 0x00409B48: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    skip_1:
L_00409B4C:
    // 0x00409B4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00409B50: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x00409B54: bne         $v0, $zero, L_00409B00
    if (ctx->r2 != 0) {
        // 0x00409B58: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_00409B00;
    }
    // 0x00409B58: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_00409B5C:
    // 0x00409B5C: beq         $s2, $zero, L_00409CE8
    if (ctx->r18 == 0) {
        // 0x00409B60: sll         $v0, $s4, 2
        ctx->r2 = S32(ctx->r20 << 2);
            goto L_00409CE8;
    }
    // 0x00409B60: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x00409B64: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x00409B68: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x00409B6C: lui         $s5, 0x43
    ctx->r21 = S32(0X43 << 16);
    // 0x00409B70: addiu       $s5, $s5, 0x1D20
    ctx->r21 = ADD32(ctx->r21, 0X1D20);
    // 0x00409B74: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409B78: lwc1        $f26, 0x5FC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5FC);
    // 0x00409B7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409B80: lwc1        $f25, 0x600($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X600);
L_00409B84:
    // 0x00409B84: bltz        $s4, L_00409BDC
    if (SIGNED(ctx->r20) < 0) {
        // 0x00409B88: nop
    
            goto L_00409BDC;
    }
    // 0x00409B88: nop

    // 0x00409B8C: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00409B90: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00409B94: lwc1        $f24, 0x1D20($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1D20);
    // 0x00409B98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409B9C: lwc1        $f12, 0x604($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X604);
    // 0x00409BA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409BA4: lwc1        $f14, 0x608($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X608);
    // 0x00409BA8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00409BAC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00409BB0: lwc1        $f23, 0x1D28($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X1D28);
    // 0x00409BB4: jal         0x002119FC
    // 0x00409BB8: nop

    func_002119FC(rdram, ctx);
        goto after_3;
    // 0x00409BB8: nop

    after_3:
    // 0x00409BBC: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00409BC0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00409BC4: lwc1        $f12, 0x1D2C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1D2C);
    // 0x00409BC8: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00409BCC: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x00409BD0: lwc1        $f14, 0x1D30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1D30);
    // 0x00409BD4: j           L_00409C24
    // 0x00409BD8: nop

        goto L_00409C24;
    // 0x00409BD8: nop

L_00409BDC:
    // 0x00409BDC: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x00409BE0: lwc1        $f24, 0x4($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X4);
    // 0x00409BE4: lwc1        $f23, 0xC($v0)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r2, 0XC);
    // 0x00409BE8: beq         $s6, $zero, L_00409BFC
    if (ctx->r22 == 0) {
        // 0x00409BEC: nop
    
            goto L_00409BFC;
    }
    // 0x00409BEC: nop

    // 0x00409BF0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x00409BF4: j           L_00409C30
    // 0x00409BF8: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
        goto L_00409C30;
    // 0x00409BF8: mov.s       $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    ctx->f21.fl = ctx->f22.fl;
L_00409BFC:
    // 0x00409BFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409C00: lwc1        $f12, 0x60C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X60C);
    // 0x00409C04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409C08: lwc1        $f14, 0x610($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X610);
    // 0x00409C0C: jal         0x002119FC
    // 0x00409C10: nop

    func_002119FC(rdram, ctx);
        goto after_4;
    // 0x00409C10: nop

    after_4:
    // 0x00409C14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409C18: lwc1        $f12, 0x614($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X614);
    // 0x00409C1C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00409C20: lwc1        $f14, 0x618($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X618);
L_00409C24:
    // 0x00409C24: jal         0x002119FC
    // 0x00409C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_002119FC(rdram, ctx);
        goto after_5;
    // 0x00409C28: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_5:
    // 0x00409C2C: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_00409C30:
    // 0x00409C30: jal         0x002982F0
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    func_002982F0(rdram, ctx);
        goto after_6;
    // 0x00409C34: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_6:
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
        goto after_7;
    // 0x00409C40: mov.s       $f12, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 21);
    ctx->f12.fl = ctx->f21.fl;
    after_7:
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
        goto after_8;
    // 0x00409C90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_8:
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
        goto after_9;
    // 0x00409CB4: add.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f12.fl;
    after_9:
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
    goto skip_2;
    // 0x00409CC4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_2:
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

L_00409CE8:
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
        goto after_10;
    // 0x00409D04: addiu       $a1, $zero, 0x112
    ctx->r5 = ADD32(0, 0X112);
    after_10:
L_00409D08:
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
RECOMP_FUNC void func_004686E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004686E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x004686EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x004686F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004686F4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x004686F8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x004686FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00468700: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
L_00468704:
    // 0x00468704: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x00468708: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x0046870C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x00468710: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x00468714: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x00468718: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x0046871C: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x00468720: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x00468724: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x00468728: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0046872C: srav        $v1, $t1, $v1
    ctx->r3 = S32(SIGNED(ctx->r9) >> (ctx->r3 & 31));
    // 0x00468730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00468734: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x00468738: bne         $a2, $t0, L_00468704
    if (ctx->r6 != ctx->r8) {
        // 0x0046873C: or          $a1, $a1, $v0
        ctx->r5 = ctx->r5 | ctx->r2;
            goto L_00468704;
    }
    // 0x0046873C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x00468740: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x00468744: jal         0x0042EB50
    // 0x00468748: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    func_0042EB50(rdram, ctx);
        goto after_0;
    // 0x00468748: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    after_0:
    // 0x0046874C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00468750: jr          $ra
    // 0x00468754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00468754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0020FAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0020FAFC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x0020FB00: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FB04: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FB08: lwc1        $f3, 0x10($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x0020FB0C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FB10: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FB14: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FB18: lwc1        $f1, 0x20($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X20);
    // 0x0020FB1C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FB20: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FB24: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FB28: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x0020FB2C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x0020FB30: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FB34: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FB38: lwc1        $f3, 0x14($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X14);
    // 0x0020FB3C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FB40: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FB44: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FB48: lwc1        $f1, 0x24($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x0020FB4C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FB50: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FB54: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FB58: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x0020FB5C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x0020FB60: lwc1        $f1, 0x0($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X0);
    // 0x0020FB64: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0020FB68: lwc1        $f3, 0x18($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x0020FB6C: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x0020FB70: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0020FB74: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0020FB78: lwc1        $f1, 0x28($a0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r4, 0X28);
    // 0x0020FB7C: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0020FB80: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0020FB84: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0020FB88: jr          $ra
    // 0x0020FB8C: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    return;
    // 0x0020FB8C: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_0045CBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_00276658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00276658: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x0027665C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x00276660: beq         $a2, $v0, L_002766C0
    if (ctx->r6 == ctx->r2) {
        // 0x00276664: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_002766C0;
    }
    // 0x00276664: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x00276668: addiu       $t0, $a0, 0xD8
    ctx->r8 = ADD32(ctx->r4, 0XD8);
    // 0x0027666C: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
L_00276670:
    // 0x00276670: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x00276674: beq         $a1, $t2, L_00276688
    if (ctx->r5 == ctx->r10) {
        // 0x00276678: nop
    
            goto L_00276688;
    }
    // 0x00276678: nop

    // 0x0027667C: lw          $v0, 0xB0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB0);
    // 0x00276680: beql        $v0, $a1, L_002766B8
    if (ctx->r2 == ctx->r5) {
        // 0x00276684: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_002766B8;
    }
    goto skip_0;
    // 0x00276684: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_0:
L_00276688:
    // 0x00276688: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x0027668C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x00276690: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x00276694: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x00276698: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0027669C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x002766A0: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x002766A4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x002766A8: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x002766AC: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x002766B0: sw          $a2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r6;
    // 0x002766B4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_002766B8:
    // 0x002766B8: bne         $a2, $t1, L_00276670
    if (ctx->r6 != ctx->r9) {
        // 0x002766BC: nop
    
            goto L_00276670;
    }
    // 0x002766BC: nop

L_002766C0:
    // 0x002766C0: jr          $ra
    // 0x002766C4: nop

    return;
    // 0x002766C4: nop

;}
RECOMP_FUNC void func_0044746C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0044746C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00447470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00447474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00447478: jal         0x00284204
    // 0x0044747C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_00284204(rdram, ctx);
        goto after_0;
    // 0x0044747C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x00447480: beq         $v0, $zero, L_0044754C
    if (ctx->r2 == 0) {
        // 0x00447484: nop
    
            goto L_0044754C;
    }
    // 0x00447484: nop

    // 0x00447488: lw          $v0, 0x4F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F8);
    // 0x0044748C: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x00447490: sw          $v1, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = ctx->r3;
    // 0x00447494: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x00447498: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0044749C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004474A0: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x004474A4: sw          $zero, 0x530($s0)
    MEM_W(0X530, ctx->r16) = 0;
    // 0x004474A8: blez        $v0, L_004474D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004474AC: sw          $zero, 0x548($s0)
        MEM_W(0X548, ctx->r16) = 0;
            goto L_004474D0;
    }
    // 0x004474AC: sw          $zero, 0x548($s0)
    MEM_W(0X548, ctx->r16) = 0;
    // 0x004474B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004474B4:
    // 0x004474B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x004474B8: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004474BC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x004474C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004474C4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004474C8: bne         $v0, $zero, L_004474B4
    if (ctx->r2 != 0) {
        // 0x004474CC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004474B4;
    }
    // 0x004474CC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_004474D0:
    // 0x004474D0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004474D4: blez        $v0, L_004474FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x004474D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004474FC;
    }
    // 0x004474D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x004474DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_004474E0:
    // 0x004474E0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x004474E4: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x004474E8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x004474EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004474F0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004474F4: bne         $v0, $zero, L_004474E0
    if (ctx->r2 != 0) {
        // 0x004474F8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_004474E0;
    }
    // 0x004474F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_004474FC:
    // 0x004474FC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00447500: blez        $v0, L_00447528
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00447504: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_00447528;
    }
    // 0x00447504: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x00447508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_0044750C:
    // 0x0044750C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x00447510: sw          $zero, 0x24C($v0)
    MEM_W(0X24C, ctx->r2) = 0;
    // 0x00447514: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x00447518: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x0044751C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x00447520: bne         $v0, $zero, L_0044750C
    if (ctx->r2 != 0) {
        // 0x00447524: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_0044750C;
    }
    // 0x00447524: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00447528:
    // 0x00447528: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x0044752C: sw          $a1, 0x4FC($s0)
    MEM_W(0X4FC, ctx->r16) = ctx->r5;
    // 0x00447530: lui         $at, 0x43
    ctx->r1 = S32(0X43 << 16);
    // 0x00447534: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00447538: lw          $v0, 0x232C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X232C);
    // 0x0044753C: beq         $v0, $zero, L_0044754C
    if (ctx->r2 == 0) {
        // 0x00447540: nop
    
            goto L_0044754C;
    }
    // 0x00447540: nop

    // 0x00447544: jalr        $v0
    // 0x00447548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x00447548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_0044754C:
    // 0x0044754C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x00447550: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x00447554: jr          $ra
    // 0x00447558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00447558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002542B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002542B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x002542B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x002542BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x002542C0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x002542C4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x002542C8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x002542CC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x002542D0: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x002542D4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x002542D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x002542DC: beq         $v0, $zero, L_00254388
    if (ctx->r2 == 0) {
        // 0x002542E0: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_00254388;
    }
    // 0x002542E0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x002542E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002542E8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x002542EC: addiu       $v0, $v0, 0x7094
    ctx->r2 = ADD32(ctx->r2, 0X7094);
    // 0x002542F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x002542F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x002542F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x002542FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00254300: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x00254304: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x00254308: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x0025430C: jal         0x0020367C
    // 0x00254310: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_0020367C(rdram, ctx);
        goto after_0;
    // 0x00254310: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x00254314: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x00254318: beq         $s1, $zero, L_00254388
    if (ctx->r17 == 0) {
        // 0x0025431C: nop
    
            goto L_00254388;
    }
    // 0x0025431C: nop

    // 0x00254320: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x00254324: lw          $s2, 0x1A8($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X1A8);
    // 0x00254328: jal         0x002017D4
    // 0x0025432C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_002017D4(rdram, ctx);
        goto after_1;
    // 0x0025432C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x00254330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00254334: jal         0x0021E7F8
    // 0x00254338: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0021E7F8(rdram, ctx);
        goto after_2;
    // 0x00254338: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_2:
    // 0x0025433C: beq         $s3, $zero, L_0025437C
    if (ctx->r19 == 0) {
        // 0x00254340: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_0025437C;
    }
    // 0x00254340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00254344: lw          $v0, 0x51C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X51C);
    // 0x00254348: lwc1        $f1, 0x4($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X4);
    // 0x0025434C: lwc1        $f0, 0x114($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X114);
    // 0x00254350: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00254354: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x00254358: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x0025435C: lw          $v0, 0x51C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X51C);
    // 0x00254360: lwc1        $f1, 0xC($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0XC);
    // 0x00254364: lwc1        $f0, 0x11C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X11C);
    // 0x00254368: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x0025436C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x00254370: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00254374: jal         0x0021E03C
    // 0x00254378: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_0021E03C(rdram, ctx);
        goto after_3;
    // 0x00254378: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
L_0025437C:
    // 0x0025437C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00254380: jal         0x002051F4
    // 0x00254384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_002051F4(rdram, ctx);
        goto after_4;
    // 0x00254384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_00254388:
    // 0x00254388: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x0025438C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x00254390: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x00254394: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x00254398: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0025439C: jr          $ra
    // 0x002543A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x002543A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0023C2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0023C2B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0023C2B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0023C2B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0023C2BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C2C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0023C2C4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x0023C2C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0023C2CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0023C2D0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x0023C2D4: jal         0x0020EF2C
    // 0x0023C2D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_0;
    // 0x0023C2D8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x0023C2DC: lwc1        $f2, 0x30($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023C2E0: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x0023C2E4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x0023C2E8: lwc1        $f3, 0x34($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0023C2EC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0023C2F0: mul.s       $f3, $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f0.fl);
    // 0x0023C2F4: lwc1        $f1, 0x18($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x0023C2F8: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x0023C2FC: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C300: add.s       $f2, $f2, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f3.fl;
    // 0x0023C304: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x0023C308: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0023C30C: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
    // 0x0023C310: nop

    // 0x0023C314: bc1f        L_0023C320
    if (!c1cs) {
        // 0x0023C318: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_0023C320;
    }
    // 0x0023C318: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0023C31C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_0023C320:
    // 0x0023C320: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x0023C324: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x0023C328: jal         0x0020EF2C
    // 0x0023C32C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_0020EF2C(rdram, ctx);
        goto after_1;
    // 0x0023C32C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x0023C330: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0023C334: lwc1        $f1, 0x10($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x0023C338: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0023C33C: lwc1        $f3, 0x34($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0023C340: lwc1        $f1, 0x14($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x0023C344: mul.s       $f3, $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x0023C348: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x0023C34C: lwc1        $f1, 0x38($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X38);
    // 0x0023C350: mul.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x0023C354: add.s       $f0, $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f3.fl;
    // 0x0023C358: add.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x0023C35C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x0023C360: nop

    // 0x0023C364: bc1f        L_0023C370
    if (!c1cs) {
        // 0x0023C368: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_0023C370;
    }
    // 0x0023C368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0023C36C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_0023C370:
    // 0x0023C370: xor         $v0, $s1, $v0
    ctx->r2 = ctx->r17 ^ ctx->r2;
    // 0x0023C374: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x0023C378: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0023C37C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0023C380: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0023C384: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x0023C388: jr          $ra
    // 0x0023C38C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x0023C38C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_004226D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004226D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x004226DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x004226E0: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x004226E4: jr          $ra
    // 0x004226E8: nop

    return;
    // 0x004226E8: nop

;}
RECOMP_FUNC void func_002532B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002532B4: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x002532B8: beq         $v1, $zero, L_002532DC
    if (ctx->r3 == 0) {
        // 0x002532BC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_002532DC;
    }
    // 0x002532BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_002532C0:
    // 0x002532C0: lw          $v0, 0x518($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X518);
    // 0x002532C4: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x002532C8: beq         $v0, $a0, L_002532E4
    if (ctx->r2 == ctx->r4) {
            // 0x002532CC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    func_002532E4(rdram, ctx);
    return;
    }
    // 0x002532CC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x002532D0: lw          $v1, 0x1320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1320);
    // 0x002532D4: bne         $v1, $zero, L_002532C0
    if (ctx->r3 != 0) {
        // 0x002532D8: nop
    
            goto L_002532C0;
    }
    // 0x002532D8: nop

L_002532DC:
    // 0x002532DC: jr          $ra
    // 0x002532E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x002532E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_002041E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002041E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x002041E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x002041EC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x002041F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x002041F4: addiu       $s4, $zero, -0x3
    ctx->r20 = ADD32(0, -0X3);
    // 0x002041F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x002041FC: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x00204200: addiu       $s1, $s1, -0x7BB0
    ctx->r17 = ADD32(ctx->r17, -0X7BB0);
    // 0x00204204: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00204208: addiu       $s3, $s1, 0x940
    ctx->r19 = ADD32(ctx->r17, 0X940);
    // 0x0020420C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00204210: addiu       $s5, $zero, -0x101
    ctx->r21 = ADD32(0, -0X101);
    // 0x00204214: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00204218: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0020421C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00204220:
    // 0x00204220: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x00204224: jal         0x0029B6F0
    // 0x00204228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x00204228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0020422C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x00204230: sltiu       $v0, $a0, 0x2
    ctx->r2 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x00204234: beq         $v0, $zero, L_002042C0
    if (ctx->r2 == 0) {
        // 0x00204238: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_002042C0;
    }
    // 0x00204238: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x0020423C: jal         0x0029DFF0
    // 0x00204240: nop

    func_0029DFF0(rdram, ctx);
        goto after_1;
    // 0x00204240: nop

    after_1:
    // 0x00204244: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204248: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x0020424C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204250: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204254: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204258: beq         $v1, $s2, L_00204280
    if (ctx->r3 == ctx->r18) {
        // 0x0020425C: nop
    
            goto L_00204280;
    }
    // 0x0020425C: nop

    // 0x00204260: jal         0x0029E010
    // 0x00204264: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_2;
    // 0x00204264: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x00204268: addiu       $a0, $s1, 0x960
    ctx->r4 = ADD32(ctx->r17, 0X960);
    // 0x0020426C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204270: jal         0x0029B6F0
    // 0x00204274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x00204274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x00204278: j           L_00204288
    // 0x0020427C: nop

        goto L_00204288;
    // 0x0020427C: nop

L_00204280:
    // 0x00204280: jal         0x0029E010
    // 0x00204284: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_4;
    // 0x00204284: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
L_00204288:
    // 0x00204288: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0020428C: jal         0x002067C4
    // 0x00204290: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    entry_002067C4(rdram, ctx);
        goto after_5;
    // 0x00204290: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
L_00204294:
    // 0x00204294: jal         0x0029DFF0
    // 0x00204298: nop

    func_0029DFF0(rdram, ctx);
        goto after_6;
    // 0x00204298: nop

    after_6:
    // 0x0020429C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x002042A0: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x002042A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x002042A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x002042AC: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x002042B0: beq         $v1, $zero, L_00204498
    if (ctx->r3 == 0) {
        // 0x002042B4: nop
    
            goto L_00204498;
    }
    // 0x002042B4: nop

    // 0x002042B8: j           L_00204474
    // 0x002042BC: nop

        goto L_00204474;
    // 0x002042BC: nop

L_002042C0:
    // 0x002042C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x002042C4: and         $v1, $v0, $s4
    ctx->r3 = ctx->r2 & ctx->r20;
    // 0x002042C8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x002042CC: andi        $v0, $a2, 0x8
    ctx->r2 = ctx->r6 & 0X8;
    // 0x002042D0: beq         $v0, $zero, L_002043EC
    if (ctx->r2 == 0) {
        // 0x002042D4: sw          $v1, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r3;
            goto L_002043EC;
    }
    // 0x002042D4: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x002042D8: addiu       $v0, $zero, -0x9
    ctx->r2 = ADD32(0, -0X9);
    // 0x002042DC: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x002042E0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x002042E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002042E8: addiu       $a0, $a0, 0x6D68
    ctx->r4 = ADD32(ctx->r4, 0X6D68);
    // 0x002042EC: jal         0x00201BDC
    // 0x002042F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00201BDC(rdram, ctx);
        goto after_7;
    // 0x002042F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
    // 0x002042F4: bne         $v0, $zero, L_00204220
    if (ctx->r2 != 0) {
        // 0x002042F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_00204220;
    }
    // 0x002042F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x002042FC: jal         0x0029DFF0
    // 0x00204300: nop

    func_0029DFF0(rdram, ctx);
        goto after_8;
    // 0x00204300: nop

    after_8:
    // 0x00204304: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204308: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x0020430C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204310: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204314: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204318: beq         $v1, $s2, L_00204340
    if (ctx->r3 == ctx->r18) {
        // 0x0020431C: nop
    
            goto L_00204340;
    }
    // 0x0020431C: nop

    // 0x00204320: jal         0x0029E010
    // 0x00204324: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_9;
    // 0x00204324: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_9:
    // 0x00204328: addiu       $a0, $s1, 0x960
    ctx->r4 = ADD32(ctx->r17, 0X960);
    // 0x0020432C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204330: jal         0x0029B6F0
    // 0x00204334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x00204334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x00204338: j           L_00204348
    // 0x0020433C: nop

        goto L_00204348;
    // 0x0020433C: nop

L_00204340:
    // 0x00204340: jal         0x0029E010
    // 0x00204344: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_11;
    // 0x00204344: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_11:
L_00204348:
    // 0x00204348: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x0020434C: jal         0x00200738
    // 0x00204350: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_00200738(rdram, ctx);
        goto after_12;
    // 0x00204350: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x00204354: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00204358: jal         0x00200518
    // 0x0020435C: addiu       $a0, $s3, -0x14
    ctx->r4 = ADD32(ctx->r19, -0X14);
    func_00200518(rdram, ctx);
        goto after_13;
    // 0x0020435C: addiu       $a0, $s3, -0x14
    ctx->r4 = ADD32(ctx->r19, -0X14);
    after_13:
    // 0x00204360: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x00204364: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x00204368: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x0020436C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00204370: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x00204374: beq         $v1, $zero, L_002043A0
    if (ctx->r3 == 0) {
        // 0x00204378: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_002043A0;
    }
    // 0x00204378: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_0020437C:
    // 0x0020437C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x00204380: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x00204384: bne         $v0, $zero, L_0020437C
    if (ctx->r2 != 0) {
        // 0x00204388: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_0020437C;
    }
    // 0x00204388: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x0020438C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x00204390: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x00204394: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x00204398: bne         $v1, $zero, L_0020437C
    if (ctx->r3 != 0) {
        // 0x0020439C: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_0020437C;
    }
    // 0x0020439C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_002043A0:
    // 0x002043A0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x002043A4: andi        $v0, $v0, 0x702
    ctx->r2 = ctx->r2 & 0X702;
    // 0x002043A8: bne         $v0, $zero, L_002043D8
    if (ctx->r2 != 0) {
        // 0x002043AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_002043D8;
    }
    // 0x002043AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002043B0: jal         0x002065F8
    // 0x002043B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002065F8(rdram, ctx);
        goto after_14;
    // 0x002043B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_14:
    // 0x002043B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x002043BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x002043C0: addiu       $a0, $a0, 0x1CC0
    ctx->r4 = ADD32(ctx->r4, 0X1CC0);
    // 0x002043C4: jal         0x002026EC
    // 0x002043C8: nop

    entry_002026EC(rdram, ctx);
        goto after_15;
    // 0x002043C8: nop

    after_15:
    // 0x002043CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x002043D0: jal         0x002062F8
    // 0x002043D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_002062F8(rdram, ctx);
        goto after_16;
    // 0x002043D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_16:
L_002043D8:
    // 0x002043D8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x002043DC: jal         0x002066B0
    // 0x002043E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002066B0(rdram, ctx);
        goto after_17;
    // 0x002043E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_17:
    // 0x002043E4: j           L_00204294
    // 0x002043E8: nop

        goto L_00204294;
    // 0x002043E8: nop

L_002043EC:
    // 0x002043EC: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x002043F0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x002043F4: jal         0x0029DFF0
    // 0x002043F8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    func_0029DFF0(rdram, ctx);
        goto after_18;
    // 0x002043F8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    after_18:
    // 0x002043FC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x00204400: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204404: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x00204408: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x0020440C: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x00204410: beq         $v1, $s2, L_00204438
    if (ctx->r3 == ctx->r18) {
        // 0x00204414: nop
    
            goto L_00204438;
    }
    // 0x00204414: nop

    // 0x00204418: jal         0x0029E010
    // 0x0020441C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_19;
    // 0x0020441C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_19:
    // 0x00204420: addiu       $a0, $s1, 0x960
    ctx->r4 = ADD32(ctx->r17, 0X960);
    // 0x00204424: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204428: jal         0x0029B6F0
    // 0x0020442C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_20;
    // 0x0020442C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x00204430: j           L_00204444
    // 0x00204434: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_00204444;
    // 0x00204434: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00204438:
    // 0x00204438: jal         0x0029E010
    // 0x0020443C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_21;
    // 0x0020443C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_21:
    // 0x00204440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_00204444:
    // 0x00204444: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x00204448: jal         0x002044A8
    // 0x0020444C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_002044A8(rdram, ctx);
        goto after_22;
    // 0x0020444C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x00204450: jal         0x0029DFF0
    // 0x00204454: nop

    func_0029DFF0(rdram, ctx);
        goto after_23;
    // 0x00204454: nop

    after_23:
    // 0x00204458: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x0020445C: lw          $v1, -0x7234($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7234);
    // 0x00204460: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x00204464: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x00204468: sw          $v1, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r3;
    // 0x0020446C: beq         $v1, $zero, L_00204498
    if (ctx->r3 == 0) {
        // 0x00204470: nop
    
            goto L_00204498;
    }
    // 0x00204470: nop

L_00204474:
    // 0x00204474: jal         0x0029E010
    // 0x00204478: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_24;
    // 0x00204478: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_24:
    // 0x0020447C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x00204480: addiu       $a0, $a0, -0x7250
    ctx->r4 = ADD32(ctx->r4, -0X7250);
    // 0x00204484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00204488: jal         0x0029B820
    // 0x0020448C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_25;
    // 0x0020448C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_25:
    // 0x00204490: j           L_00204220
    // 0x00204494: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00204220;
    // 0x00204494: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00204498:
    // 0x00204498: jal         0x0029E010
    // 0x0020449C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_0029E010(rdram, ctx);
        goto after_26;
    // 0x0020449C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_26:
    // 0x002044A0: j           L_00204220
    // 0x002044A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00204220;
    // 0x002044A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
;}
RECOMP_FUNC void func_0040F238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0040F200:
    // 0x0040F238: addiu       $v0, $v1, 0x288
    ctx->r2 = ADD32(ctx->r3, 0X288);
    // 0x0040F23C: beq         $v0, $s0, L_0040F200
    if (ctx->r2 == ctx->r16) {
                goto L_0040F200;
    }
;}
RECOMP_FUNC void func_00209AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00209AF4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x00209AF8: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x00209AFC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x00209B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00209B04: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x00209B08: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x00209B0C: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x00209B10: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x00209B14: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x00209B18: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x00209B1C: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x00209B20: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x00209B24: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x00209B28: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x00209B2C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x00209B30: jal         0x00200B00
    // 0x00209B34: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    func_00200B00(rdram, ctx);
        goto after_0;
    // 0x00209B34: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    after_0:
    // 0x00209B38: beq         $v0, $zero, L_0020A30C
    if (ctx->r2 == 0) {
        // 0x00209B3C: addiu       $t5, $zero, 0x6
        ctx->r13 = ADD32(0, 0X6);
            goto L_0020A30C;
    }
    // 0x00209B3C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x00209B40: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x00209B44: bne         $t6, $zero, L_00209B64
    if (ctx->r14 != 0) {
        // 0x00209B48: sw          $t5, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r13;
            goto L_00209B64;
    }
    // 0x00209B48: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x00209B4C: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x00209B50: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x00209B54: beq         $t6, $zero, L_00209B64
    if (ctx->r14 == 0) {
        // 0x00209B58: sw          $t5, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r13;
            goto L_00209B64;
    }
    // 0x00209B58: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x00209B5C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x00209B60: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
L_00209B64:
    // 0x00209B64: addiu       $s0, $zero, -0x8
    ctx->r16 = ADD32(0, -0X8);
    // 0x00209B68: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x00209B6C: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x00209B70: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x00209B74: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209B78: and         $s1, $v0, $s0
    ctx->r17 = ctx->r2 & ctx->r16;
    // 0x00209B7C: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x00209B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00209B84: lw          $s3, 0x0($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X0);
    // 0x00209B88: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x00209B8C: jal         0x002017E8
    // 0x00209B90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_002017E8(rdram, ctx);
        goto after_1;
    // 0x00209B90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x00209B94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00209B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00209B9C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x00209BA0: addiu       $a2, $sp, 0x14
    ctx->r6 = ADD32(ctx->r29, 0X14);
    // 0x00209BA4: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x00209BA8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x00209BAC: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x00209BB0: jal         0x002017E8
    // 0x00209BB4: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    func_002017E8(rdram, ctx);
        goto after_2;
    // 0x00209BB4: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    after_2:
    // 0x00209BB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00209BBC: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x00209BC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x00209BC4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x00209BC8: jal         0x002017D4
    // 0x00209BCC: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    func_002017D4(rdram, ctx);
        goto after_3;
    // 0x00209BCC: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    after_3:
    // 0x00209BD0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x00209BD4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x00209BD8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00209BDC: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x00209BE0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209BE4: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00209BE8: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x00209BEC: blez        $t5, L_00209CF4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x00209BF0: sw          $t5, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r13;
            goto L_00209CF4;
    }
    // 0x00209BF0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x00209BF4: addiu       $fp, $zero, 0x40
    ctx->r30 = ADD32(0, 0X40);
    // 0x00209BF8: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
    // 0x00209BFC: addiu       $s4, $zero, 0x60
    ctx->r20 = ADD32(0, 0X60);
L_00209C00:
    // 0x00209C00: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00209C04: jal         0x002017D4
    // 0x00209C08: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_002017D4(rdram, ctx);
        goto after_4;
    // 0x00209C08: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_4:
    // 0x00209C0C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x00209C10: lw          $s7, 0x0($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X0);
    // 0x00209C14: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00209C18: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x00209C1C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209C20: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00209C24: blez        $s7, L_00209CE0
    if (SIGNED(ctx->r23) <= 0) {
        // 0x00209C28: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_00209CE0;
    }
    // 0x00209C28: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_00209C2C:
    // 0x00209C2C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x00209C30: jal         0x002017D4
    // 0x00209C34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_5;
    // 0x00209C34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x00209C38: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    // 0x00209C3C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00209C40: jal         0x002017D4
    // 0x00209C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_002017D4(rdram, ctx);
        goto after_6;
    // 0x00209C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x00209C48: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00209C4C: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x00209C50: beq         $v1, $zero, L_00209CC4
    if (ctx->r3 == 0) {
        // 0x00209C54: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00209CC4;
    }
    // 0x00209C54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00209C58: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
L_00209C5C:
    // 0x00209C5C: beq         $v0, $zero, L_00209C80
    if (ctx->r2 == 0) {
        // 0x00209C60: andi        $v1, $v1, 0x60
        ctx->r3 = ctx->r3 & 0X60;
            goto L_00209C80;
    }
    // 0x00209C60: andi        $v1, $v1, 0x60
    ctx->r3 = ctx->r3 & 0X60;
    // 0x00209C64: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x00209C68: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00209C6C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00209C70: beq         $v0, $zero, L_00209CB8
    if (ctx->r2 == 0) {
        // 0x00209C74: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_00209CB8;
    }
    // 0x00209C74: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x00209C78: j           L_00209CB8
    // 0x00209C7C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
        goto L_00209CB8;
    // 0x00209C7C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_00209C80:
    // 0x00209C80: beq         $v1, $fp, L_00209CB0
    if (ctx->r3 == ctx->r30) {
        // 0x00209C84: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_00209CB0;
    }
    // 0x00209C84: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x00209C88: beq         $v0, $zero, L_00209CA0
    if (ctx->r2 == 0) {
        // 0x00209C8C: nop
    
            goto L_00209CA0;
    }
    // 0x00209C8C: nop

    // 0x00209C90: beql        $v1, $s5, L_00209CB4
    if (ctx->r3 == ctx->r21) {
        // 0x00209C94: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_00209CB4;
    }
    goto skip_0;
    // 0x00209C94: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    skip_0:
    // 0x00209C98: j           L_00209CB8
    // 0x00209C9C: nop

        goto L_00209CB8;
    // 0x00209C9C: nop

L_00209CA0:
    // 0x00209CA0: beql        $v1, $s4, L_00209CB4
    if (ctx->r3 == ctx->r20) {
        // 0x00209CA4: addiu       $t0, $t0, 0x5
        ctx->r8 = ADD32(ctx->r8, 0X5);
            goto L_00209CB4;
    }
    goto skip_1;
    // 0x00209CA4: addiu       $t0, $t0, 0x5
    ctx->r8 = ADD32(ctx->r8, 0X5);
    skip_1:
    // 0x00209CA8: j           L_00209CB8
    // 0x00209CAC: nop

        goto L_00209CB8;
    // 0x00209CAC: nop

L_00209CB0:
    // 0x00209CB0: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_00209CB4:
    // 0x00209CB4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_00209CB8:
    // 0x00209CB8: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x00209CBC: bne         $v1, $zero, L_00209C5C
    if (ctx->r3 != 0) {
        // 0x00209CC0: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_00209C5C;
    }
    // 0x00209CC0: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
L_00209CC4:
    // 0x00209CC4: addiu       $v0, $a0, 0xF
    ctx->r2 = ADD32(ctx->r4, 0XF);
    // 0x00209CC8: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x00209CCC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x00209CD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x00209CD4: slt         $v0, $s2, $s7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x00209CD8: bne         $v0, $zero, L_00209C2C
    if (ctx->r2 != 0) {
        // 0x00209CDC: nop
    
            goto L_00209C2C;
    }
    // 0x00209CDC: nop

L_00209CE0:
    // 0x00209CE0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x00209CE4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x00209CE8: slt         $v0, $s6, $t6
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x00209CEC: bne         $v0, $zero, L_00209C00
    if (ctx->r2 != 0) {
        // 0x00209CF0: nop
    
            goto L_00209C00;
    }
    // 0x00209CF0: nop

L_00209CF4:
    // 0x00209CF4: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x00209CF8: bnel        $t5, $zero, L_00209D00
    if (ctx->r13 != 0) {
        // 0x00209CFC: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_00209D00;
    }
    goto skip_2;
    // 0x00209CFC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_2:
L_00209D00:
    // 0x00209D00: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x00209D04: beq         $t6, $zero, L_00209D5C
    if (ctx->r14 == 0) {
        // 0x00209D08: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_00209D5C;
    }
    // 0x00209D08: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00209D0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x00209D10: jal         0x002017E8
    // 0x00209D14: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_002017E8(rdram, ctx);
        goto after_7;
    // 0x00209D14: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_7:
    // 0x00209D18: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00209D1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x00209D20: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x00209D24: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x00209D28: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x00209D2C: jal         0x002017E8
    // 0x00209D30: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    func_002017E8(rdram, ctx);
        goto after_8;
    // 0x00209D30: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    after_8:
    // 0x00209D34: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x00209D38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x00209D3C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x00209D40: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x00209D44: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x00209D48: jal         0x002017E8
    // 0x00209D4C: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    func_002017E8(rdram, ctx);
        goto after_9;
    // 0x00209D4C: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    after_9:
    // 0x00209D50: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x00209D54: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x00209D58: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
L_00209D5C:
    // 0x00209D5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00209D60: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x00209D64: jal         0x00205D7C
    // 0x00209D68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_00205D7C(rdram, ctx);
        goto after_10;
    // 0x00209D68: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_10:
    // 0x00209D6C: beq         $v0, $zero, L_0020A2FC
    if (ctx->r2 == 0) {
        // 0x00209D70: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_0020A2FC;
    }
    // 0x00209D70: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x00209D74: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00209D78: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x00209D7C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x00209D80: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x00209D84: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209D88: and         $s5, $v0, $v1
    ctx->r21 = ctx->r2 & ctx->r3;
    // 0x00209D8C: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x00209D90: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x00209D94: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209D98: lw          $fp, 0x0($t5)
    ctx->r30 = MEM_W(ctx->r13, 0X0);
    // 0x00209D9C: and         $s1, $v0, $v1
    ctx->r17 = ctx->r2 & ctx->r3;
    // 0x00209DA0: addu        $t6, $fp, $s5
    ctx->r14 = ADD32(ctx->r30, ctx->r21);
    // 0x00209DA4: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
    // 0x00209DA8: sw          $s5, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r21;
    // 0x00209DAC: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x00209DB0: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x00209DB4: sw          $s1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r17;
    // 0x00209DB8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x00209DBC: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x00209DC0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00209DC4: sw          $fp, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r30;
    // 0x00209DC8: blez        $t6, L_00209E28
    if (SIGNED(ctx->r14) <= 0) {
        // 0x00209DCC: sw          $t5, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r13;
            goto L_00209E28;
    }
    // 0x00209DCC: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x00209DD0: addu        $s2, $t5, $zero
    ctx->r18 = ADD32(ctx->r13, 0);
    // 0x00209DD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00209DD8:
    // 0x00209DD8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x00209DDC: jal         0x002017E8
    // 0x00209DE0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_002017E8(rdram, ctx);
        goto after_11;
    // 0x00209DE0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_11:
    // 0x00209DE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x00209DE8: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    // 0x00209DEC: jal         0x0020192C
    // 0x00209DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_0020192C(rdram, ctx);
        goto after_12;
    // 0x00209DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x00209DF4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x00209DF8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00209DFC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x00209E00: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x00209E04: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x00209E08: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x00209E0C: addu        $v0, $t5, $v0
    ctx->r2 = ADD32(ctx->r13, ctx->r2);
    // 0x00209E10: sw          $s0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r16;
    // 0x00209E14: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x00209E18: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x00209E1C: slt         $v0, $s0, $t6
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x00209E20: bne         $v0, $zero, L_00209DD8
    if (ctx->r2 != 0) {
        // 0x00209E24: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_00209DD8;
    }
    // 0x00209E24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_00209E28:
    // 0x00209E28: addu        $s5, $s5, $s1
    ctx->r21 = ADD32(ctx->r21, ctx->r17);
    // 0x00209E2C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x00209E30: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x00209E34: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x00209E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00209E3C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x00209E40: sw          $s5, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r21;
    // 0x00209E44: jal         0x0029E460
    // 0x00209E48: addu        $a0, $t5, $s5
    ctx->r4 = ADD32(ctx->r13, ctx->r21);
    func_0029E460(rdram, ctx);
        goto after_13;
    // 0x00209E48: addu        $a0, $t5, $s5
    ctx->r4 = ADD32(ctx->r13, ctx->r21);
    after_13:
    // 0x00209E4C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x00209E50: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00209E54: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x00209E58: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209E5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x00209E60: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x00209E64: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x00209E68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x00209E6C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x00209E70: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x00209E74: sw          $s5, 0xC($fp)
    MEM_W(0XC, ctx->r30) = ctx->r21;
    // 0x00209E78: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x00209E7C: addu        $t5, $t5, $s5
    ctx->r13 = ADD32(ctx->r13, ctx->r21);
    // 0x00209E80: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x00209E84: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x00209E88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x00209E8C: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x00209E90: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x00209E94: blez        $t5, L_0020A23C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x00209E98: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_0020A23C;
    }
    // 0x00209E98: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x00209E9C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x00209EA0: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
L_00209EA4:
    // 0x00209EA4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x00209EA8: jal         0x002017D4
    // 0x00209EAC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_002017D4(rdram, ctx);
        goto after_14;
    // 0x00209EAC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_14:
    // 0x00209EB0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00209EB4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x00209EB8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x00209EBC: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x00209EC0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x00209EC4: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00209EC8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x00209ECC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x00209ED0: lw          $s7, 0x0($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X0);
    // 0x00209ED4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x00209ED8: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x00209EDC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00209EE0: and         $s4, $v0, $v1
    ctx->r20 = ctx->r2 & ctx->r3;
    // 0x00209EE4: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x00209EE8: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x00209EEC: jal         0x002017D4
    // 0x00209EF0: sw          $s4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r20;
    func_002017D4(rdram, ctx);
        goto after_15;
    // 0x00209EF0: sw          $s4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r20;
    after_15:
    // 0x00209EF4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x00209EF8: blez        $s7, L_0020A204
    if (SIGNED(ctx->r23) <= 0) {
        // 0x00209EFC: sw          $v0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r2;
            goto L_0020A204;
    }
    // 0x00209EFC: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x00209F00: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x00209F04: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
L_00209F08:
    // 0x00209F08: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x00209F0C: jal         0x002017D4
    // 0x00209F10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_002017D4(rdram, ctx);
        goto after_16;
    // 0x00209F10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_16:
    // 0x00209F14: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x00209F18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00209F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00209F20: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x00209F24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x00209F28: addu        $s1, $t6, $s4
    ctx->r17 = ADD32(ctx->r14, ctx->r20);
    // 0x00209F2C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x00209F30: jal         0x002017D4
    // 0x00209F34: sw          $s3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r19;
    func_002017D4(rdram, ctx);
        goto after_17;
    // 0x00209F34: sw          $s3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r19;
    after_17:
    // 0x00209F38: addu        $a0, $s1, $s3
    ctx->r4 = ADD32(ctx->r17, ctx->r19);
    // 0x00209F3C: jal         0x0026D070
    // 0x00209F40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_0026D070(rdram, ctx);
        goto after_18;
    // 0x00209F40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_18:
    // 0x00209F44: addiu       $s3, $zero, 0x30
    ctx->r19 = ADD32(0, 0X30);
    // 0x00209F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00209F4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x00209F50: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x00209F54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x00209F58: jal         0x002017D4
    // 0x00209F5C: sw          $s3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r19;
    func_002017D4(rdram, ctx);
        goto after_19;
    // 0x00209F5C: sw          $s3, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r19;
    after_19:
    // 0x00209F60: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x00209F64: addu        $t4, $s1, $s3
    ctx->r12 = ADD32(ctx->r17, ctx->r19);
    // 0x00209F68: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x00209F6C: beq         $v1, $zero, L_0020A1A8
    if (ctx->r3 == 0) {
        // 0x00209F70: addu        $t3, $t4, $zero
        ctx->r11 = ADD32(ctx->r12, 0);
            goto L_0020A1A8;
    }
    // 0x00209F70: addu        $t3, $t4, $zero
    ctx->r11 = ADD32(ctx->r12, 0);
    // 0x00209F74: addiu       $t1, $s1, 0x2C
    ctx->r9 = ADD32(ctx->r17, 0X2C);
    // 0x00209F78: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
L_00209F7C:
    // 0x00209F7C: beq         $v0, $zero, L_0020A058
    if (ctx->r2 == 0) {
        // 0x00209F80: andi        $a0, $v1, 0x60
        ctx->r4 = ctx->r3 & 0X60;
            goto L_0020A058;
    }
    // 0x00209F80: andi        $a0, $v1, 0x60
    ctx->r4 = ctx->r3 & 0X60;
    // 0x00209F84: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x00209F88: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00209F8C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00209F90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00209F94: sll         $a3, $v1, 8
    ctx->r7 = S32(ctx->r3 << 8);
    // 0x00209F98: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x00209F9C: srl         $v0, $a3, 10
    ctx->r2 = S32(U32(ctx->r7) >> 10);
    // 0x00209FA0: andi        $v1, $v0, 0x1F
    ctx->r3 = ctx->r2 & 0X1F;
    // 0x00209FA4: srl         $v0, $a3, 5
    ctx->r2 = S32(U32(ctx->r7) >> 5);
    // 0x00209FA8: andi        $a2, $v0, 0x1F
    ctx->r6 = ctx->r2 & 0X1F;
    // 0x00209FAC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x00209FB0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x00209FB4: beq         $v0, $zero, L_0020A028
    if (ctx->r2 == 0) {
        // 0x00209FB8: andi        $a3, $a3, 0x1F
        ctx->r7 = ctx->r7 & 0X1F;
            goto L_0020A028;
    }
    // 0x00209FB8: andi        $a3, $a3, 0x1F
    ctx->r7 = ctx->r7 & 0X1F;
    // 0x00209FBC: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x00209FC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00209FC4: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x00209FC8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x00209FCC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x00209FD0: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x00209FD4: sll         $v1, $v1, 17
    ctx->r3 = S32(ctx->r3 << 17);
    // 0x00209FD8: sll         $v0, $a2, 9
    ctx->r2 = S32(ctx->r6 << 9);
    // 0x00209FDC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209FE0: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x00209FE4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209FE8: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x00209FEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00209FF0: sw          $v1, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r3;
    // 0x00209FF4: sll         $a3, $a1, 8
    ctx->r7 = S32(ctx->r5 << 8);
    // 0x00209FF8: or          $a3, $a3, $a0
    ctx->r7 = ctx->r7 | ctx->r4;
    // 0x00209FFC: srl         $v1, $a3, 9
    ctx->r3 = S32(U32(ctx->r7) >> 9);
    // 0x0020A000: andi        $a0, $a3, 0x1F
    ctx->r4 = ctx->r7 & 0X1F;
    // 0x0020A004: andi        $v1, $v1, 0x3E
    ctx->r3 = ctx->r3 & 0X3E;
    // 0x0020A008: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x0020A00C: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x0020A010: andi        $v0, $v0, 0x3E00
    ctx->r2 = ctx->r2 & 0X3E00;
    // 0x0020A014: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020A018: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x0020A01C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x0020A020: j           L_0020A19C
    // 0x0020A024: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
        goto L_0020A19C;
    // 0x0020A024: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_0020A028:
    // 0x0020A028: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x0020A02C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x0020A030: sll         $v1, $v1, 17
    ctx->r3 = S32(ctx->r3 << 17);
    // 0x0020A034: sll         $v0, $a2, 9
    ctx->r2 = S32(ctx->r6 << 9);
    // 0x0020A038: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020A03C: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x0020A040: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020A044: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x0020A048: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020A04C: sw          $v1, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r3;
    // 0x0020A050: j           L_0020A19C
    // 0x0020A054: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
        goto L_0020A19C;
    // 0x0020A054: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_0020A058:
    // 0x0020A058: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x0020A05C: beq         $a0, $v0, L_0020A110
    if (ctx->r4 == ctx->r2) {
        // 0x0020A060: slti        $v0, $a0, 0x41
        ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
            goto L_0020A110;
    }
    // 0x0020A060: slti        $v0, $a0, 0x41
    ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x0020A064: beq         $v0, $zero, L_0020A07C
    if (ctx->r2 == 0) {
        // 0x0020A068: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_0020A07C;
    }
    // 0x0020A068: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x0020A06C: beq         $a0, $v0, L_0020A090
    if (ctx->r4 == ctx->r2) {
        // 0x0020A070: nop
    
            goto L_0020A090;
    }
    // 0x0020A070: nop

    // 0x0020A074: j           L_0020A19C
    // 0x0020A078: nop

        goto L_0020A19C;
    // 0x0020A078: nop

L_0020A07C:
    // 0x0020A07C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x0020A080: beq         $a0, $v0, L_0020A144
    if (ctx->r4 == ctx->r2) {
        // 0x0020A084: andi        $t2, $v1, 0x1F
        ctx->r10 = ctx->r3 & 0X1F;
            goto L_0020A144;
    }
    // 0x0020A084: andi        $t2, $v1, 0x1F
    ctx->r10 = ctx->r3 & 0X1F;
    // 0x0020A088: j           L_0020A19C
    // 0x0020A08C: nop

        goto L_0020A19C;
    // 0x0020A08C: nop

L_0020A090:
    // 0x0020A090: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A094: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A098: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A09C: sll         $a3, $v1, 8
    ctx->r7 = S32(ctx->r3 << 8);
    // 0x0020A0A0: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x0020A0A4: srl         $v0, $a3, 5
    ctx->r2 = S32(U32(ctx->r7) >> 5);
    // 0x0020A0A8: andi        $t2, $v0, 0x1F
    ctx->r10 = ctx->r2 & 0X1F;
    // 0x0020A0AC: andi        $v0, $a3, 0x1F
    ctx->r2 = ctx->r7 & 0X1F;
    // 0x0020A0B0: bne         $v0, $zero, L_0020A0BC
    if (ctx->r2 != 0) {
        // 0x0020A0B4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_0020A0BC;
    }
    // 0x0020A0B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A0B8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_0020A0BC:
    // 0x0020A0BC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x0020A0C0: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x0020A0C4: sll         $a0, $v0, 12
    ctx->r4 = S32(ctx->r2 << 12);
    // 0x0020A0C8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x0020A0CC: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x0020A0D0: sll         $v1, $t5, 4
    ctx->r3 = S32(ctx->r13 << 4);
    // 0x0020A0D4: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x0020A0D8: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x0020A0DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x0020A0E0: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x0020A0E4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x0020A0E8: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x0020A0EC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x0020A0F0: sw          $a0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r4;
    // 0x0020A0F4: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x0020A0F8: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x0020A0FC: addu        $v1, $t5, $v1
    ctx->r3 = ADD32(ctx->r13, ctx->r3);
    // 0x0020A100: subu        $v1, $v1, $t6
    ctx->r3 = SUB32(ctx->r3, ctx->r14);
    // 0x0020A104: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x0020A108: j           L_0020A19C
    // 0x0020A10C: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
        goto L_0020A19C;
    // 0x0020A10C: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_0020A110:
    // 0x0020A110: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A114: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A118: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A11C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x0020A120: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x0020A124: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x0020A128: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x0020A12C: lui         $t5, 0x100
    ctx->r13 = S32(0X100 << 16);
    // 0x0020A130: sw          $v0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r2;
    // 0x0020A134: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x0020A138: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x0020A13C: j           L_0020A19C
    // 0x0020A140: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
        goto L_0020A19C;
    // 0x0020A140: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_0020A144:
    // 0x0020A144: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A148: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A14C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A150: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A154: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A158: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A15C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A160: lbu         $a2, 0x0($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A164: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x0020A168: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x0020A16C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x0020A170: sll         $v1, $t2, 1
    ctx->r3 = S32(ctx->r10 << 1);
    // 0x0020A174: lui         $v0, 0x214
    ctx->r2 = S32(0X214 << 16);
    // 0x0020A178: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x0020A17C: sw          $v1, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r3;
    // 0x0020A180: sll         $a3, $a3, 24
    ctx->r7 = S32(ctx->r7 << 24);
    // 0x0020A184: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x0020A188: or          $a3, $a3, $a0
    ctx->r7 = ctx->r7 | ctx->r4;
    // 0x0020A18C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x0020A190: or          $a3, $a3, $a1
    ctx->r7 = ctx->r7 | ctx->r5;
    // 0x0020A194: or          $a3, $a3, $a2
    ctx->r7 = ctx->r7 | ctx->r6;
    // 0x0020A198: sw          $a3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r7;
L_0020A19C:
    // 0x0020A19C: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x0020A1A0: bne         $v1, $zero, L_00209F7C
    if (ctx->r3 != 0) {
        // 0x0020A1A4: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_00209F7C;
    }
    // 0x0020A1A4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
L_0020A1A8:
    // 0x0020A1A8: subu        $a0, $t3, $t4
    ctx->r4 = SUB32(ctx->r11, ctx->r12);
    // 0x0020A1AC: addiu       $v0, $a0, 0xF
    ctx->r2 = ADD32(ctx->r4, 0XF);
    // 0x0020A1B0: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x0020A1B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0020A1B8: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x0020A1BC: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x0020A1C0: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x0020A1C4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x0020A1C8: addu        $v1, $t3, $zero
    ctx->r3 = ADD32(ctx->r11, 0);
    // 0x0020A1CC: lui         $v0, 0xDF00
    ctx->r2 = S32(0XDF00 << 16);
    // 0x0020A1D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x0020A1D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x0020A1D8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x0020A1DC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x0020A1E0: sw          $s3, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r19;
    // 0x0020A1E4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x0020A1E8: sllv        $v0, $s2, $v0
    ctx->r2 = S32(ctx->r18 << (ctx->r2 & 31));
    // 0x0020A1EC: addu        $v0, $t6, $v0
    ctx->r2 = ADD32(ctx->r14, ctx->r2);
    // 0x0020A1F0: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
    // 0x0020A1F4: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x0020A1F8: slt         $v0, $s2, $s7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x0020A1FC: bne         $v0, $zero, L_00209F08
    if (ctx->r2 != 0) {
        // 0x0020A200: nop
    
            goto L_00209F08;
    }
    // 0x0020A200: nop

L_0020A204:
    // 0x0020A204: addiu       $v0, $s6, 0x1
    ctx->r2 = ADD32(ctx->r22, 0X1);
    // 0x0020A208: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x0020A20C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
    // 0x0020A210: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x0020A214: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x0020A218: addu        $t5, $t5, $s4
    ctx->r13 = ADD32(ctx->r13, ctx->r20);
    // 0x0020A21C: addu        $v0, $t6, $v0
    ctx->r2 = ADD32(ctx->r14, ctx->r2);
    // 0x0020A220: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x0020A224: sw          $s6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r22;
    // 0x0020A228: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x0020A22C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x0020A230: slt         $v0, $s6, $t5
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x0020A234: bne         $v0, $zero, L_00209EA4
    if (ctx->r2 != 0) {
        // 0x0020A238: nop
    
            goto L_00209EA4;
    }
    // 0x0020A238: nop

L_0020A23C:
    // 0x0020A23C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x0020A240: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0020A244: addu        $s5, $s5, $t6
    ctx->r21 = ADD32(ctx->r21, ctx->r14);
    // 0x0020A248: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x0020A24C: sw          $s5, 0x10($fp)
    MEM_W(0X10, ctx->r30) = ctx->r21;
    // 0x0020A250: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x0020A254: beq         $t5, $zero, L_0020A278
    if (ctx->r13 == 0) {
        // 0x0020A258: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_0020A278;
    }
    // 0x0020A258: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x0020A25C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x0020A260: addu        $v0, $t6, $s5
    ctx->r2 = ADD32(ctx->r14, ctx->r21);
    // 0x0020A264: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x0020A268: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0020A26C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0020A270: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x0020A274: sw          $s5, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r21;
L_0020A278:
    // 0x0020A278: lw          $t5, 0xB0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB0);
    // 0x0020A27C: beq         $t5, $zero, L_0020A2FC
    if (ctx->r13 == 0) {
        // 0x0020A280: nop
    
            goto L_0020A2FC;
    }
    // 0x0020A280: nop

    // 0x0020A284: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x0020A288: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0020A28C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x0020A290: jal         0x0029E460
    // 0x0020A294: addu        $a0, $t6, $s5
    ctx->r4 = ADD32(ctx->r14, ctx->r21);
    func_0029E460(rdram, ctx);
        goto after_20;
    // 0x0020A294: addu        $a0, $t6, $s5
    ctx->r4 = ADD32(ctx->r14, ctx->r21);
    after_20:
    // 0x0020A298: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x0020A29C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0020A2A0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0020A2A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0020A2A8: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x0020A2AC: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x0020A2B0: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x0020A2B4: addu        $a0, $t5, $s5
    ctx->r4 = ADD32(ctx->r13, ctx->r21);
    // 0x0020A2B8: jal         0x0029E460
    // 0x0020A2BC: sw          $s5, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r21;
    func_0029E460(rdram, ctx);
        goto after_21;
    // 0x0020A2BC: sw          $s5, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r21;
    after_21:
    // 0x0020A2C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0020A2C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0020A2C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0020A2CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0020A2D0: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x0020A2D4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x0020A2D8: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x0020A2DC: addu        $a0, $t6, $s5
    ctx->r4 = ADD32(ctx->r14, ctx->r21);
    // 0x0020A2E0: jal         0x0029E460
    // 0x0020A2E4: sw          $s5, 0x18($fp)
    MEM_W(0X18, ctx->r30) = ctx->r21;
    func_0029E460(rdram, ctx);
        goto after_22;
    // 0x0020A2E4: sw          $s5, 0x18($fp)
    MEM_W(0X18, ctx->r30) = ctx->r21;
    after_22:
    // 0x0020A2E8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0020A2EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0020A2F0: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x0020A2F4: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x0020A2F8: sw          $s5, 0x1C($fp)
    MEM_W(0X1C, ctx->r30) = ctx->r21;
L_0020A2FC:
    // 0x0020A2FC: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x0020A300: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x0020A304: jal         0x002057B0
    // 0x0020A308: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_002057B0(rdram, ctx);
        goto after_23;
    // 0x0020A308: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_23:
L_0020A30C:
    // 0x0020A30C: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x0020A310: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x0020A314: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x0020A318: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x0020A31C: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x0020A320: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x0020A324: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x0020A328: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x0020A32C: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x0020A330: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x0020A334: jr          $ra
    // 0x0020A338: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x0020A338: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_0026488C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026488C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00264890: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x00264894: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00264898: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0026489C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002648A0: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x002648A4: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x002648A8: jal         0x002245BC
    // 0x002648AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_002245BC(rdram, ctx);
        goto after_0;
    // 0x002648AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x002648B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002648B4: jr          $ra
    // 0x002648B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002648B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_002317C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002317C0: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x002317C4: addiu       $v0, $v0, 0x1850
    ctx->r2 = ADD32(ctx->r2, 0X1850);
    // 0x002317C8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x002317CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x002317D0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x002317D4: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x002317D8: sw          $zero, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = 0;
    // 0x002317DC: jr          $ra
    // 0x002317E0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
    return;
    // 0x002317E0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_004542C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004542C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x004542CC: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x004542D0: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x004542D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x004542D8: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x004542DC: jr          $ra
    // 0x004542E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x004542E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00236314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00236314: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00236318: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x0023631C: jr          $ra
    // 0x00236320: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    return;
    // 0x00236320: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00426978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00426978: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x0042697C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x00426980: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00426984: lw          $v1, 0xC60($at)
    ctx->r3 = MEM_W(ctx->r1, 0XC60);
    // 0x00426988: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x0042698C: bne         $v1, $v0, L_004269C4
    if (ctx->r3 != ctx->r2) {
            // 0x00426990: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    func_004269C4(rdram, ctx);
    return;
    }
    // 0x00426990: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x00426994: sll         $v1, $a0, 7
    ctx->r3 = S32(ctx->r4 << 7);
    // 0x00426998: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x0042699C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x004269A0: lw          $a0, 0x2224($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2224);
    // 0x004269A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x004269A8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004269AC: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x004269B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x004269B4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x004269B8: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x004269BC: jr          $ra
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    return;
    // 0x004269C0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_004250FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004250FC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00425100: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA30);
    // 0x00425104: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x00425108: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x0042510C: beq         $v0, $zero, L_00425128
    if (ctx->r2 == 0) {
        // 0x00425110: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_00425128;
    }
    // 0x00425110: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x00425114: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x00425118: addu        $at, $at, $v0
    gpr jr_addend_00425120 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x0042511C: lw          $v0, 0x17F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X17F0);
    // 0x00425120: jr          $v0
    // 0x00425124: nop

    switch (jr_addend_00425120 >> 2) {
        case 0: goto L_00425128; break;
        case 1: goto L_00425128; break;
        case 2: goto L_00425138; break;
        case 3: goto L_00425148; break;
        case 4: goto L_00425158; break;
        case 5: goto L_00425168; break;
        case 6: goto L_00425178; break;
        case 7: goto L_00425188; break;
        default: switch_error(__func__, 0x00425120, 0x800C17F0);
    }
    // 0x00425124: nop

L_00425128:
    // 0x00425128: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042512C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00425130: j           L_00425194
    // 0x00425134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425134: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425138:
    // 0x00425138: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042513C: addiu       $v0, $v0, 0x43E0
    ctx->r2 = ADD32(ctx->r2, 0X43E0);
    // 0x00425140: j           L_00425194
    // 0x00425144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425144: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425148:
    // 0x00425148: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042514C: addiu       $v0, $v0, 0x4430
    ctx->r2 = ADD32(ctx->r2, 0X4430);
    // 0x00425150: j           L_00425194
    // 0x00425154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425154: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425158:
    // 0x00425158: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042515C: addiu       $v0, $v0, 0x4484
    ctx->r2 = ADD32(ctx->r2, 0X4484);
    // 0x00425160: j           L_00425194
    // 0x00425164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425164: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425168:
    // 0x00425168: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x0042516C: addiu       $v0, $v0, 0x1768
    ctx->r2 = ADD32(ctx->r2, 0X1768);
    // 0x00425170: j           L_00425194
    // 0x00425174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425174: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425178:
    // 0x00425178: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042517C: addiu       $v0, $v0, 0x4520
    ctx->r2 = ADD32(ctx->r2, 0X4520);
    // 0x00425180: j           L_00425194
    // 0x00425184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
        goto L_00425194;
    // 0x00425184: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425188:
    // 0x00425188: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x0042518C: addiu       $v0, $v0, 0x459C
    ctx->r2 = ADD32(ctx->r2, 0X459C);
    // 0x00425190: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_00425194:
    // 0x00425194: jr          $ra
    // 0x00425198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x00425198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00403430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00403430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00403434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00403438: lw          $a1, 0x220($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X220);
    // 0x0040343C: lui         $v0, 0xEFFF
    ctx->r2 = S32(0XEFFF << 16);
    // 0x00403440: lw          $v1, 0xD4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XD4);
    // 0x00403444: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00403448: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x0040344C: sw          $v1, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r3;
    // 0x00403450: lw          $v1, 0x24C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24C);
    // 0x00403454: addiu       $v0, $zero, 0x5AB4
    ctx->r2 = ADD32(0, 0X5AB4);
    // 0x00403458: beq         $v1, $v0, L_00403488
    if (ctx->r3 == ctx->r2) {
        // 0x0040345C: slti        $v0, $v1, 0x5AB5
        ctx->r2 = SIGNED(ctx->r3) < 0X5AB5 ? 1 : 0;
            goto L_00403488;
    }
    // 0x0040345C: slti        $v0, $v1, 0x5AB5
    ctx->r2 = SIGNED(ctx->r3) < 0X5AB5 ? 1 : 0;
    // 0x00403460: bne         $v0, $zero, L_00403488
    if (ctx->r2 != 0) {
        // 0x00403464: addiu       $v0, $zero, 0x5ABE
        ctx->r2 = ADD32(0, 0X5ABE);
            goto L_00403488;
    }
    // 0x00403464: addiu       $v0, $zero, 0x5ABE
    ctx->r2 = ADD32(0, 0X5ABE);
    // 0x00403468: bne         $v1, $v0, L_00403488
    if (ctx->r3 != ctx->r2) {
        // 0x0040346C: nop
    
            goto L_00403488;
    }
    // 0x0040346C: nop

    // 0x00403470: lb          $v0, 0x207($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X207);
    // 0x00403474: beq         $v0, $zero, L_00403488
    if (ctx->r2 == 0) {
        // 0x00403478: addiu       $a2, $zero, 0x5ADC
        ctx->r6 = ADD32(0, 0X5ADC);
            goto L_00403488;
    }
    // 0x00403478: addiu       $a2, $zero, 0x5ADC
    ctx->r6 = ADD32(0, 0X5ADC);
    // 0x0040347C: lw          $a0, 0x220($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X220);
    // 0x00403480: jal         0x002666B0
    // 0x00403484: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    func_002666B0(rdram, ctx);
        goto after_0;
    // 0x00403484: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    after_0:
L_00403488:
    // 0x00403488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x0040348C: jr          $ra
    // 0x00403490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00403490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00444EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444EE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x00444EE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x00444EEC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x00444EF0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x00444EF4: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x00444EF8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x00444EFC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00444F00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x00444F04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x00444F08: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x00444F0C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x00444F10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x00444F14: addiu       $v0, $v0, -0x490
    ctx->r2 = ADD32(ctx->r2, -0X490);
    // 0x00444F18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x00444F1C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x00444F20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x00444F24: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x00444F28: addiu       $s1, $v0, 0x1C
    ctx->r17 = ADD32(ctx->r2, 0X1C);
    // 0x00444F2C: lw          $s4, 0x14C($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X14C);
L_00444F30:
    // 0x00444F30: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x00444F34: and         $v0, $s4, $v0
    ctx->r2 = ctx->r20 & ctx->r2;
    // 0x00444F38: beq         $v0, $zero, L_00444FB8
    if (ctx->r2 == 0) {
        // 0x00444F3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_00444FB8;
    }
    // 0x00444F3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00444F40: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x00444F44: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x00444F48: sw          $s0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r16;
    // 0x00444F4C: jal         0x0021DC84
    // 0x00444F50: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    func_0021DC84(rdram, ctx);
        goto after_0;
    // 0x00444F50: sw          $s0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r16;
    after_0:
    // 0x00444F54: jal         0x00284188
    // 0x00444F58: nop

    func_00284188(rdram, ctx);
        goto after_1;
    // 0x00444F58: nop

    after_1:
    // 0x00444F5C: bnel        $v0, $zero, L_00444F78
    if (ctx->r2 != 0) {
        // 0x00444F60: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_00444F78;
    }
    goto skip_0;
    // 0x00444F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x00444F64: jal         0x00236324
    // 0x00444F68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_00236324(rdram, ctx);
        goto after_2;
    // 0x00444F68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x00444F6C: jal         0x00235898
    // 0x00444F70: nop

    func_00235898(rdram, ctx);
        goto after_3;
    // 0x00444F70: nop

    after_3:
    // 0x00444F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_00444F78:
    // 0x00444F78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x00444F7C: lb          $v0, 0x151($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X151);
    // 0x00444F80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x00444F84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00444F88: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x00444F8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x00444F90: lw          $v0, 0x6D1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6D1C);
    // 0x00444F94: lw          $a1, 0x98($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X98);
    // 0x00444F98: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x00444F9C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x00444FA0: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x00444FA4: addiu       $a3, $a3, 0x110
    ctx->r7 = ADD32(ctx->r7, 0X110);
    // 0x00444FA8: jal         0x0020A33C
    // 0x00444FAC: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_0020A33C(rdram, ctx);
        goto after_4;
    // 0x00444FAC: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_4:
    // 0x00444FB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00444FB4: sw          $zero, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = 0;
L_00444FB8:
    // 0x00444FB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x00444FBC: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x00444FC0: bne         $v0, $zero, L_00444F30
    if (ctx->r2 != 0) {
        // 0x00444FC4: addiu       $s1, $s1, 0x68
        ctx->r17 = ADD32(ctx->r17, 0X68);
            goto L_00444F30;
    }
    // 0x00444FC4: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x00444FC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x00444FCC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00444FD0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00444FD4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00444FD8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x00444FDC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00444FE0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00444FE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00444FE8: jr          $ra
    // 0x00444FEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x00444FEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0029B01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0029B01C: jal         0x00246108
    // 0x0029B020: jr          $ra
    // 0x0029B024: nop

    return;
    func_00246108(rdram, ctx);
        goto after_0;
    // 0x0029B020: jr          $ra
    // 0x0029B024: nop

    return;
    after_0:
    // 0x0029B024: nop

    // 0x0029B028: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0029B02C: jal         0x0024599C
    // 0x0029B030: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    func_0024599C(rdram, ctx);
        goto after_1;
    // 0x0029B030: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    after_1:
    // 0x0029B034: addiu       $v0, $v0, -0x76F0
    ctx->r2 = ADD32(ctx->r2, -0X76F0);
    // 0x0029B038: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x0029B03C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x0029B040: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x0029B044: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x0029B048: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x0029B04C: jr          $ra
    // 0x0029B050: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x0029B050: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_00461080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_00428234:
    // 0x00461080: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x00461084: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x00461088: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x0046108C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x00461090: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x00461094: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x00461098: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x0046109C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x004610A0: jal         0x00299FE4
    // 0x004610A4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    func_00299FE4(rdram, ctx);
        goto after_0;
    // 0x004610A4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    after_0:
    // 0x004610A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x004610AC: jal         0x00427EA0
    // 0x004610B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    entry_00427EA0(rdram, ctx);
        goto after_1;
    // 0x004610B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x004610B4: jal         0x0029A050
    // 0x004610B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_0029A050(rdram, ctx);
        goto after_2;
    // 0x004610B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x004610BC: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x004610C0: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00461234;
    }
    // 0x004610C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x004610C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x004610C8: sw          $s1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r17;
    // 0x004610CC: sw          $s3, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r19;
    // 0x004610D0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x004610D4: jal         0x00429DE4
    // 0x004610D8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    entry_00429DE4(rdram, ctx);
        goto after_3;
    // 0x004610D8: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_3:
    // 0x004610DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004610E0: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x004610E4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_00461234;
    }
    // 0x004610E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x004610E8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004610EC: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004610F0: jal         0x00299680
    // 0x004610F4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_00299680(rdram, ctx);
        goto after_4;
    // 0x004610F4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x004610F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x004610FC: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x00461100: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_00461234;
    }
    // 0x00461100: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x00461104: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x00461108: jal         0x00429CD4
    // 0x0046110C: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    entry_00429CD4(rdram, ctx);
        goto after_5;
    // 0x0046110C: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    after_5:
    // 0x00461110: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x00461114: lhu         $v0, 0x50($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X50);
    // 0x00461118: bne         $v1, $v0, L_00461130
    if (ctx->r3 != ctx->r2) {
        // 0x0046111C: addiu       $s1, $sp, 0x10
        ctx->r17 = ADD32(ctx->r29, 0X10);
            goto L_00461130;
    }
    // 0x0046111C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x00461120: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x00461124: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x00461128: beq         $v1, $v0, L_00461148
    if (ctx->r3 == ctx->r2) {
        // 0x0046112C: nop
    
            goto L_00461148;
    }
    // 0x0046112C: nop

L_00461130:
    // 0x00461130: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00461134: jal         0x00429668
    // 0x00461138: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    entry_00429668(rdram, ctx);
        goto after_6;
    // 0x00461138: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x0046113C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00461140: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x00461144: nop
    
            goto L_00461234;
    }
    // 0x00461144: nop

L_00461148:
    // 0x00461148: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x0046114C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00461150: bne         $v0, $zero, L_00461190
    if (ctx->r2 != 0) {
        // 0x00461154: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00461190;
    }
    // 0x00461154: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00461158: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x0046115C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x00461160: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x00461164: jal         0x00429380
    // 0x00461168: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    entry_00429380(rdram, ctx);
        goto after_7;
    // 0x00461168: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_7:
    // 0x0046116C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00461170: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x00461174: nop
    
            goto L_00461234;
    }
    // 0x00461174: nop

    // 0x00461178: lhu         $v0, 0x48($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X48);
    // 0x0046117C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x00461180: bne         $v0, $zero, L_00461190
    if (ctx->r2 != 0) {
        // 0x00461184: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_00461190;
    }
    // 0x00461184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x00461188: j           L_00428234
    // 0x0046118C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    entry_00428234(rdram, ctx);
    return;
    // 0x0046118C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_00461190:
    // 0x00461190: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
L_00461194:
    // 0x00461194: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x00461198: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x0046119C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x004611A0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x004611A4: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x004611A8: bne         $v0, $zero, L_00461194
    if (ctx->r2 != 0) {
        // 0x004611AC: addu        $v1, $s2, $a0
        ctx->r3 = ADD32(ctx->r18, ctx->r4);
            goto L_00461194;
    }
    // 0x004611AC: addu        $v1, $s2, $a0
    ctx->r3 = ADD32(ctx->r18, ctx->r4);
    // 0x004611B0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x004611B4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x004611B8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x004611BC: lbu         $v0, 0x1B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1B);
    // 0x004611C0: addiu       $a3, $s2, 0x2C
    ctx->r7 = ADD32(ctx->r18, 0X2C);
    // 0x004611C4: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x004611C8: lbu         $v1, 0x1A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1A);
    // 0x004611CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x004611D0: sw          $v0, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->r2;
    // 0x004611D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x004611D8: sw          $v0, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r2;
    // 0x004611DC: sb          $v1, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r3;
    // 0x004611E0: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x004611E4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x004611E8: lbu         $v0, 0x64($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X64);
    // 0x004611EC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x004611F0: sw          $v1, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r3;
    // 0x004611F4: lbu         $v1, 0x64($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X64);
    // 0x004611F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x004611FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x00461200: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x00461204: sw          $v0, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->r2;
    // 0x00461208: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x0046120C: jal         0x00299680
    // 0x00461210: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    func_00299680(rdram, ctx);
        goto after_8;
    // 0x00461210: sw          $v0, 0x5C($s2)
    MEM_W(0X5C, ctx->r18) = ctx->r2;
    after_8:
    // 0x00461214: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x00461218: bne         $s0, $zero, L_00461234
    if (ctx->r16 != 0) {
        // 0x0046121C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_00461234;
    }
    // 0x0046121C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x00461220: jal         0x00428250
    // 0x00461224: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    entry_00428250(rdram, ctx);
        goto after_9;
    // 0x00461224: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x00461228: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x0046122C: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x00461230: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
L_00461234:
    // 0x00461234: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x00461238: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x0046123C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x00461240: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x00461244: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x00461248: jr          $ra
    // 0x0046124C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x0046124C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0041C5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041C5EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0041C5F0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x0041C5F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0041C5F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0041C5FC: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x0041C600: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x0041C604: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
    // 0x0041C608: beql        $v0, $zero, L_0041C620
    if (ctx->r2 == 0) {
        // 0x0041C60C: addiu       $v0, $zero, 0xF8
        ctx->r2 = ADD32(0, 0XF8);
            goto L_0041C620;
    }
    goto skip_0;
    // 0x0041C60C: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    skip_0:
    // 0x0041C610: lw          $v0, 0x518($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X518);
    // 0x0041C614: bnel        $v0, $zero, L_0041C61C
    if (ctx->r2 != 0) {
        // 0x0041C618: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_0041C61C;
    }
    goto skip_1;
    // 0x0041C618: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    skip_1:
L_0041C61C:
    // 0x0041C61C: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_0041C620:
    // 0x0041C620: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0041C624: lbu         $a1, 0x2A($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2A);
    // 0x0041C628: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x0041C62C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x0041C630: jal         0x0041648C
    // 0x0041C634: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_0041648C(rdram, ctx);
        goto after_0;
    // 0x0041C634: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x0041C638: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
    // 0x0041C63C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0041C640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0041C644: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x0041C648: jr          $ra
    // 0x0041C64C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x0041C64C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_00467350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_0042E4A8:
    // 0x00467350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00467354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x00467358: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x0046735C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x00467360: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00467364: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00467368: sw          $a2, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r6;
    // 0x0046736C: lbu         $v1, 0x3E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3E);
    // 0x00467370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00467374: beql        $v1, $v0, L_0046737C
    if (ctx->r3 == ctx->r2) {
        // 0x00467378: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_0046737C;
    }
    goto skip_0;
    // 0x00467378: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    skip_0:
L_0046737C:
    // 0x0046737C: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00467380: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x00467384: jal         0x00225EBC
    // 0x00467388: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_00225EBC(rdram, ctx);
        goto after_0;
    // 0x00467388: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x0046738C: bnel        $v0, $zero, L_004673C8
    if (ctx->r2 != 0) {
        // 0x00467390: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_004673C8;
    }
    goto skip_1;
    // 0x00467390: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_1:
    // 0x00467394: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x00467398: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x0046739C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x004673A0: jal         0x00225EBC
    // 0x004673A4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_00225EBC(rdram, ctx);
        goto after_1;
    // 0x004673A4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x004673A8: bnel        $v0, $zero, L_004673C8
    if (ctx->r2 != 0) {
        // 0x004673AC: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_004673C8;
    }
    goto skip_2;
    // 0x004673AC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    skip_2:
    // 0x004673B0: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004673B4: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004673B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x004673BC: jal         0x00225EBC
    // 0x004673C0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    func_00225EBC(rdram, ctx);
        goto after_2;
    // 0x004673C0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_2:
    // 0x004673C4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_004673C8:
    // 0x004673C8: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x004673CC: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x004673D0: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x004673D4: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x004673D8: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x004673DC: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x004673E0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x004673E4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x004673E8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x004673EC: sw          $v0, 0x524($s0)
    MEM_W(0X524, ctx->r16) = ctx->r2;
    // 0x004673F0: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x004673F4: lw          $v1, 0x520($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X520);
    // 0x004673F8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x004673FC: sw          $v0, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->r2;
    // 0x00467400: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00467404: bnel        $v1, $v0, L_00467440
    if (ctx->r3 != ctx->r2) {
        // 0x00467408: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_00467440;
    }
    goto skip_3;
    // 0x00467408: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x0046740C: jal         0x002113A4
    // 0x00467410: nop

    func_002113A4(rdram, ctx);
        goto after_3;
    // 0x00467410: nop

    after_3:
    // 0x00467414: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x00467418: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x0046741C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00467420: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x00467424: mfhi        $t0
    ctx->r8 = hi;
    // 0x00467428: sra         $a0, $t0, 2
    ctx->r4 = S32(SIGNED(ctx->r8) >> 2);
    // 0x0046742C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x00467430: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x00467434: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x00467438: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x0046743C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_00467440:
    // 0x00467440: sb          $v0, 0x151($s0)
    MEM_B(0X151, ctx->r16) = ctx->r2;
    // 0x00467444: jal         0x00248A8C
    // 0x00467448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_00248A8C(rdram, ctx);
        goto after_4;
    // 0x00467448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x0046744C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467450: lbu         $v0, -0x550F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X550F);
    // 0x00467454: beq         $v0, $zero, L_004674A4
    if (ctx->r2 == 0) {
        // 0x00467458: addiu       $a2, $zero, 0x66
        ctx->r6 = ADD32(0, 0X66);
            goto L_004674A4;
    }
    // 0x00467458: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
    // 0x0046745C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x00467460: lw          $v0, -0x531C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X531C);
    // 0x00467464: beq         $v0, $zero, L_0046748C
    if (ctx->r2 == 0) {
        // 0x00467468: nop
    
            goto L_0046748C;
    }
    // 0x00467468: nop

    // 0x0046746C: lw          $v0, 0x518($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X518);
    // 0x00467470: lbu         $v0, 0x3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E);
    // 0x00467474: beq         $v0, $zero, L_0046748C
    if (ctx->r2 == 0) {
        // 0x00467478: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_0046748C;
    }
    // 0x00467478: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x0046747C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x00467480: lw          $a2, -0x24A4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X24A4);
    // 0x00467484: j           L_0042E4A8
    // 0x00467488: nop

    entry_0042E4A8(rdram, ctx);
    return;
    // 0x00467488: nop

L_0046748C:
    // 0x0046748C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00467490: lh          $v0, 0xC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XC);
    // 0x00467494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x00467498: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0046749C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x004674A0: lw          $a2, -0x24D0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X24D0);
L_004674A4:
    // 0x004674A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x004674A8: lw          $a3, 0xC04($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC04);
    // 0x004674AC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x004674B0: addiu       $a0, $a0, 0x7078
    ctx->r4 = ADD32(ctx->r4, 0X7078);
    // 0x004674B4: jal         0x002241D8
    // 0x004674B8: nop

    func_002241D8(rdram, ctx);
        goto after_5;
    // 0x004674B8: nop

    after_5:
    // 0x004674BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x004674C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x004674C4: jr          $ra
    // 0x004674C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004674C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00251E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00251E28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251E2C: lwc1        $f12, 0x706C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X706C);
    // 0x00251E30: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x00251E34: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x00251E38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x00251E3C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x00251E40: jal         0x0021149C
    // 0x00251E44: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    func_0021149C(rdram, ctx);
        goto after_0;
    // 0x00251E44: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    after_0:
    // 0x00251E48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251E4C: lwc1        $f1, 0x7070($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7070);
    // 0x00251E50: c.lt.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x00251E54: nop

    // 0x00251E58: bc1f        L_00251F24
    if (!c1cs) {
        // 0x00251E5C: nop
    
            goto L_00251F24;
    }
    // 0x00251E5C: nop

    // 0x00251E60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251E64: lwc1        $f12, 0x7074($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7074);
    // 0x00251E68: lw          $s1, 0x51C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X51C);
    // 0x00251E6C: jal         0x0021149C
    // 0x00251E70: nop

    func_0021149C(rdram, ctx);
        goto after_1;
    // 0x00251E70: nop

    after_1:
    // 0x00251E74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251E78: lwc1        $f1, 0x7078($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7078);
    // 0x00251E7C: c.le.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl <= ctx->f0.fl;
    // 0x00251E80: nop

    // 0x00251E84: bc1tl       L_00251E9C
    if (c1cs) {
        // 0x00251E88: sub.s       $f0, $f0, $f1
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
            goto L_00251E9C;
    }
    goto skip_0;
    // 0x00251E88: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    skip_0:
    // 0x00251E8C: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00251E90: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00251E94: j           L_00251EB0
    // 0x00251E98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_00251EB0;
    // 0x00251E98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00251E9C:
    // 0x00251E9C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x00251EA0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x00251EA4: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x00251EA8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00251EAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_00251EB0:
    // 0x00251EB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x00251EB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x00251EB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x00251EBC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x00251EC0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x00251EC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x00251EC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x00251ECC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x00251ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x00251ED4: jal         0x00281060
    // 0x00251ED8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_00281060(rdram, ctx);
        goto after_2;
    // 0x00251ED8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x00251EDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x00251EE0: lui         $a2, 0x434C
    ctx->r6 = S32(0X434C << 16);
    // 0x00251EE4: ori         $a2, $a2, 0xCCCC
    ctx->r6 = ctx->r6 | 0XCCCC;
    // 0x00251EE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x00251EEC: addiu       $a0, $a0, -0x6750
    ctx->r4 = ADD32(ctx->r4, -0X6750);
    // 0x00251EF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00251EF4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x00251EF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x00251EFC: lwc1        $f0, 0x707C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X707C);
    // 0x00251F00: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x00251F04: lw          $t0, 0x114($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X114);
    // 0x00251F08: lw          $t1, 0x118($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X118);
    // 0x00251F0C: lw          $t2, 0x11C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X11C);
    // 0x00251F10: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x00251F14: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x00251F18: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x00251F1C: jal         0x0028135C
    // 0x00251F20: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_0028135C(rdram, ctx);
        goto after_3;
    // 0x00251F20: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_3:
L_00251F24:
    // 0x00251F24: lwc1        $f0, 0x1A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x00251F28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00251F2C: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x00251F30: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x00251F34: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x00251F38: c.le.s      $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f0.fl <= ctx->f1.fl;
    // 0x00251F3C: nop

    // 0x00251F40: bc1t        L_00251F54
    if (c1cs) {
        // 0x00251F44: swc1        $f0, 0x1A4($s0)
        MEM_W(0X1A4, ctx->r16) = ctx->f0.u32l;
            goto L_00251F54;
    }
    // 0x00251F44: swc1        $f0, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f0.u32l;
    // 0x00251F48: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x00251F4C: bne         $v0, $zero, L_00251FB0
    if (ctx->r2 != 0) {
        // 0x00251F50: nop
    
            goto L_00251FB0;
    }
    // 0x00251F50: nop

L_00251F54:
    // 0x00251F54: lui         $v0, 0xFF7F
    ctx->r2 = S32(0XFF7F << 16);
    // 0x00251F58: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x00251F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00251F60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x00251F64: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x00251F68: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x00251F6C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x00251F70: jal         0x0024E5F0
    // 0x00251F74: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    func_0024E5F0(rdram, ctx);
        goto after_4;
    // 0x00251F74: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    after_4:
    // 0x00251F78: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x00251F7C: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x00251F80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x00251F84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x00251F88: lw          $a1, 0x12A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X12A8);
    // 0x00251F8C: lui         $a3, 0x41CC
    ctx->r7 = S32(0X41CC << 16);
    // 0x00251F90: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x00251F94: jal         0x00245828
    // 0x00251F98: addiu       $a2, $zero, 0x3200
    ctx->r6 = ADD32(0, 0X3200);
    func_00245828(rdram, ctx);
        goto after_5;
    // 0x00251F98: addiu       $a2, $zero, 0x3200
    ctx->r6 = ADD32(0, 0X3200);
    after_5:
    // 0x00251F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00251FA0: addiu       $a1, $a0, 0x140
    ctx->r5 = ADD32(ctx->r4, 0X140);
    // 0x00251FA4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x00251FA8: jal         0x00247C10
    // 0x00251FAC: sw          $zero, 0x12A8($a0)
    MEM_W(0X12A8, ctx->r4) = 0;
    func_00247C10(rdram, ctx);
        goto after_6;
    // 0x00251FAC: sw          $zero, 0x12A8($a0)
    MEM_W(0X12A8, ctx->r4) = 0;
    after_6:
L_00251FB0:
    // 0x00251FB0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x00251FB4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x00251FB8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x00251FBC: jr          $ra
    // 0x00251FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x00251FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_002560A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002560A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002560A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002560A8: jal         0x00255FF4
    // 0x002560AC: nop

    func_00255FF4(rdram, ctx);
        goto after_0;
    // 0x002560AC: nop

    after_0:
    // 0x002560B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x002560B4: jr          $ra
    // 0x002560B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x002560B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00218548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00218548: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0021854C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x00218550: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x00218554: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x00218558: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x0021855C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x00218560: blez        $a1, L_00218588
    if (SIGNED(ctx->r5) <= 0) {
        // 0x00218564: sw          $v0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r2;
            goto L_00218588;
    }
    // 0x00218564: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00218568: lui         $v1, 0xDEAD
    ctx->r3 = S32(0XDEAD << 16);
    // 0x0021856C: ori         $v1, $v1, 0xBEEF
    ctx->r3 = ctx->r3 | 0XBEEF;
    // 0x00218570: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00218574:
    // 0x00218574: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00218578: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x0021857C: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x00218580: beq         $v0, $zero, L_00218574
    if (ctx->r2 == 0) {
        // 0x00218584: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_00218574;
    }
    // 0x00218584: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_00218588:
    // 0x00218588: jr          $ra
    // 0x0021858C: nop

    return;
    // 0x0021858C: nop

;}
RECOMP_FUNC void func_00267D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00267D60: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x00267D64: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x00267D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00267D6C: beq         $a0, $v0, L_00267D80
    if (ctx->r4 == ctx->r2) {
        // 0x00267D70: nop
    
            goto L_00267D80;
    }
    // 0x00267D70: nop

    // 0x00267D74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x00267D78: bne         $a0, $v0, L_00267D8C
    if (ctx->r4 != ctx->r2) {
            // 0x00267D7C: nop

    func_00267D8C(rdram, ctx);
    return;
    }
    // 0x00267D7C: nop

L_00267D80:
    // 0x00267D80: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x00267D84: jr          $ra
    // 0x00267D88: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    return;
    // 0x00267D88: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
;}
RECOMP_FUNC void func_0041B828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0041B828: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x0041B82C: lw          $v0, -0x5528($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5528);
    // 0x0041B830: xori        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 ^ 0X1000;
    // 0x0041B834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x0041B838: sw          $v0, -0x5528($at)
    MEM_W(-0X5528, ctx->r1) = ctx->r2;
    // 0x0041B83C: jr          $ra
    // 0x0041B840: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    return;
    // 0x0041B840: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_00295BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00295BDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x00295BE0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x00295BE4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x00295BE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x00295BEC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x00295BF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x00295BF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x00295BF8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x00295BFC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x00295C00: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x00295C04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x00295C08: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x00295C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x00295C10: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x00295C14: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x00295C18: bne         $v0, $v1, L_00295C28
    if (ctx->r2 != ctx->r3) {
        // 0x00295C1C: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_00295C28;
    }
    // 0x00295C1C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x00295C20: bne         $s4, $zero, L_00295C30
    if (ctx->r20 != 0) {
        // 0x00295C24: nop
    
            goto L_00295C30;
    }
    // 0x00295C24: nop

L_00295C28:
    // 0x00295C28: j           L_00295EA4
    // 0x00295C2C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_00295EA4;
    // 0x00295C2C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_00295C30:
    // 0x00295C30: bne         $s0, $zero, L_00295C54
    if (ctx->r16 != 0) {
        // 0x00295C34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_00295C54;
    }
    // 0x00295C34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x00295C38: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x00295C3C: addiu       $a0, $a0, -0x5AC0
    ctx->r4 = ADD32(ctx->r4, -0X5AC0);
    // 0x00295C40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x00295C44: addiu       $a1, $a1, -0x5ABC
    ctx->r5 = ADD32(ctx->r5, -0X5ABC);
    // 0x00295C48: jal         0x0029B020
    // 0x00295C4C: addiu       $a2, $zero, 0x16E
    ctx->r6 = ADD32(0, 0X16E);
    func_0029B020(rdram, ctx);
        goto after_0;
    // 0x00295C4C: addiu       $a2, $zero, 0x16E
    ctx->r6 = ADD32(0, 0X16E);
    after_0:
    // 0x00295C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_00295C54:
    // 0x00295C54: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x00295C58: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x00295C5C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x00295C60: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    turok2_patch_fix_jalr(rdram, ctx);
    // 0x00295C64: jalr        $v0
    // 0x00295C68: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
    turok2_patch_jalr_done(rdram, ctx);
        goto after_1;
    // 0x00295C68: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_1:
    // 0x00295C6C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x00295C70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00295C74: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x00295C78: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x00295C7C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295C80: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295C84: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00295C88: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x00295C8C: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x00295C90: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295C94: addiu       $v1, $v1, 0x440
    ctx->r3 = ADD32(ctx->r3, 0X440);
    // 0x00295C98: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00295C9C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00295CA0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00295CA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00295CA8: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00295CAC: lui         $v1, 0x808
    ctx->r3 = S32(0X808 << 16);
    // 0x00295CB0: addiu       $v0, $v0, 0x580
    ctx->r2 = ADD32(ctx->r2, 0X580);
    // 0x00295CB4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295CB8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295CBC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00295CC0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x00295CC4: addiu       $v1, $v0, 0x6C0
    ctx->r3 = ADD32(ctx->r2, 0X6C0);
    // 0x00295CC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x00295CCC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x00295CD0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x00295CD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00295CD8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x00295CDC: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x00295CE0: beq         $v0, $zero, L_00295E68
    if (ctx->r2 == 0) {
        // 0x00295CE4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_00295E68;
    }
    // 0x00295CE4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295CE8: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x00295CEC: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x00295CF0: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x00295CF4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295CF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295CFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00295D00: lh          $v0, 0x7900($at)
    ctx->r2 = MEM_H(ctx->r1, 0X7900);
    // 0x00295D04: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295D08: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x00295D0C: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x00295D10: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00295D14: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00295D18: mflo        $t0
    ctx->r8 = lo;
    // 0x00295D1C: sra         $a0, $t0, 15
    ctx->r4 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295D20: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00295D24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00295D28: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00295D2C: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x00295D30: addiu       $v0, $s1, 0x24
    ctx->r2 = ADD32(ctx->r17, 0X24);
    // 0x00295D34: sh          $a0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r4;
    // 0x00295D38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00295D3C: jal         0x00295EC8
    // 0x00295D40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00295EC8(rdram, ctx);
        goto after_2;
    // 0x00295D40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x00295D44: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x00295D48: sh          $v0, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r2;
    // 0x00295D4C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x00295D50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x00295D54: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x00295D58: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x00295D5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x00295D60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x00295D64: lh          $v0, 0x7900($at)
    ctx->r2 = MEM_H(ctx->r1, 0X7900);
    // 0x00295D68: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x00295D6C: lh          $v0, 0x1E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1E);
    // 0x00295D70: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x00295D74: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x00295D78: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x00295D7C: mflo        $t0
    ctx->r8 = lo;
    // 0x00295D80: sra         $a0, $t0, 15
    ctx->r4 = S32(SIGNED(ctx->r8) >> 15);
    // 0x00295D84: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x00295D88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x00295D8C: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x00295D90: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x00295D94: addiu       $v0, $s1, 0x2A
    ctx->r2 = ADD32(ctx->r17, 0X2A);
    // 0x00295D98: sh          $a0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r4;
    // 0x00295D9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x00295DA0: jal         0x00295EC8
    // 0x00295DA4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_00295EC8(rdram, ctx);
        goto after_3;
    // 0x00295DA4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x00295DA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00295DAC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295DB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x00295DB4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295DB8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x00295DBC: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x00295DC0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295DC4: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
    // 0x00295DC8: lui         $v0, 0x906
    ctx->r2 = S32(0X906 << 16);
    // 0x00295DCC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x00295DD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00295DD4: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x00295DD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00295DDC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295DE0: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x00295DE4: lui         $v0, 0x904
    ctx->r2 = S32(0X904 << 16);
    // 0x00295DE8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x00295DEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x00295DF0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x00295DF4: lhu         $v0, 0x28($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X28);
    // 0x00295DF8: lui         $v1, 0x902
    ctx->r3 = S32(0X902 << 16);
    // 0x00295DFC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295E00: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x00295E04: lhu         $v0, 0x26($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X26);
    // 0x00295E08: lhu         $v1, 0x24($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X24);
    // 0x00295E0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00295E10: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295E14: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x00295E18: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x00295E1C: lui         $v1, 0x900
    ctx->r3 = S32(0X900 << 16);
    // 0x00295E20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295E24: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00295E28: lhu         $v0, 0x2C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2C);
    // 0x00295E2C: lhu         $v1, 0x2A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2A);
    // 0x00295E30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x00295E34: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295E38: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00295E3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x00295E40: lui         $v1, 0x908
    ctx->r3 = S32(0X908 << 16);
    // 0x00295E44: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x00295E48: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x00295E4C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x00295E50: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x00295E54: lhu         $v0, 0x22($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X22);
    // 0x00295E58: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00295E5C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x00295E60: j           L_00295E70
    // 0x00295E64: lui         $v0, 0x309
    ctx->r2 = S32(0X309 << 16);
        goto L_00295E70;
    // 0x00295E64: lui         $v0, 0x309
    ctx->r2 = S32(0X309 << 16);
L_00295E68:
    // 0x00295E68: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x00295E6C: lui         $v0, 0x308
    ctx->r2 = S32(0X308 << 16);
L_00295E70:
    // 0x00295E70: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x00295E74: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x00295E78: jal         0x0029BF80
    // 0x00295E7C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    func_0029BF80(rdram, ctx);
        goto after_4;
    // 0x00295E7C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    after_4:
    // 0x00295E80: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x00295E84: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x00295E88: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x00295E8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x00295E90: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x00295E94: lw          $v1, 0x30($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X30);
    // 0x00295E98: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x00295E9C: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x00295EA0: sw          $v1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r3;
L_00295EA4:
    // 0x00295EA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x00295EA8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x00295EAC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x00295EB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x00295EB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x00295EB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x00295EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x00295EC0: jr          $ra
    // 0x00295EC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x00295EC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0026F04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026F04C: sltiu       $v0, $v0, 0x3E8
    ctx->r2 = ctx->r2 < 0X3E8 ? 1 : 0;
    // 0x0026F050: bne         $v0, $zero, L_0026F070
    if (ctx->r2 != 0) {
            // 0x0026F054: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    func_0026F070(rdram, ctx);
    return;
    }
    // 0x0026F054: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x0026F058: addiu       $v1, $a0, -0x1770
    ctx->r3 = ADD32(ctx->r4, -0X1770);
    // 0x0026F05C: sltiu       $v1, $v1, 0x3E8
    ctx->r3 = ctx->r3 < 0X3E8 ? 1 : 0;
    // 0x0026F060: bne         $v1, $zero, L_0026F070
    if (ctx->r3 != 0) {
            // 0x0026F064: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    func_0026F070(rdram, ctx);
    return;
    }
    // 0x0026F064: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0026F068: jr          $ra
    // 0x0026F06C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x0026F06C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_004470E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x004470E0: lb          $v0, 0xC7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC7);
    // 0x004470E4: beq         $v0, $zero, L_004470F8
    if (ctx->r2 == 0) {
        // 0x004470E8: addiu       $v1, $zero, -0x101
        ctx->r3 = ADD32(0, -0X101);
            goto L_004470F8;
    }
    // 0x004470E8: addiu       $v1, $zero, -0x101
    ctx->r3 = ADD32(0, -0X101);
    // 0x004470EC: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x004470F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x004470F4: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
L_004470F8:
    // 0x004470F8: jr          $ra
    // 0x004470FC: nop

    return;
    // 0x004470FC: nop

;}
RECOMP_FUNC void func_0040EDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0040EDB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0040EDB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0040EDB8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x0040EDBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0040EDC0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x0040EDC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0040EDC8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0040EDCC: lw          $v0, 0x114($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X114);
    // 0x0040EDD0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x0040EDD4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x0040EDD8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040EDDC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x0040EDE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x0040EDE4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x0040EDE8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x0040EDEC: addiu       $v0, $v0, 0x23C
    ctx->r2 = ADD32(ctx->r2, 0X23C);
    // 0x0040EDF0: jal         0x00236324
    // 0x0040EDF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_00236324(rdram, ctx);
        goto after_0;
    // 0x0040EDF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
    // 0x0040EDF8: jal         0x00235898
    // 0x0040EDFC: nop

    func_00235898(rdram, ctx);
        goto after_1;
    // 0x0040EDFC: nop

    after_1:
    // 0x0040EE00: lhu         $v1, 0xB8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XB8);
    // 0x0040EE04: addiu       $v0, $zero, 0x450
    ctx->r2 = ADD32(0, 0X450);
    // 0x0040EE08: beq         $v1, $v0, L_0040EE20
    if (ctx->r3 == ctx->r2) {
        // 0x0040EE0C: addiu       $v0, $zero, 0x455
        ctx->r2 = ADD32(0, 0X455);
            goto L_0040EE20;
    }
    // 0x0040EE0C: addiu       $v0, $zero, 0x455
    ctx->r2 = ADD32(0, 0X455);
    // 0x0040EE10: beq         $v1, $v0, L_0040EE2C
    if (ctx->r3 == ctx->r2) {
        // 0x0040EE14: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_0040EE2C;
    }
    // 0x0040EE14: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x0040EE18: j           L_0040EE44
    // 0x0040EE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
        goto L_0040EE44;
    // 0x0040EE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_0040EE20:
    // 0x0040EE20: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x0040EE24: j           L_0040EE30
    // 0x0040EE28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_0040EE30;
    // 0x0040EE28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_0040EE2C:
    // 0x0040EE2C: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
L_0040EE30:
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
        goto after_2;
    // 0x0040EE7C: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_2:
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
RECOMP_FUNC void func_00419AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00419AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00419AF4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x00419AF8: lui         $a2, 0x44
    ctx->r6 = S32(0X44 << 16);
    // 0x00419AFC: addiu       $a2, $a2, -0x36BC
    ctx->r6 = ADD32(ctx->r6, -0X36BC);
    // 0x00419B00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00419B04: jal         0x00416894
    // 0x00419B08: nop

    func_00416894(rdram, ctx);
        goto after_0;
    // 0x00419B08: nop

    after_0:
    // 0x00419B0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00419B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x00419B14: jr          $ra
    // 0x00419B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00419B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_00440AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00440AC0: jr          $ra
    // 0x00440AC4: nop

    return;
    // 0x00440AC4: nop

;}
RECOMP_FUNC void func_00206078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00206078: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x0020607C: lw          $v0, -0x7214($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7214);
    // 0x00206080: jr          $ra
    // 0x00206084: nop

    return;
    // 0x00206084: nop

;}
RECOMP_FUNC void func_0027FDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0027FDE4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x0027FDE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x0027FDEC: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x0027FDF0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0027FDF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0027FDF8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0027FDFC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x0027FE00: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0027FE04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0027FE08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0027FE0C: sdc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    SD(ctx->f23.u64, 0X58, ctx->r29);
    // 0x0027FE10: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x0027FE14: sdc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    SD(ctx->f21.u64, 0X48, ctx->r29);
    // 0x0027FE18: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x0027FE1C: jal         0x00277F6C
    // 0x0027FE20: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    func_00277F6C(rdram, ctx);
        goto after_0;
    // 0x0027FE20: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    after_0:
    // 0x0027FE24: jal         0x0027845C
    // 0x0027FE28: nop

    func_0027845C(rdram, ctx);
        goto after_1;
    // 0x0027FE28: nop

    after_1:
    // 0x0027FE2C: lw          $s1, 0xE28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE28);
    // 0x0027FE30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FE34: lwc1        $f20, -0x6544($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6544);
    // 0x0027FE38: beq         $s1, $zero, L_0027FE80
    if (ctx->r17 == 0) {
        // 0x0027FE3C: nop
    
            goto L_0027FE80;
    }
    // 0x0027FE3C: nop

    // 0x0027FE40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FE44: lwc1        $f1, -0x6540($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6540);
    // 0x0027FE48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0027FE4C: lwc1        $f0, 0x2034($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2034);
    // 0x0027FE50: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x0027FE54: mul.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f1.fl);
    // 0x0027FE58: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x0027FE5C: beq         $s0, $zero, L_0027FE80
    if (ctx->r16 == 0) {
        // 0x0027FE60: swc1        $f0, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
            goto L_0027FE80;
    }
    // 0x0027FE60: swc1        $f0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f0.u32l;
L_0027FE64:
    // 0x0027FE64: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x0027FE68: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x0027FE6C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0027FE70: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x0027FE74: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x0027FE78: bne         $s0, $zero, L_0027FE64
    if (ctx->r16 != 0) {
        // 0x0027FE7C: nop
    
            goto L_0027FE64;
    }
    // 0x0027FE7C: nop

L_0027FE80:
    // 0x0027FE80: lw          $s0, 0xE2C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XE2C);
    // 0x0027FE84: beq         $s0, $zero, L_0027FEE0
    if (ctx->r16 == 0) {
        // 0x0027FE88: nop
    
            goto L_0027FEE0;
    }
    // 0x0027FE88: nop

    // 0x0027FE8C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x0027FE90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FE94: lwc1        $f20, -0x653C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X653C);
L_0027FE98:
    // 0x0027FE98: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x0027FE9C: lwc1        $f1, 0x34($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X34);
    // 0x0027FEA0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x0027FEA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x0027FEA8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x0027FEAC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x0027FEB0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x0027FEB4: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x0027FEB8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FEBC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x0027FEC0: trunc.w.s   $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    ctx->f2.u32l = TRUNC_W_S(ctx->f1.fl);
    // 0x0027FEC4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x0027FEC8: jal         0x00278CDC
    // 0x0027FECC: nop

    func_00278CDC(rdram, ctx);
        goto after_2;
    // 0x0027FECC: nop

    after_2:
    // 0x0027FED0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x0027FED4: bne         $s0, $zero, L_0027FE98
    if (ctx->r16 != 0) {
        // 0x0027FED8: nop
    
            goto L_0027FE98;
    }
    // 0x0027FED8: nop

    // 0x0027FEDC: lw          $s0, 0xE2C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XE2C);
L_0027FEE0:
    // 0x0027FEE0: beq         $s0, $zero, L_00280028
    if (ctx->r16 == 0) {
        // 0x0027FEE4: nop
    
            goto L_00280028;
    }
    // 0x0027FEE4: nop

    // 0x0027FEE8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x0027FEEC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x0027FEF0: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x0027FEF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FEF8: lwc1        $f23, -0x6538($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X6538);
    // 0x0027FEFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FF00: lwc1        $f22, -0x6534($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6534);
    // 0x0027FF04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FF08: lwc1        $f21, -0x6530($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6530);
L_0027FF0C:
    // 0x0027FF0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FF10: lwc1        $f1, 0x6D28($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6D28);
    // 0x0027FF14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x0027FF18: lwc1        $f0, -0x652C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X652C);
    // 0x0027FF1C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x0027FF20: mul.s       $f20, $f1, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f1.fl, ctx->f0.fl);
    // 0x0027FF24: beq         $v1, $s4, L_0027FF60
    if (ctx->r3 == ctx->r20) {
        // 0x0027FF28: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_0027FF60;
    }
    // 0x0027FF28: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x0027FF2C: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x0027FF30: beq         $v0, $zero, L_0027FF48
    if (ctx->r2 == 0) {
        // 0x0027FF34: nop
    
            goto L_0027FF48;
    }
    // 0x0027FF34: nop

    // 0x0027FF38: beql        $v1, $s3, L_0028001C
    if (ctx->r3 == ctx->r19) {
        // 0x0027FF3C: sw          $zero, 0x18($s0)
        MEM_W(0X18, ctx->r16) = 0;
            goto L_0028001C;
    }
    goto skip_0;
    // 0x0027FF3C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    skip_0:
    // 0x0027FF40: j           L_00280018
    // 0x0027FF44: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
        goto L_00280018;
    // 0x0027FF44: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_0027FF48:
    // 0x0027FF48: beq         $v1, $s5, L_0027FFA0
    if (ctx->r3 == ctx->r21) {
        // 0x0027FF4C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_0027FFA0;
    }
    // 0x0027FF4C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x0027FF50: beq         $v1, $v0, L_0027FFAC
    if (ctx->r3 == ctx->r2) {
        // 0x0027FF54: nop
    
            goto L_0027FFAC;
    }
    // 0x0027FF54: nop

    // 0x0027FF58: j           L_00280018
    // 0x0027FF5C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
        goto L_00280018;
    // 0x0027FF5C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_0027FF60:
    // 0x0027FF60: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    // 0x0027FF64: mul.s       $f12, $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f23.fl);
    // 0x0027FF68: jal         0x002982F0
    // 0x0027FF6C: nop

    func_002982F0(rdram, ctx);
        goto after_3;
    // 0x0027FF6C: nop

    after_3:
    // 0x0027FF70: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0027FF74: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0027FF78: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x0027FF7C: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027FF80: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0027FF84: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FF88: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x0027FF8C: bc1f        L_0028001C
    if (!c1cs) {
        // 0x0027FF90: nop
    
            goto L_0028001C;
    }
    // 0x0027FF90: nop

    // 0x0027FF94: sw          $s5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r21;
    // 0x0027FF98: j           L_0028001C
    // 0x0027FF9C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
        goto L_0028001C;
    // 0x0027FF9C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_0027FFA0:
    // 0x0027FFA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x0027FFA4: j           L_0028001C
    // 0x0027FFA8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
        goto L_0028001C;
    // 0x0027FFA8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_0027FFAC:
    // 0x0027FFAC: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    // 0x0027FFB0: mul.s       $f12, $f12, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f23.fl);
    // 0x0027FFB4: jal         0x002974C0
    // 0x0027FFB8: nop

    func_002974C0(rdram, ctx);
        goto after_4;
    // 0x0027FFB8: nop

    after_4:
    // 0x0027FFBC: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x0027FFC0: lwc1        $f1, 0x28($s0)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r16, 0X28);
    // 0x0027FFC4: add.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f20.fl;
    // 0x0027FFC8: swc1        $f1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f_odd[(1 - 1) * 2];
    // 0x0027FFCC: c.lt.s      $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f21.fl < ctx->f1.fl;
    // 0x0027FFD0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0027FFD4: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x0027FFD8: bc1f        L_0028001C
    if (!c1cs) {
        // 0x0027FFDC: nop
    
            goto L_0028001C;
    }
    // 0x0027FFDC: nop

    // 0x0027FFE0: lw          $v1, 0xE28($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XE28);
    // 0x0027FFE4: beql        $v1, $zero, L_00280010
    if (ctx->r3 == 0) {
        // 0x0027FFE8: sw          $zero, 0x14($s1)
        MEM_W(0X14, ctx->r17) = 0;
            goto L_00280010;
    }
    goto skip_1;
    // 0x0027FFE8: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    skip_1:
L_0027FFEC:
    // 0x0027FFEC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x0027FFF0: bne         $v0, $s3, L_00280000
    if (ctx->r2 != ctx->r19) {
        // 0x0027FFF4: nop
    
            goto L_00280000;
    }
    // 0x0027FFF4: nop

    // 0x0027FFF8: sw          $s4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r20;
    // 0x0027FFFC: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
L_00280000:
    // 0x00280000: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x00280004: bne         $v1, $zero, L_0027FFEC
    if (ctx->r3 != 0) {
        // 0x00280008: nop
    
            goto L_0027FFEC;
    }
    // 0x00280008: nop

    // 0x0028000C: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
L_00280010:
    // 0x00280010: j           L_0028001C
    // 0x00280014: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
        goto L_0028001C;
    // 0x00280014: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_00280018:
    // 0x00280018: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
L_0028001C:
    // 0x0028001C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x00280020: bne         $s0, $zero, L_0027FF0C
    if (ctx->r16 != 0) {
        // 0x00280024: nop
    
            goto L_0027FF0C;
    }
    // 0x00280024: nop

L_00280028:
    // 0x00280028: lw          $s0, 0xE2C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XE2C);
    // 0x0028002C: beq         $s0, $zero, L_00280068
    if (ctx->r16 == 0) {
        // 0x00280030: nop
    
            goto L_00280068;
    }
    // 0x00280030: nop

L_00280034:
    // 0x00280034: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x00280038: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x0028003C: bnel        $v0, $zero, L_00280060
    if (ctx->r2 != 0) {
        // 0x00280040: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_00280060;
    }
    goto skip_2;
    // 0x00280040: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_2:
    // 0x00280044: addiu       $a0, $s2, 0xE28
    ctx->r4 = ADD32(ctx->r18, 0XE28);
    // 0x00280048: jal         0x00200738
    // 0x0028004C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200738(rdram, ctx);
        goto after_5;
    // 0x0028004C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x00280050: addiu       $a0, $s6, 0xF0C
    ctx->r4 = ADD32(ctx->r22, 0XF0C);
    // 0x00280054: jal         0x00200518
    // 0x00280058: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_00200518(rdram, ctx);
        goto after_6;
    // 0x00280058: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x0028005C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_00280060:
    // 0x00280060: bne         $s0, $zero, L_00280034
    if (ctx->r16 != 0) {
        // 0x00280064: nop
    
            goto L_00280034;
    }
    // 0x00280064: nop

L_00280068:
    // 0x00280068: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0028006C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x00280070: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x00280074: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x00280078: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0028007C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x00280080: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x00280084: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x00280088: ldc1        $f23, 0x58($sp)
    CHECK_FR(ctx, 23);
    ctx->f23.u64 = LD(ctx->r29, 0X58);
    // 0x0028008C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x00280090: ldc1        $f21, 0x48($sp)
    CHECK_FR(ctx, 21);
    ctx->f21.u64 = LD(ctx->r29, 0X48);
    // 0x00280094: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x00280098: jr          $ra
    // 0x0028009C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x0028009C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_00444180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x00444180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x00444184: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x00444188: addiu       $a3, $a3, -0x490
    ctx->r7 = ADD32(ctx->r7, -0X490);
    // 0x0044418C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x00444190: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x00444194: blez        $v0, L_004441C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x00444198: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_004441C0;
    }
    // 0x00444198: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x0044419C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_004441A0:
    // 0x004441A0: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x004441A4: sw          $zero, 0x254($v0)
    MEM_W(0X254, ctx->r2) = 0;
    // 0x004441A8: sw          $zero, 0x250($v0)
    MEM_W(0X250, ctx->r2) = 0;
    // 0x004441AC: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x004441B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x004441B4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x004441B8: bne         $v0, $zero, L_004441A0
    if (ctx->r2 != 0) {
        // 0x004441BC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_004441A0;
    }
    // 0x004441BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_004441C0:
    // 0x004441C0: jal         0x0040A5B4
    // 0x004441C4: nop

    func_0040A5B4(rdram, ctx);
        goto after_0;
    // 0x004441C4: nop

    after_0:
    // 0x004441C8: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    // 0x004441CC: lui         $a1, 0x41
    ctx->r5 = S32(0X41 << 16);
    // 0x004441D0: addiu       $a1, $a1, -0x390C
    ctx->r5 = ADD32(ctx->r5, -0X390C);
    // 0x004441D4: jal         0x00283FF8
    // 0x004441D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_00283FF8(rdram, ctx);
        goto after_1;
    // 0x004441D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x004441DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x004441E0: jr          $ra
    // 0x004441E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x004441E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_0026D230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x0026D230: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x0026D234: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x0026D238: jr          $ra
    // 0x0026D23C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x0026D23C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0028EF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
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
RECOMP_FUNC void func_002881E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x002881E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x002881EC: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x002881F0: addiu       $a0, $a0, 0x6CB0
    ctx->r4 = ADD32(ctx->r4, 0X6CB0);
    // 0x002881F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x002881F8: jal         0x0028820C
    // 0x002881FC: nop

    func_0028820C(rdram, ctx);
        goto after_0;
    // 0x002881FC: nop

    after_0:
    // 0x00288200: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x00288204: jr          $ra
    // 0x00288208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x00288208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
