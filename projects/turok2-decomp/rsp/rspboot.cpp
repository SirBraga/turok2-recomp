#include "librecomp/rsp.hpp"
#include "librecomp/rsp_vu_impl.hpp"
RspExitReason rspboot(uint8_t* rdram, [[maybe_unused]] uint32_t ucode_addr) {
    uint32_t           r1 = 0,  r2 = 0,  r3 = 0,  r4 = 0,  r5 = 0,  r6 = 0,  r7 = 0;
    uint32_t  r8 = 0,  r9 = 0, r10 = 0, r11 = 0, r12 = 0, r13 = 0, r14 = 0, r15 = 0;
    uint32_t r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0;
    uint32_t r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    uint32_t dma_mem_address = 0, dma_dram_address = 0, jump_target = 0;
    const char * debug_file = NULL; int debug_line = 0;
    RSP rsp{};
    r1 = 0xFC0;
L_1000:
    // addi        $12, $zero, 0x1000
    r12 = RSP_ADD32(0, 0X1000);
    // addi        $11, $zero, 0x2E0
    r11 = RSP_ADD32(0, 0X2E0);
    // lw          $24, 0x0($11)
    r24 = RSP_MEM_W_LOAD(0X0, r11);
    // lhu         $19, 0x4($11)
    r19 = RSP_MEM_HU_LOAD(0X4, r11);
    // jal         0x1FD8
    r31 = 0x1018;
    // lhu         $20, 0x6($11)
    r20 = RSP_MEM_HU_LOAD(0X6, r11);
    goto L_1FD8;
    // lhu         $20, 0x6($11)
    r20 = RSP_MEM_HU_LOAD(0X6, r11);
L_1018:
    // ori         $ra, $12, 0x0
    r31 = r12 | 0X0;
    // mfc0        $11, SP_DMA_BUSY
    r11 = 0;
L_1020:
    // bne         $11, $zero, L_1020
    if (r11 != 0) {
        // mfc0        $11, SP_DMA_BUSY
        r11 = 0;
        goto L_1020;
    }
    // mfc0        $11, SP_DMA_BUSY
    r11 = 0;
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mfc0        $11, SP_DMA_FULL
    r11 = 0;
    goto do_indirect_jump;
    // mfc0        $11, SP_DMA_FULL
    r11 = 0;
L_1030:
    // bne         $11, $zero, L_1030
    if (r11 != 0) {
        // mfc0        $11, SP_DMA_FULL
        r11 = 0;
        goto L_1030;
    }
    // mfc0        $11, SP_DMA_FULL
    r11 = 0;
    // mtc0        $20, SP_MEM_ADDR
    SET_DMA_MEM(r20);
    // bltz        $20, L_104C
    if (RSP_SIGNED(r20) < 0) {
        // mtc0        $24, SP_DRAM_ADDR
        SET_DMA_DRAM(r24);
        goto L_104C;
    }
    // mtc0        $24, SP_DRAM_ADDR
    SET_DMA_DRAM(r24);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $19, SP_RD_LEN
    DO_DMA_READ(r19);
    goto do_indirect_jump;
    // mtc0        $19, SP_RD_LEN
    DO_DMA_READ(r19);
L_104C:
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $19, SP_WR_LEN
    DO_DMA_WRITE(r19);
    goto do_indirect_jump;
    // mtc0        $19, SP_WR_LEN
    DO_DMA_WRITE(r19);
    // sub         $11, $23, $22
    r11 = RSP_SUB32(r23, r22);
    // addiu       $12, $11, 0x157
    r12 = RSP_ADD32(r11, 0X157);
    // bgezal      $12, L_12B0
    r31 = 0x1064;
    if (RSP_SIGNED(r12) >= 0) {
        // nop
    
        goto L_12B0;
    }
    // nop

L_1064:
    // jal         0x1FC8
    r31 = 0x106C;
    // lw          $24, 0xF0($zero)
    r24 = RSP_MEM_W_LOAD(0XF0, 0);
    goto L_1FC8;
    // lw          $24, 0xF0($zero)
    r24 = RSP_MEM_W_LOAD(0XF0, 0);
L_106C:
    // bltz        $1, L_10D8
    if (RSP_SIGNED(r1) < 0) {
        // mtc0        $24, DPC_END
            goto L_10D8;
    }
    // mtc0        $24, DPC_END
    // bne         $1, $zero, L_10B4
    if (r1 != 0) {
        // add         $26, $26, $27
        r26 = RSP_ADD32(r26, r27);
        goto L_10B4;
    }
    // add         $26, $26, $27
    r26 = RSP_ADD32(r26, r27);
    // lw          $24, 0x9C4($27)
    r24 = RSP_MEM_W_LOAD(0X9C4, r27);
    // sw          $26, 0xFF0($zero)
    RSP_MEM_W_STORE(0XFF0, 0, r26);
    // sw          $24, 0xFD0($zero)
    RSP_MEM_W_STORE(0XFD0, 0, r24);
    // addiu       $20, $zero, 0x1080
    r20 = RSP_ADD32(0, 0X1080);
    // jal         0x1FD8
    r31 = 0x1094;
    // addi        $19, $zero, 0xF47
    r19 = RSP_ADD32(0, 0XF47);
    goto L_1FD8;
    // addi        $19, $zero, 0xF47
    r19 = RSP_ADD32(0, 0XF47);
L_1094:
    // lw          $24, 0xD8($zero)
    r24 = RSP_MEM_W_LOAD(0XD8, 0);
    // addiu       $20, $zero, 0x180
    r20 = RSP_ADD32(0, 0X180);
    // andi        $19, $25, 0xFFF
    r19 = r25 & 0XFFF;
    // add         $24, $24, $20
    r24 = RSP_ADD32(r24, r20);
    // jal         0x1FD8
    r31 = 0x10AC;
    // sub         $19, $19, $20
    r19 = RSP_SUB32(r19, r20);
    goto L_1FD8;
    // sub         $19, $19, $20
    r19 = RSP_SUB32(r19, r20);
L_10AC:
    // j           L_1FC8
    // addi        $ra, $zero, 0x1084
    r31 = RSP_ADD32(0, 0X1084);
    goto L_1FC8;
    // addi        $ra, $zero, 0x1084
    r31 = RSP_ADD32(0, 0X1084);
L_10B4:
    // lw          $11, 0xFD0($zero)
    r11 = RSP_MEM_W_LOAD(0XFD0, 0);
    // sw          $26, 0xBF8($zero)
    RSP_MEM_W_STORE(0XBF8, 0, r26);
    // sw          $11, 0xBFC($zero)
    RSP_MEM_W_STORE(0XBFC, 0, r11);
    // addi        $12, $zero, 0x5000
    r12 = RSP_ADD32(0, 0X5000);
    // lw          $24, 0xFF8($zero)
    r24 = RSP_MEM_W_LOAD(0XFF8, 0);
    // addi        $20, $zero, -0x8000
    r20 = RSP_ADD32(0, -0X8000);
    // addi        $19, $zero, 0xBFF
    r19 = RSP_ADD32(0, 0XBFF);
    // j           L_1FD8
    goto L_1FD8;
    return RspExitReason::ImemOverrun;
do_indirect_jump:
    switch ((jump_target | 0x1000) & 0X1FFF) { 
        case 0x1FD8: goto L_1FD8;
        case 0x1FC8: goto L_1FC8;
        case 0x10AC: goto L_10AC;
        case 0x1094: goto L_1094;
        case 0x106C: goto L_106C;
        case 0x1064: goto L_1064;
        case 0x1018: goto L_1018;
    }
    printf("Unhandled jump target 0x%04X in microcode rspboot, coming from [%s:%d]\n", jump_target, debug_file, debug_line);
    printf("Register dump: r0  = %08X r1  = %08X r2  = %08X r3  = %08X r4  = %08X r5  = %08X r6  = %08X r7  = %08X\n"
           "               r8  = %08X r9  = %08X r10 = %08X r11 = %08X r12 = %08X r13 = %08X r14 = %08X r15 = %08X\n"
           "               r16 = %08X r17 = %08X r18 = %08X r19 = %08X r20 = %08X r21 = %08X r22 = %08X r23 = %08X\n"
           "               r24 = %08X r25 = %08X r26 = %08X r27 = %08X r28 = %08X r29 = %08X r30 = %08X r31 = %08X\n",
           0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16,
           r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
    return RspExitReason::UnhandledJumpTarget;
}
