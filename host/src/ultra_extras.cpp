// libultra functions the recompiled code calls that neither N64Recomp's output
// nor N64ModernRuntime provides.

#include <csetjmp>
#include <cstdio>

#include "recomp.h"
#include "librecomp/addresses.hpp"
#include "librecomp/game.hpp"
#include "ultramodern/error_handling.hpp"
#include "ultramodern/ultra64.h"

#include "conker.hpp"

namespace {
    constexpr int32_t PFS_ERR_NOPACK = 1;
    constexpr int32_t PFS_ERR_DEVICE = 11;

    // Shared by osPiReadIo and osPiRawReadIo: read one word of cartridge ROM.
    // Rare's anti-piracy checks read ROM header words this way, so this must
    // return the real ROM contents.
    int32_t read_rom_word(uint8_t* rdram, uint32_t dev_addr, gpr data_ptr) {
        uint32_t physical_addr = (0xB0000000u | dev_addr) & 0x1FFFFFFFu;
        uint64_t rom_offset = (uint64_t)physical_addr - recomp::rom_base;
        if (physical_addr < recomp::rom_base || rom_offset + 4 > recomp::get_rom().size()) {
            std::fprintf(stderr, "[ultra_extras] PI read outside ROM: dev_addr=0x%08X\n", dev_addr);
            return -1;
        }
        recomp::do_rom_pio(rdram, data_ptr, physical_addr);
        return 0;
    }
}

// Reads a word through a KSEG1 (uncached) address, for game code that reads
// cartridge ROM or RDRAM that way directly. The runtime maps only KSEG0 RDRAM,
// so conker.toml replaces those loads with a hook that calls this.
extern "C" int32_t conker_kseg1_read32(uint8_t* rdram, uint32_t vaddr) {
    uint32_t physical_addr = vaddr & 0x1FFFFFFFu;
    if (physical_addr >= recomp::rom_base) {
        auto rom = recomp::get_rom();
        uint64_t offset = (uint64_t)physical_addr - recomp::rom_base;
        if (offset + 4 > rom.size()) {
            std::fprintf(stderr, "[ultra_extras] KSEG1 read past the end of ROM: 0x%08X\n", vaddr);
            return 0;
        }
        return (int32_t)(((uint32_t)rom[offset] << 24) | ((uint32_t)rom[offset + 1] << 16) |
                         ((uint32_t)rom[offset + 2] << 8) | (uint32_t)rom[offset + 3]);
    }
    if (physical_addr < 0x00800000u) {
        return MEM_W(0, (gpr)(int32_t)(0x80000000u | physical_addr));
    }
    std::fprintf(stderr, "[ultra_extras] unhandled KSEG1 read: 0x%08X\n", vaddr);
    return 0;
}

// Where the script interpreter (func_150ADAF0) returns to when a script aborts
// (func_150AE280); see conker.toml. Only the game's main thread runs scripts.
extern "C" {
    jmp_buf conker_interpreter_exit;
}

// libultra's osContInit creates __osEepromTimerQ, which libultra's EEPROM
// functions and Rare's EEPROM code (func_151DCFD8) put their timer messages on.
// The runtime's osContInit doesn't, so conker.toml calls this after the game's
// osContInit. Like osContInit, only the first call creates it.
extern "C" void conker_create_eeprom_timer_queue(uint8_t* rdram) {
    constexpr int32_t osEepromTimerQ = 0x80042A78;
    constexpr int32_t osEepromTimerMsg = 0x80042A90;
    OSMesgQueue* queue = TO_PTR(OSMesgQueue, osEepromTimerQ);
    if (queue->msgCount == 0) {
        osCreateMesgQueue(rdram, osEepromTimerQ, osEepromTimerMsg, 1);
    }
}

// s32 osPiRawReadIo(u32 devAddr, u32 *data)
extern "C" void osPiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = read_rom_word(rdram, (uint32_t)ctx->r4, ctx->r5);
}

// s32 osPiReadIo(u32 devAddr, u32 *data): osPiRawReadIo under the PI access lock,
// which the runtime doesn't need.
extern "C" void osPiReadIo_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = read_rom_word(rdram, (uint32_t)ctx->r4, ctx->r5);
}

// Conker halts on fatal errors with a bare `syscall` (func_10007DA0,
// func_150AD770), called from e.g. the memory allocator and an anti-piracy
// check. Report where it came from and stop.
extern "C" void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx, int32_t instruction_vram) {
    char msg[160];
    std::snprintf(msg, sizeof(msg), "The game halted: syscall at 0x%08X, return address 0x%08X",
        (uint32_t)instruction_vram, (uint32_t)ctx->r31);
    std::fprintf(stderr, "[ultra_extras] %s\n", msg);
    ultramodern::error_handling::message_box(msg);
    ULTRAMODERN_QUICK_EXIT();
}

// s32 osPfsInit(OSMesgQueue *mq, OSPfs *pfs, int channel)
// Conker only calls this to find out what kind of pak is attached
// (func_15006234): PFS_ERR_ID_FATAL or PFS_ERR_DEVICE means "not a Controller
// Pak", and it then tries osMotorInit for a Rumble Pak. The runtime has no
// Controller Pak support, so report either a non-Controller-Pak device or no pak.
extern "C" void osPfsInit_recomp(uint8_t* rdram, recomp_context* ctx) {
    int channel = (int)ctx->r6;
    auto info = conker::get_connected_device_info(channel);
    bool has_pak = info.connected_device == ultramodern::input::Device::Controller &&
                   info.connected_pak != ultramodern::input::Pak::None;
    ctx->r2 = has_pak ? PFS_ERR_DEVICE : PFS_ERR_NOPACK;
}
