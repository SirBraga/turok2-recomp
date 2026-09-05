#ifndef TUROK2_CRASH_DIAGNOSTICS_H
#define TUROK2_CRASH_DIAGNOSTICS_H

#include <cstdint>
#include "recomp.h"

void turok2_diag_capture(uint8_t* rdram, const recomp_context* ctx,
                         uint32_t guest_pc, uint32_t indirect_target);
void turok2_diag_report(const char* reason, uint8_t* rdram,
                        const recomp_context* ctx, uint32_t guest_pc,
                        uint32_t bad_address);
void turok2_diag_report_signal(int signal_number);

#endif
