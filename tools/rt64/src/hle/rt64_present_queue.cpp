//
// RT64
//

#include "rt64_present_queue.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>

#include "common/rt64_thread.h"
#include "rhi/rt64_render_hooks.h"

#include "rt64_workload_queue.h"
#include "hle/rt64_turok2_adon_cover.h"

namespace RT64 {
    static bool viRowCorrectedAddress(const VI &vi, uint32_t &correctedAddress) {
        const uint32_t viWidth = uint32_t(vi.fbSize().x);
        const uint32_t viSiz = vi.fbSiz();
        if ((viWidth == 0) || (viWidth > 640) || (viSiz > 3)) {
            return false;
        }

        const uint32_t viBitsPerPixel = 4U << viSiz;
        const uint32_t viRowBytes = (viWidth * viBitsPerPixel + 7U) / 8U;
        const uint64_t address = uint64_t(vi.fbAddress()) + viRowBytes;
        if (address > 0xFFFFFFFFULL) {
            return false;
        }

        correctedAddress = uint32_t(address);
        return true;
    }

    static bool framebufferMatchesVI(const Framebuffer *fb, const VI &vi,
                                     const std::vector<uint32_t> &availableAddresses) {
        const uint32_t viAddress = vi.fbAddress();
        if (std::find(availableAddresses.begin(), availableAddresses.end(), viAddress) != availableAddresses.end()) {
            return fb->addressStart == viAddress;
        }

        uint32_t correctedAddress = 0;
        if (viRowCorrectedAddress(vi, correctedAddress) &&
            (std::find(availableAddresses.begin(), availableAddresses.end(), correctedAddress) != availableAddresses.end())) {
            return fb->addressStart == correctedAddress;
        }

        return fb->contains(viAddress, viAddress + 1);
    }

    // PresentQueue

    PresentQueue::PresentQueue() {
        reset();
    }

    PresentQueue::~PresentQueue() {
        presentThreadRunning = false;
        cursorCondition.notify_all();

        if (presentThread != nullptr) {
            presentThread->join();
            delete presentThread;
        }

        presentIdCondition.notify_all();
    }

    void PresentQueue::reset() {
        threadCursor = 0;
        writeCursor = 0;
        barrierCursor = 0;
        presentId = 0;
    }

    void PresentQueue::advanceToNextPresent() {
        int nextWriteCursor = (writeCursor + 1) % presents.size();

        // Stall the thread until the barrier is lifted if we're trying to write on a present being used by the GPU.
        bool waitForBarrier;
        do {
            const std::scoped_lock lock(cursorMutex);
            waitForBarrier = (nextWriteCursor == barrierCursor);
        } while (waitForBarrier);

        // Modify the cursor and notify anything waiting on the queue.
        {
            const std::scoped_lock lock(cursorMutex);
            writeCursor = nextWriteCursor;
        }

        cursorCondition.notify_all();
    }

    void PresentQueue::repeatLastPresent() {
        {
            const std::scoped_lock lock(cursorMutex);
            threadCursor = previousWriteCursor();
        }

        cursorCondition.notify_all();
    }

    uint32_t PresentQueue::previousWriteCursor() const {
        if (writeCursor > 0) {
            return writeCursor - 1;
        }
        else {
            return uint32_t(presents.size()) - 1;
        }
    }

    void PresentQueue::waitForIdle() {
        std::unique_lock<std::mutex> threadLock(threadMutex);
    }

    void PresentQueue::waitForPresentId(uint64_t waitId) {
        std::unique_lock<std::mutex> presentLock(presentIdMutex);
        presentIdCondition.wait(presentLock, [&]() {
            return (waitId <= presentId) || !presentThreadRunning;
        });
    }

    void PresentQueue::setup(const External &ext) {
        this->ext = ext;

        viRenderer = std::make_unique<VIRenderer>();

        presentThreadRunning = true;
        presentThread = new std::thread(&PresentQueue::threadLoop, this);
    }

    void PresentQueue::threadPresent(const Present &present, bool &swapChainValid) {
        FramebufferManager &fbManager = ext.sharedResources->framebufferManager;
        RenderTargetManager &targetManager = ext.sharedResources->renderTargetManager;
        const bool usingMSAA = (targetManager.multisampling.sampleCount > 1);
        hlslpp::float2 resolutionScale;
        EnhancementConfiguration::Presentation::Mode presentationMode;
        bool removeBlackBorders;
        UserConfiguration::RefreshRate refreshRate;
        UserConfiguration::Filtering filtering;
        uint32_t viOriginalRate;
        uint32_t targetRate;
        {
            std::scoped_lock<std::mutex> configurationLock(ext.sharedResources->configurationMutex);
            resolutionScale = ext.sharedResources->resolutionScale;
            presentationMode = ext.sharedResources->enhancementConfig.presentation.mode;
            removeBlackBorders = ext.sharedResources->enhancementConfig.presentation.removeBlackBorders;
            refreshRate = ext.sharedResources->userConfig.refreshRate;
            filtering = ext.sharedResources->userConfig.filtering;
            viOriginalRate = ext.sharedResources->viOriginalRate;
            targetRate = ext.sharedResources->targetRate;
        }

        RenderTarget *colorTarget = nullptr;
        int32_t framesToPresent = 1;
        bool lockedWorkloadMutex = false;
        InterpolatedFrameCounters &frameCounters = ext.sharedResources->interpolatedFrames[ext.sharedResources->interpolatedFramesIndex];

        // TODO: There's a possible race condition interactions that can happen while the workload
        // queue is rendering extra frames and the present event is processed while it's generating
        // interpolated frames. When the framebuffer manager or the render target manager maps are
        // modified while the present queue is retrieving the framebuffer or the target. These can
        // likely be solved by locking the access to the managers during modification.
        
        // Perform any external write operations indicated by the event.
        if (!present.fbOperations.empty()) {
            const std::scoped_lock lock(screenFbChangePoolMutex);
            {
                RenderWorkerExecution workerExecution(ext.presentGraphicsWorker);
                fbManager.performOperations(ext.presentGraphicsWorker, &screenFbChangePool, nullptr, ext.shaderLibrary, nullptr,
                    present.fbOperations, targetManager, resolutionScale, 0, 0, nullptr);
            }
        }

        // Present the VI specified by the event.
        // Attempt to find the matching framebuffer for the VI based on the origin address.
        // If that fails, we look at the shared storage.
        if (present.screenVI.visible()) {
            Framebuffer *viFb = nullptr;
            uint32_t viCorrectedAddress = 0;
            const bool hasViCorrectedAddress = viRowCorrectedAddress(present.screenVI, viCorrectedAddress);
            if (!viewRDRAM) {
                viFb = fbManager.find(present.screenVI.fbAddress());
                // Turok 2 programs VI_ORIGIN one scanline before the address
                // passed to G_SETCIMG (480 pixels * 16 bpp = 0x3C0 bytes).
                // Resolve that conventional field/overscan offset back to the
                // actual render target before considering an older framebuffer.
                if ((viFb == nullptr) && hasViCorrectedAddress) {
                    viFb = fbManager.find(viCorrectedAddress);
                }
                // Only use an overlapping framebuffer as a last resort. With
                // contiguous rotating CFBs, VI_ORIGIN can also be the final row
                // of the previous image; choosing by recency before the exact
                // row-corrected address made startup depend on thread timing.
                if (viFb == nullptr) {
                    const uint32_t viAddress = present.screenVI.fbAddress();
                    viFb = fbManager.findMostRecentContaining(viAddress, viAddress + 1);
                }
            }

            Framebuffer *presentFb = viFb;
            
            // Show the framebuffer the debugger has requested instead.
            if (present.debuggerFramebuffer.view) {
                Framebuffer *candidateFb = fbManager.find(present.debuggerFramebuffer.address);
                if (candidateFb != nullptr) {
                    presentFb = candidateFb;
                }
            }

            // Diagnostic view of Turok 2's recurring auxiliary color target.
            // This never changes the default presentation path.
            if (std::getenv("TUROK2_PRESENT_AUX") != nullptr) {
                Framebuffer *candidateFb = fbManager.find(0x00700000);
                if (candidateFb != nullptr) {
                    presentFb = candidateFb;
                }
            }

            // In a triple-buffered game the VI event can arrive before RT64 has
            // created the framebuffer selected for the next scanout. Skip
            // buffering still has the last completed color image and the VI
            // history needed to identify it, so use that image instead of
            // falling back to a stale/black RDRAM upload for one field.
            if ((presentFb == nullptr) && !present.debuggerFramebuffer.view &&
                (presentationMode == EnhancementConfiguration::Presentation::Mode::SkipBuffering)) {
                for (uint32_t colorAddress : ext.sharedResources->colorImageAddressVector) {
                    Framebuffer *colorFb = fbManager.find(colorAddress);
                    if (colorFb == nullptr) {
                        continue;
                    }

                    for (size_t h = 0; h < viHistory.history.size(); h++) {
                        const VIHistory::Present &entry = viHistory.history[h];
                        const bool addressMatches = framebufferMatchesVI(
                            colorFb, entry.vi, ext.sharedResources->colorImageAddressVector);
                        if (addressMatches &&
                            (colorFb->width == entry.fbWidth) &&
                            (colorFb->siz == entry.vi.fbSiz()) &&
                            entry.vi.compatibleWith(present.screenVI)) {
                            presentFb = colorFb;
                            break;
                        }
                    }

                    if (presentFb != nullptr) {
                        break;
                    }
                }

                // Prefer a completed screen-sized color image over an off-screen
                // aux target (Turok 2's 0x00700000). Fill-only pairs are already
                // omitted from colorImageAddressVector.
                if (presentFb == nullptr) {
                    const uint32_t viWidth = uint32_t(present.screenVI.fbSize().x);
                    const uint8_t viSiz = present.screenVI.fbSiz();
                    for (uint32_t colorAddress : ext.sharedResources->colorImageAddressVector) {
                        if (colorAddress == 0x00700000) {
                            continue;
                        }
                        Framebuffer *colorFb = fbManager.find(colorAddress);
                        if ((colorFb != nullptr) &&
                            (colorFb->width == viWidth) &&
                            (colorFb->siz == viSiz)) {
                            presentFb = colorFb;
                            break;
                        }
                    }
                }
            }

            // Camera cuts submit a G_CYC_FILL of the next rotating CFB before the
            // 3D list. At 60 unique DLs SkipBuffering used to scan that fill out
            // (black / stretched leftover geometry for 1-3 frames). Hold the last
            // swapchain image until this workload has a presentable 3D color image.
            constexpr uint32_t TurokAuxColorImage = 0x00700000;
            const auto &colorSet = ext.sharedResources->colorImageAddressSet;
            const auto &colorVector = ext.sharedResources->colorImageAddressVector;
            const auto presentable = [&](uint32_t addr) {
                return std::find(colorVector.begin(), colorVector.end(), addr) != colorVector.end();
            };
            const auto &fillOnlySet = ext.sharedResources->fillOnlyColorAddresses;
            const auto holdIncompleteColor = [&](Framebuffer *fb) {
                if ((fb == nullptr) ||
                    (presentationMode != EnhancementConfiguration::Presentation::Mode::SkipBuffering) ||
                    present.debuggerFramebuffer.view ||
                    swapChainFramebuffers.empty()) {
                    return false;
                }
                if (fb->addressStart == TurokAuxColorImage) {
                    return true;
                }
                return (colorSet.find(fb->addressStart) != colorSet.end()) && !presentable(fb->addressStart);
            };

            if (holdIncompleteColor(presentFb)) {
                notifyPresentId(present);
                return;
            }
            
            if (presentFb != nullptr) {
                const bool allowInterpolation =
                    (targetRate > 0) && (targetRate > viOriginalRate);
                if (!allowInterpolation) {
                    presentFb->interpolationEnabled = false;
                }
                for (uint32_t colorAddress : ext.sharedResources->colorImageAddressVector) {
                    Framebuffer *colorFb = fbManager.find(colorAddress);
                    if (colorFb == nullptr) {
                        continue;
                    }

                    // Always default to interpolation being disabled for all modified framebuffers.
                    // Unique 60 Hz presents keep this off: targetRate is 0 or equal to the
                    // authored source, so RT64 must not mark the color as interpolable.
                    colorFb->interpolationEnabled = false;
                    
                    // When the skip buffering option is on, we check the video history to find if any of the framebuffers that
                    // were drawn in this frame have been previously used for presentation. This is ignored when the debugger
                    // has forced viewing a particular framebuffer.
                    //
                    // Turok 2 draws into a rotating CFB that VI is not showing yet. Promoting that
                    // back buffer here scans out fill / first-triangle tasks before Draw finishes.
                    // Keep the resolved VI image while this workload did not touch it.
                    bool colorUsedForPresentation = false;
                    const bool viStillOnPreviousBuffer =
                        (viFb != nullptr) &&
                        (colorSet.find(viFb->addressStart) == colorSet.end());
                    if (!present.debuggerFramebuffer.view &&
                        (presentationMode == EnhancementConfiguration::Presentation::Mode::SkipBuffering) &&
                        !viStillOnPreviousBuffer) {
                        if (colorAddress == TurokAuxColorImage) {
                            continue;
                        }
                        for (size_t h = 0; h < viHistory.history.size(); h++) {
                            const VIHistory::Present &entry = viHistory.history[h];
                            const bool addressMatches = framebufferMatchesVI(colorFb, entry.vi, colorVector);
                            if (addressMatches && (colorFb->width == entry.fbWidth) && (colorFb->siz == entry.vi.fbSiz()) && entry.vi.compatibleWith(present.screenVI)) {
                                presentFb = colorFb;
                                colorUsedForPresentation = true;
                                break;
                            }
                        }
                    }

                    // Present early (or games that behave like it) will make it so that the presented image is a color image
                    // that the workload modified. We run a basic check to see if that holds true to indicate it was presented
                    // so interpolation is possible. Also enable interpolation if the color buffer is known to be used for presentation.
                    if (allowInterpolation &&
                        (colorUsedForPresentation || (colorFb == presentFb))) {
                        colorFb->interpolationEnabled = true;
                        if (presentFb != nullptr) {
                            presentFb->interpolationEnabled = true;
                        }
                        break;
                    }
                }

                // A completed framebuffer in a rotating VI set may be selected
                // one or two workloads after it was last present in the color
                // vector. Once the exact VI target has been resolved, keep it
                // eligible for frame matching instead of disabling interpolation
                // merely because a sibling buffer was rendered most recently.
                if (allowInterpolation &&
                    !present.debuggerFramebuffer.view &&
                    (presentationMode == EnhancementConfiguration::Presentation::Mode::SkipBuffering) &&
                    (viFb != nullptr) && (presentFb == viFb)) {
                    presentFb->interpolationEnabled = true;
                }

                if (holdIncompleteColor(presentFb)) {
                    if (lockedWorkloadMutex) {
                        ext.sharedResources->workloadMutex.unlock();
                        lockedWorkloadMutex = false;
                    }
                    notifyPresentId(present);
                    return;
                }

                if (presentFb->interpolationEnabled) {
                    framesToPresent = frameCounters.count;
                }
                else {
                    lockedWorkloadMutex = true;
                    ext.sharedResources->workloadMutex.lock();
                }

                static const bool interpolationDiagnostics = std::getenv("TUROK2_INTERPOLATION_DIAGNOSTICS") != nullptr;
                static uint64_t presentationDiagnosticCounter = 0;
                if (interpolationDiagnostics) {
                    presentationDiagnosticCounter++;
                    if ((presentationDiagnosticCounter <= 30) || ((presentationDiagnosticCounter % 120) == 0)) {
                        std::fprintf(stderr,
                            "[rt64:present] present=%llu vi=%08X corrected=%08X selected=%08X colors=%zu interpolation=%d frames=%d mode=%d\n",
                            static_cast<unsigned long long>(presentationDiagnosticCounter),
                            present.screenVI.fbAddress(),
                            hasViCorrectedAddress ? viCorrectedAddress : 0,
                            presentFb->addressStart,
                            ext.sharedResources->colorImageAddressVector.size(),
                            presentFb->interpolationEnabled ? 1 : 0,
                            framesToPresent,
                            static_cast<int>(presentationMode));
                    }
                }

                // Per-present trace. The flicker's gap pattern in a capture is a
                // signature, so every present is numbered and its attributes
                // recorded; the culprit is whichever attribute changes on the
                // same irregular spacing. No clock alignment needed.
                static const bool presentTrace = std::getenv("TUROK2_PRESENT_TRACE") != nullptr;
                static uint64_t presentTraceIndex = 0;
                if (presentTrace) {
                    presentTraceIndex++;
                    const Turok2AdonCover cover = turok2_adon_cover_copy();
                    std::fprintf(stderr,
                        "[trace] n=%llu vi=%08X fb=%08X shownFill=%d shownNoScene=%d liveFill=%d liveNoScene=%d inSet=%d presentable=%d colors=%zu interp=%d "
                        "draw=%u fc=%u cinema=%u fade=%.3f fst=%u cam=%08X flash=%d/%u rgb=%02X%02X%02X fog=%02X%02X%02X skip=%u rebuild=%u live=%u\n",
                        static_cast<unsigned long long>(presentTraceIndex),
                        present.screenVI.fbAddress(),
                        presentFb->addressStart,
                        (ext.sharedResources->fillOnlyColorAddressesPrev.find(presentFb->addressStart) !=
                            ext.sharedResources->fillOnlyColorAddressesPrev.end()) ? 1 : 0,
                        (ext.sharedResources->noSceneColorAddressesPrev.find(presentFb->addressStart) !=
                            ext.sharedResources->noSceneColorAddressesPrev.end()) ? 1 : 0,
                        (fillOnlySet.find(presentFb->addressStart) != fillOnlySet.end()) ? 1 : 0,
                        (ext.sharedResources->noSceneColorAddresses.find(presentFb->addressStart) !=
                            ext.sharedResources->noSceneColorAddresses.end()) ? 1 : 0,
                        (colorSet.find(presentFb->addressStart) != colorSet.end()) ? 1 : 0,
                        presentable(presentFb->addressStart) ? 1 : 0,
                        ext.sharedResources->colorImageAddressVector.size(),
                        presentFb->interpolationEnabled ? 1 : 0,
                        cover.draw, cover.frame_count, cover.cinema,
                        cover.fade_alpha, cover.fade_status, cover.cam,
                        cover.flash_mode, cover.flash,
                        cover.flash_r, cover.flash_g, cover.flash_b,
                        cover.fog_r, cover.fog_g, cover.fog_b,
                        cover.lsb_skip, cover.lsb_rebuild, cover.live);
                }

                RenderTargetKey colorTargetKey(presentFb->addressStart, presentFb->width, presentFb->siz, Framebuffer::Type::Color);
                colorTarget = &targetManager.get(colorTargetKey, true);
                if (!colorTarget->isEmpty()) {
                    // If a depth framebuffer is about to be shown, convert it to color.
                    if (presentFb->isLastWriteDifferent(Framebuffer::Type::Color)) {
                        RenderTargetKey otherColorTargetKey(presentFb->addressStart, presentFb->width, presentFb->siz, presentFb->lastWriteType);
                        RenderTarget &otherColorTarget = targetManager.get(otherColorTargetKey, true);
                        if (!otherColorTarget.isEmpty()) {
                            const FixedRect &r = presentFb->lastWriteRect;
                            RenderWorkerExecution workerExecution(ext.presentGraphicsWorker);
                            colorTarget->copyFromTarget(ext.presentGraphicsWorker, &otherColorTarget, r.left(false), r.top(false), r.width(false, true), r.height(false, true), ext.shaderLibrary);
                        }
                    }
                }
                else {
                    colorTarget = nullptr;
                }

                // The target actually sampled by the VI renderer. A key built
                // from a changed width/siz resolves to a freshly created empty
                // target, which would present as a bare clear.
                if (presentTrace) {
                    std::fprintf(stderr,
                        "[target] n=%llu fb=%08X w=%u siz=%u empty=%d scale=%.2f down=%u\n",
                        static_cast<unsigned long long>(presentTraceIndex),
                        presentFb->addressStart, presentFb->width, presentFb->siz,
                        (colorTarget == nullptr) ? 1 : 0,
                        (colorTarget != nullptr) ? colorTarget->resolutionScale.x : 0.0f,
                        (colorTarget != nullptr) ? colorTarget->downsampleMultiplier : 0u);
                }

                if (!present.paused && (viHistory.top().vi != present.screenVI)) {
                    viHistory.pushVI(present.screenVI, presentFb->width);
                }
            }
            else {
                uint32_t fbAddress = present.screenVI.fbAddress();

                // Use a scratch framebuffer to upload the RAM to the render target.
                hlslpp::uint2 fbSize = present.screenVI.fbSize();

                // The VI registers hold nonsense for a frame or two while a game
                // changes video mode, and this path handed the result straight to
                // texture creation. Turok 2 changes mode once it finds the
                // Expansion Pak, and a height of 4294965760, which is -15360 read
                // as unsigned, reached Metal and tripped its descriptor
                // validation. The VI cannot scan out more than 640 by 576, so
                // treat anything past that as the transient garbage it is.
                constexpr uint32_t MaxViWidth = 640;
                constexpr uint32_t MaxViHeight = 576;
                const uint32_t fbWidth = (uint32_t(fbSize.x) > MaxViWidth) ? MaxViWidth : uint32_t(fbSize.x);
                const uint32_t fbHeight = (uint32_t(fbSize.y) > MaxViHeight) ? MaxViHeight : uint32_t(fbSize.y);

                scratchFb.addressStart = fbAddress;
                scratchFb.width = fbWidth;
                scratchFb.height = fbHeight;
                scratchFb.siz = present.screenVI.fbSiz();

                lockedWorkloadMutex = true;
                ext.sharedResources->workloadMutex.lock();

                RenderTargetKey colorTargetKey(fbAddress, scratchFb.width, scratchFb.siz, Framebuffer::Type::Color);
                colorTarget = &targetManager.get(colorTargetKey, true);
                colorTarget->resize(ext.presentGraphicsWorker, scratchFb.width, scratchFb.height);
                colorTarget->resolutionScale = { 1.0f, 1.0f };
                colorTarget->downsampleMultiplier = 1;

                scratchFb.nativeTarget.resetBufferHistory();

                {
                    RenderWorkerExecution workerExecution(ext.presentGraphicsWorker);
                    colorTarget->clearColorTarget(ext.presentGraphicsWorker);
                    FramebufferChange *colorFbChange = scratchFb.readChangeFromBytes(ext.presentGraphicsWorker, scratchFbChangePool, Framebuffer::Type::Color,
                        G_IM_FMT_RGBA, present.storage.data(), 0, scratchFb.height, ext.shaderLibrary);

                    if (colorFbChange != nullptr) {
                        colorTarget->copyFromChanges(ext.presentGraphicsWorker, *colorFbChange, scratchFb.width, scratchFb.height, 0, ext.shaderLibrary);
                    }
                }

                scratchFbChangePool.reset();

                if (!present.paused && (viHistory.top().vi != present.screenVI)) {
                    viHistory.pushVI(present.screenVI, fbWidth);
                }
            }
        }

        // Create the framebuffers if necessary.
        if (swapChainFramebuffers.empty()) {
            uint32_t textureCount = ext.swapChain->getTextureCount();
            swapChainFramebuffers.resize(textureCount);
            for (uint32_t i = 0; i < textureCount; i++) {
                const RenderTexture *swapChainTexture = ext.swapChain->getTexture(i);
                swapChainFramebuffers[i] = ext.device->createFramebuffer(RenderFramebufferDesc(&swapChainTexture, 1));
            }
        }
        
        for (int32_t i = 0; i < framesToPresent; i++) {
            uint32_t frameCountersNextPresented = 0;
            if ((framesToPresent > 1) && (usingMSAA || (i > 0))) {
                // Stall until the interpolated color target is available.
                const uint32_t targetIndex = usingMSAA ? i : (i - 1);
                std::unique_lock<std::mutex> interpolatedLock(ext.sharedResources->interpolatedMutex);
                ext.sharedResources->interpolatedCondition.wait(interpolatedLock, [&]() {
                    return (frameCounters.available > targetIndex) || ((frameCounters.available == targetIndex) && frameCounters.skipped);
                });

                // Do not present any more frames after this one after reaching the last available frame if the workload was skipped.
                if ((frameCounters.available == targetIndex) && frameCounters.skipped) {
                    framesToPresent = std::min(int(frameCounters.available), i + 1);
                    frameCountersNextPresented = frameCounters.count;
                }
                else {
                    frameCountersNextPresented = frameCounters.presented + 1;
                }

                if (i < framesToPresent) {
                    uint32_t targetIndex = usingMSAA ? i : (i - 1);
                    colorTarget = ext.sharedResources->interpolatedColorTargets[targetIndex].get();
                }
                else {
                    colorTarget = nullptr;
                }
            }
            else if (framesToPresent == 1) {
                frameCountersNextPresented = frameCounters.count;
            }

            uint32_t swapChainIndex = 0;
            const bool presentFrame = (i < framesToPresent) && swapChainValid;
            if (presentFrame) {
                swapChainValid = ext.swapChain->acquireTexture(acquiredSemaphore.get(), &swapChainIndex);
            }

            if (presentFrame && swapChainValid) {
                // Draw the framebuffer with the VI renderer.
                RenderTexture *swapChainTexture = ext.swapChain->getTexture(swapChainIndex);
                RenderFramebuffer *swapChainFramebuffer = swapChainFramebuffers[swapChainIndex].get();
                RenderCommandList *commandList = ext.presentGraphicsWorker->commandList.get();
                commandList->begin();
                commandList->barriers(RenderBarrierStage::GRAPHICS, RenderTextureBarrier(swapChainTexture, RenderTextureLayout::COLOR_WRITE));
                
                VIRenderer::RenderParams renderParams;
                if (colorTarget != nullptr) {
                    renderParams.device = ext.device;
                    renderParams.commandList = commandList;
                    renderParams.swapChain = ext.swapChain;
                    renderParams.shaderLibrary = ext.shaderLibrary;
                    renderParams.textureFormat = colorTarget->format;
                    renderParams.resolutionScale = colorTarget->resolutionScale;
                    renderParams.downsamplingScale = 1;
                    renderParams.filtering = filtering;
                    renderParams.vi = &present.screenVI;
                    renderParams.removeBlackBorders = removeBlackBorders;

                    const bool useDownsampling = (colorTarget->downsampleMultiplier > 1);
                    if (useDownsampling) {
                        colorTarget->downsampleTarget(ext.presentGraphicsWorker, ext.shaderLibrary);
                        renderParams.texture = colorTarget->downsampledTexture.get();
                        renderParams.textureWidth = colorTarget->width / colorTarget->downsampleMultiplier;
                        renderParams.textureHeight = colorTarget->height / colorTarget->downsampleMultiplier;
                        renderParams.downsamplingScale = colorTarget->downsampleMultiplier;
                    }
                    else {
                        colorTarget->resolveTarget(ext.presentGraphicsWorker, ext.shaderLibrary);
                        renderParams.texture = colorTarget->getResolvedTexture();
                        renderParams.textureWidth = colorTarget->width;
                        renderParams.textureHeight = colorTarget->height;
                    }
                }
                
                commandList->setFramebuffer(swapChainFramebuffer);
                commandList->clearColor();

                if (renderParams.texture != nullptr) {
                    commandList->barriers(RenderBarrierStage::GRAPHICS, RenderTextureBarrier(renderParams.texture, RenderTextureLayout::SHADER_READ));
                    viRenderer->render(renderParams);
                }

                RenderHookDraw *drawHook = GetRenderHookDraw();
                if (drawHook != nullptr) {
                    drawHook(commandList, swapChainFramebuffer);
                }

                {
                    const std::scoped_lock lock(inspectorMutex);
                    if (inspector != nullptr) {
                        inspector->draw(commandList);
                    }
                    
                    commandList->barriers(RenderBarrierStage::NONE, RenderTextureBarrier(swapChainTexture, RenderTextureLayout::PRESENT));
                    commandList->end();
                    const RenderCommandList *commandList = ext.presentGraphicsWorker->commandList.get();
                    RenderCommandSemaphore *waitSemaphore = acquiredSemaphore.get();
                    RenderCommandSemaphore *signalSemaphore = drawSemaphores[swapChainIndex].get();
                    ext.presentGraphicsWorker->commandQueue->executeCommandLists(&commandList, 1, &waitSemaphore, 1, &signalSemaphore, 1, ext.presentGraphicsWorker->commandFence.get());
                    ext.presentGraphicsWorker->wait();
                }
            }

            if (lockedWorkloadMutex) {
                ext.sharedResources->workloadMutex.unlock();
                lockedWorkloadMutex = false;
            }
            
            if (frameCountersNextPresented > 0) {
                {
                    std::unique_lock<std::mutex> interpolatedLock(ext.sharedResources->interpolatedMutex);
                    frameCounters.presented = frameCountersNextPresented;
                }

                ext.sharedResources->interpolatedCondition.notify_all();
            }

            // As soon as we're done with the first render target, we notify the workload queue it can proceed.
            if (i == 0) {
                notifyPresentId(present);
            }

            if (presentFrame && swapChainValid) {
                // Wait until the approximate time the next present should be at the current intended rate.
                if ((presentTimestamp != Timestamp()) && (targetRate > 0) && (targetRate > viOriginalRate)) {
                    Timer::preciseSleepUntil(presentTimestamp + std::chrono::nanoseconds(1'000'000'000 / targetRate));
                }

                if (presentWaitEnabled) {
                    ext.swapChain->wait();
                }

                RenderCommandSemaphore *waitSemaphore = drawSemaphores[swapChainIndex].get();
                presentTimestamp = Timer::current();
                swapChainValid = ext.swapChain->present(swapChainIndex, &waitSemaphore, 1);
                presentProfiler.logAndRestart();
            }
        }
    }

    void PresentQueue::skipInterpolation() {
        {
            std::unique_lock<std::mutex> interpolatedLock(ext.sharedResources->interpolatedMutex);
            InterpolatedFrameCounters &frameCounters = ext.sharedResources->interpolatedFrames[ext.sharedResources->interpolatedFramesIndex];
            frameCounters.presented = frameCounters.count;
        }

        ext.sharedResources->interpolatedCondition.notify_all();
    }

    void PresentQueue::notifyPresentId(const Present &present) {
        {
            std::scoped_lock<std::mutex> cursorLock(presentIdMutex);
            presentId = present.presentId;
        }

        presentIdCondition.notify_all();
    }
    
    void PresentQueue::threadAdvanceBarrier() {
        std::scoped_lock<std::mutex> cursorLock(cursorMutex);
        barrierCursor = (barrierCursor + 1) % presents.size();
    }

    void PresentQueue::threadLoop() {
        Thread::setCurrentThreadName("RT64 Present");

        // Create the semaphore the acquire method will use.
        acquiredSemaphore = ext.device->createCommandSemaphore();

        // Create as many semaphores to signal as textures there are.
        while (drawSemaphores.size() < ext.swapChain->getTextureCount()) {
            drawSemaphores.emplace_back(ext.device->createCommandSemaphore());
        }

        // Since the swap chain might not need a resize right away, detect present wait.
        presentWaitEnabled = ext.device->getCapabilities().presentWait;

        int processCursor = -1;
        bool skipPresent = false;
        uint32_t displayTimingRate = UINT32_MAX;
        const bool displayTiming = ext.device->getCapabilities().displayTiming;
        bool swapChainValid = !ext.swapChain->needsResize();
        while (presentThreadRunning) {
            {
                std::unique_lock<std::mutex> cursorLock(cursorMutex);
                cursorCondition.wait(cursorLock, [&]() {
                    return (writeCursor != threadCursor) || !presentThreadRunning;
                });

                if (presentThreadRunning) {
                    processCursor = threadCursor;
                    threadCursor = (threadCursor + 1) % presents.size();
                    skipPresent = (writeCursor != threadCursor);
                }
            }

            if (processCursor >= 0) {
                std::unique_lock<std::mutex> threadLock(threadMutex);
                const bool needsResize = ext.swapChain->needsResize() || !swapChainValid;
                if (needsResize) {
                    ext.presentGraphicsWorker->commandList->begin();
                    ext.presentGraphicsWorker->commandList->end();
                    ext.presentGraphicsWorker->execute();
                    ext.presentGraphicsWorker->wait();
                    swapChainValid = ext.swapChain->resize();
                    swapChainFramebuffers.clear();

                    if (swapChainValid) {
                        ext.sharedResources->setSwapChainSize(ext.swapChain->getWidth(), ext.swapChain->getHeight());
                        
                        // Texture count could've changed after resize, so new semaphores are needed.
                        while (drawSemaphores.size() < ext.swapChain->getTextureCount()) {
                            drawSemaphores.emplace_back(ext.device->createCommandSemaphore());
                        }
                    }
                }

                if (needsResize || ext.appWindow->detectWindowMoved()) {
                    ext.appWindow->detectRefreshRate();
                    ext.sharedResources->setSwapChainRate(std::min(ext.appWindow->getRefreshRate(), displayTimingRate));
                }

                if (displayTiming) {
                    uint32_t newDisplayTimingRate = ext.swapChain->getRefreshRate();
                    if (newDisplayTimingRate == 0) {
                        newDisplayTimingRate = UINT32_MAX;
                    }

                    if (newDisplayTimingRate != displayTimingRate) {
                        ext.sharedResources->setSwapChainRate(std::min(ext.appWindow->getRefreshRate(), newDisplayTimingRate));
                        displayTimingRate = newDisplayTimingRate;
                    }
                }

                skipPresent = skipPresent || ext.swapChain->isEmpty();

                Present &present = presents[processCursor];
                ext.workloadQueue->waitForWorkloadId(present.workloadId);

                if (!presentThreadRunning) {
                    continue;
                }

                if (skipPresent) {
                    skipInterpolation();
                    notifyPresentId(present);
                }
                else {
                    threadPresent(present, swapChainValid);
                }

                if (!present.paused) {
                    if (!present.fbOperations.empty()) {
                        const std::scoped_lock lock(screenFbChangePoolMutex);
                        screenFbChangePool.release(present.fbOperations.front().writeChanges.id);
                        present.fbOperations.clear();
                    }

                    threadAdvanceBarrier();
                }

                processCursor = -1;
            }
        }

        // Transition the active swap chain render target out of the present state to avoid live references to the resource.
        uint32_t swapChainIndex = 0;
        if (!ext.swapChain->isEmpty() && ext.swapChain->acquireTexture(acquiredSemaphore.get(), &swapChainIndex)) {
            RenderTexture *swapChainTexture = ext.swapChain->getTexture(swapChainIndex);
            ext.presentGraphicsWorker->commandList->begin();
            ext.presentGraphicsWorker->commandList->barriers(RenderBarrierStage::NONE, RenderTextureBarrier(swapChainTexture, RenderTextureLayout::COLOR_WRITE));
            ext.presentGraphicsWorker->commandList->end();

            const RenderCommandList *commandList = ext.presentGraphicsWorker->commandList.get();
            RenderCommandSemaphore *waitSemaphore = acquiredSemaphore.get();
            ext.presentGraphicsWorker->commandQueue->executeCommandLists(&commandList, 1, &waitSemaphore, 1, nullptr, 0, ext.presentGraphicsWorker->commandFence.get());
            ext.presentGraphicsWorker->wait();
        }
    }
};
