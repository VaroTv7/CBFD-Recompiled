// The window build's front end: RecompFrontend's launcher, settings and mod menus
// (recompui) and remappable keyboard/controller input (recompinput), on an SDL
// window rendered by RT64 through recompui's renderer.

#include <cstdio>
#include <fstream>
#include <vector>

#define SDL_MAIN_HANDLED
#include <SDL.h>
#if defined(_WIN32)
// Only Windows needs the native window handle. On Linux this header brings in
// X11's, whose None macro breaks ultramodern's Device::None.
#include <SDL_syswm.h>
#endif

#include "librecomp/game.hpp"
#include "recompinput/input_events.h"
#include "recompinput/input_state.h"
#include "recompinput/players.h"
#include "recompinput/profiles.h"
#include "recompui/program_config.h"
#include "recompui/recompui.h"
#include "recompui/renderer.h"
#include "util/file.h"

#include "conker.hpp"

// recompui's launcher shows the first entry (ui_launcher.cpp declares it extern).
std::vector<recomp::GameEntry> supported_games;
// The game window, which recompui also uses (ui_state.cpp declares it extern).
SDL_Window* window = nullptr;

namespace {
    std::vector<char> thumbnail;

    void* create_gfx() {
        SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
        SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
        SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE, "1");
        SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, "1");
        SDL_SetHint(SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH, "1");
        SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
        // Debugging aid: CONKER_NO_CONTROLLER=1 ignores game controllers, e.g. for test
        // runs while someone else is playing with the controller on the same machine.
        Uint32 subsystems = SDL_INIT_VIDEO;
        if (SDL_getenv("CONKER_NO_CONTROLLER") == nullptr) {
            subsystems |= SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC;
        }
        if (SDL_Init(subsystems) != 0) {
            std::fprintf(stderr, "[frontend] SDL_Init failed: %s\n", SDL_GetError());
        }
        return nullptr;
    }

    ultramodern::renderer::WindowHandle create_window(void*) {
        uint32_t flags = SDL_WINDOW_RESIZABLE;
#if defined(RT64_SDL_WINDOW_VULKAN)
        flags |= SDL_WINDOW_VULKAN;
#endif
        window = SDL_CreateWindow(conker::program_name, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
            1600, 900, flags);
        if (window == nullptr) {
            std::fprintf(stderr, "[frontend] SDL_CreateWindow failed: %s\n", SDL_GetError());
            return {};
        }
#if defined(_WIN32)
        SDL_SysWMinfo info;
        SDL_VERSION(&info.version);
        SDL_GetWindowWMInfo(window, &info);
        return ultramodern::renderer::WindowHandle{ info.info.win.window, GetCurrentThreadId() };
#else
        return ultramodern::renderer::WindowHandle{ window };
#endif
    }

    void update_gfx(void*) {
        recompinput::handle_events();
    }

    std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(
        uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
        return recompui::renderer::create_render_context(rdram, window_handle,
            ultramodern::renderer::PresentationMode::PresentEarly, developer_mode);
    }

}

void conker::frontend::on_vi() {
    recompinput::update_rumble();
}

ultramodern::input::connected_device_info_t conker::frontend::get_connected_device_info(int controller_num) {
    if (recompinput::players::is_single_player_mode() || recompinput::players::get_player_is_assigned(controller_num)) {
        return { ultramodern::input::Device::Controller, ultramodern::input::Pak::RumblePak };
    }
    return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
}

std::u8string conker::program_id() {
    return SDL_getenv("CONKER_TEST_PROFILE") != nullptr ? u8"ConkerRecompiledTest" : u8"ConkerRecompiled";
}

void conker::frontend::init(recomp::GameEntry& game) {
    recompui::programconfig::set_program_name(program_name);
    recompui::programconfig::set_program_id(program_id());

    // The launcher's picture of the game.
    std::ifstream file(recompui::file::get_asset_path("thumbnail.png"), std::ios::binary);
    thumbnail.assign(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
    game.thumbnail_bytes = std::span<const char>(thumbnail);
    supported_games.push_back(game);

    recompui::register_primary_font("InterVariable.ttf", "Inter Variable");
    recompui::register_ui_exports();
    recompinput::players::set_single_player_mode(true);
    conker::init_config();
}

void conker::frontend::set_callbacks(recomp::Configuration& cfg) {
    cfg.renderer_callbacks.create_render_context = create_render_context;
    cfg.gfx_callbacks = { create_gfx, create_window, update_gfx };
    cfg.input_callbacks = { recompinput::poll_inputs, recompinput::profiles::get_n64_input, recompinput::set_rumble,
                            conker::get_connected_device_info };
    cfg.error_handling_callbacks.message_box = recompui::message_box;
}
