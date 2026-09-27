// TEMP-DEBUG (test copy only): F9 saves the game's 8 MB of RAM to ram_dumps\NN.bin next
// to the exe, to find variables by comparing snapshots. Called every frame from the
// per-frame camera update (func_1510B690). ram_dumps\log.txt records that it ran and each dump.
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <string>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include "recomp.h"

extern "C" void conker_debug_ram_dump(uint8_t* rdram, recomp_context* ctx) {
    static bool was_down = false;
    static int count = 0;
    static unsigned frames = 0;
    static FILE* log = nullptr;
    if (log == nullptr) {
        std::filesystem::create_directories("ram_dumps");
        log = std::fopen("ram_dumps/log.txt", "w");
        if (log != nullptr) {
            std::fprintf(log, "hook running\n");
            std::fflush(log);
        }
    }
    frames++;
#if defined(_WIN32)
    const bool down = (GetAsyncKeyState(VK_F9) & 0x8000) != 0;
#else
    const bool down = false;
#endif
    if (down && !was_down) {
        char name[64];
        std::snprintf(name, sizeof(name), "ram_dumps/%02d.bin", count);
        if (FILE* f = std::fopen(name, "wb")) {
            std::fwrite(rdram, 1, 0x800000, f);
            std::fclose(f);
        }
        if (log != nullptr) {
            std::fprintf(log, "dump %02d at frame %u\n", count, frames);
            std::fflush(log);
        }
        count++;
    }
    was_down = down;
}
