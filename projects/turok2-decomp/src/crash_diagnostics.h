#ifndef TUROK2_CRASH_DIAGNOSTICS_H
#define TUROK2_CRASH_DIAGNOSTICS_H

#include <cstddef>
#include <cstdint>
#include "recomp.h"

void turok2_diag_capture(uint8_t* rdram, const recomp_context* ctx,
                         uint32_t guest_pc, uint32_t indirect_target);
void turok2_diag_report(const char* reason, uint8_t* rdram,
                        const recomp_context* ctx, uint32_t guest_pc,
                        uint32_t bad_address);
void turok2_diag_report_signal(int signal_number);

struct Turok2OsRef {
    uint32_t addr;
    uint32_t extra;
};

#ifdef __cplusplus
extern "C" {
#endif
void turok2_register_osthread(uint32_t addr, uint32_t stack_top);
void turok2_register_mesg_queue(uint32_t addr, uint32_t msg_count);
#ifdef __cplusplus
}
#endif

void turok2_copy_osthreads(Turok2OsRef* out, size_t* count, size_t cap);
void turok2_copy_mesg_queues(Turok2OsRef* out, size_t* count, size_t cap);

#endif
