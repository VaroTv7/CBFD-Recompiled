// Host application for Conker's Bad Fur Day (US), recompiled with N64Recomp.
//
// Currently headless: a null renderer, no audio output and no controller input.
// Usage: ConkerRecomp --rom <baserom.us.z64> [--seconds N]
//   --seconds N  quit after N seconds (default: run until killed)

#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <thread>
#include <vector>

#include "recomp.h"
#include "librecomp/game.hpp"
#include "librecomp/rsp.hpp"
#include "ultramodern/ultramodern.hpp"

#include "conker.hpp"

#if defined(__linux__)
#include <csignal>
#include <execinfo.h>
#include <unistd.h>

// Debugging aid: report where a crash happened (the recompiled functions are
// named after their vram, so the backtrace maps straight back to game code).
static void crash_handler(int sig, siginfo_t* info, void*) {
    char buf[96];
    int n = std::snprintf(buf, sizeof(buf), "[host] signal %d at address %p\n", sig, info->si_addr);
    write(STDERR_FILENO, buf, n);
    void* frames[48];
    int count = backtrace(frames, 48);
    backtrace_symbols_fd(frames, count, STDERR_FILENO);
    _exit(128 + sig);
}

static void install_crash_handler() {
    struct sigaction sa{};
    sa.sa_sigaction = crash_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, nullptr);
    sigaction(SIGBUS, &sa, nullptr);
}
#else
static void install_crash_handler() {}
#endif

extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx);

namespace {
    const std::u8string game_id = u8"conker.n64.us.1.0";
    constexpr uint64_t rom_hash = 0x23FBBA2DBCF2FD8EULL; // XXH3-64 of the US ROM (big-endian .z64)

    std::atomic<uint32_t> vi_count{0};

    // Conker runs with Status.FR set: 32 independent FPRs, which the hand-written
    // math code relies on. The boot code's own Status write is patched out in
    // conker.toml, so put every context into FR=1 mode here. cop0_status_write
    // also points ctx->f_odd at the odd registers themselves, which the
    // recompiled lwc1/mtc1 to odd FPRs go through.
    void set_fr_mode(recomp_context* ctx) {
        constexpr uint32_t STATUS_FR = 0x04000000;
        cop0_status_write(ctx, ctx->status_reg | STATUS_FR);
    }

    void on_thread_create(uint8_t*, recomp_context* ctx) {
        set_fr_mode(ctx);
    }

    void on_init(uint8_t* rdram, recomp_context* ctx) {
        set_fr_mode(ctx);
        conker::register_tlb_mapped_code();
        conker::map_tlb_code_pages(rdram);

        // osCicId, normally left by IPL3; librecomp's init doesn't set it. Conker's
        // idle thread only starts the main thread if it reads 6105 (CIC-NUS-6105).
        constexpr int32_t osCicId = 0x80000310;
        MEM_W(osCicId, 0) = 6105;

        // Game code reads libultra's __osRunningThread directly (e.g. func_10004514
        // reads its id); have the runtime keep it pointing at the running thread.
        constexpr int32_t osRunningThread = 0x8002BE00;
        ultramodern::set_running_thread_variable(osRunningThread);
    }

    // Audio tasks: no RSP audio microcode is recompiled yet. Report the task as
    // finished so the audio thread keeps running (the output is silence).
    RspExitReason null_audio_ucode(uint8_t*, uint32_t) {
        return RspExitReason::Broke;
    }

    RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
        if (task->t.type == M_AUDTASK) {
            return null_audio_ucode;
        }
        std::fprintf(stderr, "[host] no RSP microcode for task type %u\n", (unsigned)task->t.type);
        return nullptr;
    }

    void queue_samples(int16_t*, size_t) {}
    size_t get_frames_remaining() { return 0; }
    void set_frequency(uint32_t) {}

    void poll_input() {}
    bool get_input(int, uint16_t*, float*, float*) { return false; }
    void set_rumble(int, bool) {}

    ultramodern::renderer::WindowHandle create_window(void*) {
        return ultramodern::renderer::WindowHandle{};
    }

    void vi_callback() { ++vi_count; }

    void message_box(const char* msg) {
        std::fprintf(stderr, "[host] %s\n", msg);
    }
}

ultramodern::input::connected_device_info_t conker::get_connected_device_info(int controller_num) {
    if (controller_num == 0) {
        return { ultramodern::input::Device::Controller, ultramodern::input::Pak::None };
    }
    return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
}

int main(int argc, char** argv) {
    install_crash_handler();
    std::filesystem::path rom_path;
    int seconds = 0;
    for (int i = 1; i < argc; i++) {
        if (std::strcmp(argv[i], "--rom") == 0 && i + 1 < argc) {
            rom_path = argv[++i];
        }
        else if (std::strcmp(argv[i], "--seconds") == 0 && i + 1 < argc) {
            seconds = std::atoi(argv[++i]);
        }
    }

    recomp::register_config_path(std::filesystem::current_path() / "conker_data");
    std::filesystem::create_directories(recomp::get_config_path());

    recomp::GameEntry game{};
    game.rom_hash = rom_hash;
    game.internal_name = "CONKER BFD";
    game.display_name = "Conker's Bad Fur Day";
    game.game_id = game_id;
    game.mod_game_id = "conker";
    game.save_type = recomp::SaveType::Eep16k;
    game.is_enabled = true;
    game.entrypoint_address = (gpr)(int32_t)0x80001000u;
    game.entrypoint = recomp_entrypoint;
    game.on_init_callback = on_init;
    game.thread_create_callback = on_thread_create;
    recomp::register_game(game);

    conker::register_overlays();

    if (!rom_path.empty()) {
        auto result = recomp::select_rom(rom_path, game_id);
        if (result != recomp::RomValidationError::Good) {
            std::fprintf(stderr, "[host] %s is not the US Conker ROM (validation error %d)\n",
                rom_path.string().c_str(), (int)result);
            return EXIT_FAILURE;
        }
    }

    // librecomp starts a game named on the command line with --game.
    std::vector<char*> runtime_argv{ argv[0], (char*)"--game", (char*)"conker" };

    recomp::Configuration cfg{};
    cfg.argc = (int)runtime_argv.size();
    cfg.argv = runtime_argv.data();
    cfg.project_version = recomp::Version{ 0, 1, 0 };
    cfg.rsp_callbacks.get_rsp_microcode = get_rsp_microcode;
    cfg.renderer_callbacks.create_render_context = conker::create_null_renderer;
    cfg.audio_callbacks = { queue_samples, get_frames_remaining, set_frequency };
    cfg.input_callbacks = { poll_input, get_input, set_rumble, conker::get_connected_device_info };
    cfg.gfx_callbacks = { nullptr, create_window, nullptr };
    cfg.events_callbacks = { vi_callback, nullptr };
    cfg.error_handling_callbacks = { message_box };

    std::thread timer;
    if (seconds > 0) {
        timer = std::thread([seconds] {
            std::this_thread::sleep_for(std::chrono::seconds(seconds));
            std::printf("[host] %d seconds elapsed, %u VIs; quitting\n", seconds, vi_count.load());
            ultramodern::quit();
        });
    }

    recomp::start(cfg);

    if (timer.joinable()) {
        timer.join();
    }
    return EXIT_SUCCESS;
}
