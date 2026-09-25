// The settings menu (recompui's config tabs) for the RT64 build.

#include <filesystem>

#include "recompui/config.h"
#include "recompinput/recompinput.h"
#include "util/file.h"

#include "conker.hpp"

namespace {
    void set_control_descriptions() {
        using recompinput::GameInput;
        using recompinput::set_game_input_description;
        const char* stick = "Moves Conker, and moves the cursor in menus.";
        set_game_input_description(GameInput::Y_AXIS_POS, stick);
        set_game_input_description(GameInput::Y_AXIS_NEG, stick);
        set_game_input_description(GameInput::X_AXIS_NEG, stick);
        set_game_input_description(GameInput::X_AXIS_POS, stick);
        set_game_input_description(GameInput::A, "Jumps (press again in the air to hover with the tail), and confirms in menus.");
        set_game_input_description(GameInput::B, "Context-sensitive action: attack with the current weapon, or use a B pad.");
        set_game_input_description(GameInput::Z, "Crouches.");
        set_game_input_description(GameInput::L, "Unused in the main game. Mods may use it.");
        set_game_input_description(GameInput::R, "Centers the camera behind Conker.");
        set_game_input_description(GameInput::START, "Pauses the game and skips some cutscenes.");
        set_game_input_description(GameInput::C_UP, "Enters first-person view.");
        set_game_input_description(GameInput::C_DOWN, "Changes the camera distance.");
        set_game_input_description(GameInput::C_LEFT, "Rotates the camera.");
        set_game_input_description(GameInput::C_RIGHT, "Rotates the camera.");
        const char* dpad = "Unused in the main game. Mods may use it.";
        set_game_input_description(GameInput::DPAD_UP, dpad);
        set_game_input_description(GameInput::DPAD_DOWN, dpad);
        set_game_input_description(GameInput::DPAD_LEFT, dpad);
        set_game_input_description(GameInput::DPAD_RIGHT, dpad);
    }
}

void conker::init_config() {
    std::filesystem::path app_folder = recompui::file::get_app_folder_path();
    if (!app_folder.empty()) {
        std::filesystem::create_directories(app_folder);
    }

    recompui::config::GeneralTabOptions general_options{};
    general_options.has_rumble_strength = true;
    general_options.has_gyro_sensitivity = false;
    general_options.has_mouse_sensitivity = false;
    recompui::config::create_general_tab(general_options);

    recompui::config::create_graphics_tab();

    set_control_descriptions();
    recompui::config::create_controls_tab();

    recompui::config::create_sound_tab();

    recompui::config::create_mods_tab();

    recompui::config::finalize();
}
