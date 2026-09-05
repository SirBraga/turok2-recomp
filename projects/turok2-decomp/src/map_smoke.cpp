#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <vector>

#include "recomp.h"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"
#include "xxHash/xxh3.h"

void register_turok2_sections();

extern "C" void turok2_get_keyboard_movement(float* x, float* y) { if (x) *x = 0.0f; if (y) *y = 0.0f; }
extern "C" void turok2_get_weapon_keys(bool* previous, bool* next) { if (previous) *previous = false; if (next) *next = false; }
extern "C" void turok2_take_mouse_deltas(float* dx, float* dy, bool* captured) {
    if (dx) *dx = 0.0f;
    if (dy) *dy = 0.0f;
    if (captured) *captured = false;
}
void turok2_debug_tick(uint8_t*, int) {}

namespace {
constexpr uint32_t kEngineRom = 0x00001000;
constexpr uint32_t kEngineRam = 0x00200400;
constexpr uint32_t kEngineSize = 0x00100000;
constexpr uint32_t kVirtual0Rom = 0x0014A070;
constexpr uint32_t kVirtual0Ram = 0x00400000;
constexpr uint32_t kVirtual0Size = 0x0003C000;
constexpr uint32_t kVirtual1Rom = 0x00186070;
constexpr uint32_t kVirtual1Ram = 0x0043C000;
constexpr uint32_t kVirtual1Size = 0x00039A00;

void load_region(uint8_t* rdram, uint32_t rom, uint32_t ram, uint32_t size) {
    load_overlays(rom, static_cast<int32_t>(ram), size);
    recomp::do_rom_read(rdram, ram, 0x10000000u + rom, size);
}
}

int main(int argc, char** argv) {
    const char* rom_path = argc > 1 ? argv[1] : "baserom.us.z64";
    std::ifstream rom_file(rom_path, std::ios::binary);
    if (!rom_file) {
        std::fprintf(stderr, "Nao foi possivel abrir %s\n", rom_path);
        return 1;
    }

    std::vector<uint8_t> rom{std::istreambuf_iterator<char>(rom_file), {}};
    if (rom.size() < kVirtual1Rom + kVirtual1Size) {
        std::fprintf(stderr, "ROM pequena demais: %zu bytes\n", rom.size());
        return 2;
    }

    std::printf("XXH3 0x%016llX\n",
        static_cast<unsigned long long>(XXH3_64bits(rom.data(), rom.size())));
    recomp::set_rom_contents(std::move(rom));
    register_turok2_sections();
    recomp::overlays::init_overlays();

    std::vector<uint8_t> rdram(8 * 1024 * 1024);
    load_region(rdram.data(), kEngineRom, kEngineRam, kEngineSize);
    load_region(rdram.data(), kVirtual0Rom, kVirtual0Ram, kVirtual0Size);
    load_region(rdram.data(), kVirtual1Rom, kVirtual1Ram, kVirtual1Size);

    constexpr uint32_t probes[] = {
        0x00200500, 0x0028D380, 0x00400000, 0x00444E50, 0x00469250,
    };
    for (uint32_t address : probes) {
        if (get_function(address) == nullptr) {
            std::fprintf(stderr, "Funcao nao mapeada em 0x%08X\n", address);
            return 3;
        }
        std::printf("OK 0x%08X\n", address);
    }

    std::puts("Mapa nativo do Turok 2 carregado com sucesso.");
    return 0;
}
