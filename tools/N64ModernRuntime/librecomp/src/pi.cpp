#include <memory>
#include <fstream>
#include <array>
#include <cstdlib>
#include <cstring>
#include <string>
#include <mutex>
#include "recomp.h"
#include "librecomp/addresses.hpp"
#include "librecomp/game.hpp"
#include "librecomp/files.hpp"
#include <ultramodern/ultra64.h>
#include <ultramodern/ultramodern.hpp>

static std::vector<uint8_t> rom;

bool recomp::is_rom_loaded() {
    return !rom.empty();
}

void recomp::set_rom_contents(std::vector<uint8_t>&& new_rom) {
    rom = std::move(new_rom);
}

std::span<const uint8_t> recomp::get_rom() {
    return rom;
}

constexpr uint32_t k1_to_phys(uint32_t addr) {
    return addr & 0x1FFFFFFF;
}

constexpr uint32_t phys_to_k1(uint32_t addr) {
    return addr | 0xA0000000;
}

extern "C" void __osPiGetAccess_recomp(uint8_t* rdram, recomp_context* ctx) {
}

extern "C" void __osPiRelAccess_recomp(uint8_t* rdram, recomp_context* ctx) {
}

extern "C" void osCartRomInit_recomp(uint8_t* rdram, recomp_context* ctx) {
    OSPiHandle* handle = TO_PTR(OSPiHandle, recomp::cart_handle);
    handle->type = 0; // cart
    handle->baseAddress = phys_to_k1(recomp::rom_base);
    handle->domain = 0;

    ctx->r2 = (gpr)recomp::cart_handle;
}

extern "C" void osDriveRomInit_recomp(uint8_t * rdram, recomp_context * ctx) {
    OSPiHandle* handle = TO_PTR(OSPiHandle, recomp::drive_handle);
    handle->type = 1; // bulk
    handle->baseAddress = phys_to_k1(recomp::drive_base);
    handle->domain = 0;

    ctx->r2 = (gpr)recomp::drive_handle;
}

extern "C" void osCreatePiManager_recomp(uint8_t* rdram, recomp_context* ctx) {
    ;
}

void recomp::do_rom_read(uint8_t* rdram, gpr ram_address, uint32_t physical_addr, size_t num_bytes) {
    // TODO use word copies when possible

    if (physical_addr < recomp::rom_base || rom.empty()) {
        fprintf(stderr,
            "Invalid ROM DMA: physical=0x%08X ram=0x%016llX size=0x%zX rom_size=0x%zX\n",
            physical_addr, static_cast<unsigned long long>(ram_address), num_bytes, rom.size());
        std::abort();
    }

    // TODO handle misaligned DMA
    assert((physical_addr & 0x1) == 0 && "Only PI DMA from aligned ROM addresses is currently supported");
    assert((ram_address & 0x7) == 0 && "Only PI DMA to aligned RDRAM addresses is currently supported");
    // Cartridge ROM is mirrored throughout the PI domain. Turok 2 relies on
    // this and issues reads such as 0x1BE40000, which maps to offset 0x1E40000
    // for its 32 MiB ROM.
    size_t rom_offset = static_cast<size_t>(physical_addr - recomp::rom_base) % rom.size();
    const uint32_t ram32 = static_cast<uint32_t>(ram_address);
    const uint32_t watched = 0x801DBBC8u;
    if (ram32 <= watched && static_cast<uint64_t>(ram32) + num_bytes > watched) {
        fprintf(stderr,
            "[pi:watched-resource] phys=%08X romoff=%08zX ram=%08X size=%zX watched+%X\n",
            physical_addr, rom_offset, ram32, num_bytes, watched - ram32);
        fflush(stderr);
    }
    for (size_t i = 0; i < num_bytes; i++) {
        MEM_B(i, ram_address) = rom[rom_offset];
        rom_offset = (rom_offset + 1) % rom.size();
    }
}

void recomp::do_rom_pio(uint8_t* rdram, gpr ram_address, uint32_t physical_addr) {
    assert((physical_addr & 0x3) == 0 && "PIO not 4-byte aligned in device, currently unsupported");
    assert((ram_address & 0x3) == 0 && "PIO not 4-byte aligned in RDRAM, currently unsupported");
    uint8_t* rom_addr = rom.data() + physical_addr - recomp::rom_base;
    MEM_B(0, ram_address) = *rom_addr++;
    MEM_B(1, ram_address) = *rom_addr++;
    MEM_B(2, ram_address) = *rom_addr++;
    MEM_B(3, ram_address) = *rom_addr++;
}

struct {
    std::vector<char> save_buffer;
    std::thread saving_thread;
    std::filesystem::path save_file_path;
    moodycamel::LightweightSemaphore write_sempahore;
    // Used to tell the saving thread that a file swap is pending.
    moodycamel::LightweightSemaphore swap_file_pending_sempahore;
    // Used to tell the consumer thread that the saving thread is ready for a file swap.
    moodycamel::LightweightSemaphore swap_file_ready_sempahore;
    std::mutex save_buffer_mutex;
} save_context;

const std::u8string save_folder = u8"saves";

extern std::filesystem::path config_path;

std::filesystem::path ultramodern::get_save_file_path() {
    return save_context.save_file_path;
}

void set_save_file_path(const std::u8string& subfolder, const std::u8string& name) {
    std::filesystem::path save_folder_path = config_path / save_folder;
    if (!subfolder.empty()) {
        save_folder_path = save_folder_path / subfolder;
    }
    save_context.save_file_path = save_folder_path / (name + u8".bin");
}

void update_save_file() {
    bool saving_failed = false;
    {
        std::ofstream save_file = recomp::open_output_file_with_backup(ultramodern::get_save_file_path(), std::ios_base::binary);

        if (save_file.good()) {
            std::lock_guard lock{ save_context.save_buffer_mutex };
            save_file.write(save_context.save_buffer.data(), save_context.save_buffer.size());
        }
        else {
            saving_failed = true;
        }
    }
    if (!saving_failed) {
        saving_failed = !recomp::finalize_output_file_with_backup(ultramodern::get_save_file_path());
    }
    if (saving_failed) {
        ultramodern::error_handling::message_box("Failed to write to the save file. Check your file permissions and whether the save folder has been moved to Dropbox or similar, as this can cause issues.");
    }
}

extern std::atomic_bool exited;

void saving_thread_func(RDRAM_ARG1) {
    while (!exited) {
        bool save_buffer_updated = false;
        // Repeatedly wait for a new action to be sent.
        constexpr int64_t wait_time_microseconds = 10000;
        constexpr int max_actions = 128;
        int num_actions = 0;

        // Wait up to the given timeout for a write to come in. Allow multiple writes to coalesce together into a single save.
        // Cap the number of coalesced writes to guarantee that the save buffer eventually gets written out to the file even if the game
        // is constantly sending writes.
        while (save_context.write_sempahore.wait(wait_time_microseconds) && num_actions < max_actions) {
            save_buffer_updated = true;
            num_actions++;
        }

        // If an action came through that affected the save file, save the updated contents.
        if (save_buffer_updated) {
            update_save_file();
        }

        if (save_context.swap_file_pending_sempahore.tryWait()) {
            save_context.swap_file_ready_sempahore.signal();
        }
    }
}

void save_write_ptr(const void* in, uint32_t offset, uint32_t count) {
    assert(offset + count <= save_context.save_buffer.size());

    {
        std::lock_guard lock { save_context.save_buffer_mutex };
        memcpy(&save_context.save_buffer[offset], in, count);
    }
    
    save_context.write_sempahore.signal();
}

void save_write(RDRAM_ARG PTR(void) rdram_address, uint32_t offset, uint32_t count) {
    assert(offset + count <= save_context.save_buffer.size());

    {
        std::lock_guard lock { save_context.save_buffer_mutex };
        for (gpr i = 0; i < count; i++) {
            save_context.save_buffer[offset + i] = MEM_B(i, rdram_address);
        }
    }

    save_context.write_sempahore.signal();
}

void save_read(RDRAM_ARG PTR(void) rdram_address, uint32_t offset, uint32_t count) {
    assert(offset + count <= save_context.save_buffer.size());

    std::lock_guard lock { save_context.save_buffer_mutex };
    for (gpr i = 0; i < count; i++) {
        MEM_B(i, rdram_address) = save_context.save_buffer[offset + i];
    }
}

void save_clear(uint32_t start, uint32_t size, char value) {
    assert(start + size < save_context.save_buffer.size());

    {
        std::lock_guard lock { save_context.save_buffer_mutex };
        std::fill_n(save_context.save_buffer.begin() + start, size, value);
    }

    save_context.write_sempahore.signal();
}

size_t get_save_size(recomp::SaveType save_type) {
    switch (save_type) {
        case recomp::SaveType::AllowAll:
        case recomp::SaveType::Flashram:
            return 0x20000;
        case recomp::SaveType::Sram:
            return 0x8000;
        case recomp::SaveType::Eep16k:
            return 0x800;
        case recomp::SaveType::Eep4k:
            return 0x200;
        case recomp::SaveType::None:
            return 0;
    }
    return 0;
}

void read_save_file() {
    std::filesystem::path save_file_path = ultramodern::get_save_file_path();

    // Ensure the save file directory exists.
    std::filesystem::create_directories(save_file_path.parent_path());

    // Read the save file if it exists.
    std::ifstream save_file = recomp::open_input_file_with_backup(save_file_path, std::ios_base::binary);
    if (save_file.good()) {
        save_file.read(save_context.save_buffer.data(), save_context.save_buffer.size());
    }
    else {
        // Otherwise clear the save file to all zeroes.
        std::fill(save_context.save_buffer.begin(), save_context.save_buffer.end(), 0);
    }
}

void ultramodern::init_saving(RDRAM_ARG1) {
    set_save_file_path(u8"", recomp::current_game_id());

    save_context.save_buffer.resize(get_save_size(recomp::get_save_type()));

    read_save_file();

    save_context.saving_thread = std::thread{saving_thread_func, PASS_RDRAM};
}

void ultramodern::change_save_file(const std::u8string& subfolder, const std::u8string& name) {
    // Tell the saving thread that a file swap is pending.
    save_context.swap_file_pending_sempahore.signal();
    // Wait until the saving thread indicates it's ready to swap files.
    save_context.swap_file_ready_sempahore.wait();
    // Perform the save file swap.
    set_save_file_path(subfolder, name);
    read_save_file();
}

void ultramodern::join_saving_thread() {
    if (save_context.saving_thread.joinable()) {
        save_context.saving_thread.join();
    }
}

void do_dma(RDRAM_ARG PTR(OSMesgQueue) mq, uint32_t msg, gpr rdram_address, uint32_t physical_addr, uint32_t size, uint32_t direction) {
    // TEMPORARY DIAGNOSTIC: report any transfer whose destination covers a
    // watched RDRAM address. Turok 2 corrupts a live thread stack slot with what
    // decodes as instruction words, and every PI transfer passes through here, so
    // this is the cheapest place to catch a misdirected load. Set
    // TUROK2_WATCH_ADDR to the address in question, e.g. 0x800D8158.
    {
        static const uint32_t watch = []() -> uint32_t {
            const char *env = getenv("TUROK2_WATCH_ADDR");
            return (env != nullptr) ? (uint32_t)strtoul(env, nullptr, 0) : 0;
        }();

        if (watch != 0) {
            const uint32_t start = (uint32_t)rdram_address;
            if ((watch >= start) && (watch < (start + size))) {
                fprintf(stderr, "[dma:watch] %s covers %08X: dram=%08X size=%X phys=%08X\n",
                    (direction == 0) ? "read into" : "write from",
                    watch, start, size, physical_addr);
                fflush(stderr);
            }
        }
    }

    // TEMPORARY DIAGNOSTIC: flag malformed cart transfers.
    //
    // Turok 2's Iguana intro animation never loads because its request carries a
    // device address past the end of the 32 MB cart and a size of zero. Neither
    // condition produces a warning on its own: the address still compares above
    // rom_base so it takes the ordinary cart path, and a zero size simply moves
    // nothing. The buffer then keeps whatever it held before, the animation
    // descriptor is built out of that, and the garbage pointers lead to the wild
    // writes that end the process. Naming the bad requests is the first step to
    // finding who builds them.
    {
        constexpr uint32_t cart_size = 32u * 1024u * 1024u;
        const bool past_end = (physical_addr >= recomp::rom_base) &&
                              ((physical_addr - recomp::rom_base) >= cart_size);
        if ((size == 0) || past_end) {
            static uint32_t reports = 0;
            if (reports < 24) {
                reports++;
                fprintf(stderr, "[dma:bad] %s dram=%08X size=%X phys=%08X%s%s\n",
                    (direction == 0) ? "read into" : "write from",
                    (uint32_t)rdram_address, size, physical_addr,
                    (size == 0) ? "  <- zero size" : "",
                    past_end ? "  <- past end of cart" : "");
                fflush(stderr);
            }
        }
    }

    // TODO asynchronous transfer
    // TODO implement unaligned DMA correctly
    if (direction == 0) {
        if (physical_addr >= recomp::rom_base) {
            // read cart rom
            recomp::do_rom_read(rdram, rdram_address, physical_addr, size);

            // Send a message to the mq to indicate that the transfer completed
            ultramodern::enqueue_external_message_src(mq, msg, false, ultramodern::EventMessageSource::Pi);
        } else if (physical_addr >= recomp::sram_base) {
            if (!recomp::sram_allowed()) {
                ultramodern::error_handling::message_box("Attempted to use SRAM saving with other save type");
                ULTRAMODERN_QUICK_EXIT();
            }
            // read sram
            save_read(rdram, rdram_address, physical_addr - recomp::sram_base, size);

            // Send a message to the mq to indicate that the transfer completed
            ultramodern::enqueue_external_message_src(mq, msg, false, ultramodern::EventMessageSource::Pi);
        } else {
            fprintf(stderr, "[WARN] PI DMA read from unknown region, phys address 0x%08X\n", physical_addr);
        }
    } else {
        if (physical_addr >= recomp::rom_base) {
            // write cart rom
            throw std::runtime_error("ROM DMA write unimplemented");
        } else if (physical_addr >= recomp::sram_base) {
            if (!recomp::sram_allowed()) {
                ultramodern::error_handling::message_box("Attempted to use SRAM saving with other save type");
                ULTRAMODERN_QUICK_EXIT();
            }
            // write sram
            save_write(rdram, rdram_address, physical_addr - recomp::sram_base, size);

            // Send a message to the mq to indicate that the transfer completed
            ultramodern::enqueue_external_message_src(mq, msg, false, ultramodern::EventMessageSource::Pi);
        } else {
            fprintf(stderr, "[WARN] PI DMA write to unknown region, phys address 0x%08X\n", physical_addr);
        }
    }
}

extern "C" void osPiStartDma_recomp(RDRAM_ARG recomp_context* ctx) {
    uint32_t mb = ctx->r4;
    uint32_t pri = ctx->r5;
    uint32_t direction = ctx->r6;
    uint32_t devAddr = ctx->r7 | recomp::rom_base;
    gpr dramAddr = MEM_W(0x10, ctx->r29);
    uint32_t size = MEM_W(0x14, ctx->r29);
    PTR(OSMesgQueue) mq = MEM_W(0x18, ctx->r29);
    uint32_t physical_addr = k1_to_phys(devAddr);

    debug_printf("[pi] DMA from 0x%08X into 0x%08X of size 0x%08X\n", devAddr, dramAddr, size);

    do_dma(PASS_RDRAM mq, mb, dramAddr, physical_addr, size, direction);

    ctx->r2 = 0;
}

extern "C" void osEPiStartDma_recomp(RDRAM_ARG recomp_context* ctx) {
    OSPiHandle* handle = TO_PTR(OSPiHandle, ctx->r4);
    OSIoMesg* mb = TO_PTR(OSIoMesg, ctx->r5);
    uint32_t direction = ctx->r6;
    uint32_t devAddr = handle->baseAddress | mb->devAddr;
    gpr dramAddr = mb->dramAddr;
    uint32_t size = mb->size;
    PTR(OSMesgQueue) mq = mb->hdr.retQueue;
    uint32_t physical_addr = k1_to_phys(devAddr);

    debug_printf("[pi] DMA from 0x%08X into 0x%08X of size 0x%08X\n", devAddr, dramAddr, size);

    do_dma(PASS_RDRAM mq, ctx->r5, dramAddr, physical_addr, size, direction);

    ctx->r2 = 0;
}

extern "C" void osEPiReadIo_recomp(RDRAM_ARG recomp_context * ctx) {
    OSPiHandle* handle = TO_PTR(OSPiHandle, ctx->r4);
    uint32_t devAddr = handle->baseAddress | ctx->r5;
    gpr dramAddr = ctx->r6;
    uint32_t physical_addr = k1_to_phys(devAddr);

    if (physical_addr > recomp::rom_base) {
        // cart rom
        recomp::do_rom_pio(PASS_RDRAM dramAddr, physical_addr);
    } else {
        // sram
        assert(false && "SRAM ReadIo unimplemented");
    }

    ctx->r2 = 0;
}

extern "C" void osPiGetStatus_recomp(RDRAM_ARG recomp_context * ctx) {
    ctx->r2 = 0;
}

extern "C" void osPiRawStartDma_recomp(RDRAM_ARG recomp_context * ctx) {
    uint32_t direction = ctx->r4;
    uint32_t physical_addr = k1_to_phys(ctx->r5 | recomp::rom_base);
    gpr dram_addr = ctx->r6;
    uint32_t size = ctx->r7;

    if (direction == 0 && physical_addr >= recomp::rom_base) {
        // turok2 diagnostic (temporario): a animacao da Iguana acaba lendo o
        // cabecalho da ROM onde deveria estar sua tabela de offsets, entao
        // registra cada leitura para achar a que usa offset de ROM zero.
        const uint32_t rom_offset = physical_addr - recomp::rom_base;
        if (getenv("TUROK2_LOG_PI") != nullptr) {
            fprintf(stderr, "[pi:read] rom=0x%08X -> ram=0x%08X size=0x%X%s\n",
                rom_offset, (uint32_t)dram_addr, size,
                rom_offset < 0x1000 ? "   <<< inicio da ROM" : "");
            fflush(stderr);
        }
        // The only caller is the DMA worker thread, which pulls requests off a
        // queue, so the stack does not name whoever asked for the transfer. The
        // request struct is still in $v0 though: the worker loads devAddr,
        // dramAddr and size from its first three words. Dump it, in case it
        // carries an owner or callback that identifies the requester.
        const bool suspeito = (rom_offset < 0x1000 && size != 0)
            || size == 0
            || rom_offset >= 0x02000000;
        if (getenv("TUROK2_LOG_PI") != nullptr && suspeito) {
            const uint32_t request = (uint32_t)ctx->r2;
            fprintf(stderr, "[pi:req] pedido=0x%08X conteudo=", request);
            for (int i = 0; i < 32; i++) {
                fprintf(stderr, "%02X ", (uint8_t)MEM_B(i, request));
                if (i % 4 == 3) fprintf(stderr, "| ");
            }
            fprintf(stderr, "\n");
            fflush(stderr);
        }
        recomp::do_rom_read(rdram, dram_addr, physical_addr, size);
        ultramodern::pi_dma_complete();
        ctx->r2 = 0;
        return;
    }

    fprintf(stderr, "[WARN] Unsupported raw PI DMA: direction=%u address=0x%08X size=0x%08X\n",
        direction, physical_addr, size);
    ctx->r2 = -1;
}

extern "C" void osEPiRawStartDma_recomp(RDRAM_ARG recomp_context * ctx) {
    ultramodern::error_handling::message_box(
        "Stub `osEPiRawStartDma_recomp` function called!\n"
        "Most games do not call this function directly, which means the libultra function\n"
        "that uses this function was not properly named.\n"
        "\n"
        "If you triggered this message, please make sure you have properly identified\n"
        "every libultra function on your recompiled game. If you are sure every libultra\n"
        "function has been identified and you still get this problem then open an issue on\n"
        "the N64ModernRuntime Github repository mentioning the game you are trying to\n"
        "recompile and steps to reproduce the issue.\n"
        "\n"
        "The application will close now, bye and good luck!"
    );
    ULTRAMODERN_QUICK_EXIT();
}
