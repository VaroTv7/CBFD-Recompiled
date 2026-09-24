// SDL2 window and input for the RT64 build.
//
// Keyboard: WASD = analog stick, Space = A, Left Shift = B, Q = Z, E = R,
// Tab = L, Enter = Start, arrow keys = C buttons, I/J/K/L = D-pad.
// Game controller: left stick = analog stick, right stick = C buttons,
// A = A, B/X = B, left trigger = Z, right shoulder/trigger = R,
// left shoulder = L, Start = Start, D-pad = D-pad. Rumble is supported.

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <mutex>

#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_syswm.h>

#include "ultramodern/ultramodern.hpp"

#include "conker.hpp"

namespace {
    // N64 controller button bits.
    constexpr uint16_t BTN_A = 0x8000, BTN_B = 0x4000, BTN_Z = 0x2000, BTN_START = 0x1000;
    constexpr uint16_t BTN_DU = 0x0800, BTN_DD = 0x0400, BTN_DL = 0x0200, BTN_DR = 0x0100;
    constexpr uint16_t BTN_L = 0x0020, BTN_R = 0x0010;
    constexpr uint16_t BTN_CU = 0x0008, BTN_CD = 0x0004, BTN_CL = 0x0002, BTN_CR = 0x0001;

    SDL_Window* sdl_window = nullptr;
    std::mutex controller_mutex;
    SDL_GameController* controller = nullptr;

    struct InputState {
        uint16_t buttons = 0;
        float x = 0.0f;
        float y = 0.0f;
    };
    std::mutex input_mutex;
    InputState latest_input;

    float axis(SDL_GameController* pad, SDL_GameControllerAxis a) {
        return SDL_GameControllerGetAxis(pad, a) / 32767.0f;
    }

    void open_first_controller() {
        std::lock_guard lock{controller_mutex};
        if (controller != nullptr) {
            return;
        }
        for (int i = 0; i < SDL_NumJoysticks(); i++) {
            if (SDL_IsGameController(i)) {
                controller = SDL_GameControllerOpen(i);
                if (controller) {
                    std::printf("[input] using controller: %s\n", SDL_GameControllerName(controller));
                    return;
                }
            }
        }
    }

    // Reads the keyboard and controller; runs on the thread that owns the window.
    InputState read_input() {
        InputState in{};
        const Uint8* keys = SDL_GetKeyboardState(nullptr);
        auto key = [&](SDL_Scancode sc) { return keys[sc] != 0; };

        if (key(SDL_SCANCODE_SPACE)) in.buttons |= BTN_A;
        if (key(SDL_SCANCODE_LSHIFT)) in.buttons |= BTN_B;
        if (key(SDL_SCANCODE_Q)) in.buttons |= BTN_Z;
        if (key(SDL_SCANCODE_E)) in.buttons |= BTN_R;
        if (key(SDL_SCANCODE_TAB)) in.buttons |= BTN_L;
        if (key(SDL_SCANCODE_RETURN)) in.buttons |= BTN_START;
        if (key(SDL_SCANCODE_UP)) in.buttons |= BTN_CU;
        if (key(SDL_SCANCODE_DOWN)) in.buttons |= BTN_CD;
        if (key(SDL_SCANCODE_LEFT)) in.buttons |= BTN_CL;
        if (key(SDL_SCANCODE_RIGHT)) in.buttons |= BTN_CR;
        if (key(SDL_SCANCODE_I)) in.buttons |= BTN_DU;
        if (key(SDL_SCANCODE_K)) in.buttons |= BTN_DD;
        if (key(SDL_SCANCODE_J)) in.buttons |= BTN_DL;
        if (key(SDL_SCANCODE_L)) in.buttons |= BTN_DR;
        if (key(SDL_SCANCODE_A)) in.x -= 1.0f;
        if (key(SDL_SCANCODE_D)) in.x += 1.0f;
        if (key(SDL_SCANCODE_W)) in.y += 1.0f;
        if (key(SDL_SCANCODE_S)) in.y -= 1.0f;

        std::lock_guard lock{controller_mutex};
        if (controller != nullptr) {
            auto button = [&](SDL_GameControllerButton b) { return SDL_GameControllerGetButton(controller, b) != 0; };
            if (button(SDL_CONTROLLER_BUTTON_A)) in.buttons |= BTN_A;
            if (button(SDL_CONTROLLER_BUTTON_B) || button(SDL_CONTROLLER_BUTTON_X)) in.buttons |= BTN_B;
            if (button(SDL_CONTROLLER_BUTTON_START)) in.buttons |= BTN_START;
            if (button(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) in.buttons |= BTN_L;
            if (button(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) in.buttons |= BTN_R;
            if (button(SDL_CONTROLLER_BUTTON_DPAD_UP)) in.buttons |= BTN_DU;
            if (button(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) in.buttons |= BTN_DD;
            if (button(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) in.buttons |= BTN_DL;
            if (button(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) in.buttons |= BTN_DR;
            if (axis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 0.3f) in.buttons |= BTN_Z;
            if (axis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 0.3f) in.buttons |= BTN_R;

            float rx = axis(controller, SDL_CONTROLLER_AXIS_RIGHTX);
            float ry = axis(controller, SDL_CONTROLLER_AXIS_RIGHTY);
            if (rx < -0.5f) in.buttons |= BTN_CL;
            if (rx > 0.5f) in.buttons |= BTN_CR;
            if (ry < -0.5f) in.buttons |= BTN_CU;
            if (ry > 0.5f) in.buttons |= BTN_CD;

            float lx = axis(controller, SDL_CONTROLLER_AXIS_LEFTX);
            float ly = -axis(controller, SDL_CONTROLLER_AXIS_LEFTY);
            if (std::sqrt(lx * lx + ly * ly) > 0.15f) {   // dead zone
                in.x = lx;
                in.y = ly;
            }
        }
        in.x = std::clamp(in.x, -1.0f, 1.0f);
        in.y = std::clamp(in.y, -1.0f, 1.0f);
        return in;
    }
}

void* conker::window::create_gfx() {
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_HAPTIC) != 0) {
        std::fprintf(stderr, "[window] SDL_Init failed: %s\n", SDL_GetError());
    }
    return nullptr;
}

ultramodern::renderer::WindowHandle conker::window::create_window(void*) {
    sdl_window = SDL_CreateWindow("Conker's Bad Fur Day (recompiled)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        1280, 960, SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (sdl_window == nullptr) {
        std::fprintf(stderr, "[window] SDL_CreateWindow failed: %s\n", SDL_GetError());
        return {};
    }
    open_first_controller();
#if defined(_WIN32)
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    SDL_GetWindowWMInfo(sdl_window, &info);
    return ultramodern::renderer::WindowHandle{ info.info.win.window, GetCurrentThreadId() };
#else
    return sdl_window;
#endif
}

// Called by librecomp's main loop on the window's thread.
void conker::window::update_gfx(void*) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                ultramodern::quit();
                break;
            case SDL_CONTROLLERDEVICEADDED:
                open_first_controller();
                break;
            case SDL_CONTROLLERDEVICEREMOVED: {
                std::lock_guard lock{controller_mutex};
                if (controller != nullptr && !SDL_GameControllerGetAttached(controller)) {
                    SDL_GameControllerClose(controller);
                    controller = nullptr;
                }
                break;
            }
            case SDL_KEYDOWN:
                if (event.key.keysym.scancode == SDL_SCANCODE_F11) {
                    bool fullscreen = (SDL_GetWindowFlags(sdl_window) & SDL_WINDOW_FULLSCREEN_DESKTOP) != 0;
                    SDL_SetWindowFullscreen(sdl_window, fullscreen ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
                }
                break;
        }
    }
    InputState in = read_input();
    std::lock_guard lock{input_mutex};
    latest_input = in;
}

void conker::window::poll_input() {}

bool conker::window::get_input(int controller_num, uint16_t* buttons, float* x, float* y) {
    if (controller_num != 0) {
        return false;
    }
    std::lock_guard lock{input_mutex};
    *buttons = latest_input.buttons;
    *x = latest_input.x;
    *y = latest_input.y;
    return true;
}

void conker::window::set_rumble(int controller_num, bool rumble) {
    if (controller_num != 0) {
        return;
    }
    std::lock_guard lock{controller_mutex};
    if (controller != nullptr) {
        SDL_GameControllerRumble(controller, rumble ? 0xFFFF : 0, rumble ? 0xFFFF : 0, rumble ? 1000 : 0);
    }
}

ultramodern::input::connected_device_info_t conker::window::get_connected_device_info(int controller_num) {
    if (controller_num != 0) {
        return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
    }
    std::lock_guard lock{controller_mutex};
    bool rumble = controller != nullptr && SDL_GameControllerHasRumble(controller);
    return { ultramodern::input::Device::Controller,
             rumble ? ultramodern::input::Pak::RumblePak : ultramodern::input::Pak::None };
}
