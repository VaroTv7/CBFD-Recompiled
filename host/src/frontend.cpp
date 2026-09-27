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

// recompui.h names the launcher's menu before declaring it.
namespace recompui { class LauncherMenu; }
#include "base/ui_launcher.h"
#include "librecomp/game.hpp"
#include "recompinput/input_events.h"
#include "recompinput/input_state.h"
#include "recompinput/players.h"
#include "recompinput/profiles.h"
#include "recompui/program_config.h"
#include "recompui/recompui.h"
#include "recompui/renderer.h"
#include "util/file.h"
#define XXH_INLINE_ALL
#include "xxHash/xxhash.h"

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

    // The ROM the launcher has stored: the US one, or the uncensored one (the game's
    // other accepted ROM, GameEntry::other_rom_hashes).
    std::string stored_rom_title() {
        const recomp::GameEntry& game = supported_games[0];
        std::ifstream file(recomp::get_config_path() / game.stored_filename(), std::ios::binary);
        std::vector<char> rom((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        return XXH3_64bits(rom.data(), rom.size()) == game.rom_hash ? "ROM: US" : "ROM: Uncensored";
    }

    // recompui's default launcher, plus, once a ROM is stored, an option showing which
    // one, which picks another (recompui's own only picks one when there's none yet).
    void init_launcher(recompui::LauncherMenu* menu) {
        const recomp::GameEntry& game = supported_games[0];
        recompui::GameOptionsMenu* options = menu->init_game_options_menu(game.game_id, game.mod_game_id,
            game.display_name, game.thumbnail_bytes, recompui::GameOptionsMenuLayout::Center);
        recompui::update_game_mod_id(game.mod_game_id);
        options->add_start_game_or_load_rom_option();
        if (recomp::is_rom_valid(game.game_id)) {
            recompui::GameOption* rom_option = options->add_option(stored_rom_title(), nullptr);
            rom_option->set_callback([rom_option]() {
                recompui::file::open_file_dialog([rom_option](bool success, const std::filesystem::path& path) {
                    if (!success) {
                        return;
                    }
                    recomp::RomValidationError error = recomp::select_rom(path, supported_games[0].game_id);
                    if (error == recomp::RomValidationError::FailedToOpen) {
                        recompui::message_box("Failed to open ROM file.");
                        return;
                    }
                    if (error != recomp::RomValidationError::Good) {
                        recompui::message_box("This isn't the US or the uncensored ROM of Conker's Bad Fur Day.");
                        return;
                    }
                    recompui::ContextId context = recompui::get_launcher_context_id();
                    bool opened = context.open_if_not_already();
                    rom_option->set_title(stored_rom_title());
                    if (opened) {
                        context.close();
                    }
                });
            });
        }
        options->add_setup_controls_option();
        options->add_settings_option();
        options->add_mods_option();
        options->add_exit_option();
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
    recompui::register_launcher_init_callback(init_launcher);

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
