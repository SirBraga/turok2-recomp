//
// RT64
//

#include "rt64_interpreter.h"

#include <cassert>
#include <cstdio>

//#define DUMP_DISPLAY_LISTS

namespace RT64 {
    static FILE *displayListFp = nullptr;

    // Interpreter

    Interpreter::Interpreter() {
        state = nullptr;
        hleGBI = nullptr;
        extendedFunction = gbiManager.getExtendedFunction();
    }

    void Interpreter::setup(State *state) {
        this->state = state;
    }

    void Interpreter::loadUCodeGBI(uint32_t textAddress, uint32_t dataAddress, bool resetFromTask) {
        if (!resetFromTask) {
            state->flush();
        }

        const uint32_t AddressMask = 0xFFFFF8;
        const uint32_t maskedTextAddress = textAddress & AddressMask;
        const uint32_t maskedDataAddress = dataAddress & AddressMask;
        if ((UCode.textAddress != maskedTextAddress) || (UCode.dataAddress != maskedDataAddress)) {
            hleGBI = gbiManager.getGBIForUCode(state->RDRAM, maskedTextAddress, maskedDataAddress);
            if (hleGBI != nullptr) {
                state->rsp->setGBI(hleGBI);
            }

            UCode.textAddress = maskedTextAddress;
            UCode.dataAddress = maskedDataAddress;
        }

        if (hleGBI != nullptr) {
            GBIReset resetFunction = resetFromTask ? hleGBI->resetFromTask : hleGBI->resetFromLoad;
            if (resetFunction != nullptr) {
                resetFunction(state);
            }
        }
    }

    void Interpreter::processRDPLists(uint32_t dlStartAdddress, DisplayList *dlStart, DisplayList *dlEnd) {
        state->dlCpuProfiler.start();

        // Update the state with the current display list address.
        state->displayListAddress = dlStartAdddress;
        state->displayListCounter++;

        // Check RDRAM if required.
        state->checkRDRAM();

        GBI *rdpGBI = state->rdp->gbi;
        constexpr unsigned int opCodeMask = 0x3F;

        // Run the command interpreter.
        assert(rdpGBI != nullptr);
        DisplayList *dl = dlStart;
        uint8_t opCode;
        GBIFunction func;
        uint32_t cmdLength;
        size_t pendingCommandRemainingBytes = state->rdp->pendingCommandRemainingBytes;

        if (dlStart >= dlEnd) {
            state->dlCpuProfiler.end();
            return;
        }

        if (pendingCommandRemainingBytes != 0) {
            // Copy the remaining command bytes from the current displaylist
            uint32_t toCopy = (uint32_t)std::min(pendingCommandRemainingBytes, (uintptr_t)dlEnd - (uintptr_t)dl);
            memcpy(state->rdp->pendingCommandBuffer.data() + state->rdp->pendingCommandCurrentBytes, dl, toCopy);

            // Modify start to skip the copied bytes
            dl = (DisplayList *)(toCopy + (uintptr_t)dl);

            // Check if we've copied all of the bytes of the command into the buffer
            if (pendingCommandRemainingBytes == toCopy) {
                // All bytes have been copied, so run the completed command
                DisplayList *pendingCommand = (DisplayList *)state->rdp->pendingCommandBuffer.data();
                opCode = (pendingCommand->w0 >> 24) & opCodeMask;
                func = rdpGBI->map[opCode];

                if (func != nullptr) {
                    func(state, &pendingCommand);
                }
                else {
                    RT64_LOG_PRINTF("DL Parser ran into an unknown RDP opCode: %u / 0x%X", opCode, opCode);
                }

                state->rdp->pendingCommandCurrentBytes = 0;
                state->rdp->pendingCommandRemainingBytes = 0;
            }
            // Not all of the bytes were copied, so adjust RDP state accordingly and exit.
            else {
                state->rdp->pendingCommandCurrentBytes += toCopy;
                state->rdp->pendingCommandRemainingBytes -= toCopy;
                state->dlCpuProfiler.end();
                return;
            }
        }

        // Create a dummy pointer and pass that, since displaylist pointer incrementing is handled differently in LLE.
        DisplayList *dummy;
        while ((dl != nullptr) && ((dlEnd == nullptr) || (dl < dlEnd))) {
            opCode = (dl->w0 >> 24) & opCodeMask;

            if ((extendedOpCode != 0) && (opCode == extendedOpCode)) {
                dummy = dl;
                extendedFunction(state, &dl);
                cmdLength = 1;
            }
            else {
                func = rdpGBI->map[opCode];
                cmdLength = state->rdp->commandWordLengths[opCode];

#       ifdef DUMP_DISPLAY_LISTS
                RT64_LOG_PRINTF("0x%08X 0x%08X", dl->w0, dl->w1);
#       endif

                // Check if this command is unfinished and store the partial contents if so.
                if (dl + cmdLength > dlEnd) {
                    uint32_t toCopy = (uint32_t)((uintptr_t)dlEnd - (uintptr_t)dl);
                    memcpy(state->rdp->pendingCommandBuffer.data(), dl, toCopy);
                    state->rdp->pendingCommandCurrentBytes = toCopy;
                    state->rdp->pendingCommandRemainingBytes = cmdLength * sizeof(DisplayList) - toCopy;
                    break;
                }

                if (func != nullptr) {
                    dummy = dl;
                    func(state, &dummy);
                }
                else {
                    RT64_LOG_PRINTF("DL Parser ran into an unknown RDP opCode: %u / 0x%X", opCode, opCode);
                }
            }

            if (dl != nullptr) {
                dl += cmdLength;
            }
        }

        state->dlCpuProfiler.end();
    }

    void Interpreter::processDisplayLists(uint32_t dlStartAdddress, DisplayList *dlStart) {
        assert(hleGBI != nullptr);

        state->dlCpuProfiler.start();

        // Update the state with the current display list address.
        state->displayListAddress = dlStartAdddress;
        state->displayListCounter++;

        // Check RDRAM if required.
        state->checkRDRAM();

        // Run the command interpreter.
        DisplayList *dl = dlStart;
        DisplayList *lastNonZero = nullptr;
        DisplayList *zeroRunStart = nullptr;
        uint32_t lastNonZeroW0 = 0;
        uint32_t lastNonZeroW1 = 0;
        uint64_t commandCount = 0;
        uint64_t zeroRunLength = 0;
        struct FlowEvent {
            DisplayList *command;
            DisplayList *result;
            uint32_t w0;
            uint32_t w1;
            size_t returnDepthBefore;
            size_t returnDepthAfter;
        };
        FlowEvent flowEvents[64] = {};
        uint64_t flowEventCount = 0;
        uint8_t opCode;
        GBIFunction func;
        while (dl != nullptr) {
            const uintptr_t rdramBegin = reinterpret_cast<uintptr_t>(state->RDRAM);
            const uintptr_t rdramEnd = rdramBegin + RDRAMSize + 1;
            const uintptr_t dlAddress = reinterpret_cast<uintptr_t>(dl);
            const bool invalidAddress = (dlAddress < rdramBegin) ||
                ((dlAddress + sizeof(DisplayList)) > rdramEnd);
            const bool runawayList = commandCount >= 100000;
            if (invalidAddress || runawayList) {
                std::fprintf(stderr,
                    "[rt64:bad-dl] reason=%s start=%08X dl=%p commands=%llu "
                    "last_nonzero=%p/%08X:%08X zero_start=%p zero_count=%llu "
                    "returns=%zu segments=%08X,%08X,%08X,%08X half1=%08X\n",
                    invalidAddress ? "address" : "runaway",
                    dlStartAdddress, static_cast<void *>(dl),
                    static_cast<unsigned long long>(commandCount),
                    static_cast<void *>(lastNonZero), lastNonZeroW0, lastNonZeroW1,
                    static_cast<void *>(zeroRunStart),
                    static_cast<unsigned long long>(zeroRunLength),
                    state->returnAddressStack.size(),
                    state->rsp->segments[0], state->rsp->segments[1],
                    state->rsp->segments[2], state->rsp->segments[3],
                    state->microcode.half1);
                const uint64_t flowStart = (flowEventCount > 64) ? (flowEventCount - 64) : 0;
                for (uint64_t i = flowStart; i < flowEventCount; i++) {
                    const FlowEvent &event = flowEvents[i % 64];
                    std::fprintf(stderr,
                        "[rt64:dl-flow] #%llu command=%p/%08X:%08X result=%p "
                        "returns=%zu->%zu\n",
                        static_cast<unsigned long long>(i),
                        static_cast<void *>(event.command), event.w0, event.w1,
                        static_cast<void *>(event.result),
                        event.returnDepthBefore, event.returnDepthAfter);
                }
                static bool dumpedBadRdram = false;
                if (!dumpedBadRdram) {
                    dumpedBadRdram = true;
                    if (std::FILE *dump = std::fopen("/tmp/turok2-rdram-bad.bin", "wb")) {
                        std::fwrite(state->RDRAM, 1, RDRAMSize, dump);
                        std::fclose(dump);
                        std::fprintf(stderr,
                            "[rt64:bad-dl] dumped %u bytes to /tmp/turok2-rdram-bad.bin\n",
                            RDRAMSize);
                    }
                }
                dl = nullptr;
                break;
            }

            commandCount++;
            if ((dl->w0 == 0) && (dl->w1 == 0)) {
                if (zeroRunLength == 0) {
                    zeroRunStart = dl;
                }
                zeroRunLength++;
            }
            else {
                lastNonZero = dl;
                lastNonZeroW0 = dl->w0;
                lastNonZeroW1 = dl->w1;
                zeroRunStart = nullptr;
                zeroRunLength = 0;
            }

            opCode = (dl->w0 >> 24);
            DisplayList *commandDl = dl;
            const uint32_t commandW0 = dl->w0;
            const uint32_t commandW1 = dl->w1;
            const size_t returnDepthBefore = state->returnAddressStack.size();

            if ((extendedOpCode != 0) && (opCode == extendedOpCode)) {
                extendedFunction(state, &dl);
            }
            else {
                func = hleGBI->map[opCode];

#       ifdef DUMP_DISPLAY_LISTS
                RT64_LOG_PRINTF("0x%08X 0x%08X", dl->w0, dl->w1);
#       endif

                if (func != nullptr) {
                    func(state, &dl);
                }
                else {
                    RT64_LOG_PRINTF("DL Parser ran into an unknown opCode (GBI %u): %u / 0x%X", uint32_t(hleGBI->ucode), opCode, opCode);
                }
            }

            if ((dl != commandDl) || (opCode == 0xDE) || (opCode == 0xDF)) {
                flowEvents[flowEventCount % 64] = {
                    commandDl,
                    dl,
                    commandW0,
                    commandW1,
                    returnDepthBefore,
                    state->returnAddressStack.size(),
                };
                flowEventCount++;
            }

            if (dl != nullptr) {
                dl++;
            }
        }

        state->dlCpuProfiler.end();
    }
};
