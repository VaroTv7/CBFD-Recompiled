// Mouse camera for keyboard and mouse players: a free orbit camera, called from hooks
// in conker.toml.
//
// RecompFrontend's General tab has a Mouse Sensitivity option. Above 0, the cursor is
// captured while the game is played (and released in the menus), and
// recompinput::get_mouse_deltas() gives the mouse's movement since the game last read
// its controllers, scaled by that sensitivity.
//
// The follow camera (struct108: gObjects[0].camera for player 1, D_800DBFF0 the one
// being played) looks at a point (+0x2BC) above its pivot at Conker's feet (+0x2A4),
// from an eye kept at a horizontal distance (+0x374) and height (+0x344) from the
// pivot. It doesn't keep its angle: every frame func_15125330 works it out (+0x37C)
// from where the eye is, and Conker's movement is relative to it. So once the mouse
// moves, the eye is placed each frame from our own yaw and pitch around the look-at
// point, just before the view is built (func_151284C4 builds it in func_1512C490), and
// the rest of the game follows. The camera stays where the mouse leaves it.
//
// Walls: func_150AC9C0 (hand-written collision code) casts a ray through the level;
// the game uses it to stop its own camera at walls. A ray from the look-at point to
// the eye pulls the camera in to just before anything in between, and it eases back
// out once the way is clear.
//
// The orbit only runs where the C-buttons turn the camera (func_1512D390 ran this
// frame), so cutscenes and special cameras are the game's. Pressing C-left or C-right
// hands the camera back to the game until the mouse moves again.

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstring>

#include <SDL.h>

#include "recomp.h"
#include "recompinput/input_state.h"

extern "C" void func_150AC9C0(uint8_t* rdram, recomp_context* ctx);

namespace {
    // Degrees per pixel of mouse movement at 100% sensitivity.
    constexpr float degrees_per_pixel = 0.2f;
    constexpr float degrees_to_radians = 3.14159265358979f / 180.0f;
    // How far the camera may look up or down: pitch is the eye's angle above the
    // look-at point.
    constexpr float min_pitch = -25.0f * degrees_to_radians;
    constexpr float max_pitch = 75.0f * degrees_to_radians;
    // Walls: how far in front of a hit the camera stops, its closest distance, and how
    // quickly it moves back out (per frame, as a fraction of the way left).
    constexpr float wall_margin = 25.0f;
    constexpr float min_distance = 80.0f;
    constexpr float ease_out = 0.15f;
    constexpr uint32_t current_camera = 0x800DBFF0; // D_800DBFF0
    // Scroll wheel zoom: each notch scales the distance by this, between the nearest and
    // farthest of the game's own camera distances (D_800A34B0: the controller's four,
    // each a horizontal distance and a height from the pivot, 530 x 400 the farthest).
    constexpr float zoom_step = 1.12f;
    constexpr uint32_t camera_distances = 0x800A34B0; // D_800A34B0, 4 x { horizontal, height }
    constexpr int camera_distance_count = 4;

    // Scroll wheel notches since the view last read them (SDL event watch: the
    // frontend's own event loop consumes the events).
    std::atomic<int> wheel_notches = 0;
    int SDLCALL watch_wheel(void*, SDL_Event* event) {
        if (event->type == SDL_MOUSEWHEEL) {
            wheel_notches.fetch_add(event->wheel.direction == SDL_MOUSEWHEEL_FLIPPED ? -event->wheel.y : event->wheel.y);
        }
        return 1;
    }

    struct Orbit {
        bool engaged = false;
        bool follow_camera_ran = false; // func_1512D390 ran since the last view
        float yaw = 0.0f;               // radians, the eye's direction from the look-at point
        float pitch = 0.0f;
        float distance = 0.0f;          // current, after walls
        float wanted = 0.0f;            // the scroll wheel's distance from the look-at point
    } orbit;

    float read_float(uint8_t* rdram, gpr base, int32_t offset) {
        uint32_t word = (uint32_t)MEM_W(offset, base);
        float value;
        std::memcpy(&value, &word, sizeof(value));
        return value;
    }

    void write_float(uint8_t* rdram, gpr base, int32_t offset, float value) {
        uint32_t word;
        std::memcpy(&word, &value, sizeof(word));
        MEM_W(offset, base) = (int32_t)word;
    }

    gpr float_bits(float value) {
        int32_t word;
        std::memcpy(&word, &value, sizeof(word));
        return (gpr)(int64_t)word;
    }

    // How far a level ray from (x, y, z) along (dx, 0, dz) goes before it hits a wall, up
    // to max_length (func_150AC9C0). Returns max_length if it hits nothing. Called as
    // func_15123A54 calls it for the game's own camera: level (a ray with a slope takes
    // another path and returns other things), and the distance is its 5th result.
    float wall_distance(uint8_t* rdram, const recomp_context* ctx, float x, float y, float z,
                        float dx, float dz, float max_length) {
        const float dy = 0.0f;
        recomp_context call = *ctx;
        // Its arguments and results go on the game's stack, below the current frame.
        const gpr sp = (ctx->r29 & ~(gpr)0xF) - 0x100;
        const gpr results = sp + 0xC0;
        call.r29 = sp;
        call.f12.fl = x;
        call.f14.fl = y;
        call.r6 = float_bits(z);
        call.r7 = float_bits(dx);
        write_float(rdram, sp, 0x10, dy);
        write_float(rdram, sp, 0x14, dz);
        MEM_W(0x18, sp) = 0;
        for (int i = 0; i < 5; i++) {
            MEM_W(0x1C + i * 4, sp) = (int32_t)(results + i * 4);
            MEM_W(i * 4, results) = 0;
        }
        MEM_W(0x30, sp) = 0;
        MEM_W(0x34, sp) = 0;
        write_float(rdram, sp, 0x38, max_length);
        func_150AC9C0(rdram, &call);
        if (call.r2 == 0) {
            return max_length;
        }
        const float distance = read_float(rdram, results, 16);
        if (!(distance >= 0.0f) || distance > max_length) {
            return max_length;
        }
        return distance;
    }
}

// func_1512D390 (the C-buttons' turning), before its last restore: $s0 is the camera.
// Marks that the follow camera is running this frame, and hands the camera back to the
// game while C-left or C-right is held (+0x36C points at the buttons held).
extern "C" void conker_mouse_camera_follow(uint8_t* rdram, recomp_context* ctx) {
    const gpr camera = ctx->r16;
    if ((uint32_t)camera != (uint32_t)MEM_W(0, (gpr)(int32_t)current_camera)) {
        return;
    }
    orbit.follow_camera_ran = true;
    const gpr buttons = (gpr)(int32_t)MEM_W(0x36C, camera);
    if (((uint32_t)MEM_HU(0, buttons) & 0x3) != 0) {
        orbit.engaged = false;
    }
}

// func_151284C4 (builds the view), after its first instruction: $a0 is the camera.
extern "C" void conker_mouse_camera(uint8_t* rdram, recomp_context* ctx) {
    float mouse_x = 0.0f, mouse_y = 0.0f;
    recompinput::get_mouse_deltas(&mouse_x, &mouse_y);
    const gpr camera = ctx->r4;
    if ((uint32_t)camera != (uint32_t)MEM_W(0, (gpr)(int32_t)current_camera)) {
        return;
    }
    const bool follow_camera = orbit.follow_camera_ran;
    orbit.follow_camera_ran = false;
    if (!follow_camera) {
        orbit.engaged = false;
        return;
    }

    const float cx = read_float(rdram, camera, 0x2BC);
    const float cy = read_float(rdram, camera, 0x2C0);
    const float cz = read_float(rdram, camera, 0x2C4);
    // The distance the game keeps: its eye's horizontal distance and height from the
    // pivot, measured from the look-at point.
    const float horizontal = read_float(rdram, camera, 0x374);
    const float height = read_float(rdram, camera, 0x344) - (cy - read_float(rdram, camera, 0x2A8));
    const float wanted_distance = std::sqrt(horizontal * horizontal + height * height);

    if (!orbit.engaged) {
        if (mouse_x == 0.0f && mouse_y == 0.0f && wheel_notches.load() == 0) {
            return;
        }
        // Take over from where the game's camera is.
        const float ex = read_float(rdram, camera, 0x2EC) - cx;
        const float ey = read_float(rdram, camera, 0x2F0) - cy;
        const float ez = read_float(rdram, camera, 0x2F4) - cz;
        orbit.yaw = std::atan2(ez, ex);
        orbit.pitch = std::atan2(ey, std::sqrt(ex * ex + ez * ez));
        orbit.distance = std::sqrt(ex * ex + ey * ey + ez * ez);
        if (orbit.wanted == 0.0f) {
            orbit.wanted = wanted_distance;
        }
        orbit.engaged = true;
    }

    // The controller's nearest and farthest distances from the look-at point.
    const float look_height = cy - read_float(rdram, camera, 0x2A8);
    float nearest = 0.0f, farthest = 0.0f;
    for (int i = 0; i < camera_distance_count; i++) {
        const gpr preset = (gpr)(int32_t)(camera_distances + i * 8);
        const float h = read_float(rdram, preset, 0), v = read_float(rdram, preset, 4) - look_height;
        const float d = std::sqrt(h * h + v * v);
        nearest = (i == 0) ? d : std::min(nearest, d);
        farthest = (i == 0) ? d : std::max(farthest, d);
    }
    const int notches = wheel_notches.exchange(0);
    orbit.wanted = std::clamp(orbit.wanted * std::pow(zoom_step, (float)-notches), nearest, farthest);
    orbit.yaw += mouse_x * degrees_per_pixel * degrees_to_radians;
    orbit.pitch = std::clamp(orbit.pitch + mouse_y * degrees_per_pixel * degrees_to_radians, min_pitch, max_pitch);

    // The eye's direction from the look-at point.
    const float dx = std::cos(orbit.pitch) * std::cos(orbit.yaw);
    const float dy = std::sin(orbit.pitch);
    const float dz = std::cos(orbit.pitch) * std::sin(orbit.yaw);

    // Keep out of walls: in at once, back out gently.
    // Where the game pulls its own camera in closer than the controller can (tight spots),
    // so does the orbit.
    const float zoomed = (wanted_distance < nearest) ? std::min(orbit.wanted, wanted_distance) : orbit.wanted;
    // Walls: a level ray the camera's way, from where the game casts its own (140 above
    // the pivot), limits how far out the eye may be along the ground.
    const float level = std::max(std::cos(orbit.pitch), 0.25f);
    const float horizontal_room = wall_distance(rdram, ctx, cx, read_float(rdram, camera, 0x2A8) + 140.0f, cz,
        std::cos(orbit.yaw), std::sin(orbit.yaw), zoomed * level + wall_margin) - wall_margin;
    const float clear = horizontal_room / level;
    const float allowed = std::clamp(clear, min_distance, std::max(zoomed, min_distance));
    if (allowed < orbit.distance) {
        orbit.distance = allowed;
    }
    else {
        orbit.distance += (allowed - orbit.distance) * ease_out;
    }

    const float ex = cx + dx * orbit.distance;
    const float ey = cy + dy * orbit.distance;
    const float ez = cz + dz * orbit.distance;
    for (int32_t eye : { 0x2EC, 0x2F8, 0x304 }) {
        write_float(rdram, camera, eye, ex);
        write_float(rdram, camera, eye + 4, ey);
        write_float(rdram, camera, eye + 8, ez);
    }
}

// frontend.cpp, once SDL is up: listen for the scroll wheel.
void conker_mouse_camera_init() {
    SDL_AddEventWatch(watch_wheel, nullptr);
}
