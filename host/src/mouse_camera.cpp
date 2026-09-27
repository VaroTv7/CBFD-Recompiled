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
// Walls: func_15044380 moves a collider through the level, stopping and sliding at
// surfaces; func_1512BB10 moves the game's own camera with it each frame. The orbit moves
// the camera's collider from the look-at point out to where the eye would be, and pulls
// the eye in to as far as it got. It eases back out once the way is clear.
//
// The orbit only runs where the C-buttons turn the camera (func_1512D390 ran this
// frame) and not in the look mode (func_15120158: hold R, aiming), so cutscenes, special
// cameras and aiming are the game's. Pressing C-left or C-right
// hands the camera back to the game until the mouse moves again.

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>

#include <SDL.h>

#include "recomp.h"
#include "recompinput/input_state.h"

extern "C" void func_15044380(uint8_t* rdram, recomp_context* ctx);

namespace {
    // Degrees per pixel of mouse movement at 100% sensitivity.
    constexpr float degrees_per_pixel = 0.2f;
    constexpr float degrees_to_radians = 3.14159265358979f / 180.0f;
    // How far the camera may look up or down: pitch is the eye's angle above the
    // look-at point.
    constexpr float min_pitch = -25.0f * degrees_to_radians;
    constexpr float max_pitch = 75.0f * degrees_to_radians;
    // Walls: the camera's closest distance, and how quickly it moves back out (per
    // frame, as a fraction of the way left).
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
        bool look_mode_ran = false;     // func_15120158 (hold R, aiming) ran since the last view
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

    // Moves the camera's collider from (x0, y0, z0) toward *x, *y, *z through the level
    // (func_15044380), as func_1512BB10 moves the game's own camera each frame, and leaves
    // where it ends up in *x, *y, *z. The collider is a stand-in object on the game's
    // stack, filled in as func_1512BB10 fills its own: type 0x2D (a camera; its size is
    // the camera's +0x95C, which func_1512BB10 keeps up to date), its position at +0x14,
    // and the camera at +0x318. Returns how many surfaces it met.
    int collide_camera(uint8_t* rdram, const recomp_context* ctx, gpr camera,
                       float x0, float y0, float z0, float* x, float* y, float* z) {
        constexpr int32_t object_size = 0x32C;
        recomp_context call = *ctx;
        // Below the current frame: func_15044380's arguments, then the stand-in object.
        const gpr sp = (ctx->r29 & ~(gpr)0xF) - 0x400;
        const gpr object = sp + 0x40;
        for (int32_t i = 0; i < object_size; i += 4) {
            MEM_W(i, object) = 0;
        }
        MEM_W(0x0, object) = 0x2D;
        write_float(rdram, object, 0x14, *x);
        write_float(rdram, object, 0x18, *y);
        write_float(rdram, object, 0x1C, *z);
        write_float(rdram, object, 0x28, *y - read_float(rdram, camera, 0x354));
        MEM_W(0x40, object) = MEM_W(0x37C, camera);
        MEM_W(0x180, object) = MEM_W(0x354, camera);
        MEM_W(0x188, object) = MEM_W(0x644, camera);
        MEM_W(0x318, object) = (int32_t)camera;

        // The same collision switches func_1512BB10 sets around its own call.
        const gpr flags = (gpr)(int32_t)0x800CBDD2; // D_800CBDD2..D_800CBDD4
        const gpr layers = (gpr)(int32_t)0x80089120; // D_80089120: which layers collide
        const int8_t saved_flag2 = MEM_B(0, flags), saved_flag3 = MEM_B(1, flags), saved_flag4 = MEM_B(2, flags);
        const int8_t saved_layer1 = MEM_B(1, layers), saved_layer2 = MEM_B(2, layers);
        const uint32_t camera_flags = (uint32_t)MEM_W(0x84, camera);
        if ((camera_flags & 0x80000000) != 0 || MEM_W(0, (gpr)(int32_t)0x800BE9F0) == 0x37) {
            MEM_B(2, layers) = 0;
        }
        if ((camera_flags & 0x10000) != 0) {
            MEM_B(1, layers) = 0;
        }
        MEM_B(0, flags) = 1;
        const gpr target = (gpr)(int32_t)MEM_W(0x3D0, camera);
        MEM_B(1, flags) = MEM_BU(0x102, target) != 0 ? 1 : 0;
        MEM_B(2, flags) = 0;

        call.r29 = sp;
        call.f12.fl = x0;
        call.f14.fl = y0;
        call.r6 = float_bits(z0);
        call.r7 = object;
        MEM_W(0x10, sp) = 0;
        MEM_W(0x14, sp) = 0;
        func_15044380(rdram, &call);

        MEM_B(0, flags) = saved_flag2;
        MEM_B(1, flags) = saved_flag3;
        MEM_B(2, flags) = saved_flag4;
        MEM_B(1, layers) = saved_layer1;
        MEM_B(2, layers) = saved_layer2;
        *x = read_float(rdram, object, 0x14);
        *y = read_float(rdram, object, 0x18);
        *z = read_float(rdram, object, 0x1C);
        return (int)call.r2;
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

// func_15120158 (the look mode: hold R, and aiming such as the slingshot on a B pad), after
// its first instruction. The mouse aims there (look_aim.cpp), so the orbit leaves the
// camera to it: otherwise both turned with the mouse, and the view ran ahead of the aim.
extern "C" void conker_mouse_camera_look_mode(uint8_t* rdram, recomp_context* ctx) {
    orbit.look_mode_ran = true;
}

// func_151284C4 (builds the view), after its first instruction: $a0 is the camera.
extern "C" void conker_mouse_camera(uint8_t* rdram, recomp_context* ctx) {
    float mouse_x = 0.0f, mouse_y = 0.0f;
    recompinput::get_mouse_deltas(&mouse_x, &mouse_y);
    const gpr camera = ctx->r4;
    if ((uint32_t)camera != (uint32_t)MEM_W(0, (gpr)(int32_t)current_camera)) {
        return;
    }
    const bool follow_camera = orbit.follow_camera_ran && !orbit.look_mode_ran;
    orbit.follow_camera_ran = false;
    orbit.look_mode_ran = false;
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

    // Where the game pulls its own camera in closer than the controller can (tight spots),
    // so does the orbit.
    const float zoomed = (wanted_distance < nearest) ? std::min(orbit.wanted, wanted_distance) : orbit.wanted;
    // Walls: move the camera's collider from the look-at point out to the eye, as the game
    // moves its own camera; how far it gets along the way is how far out the eye may be.
    // func_15044380 finds the surfaces the collider ends up touching, so it moves in steps
    // no longer than its radius (camera +0x95C): one long move ends past a wall without
    // touching it. It may slide along a surface; it's blocked once a step barely gets it
    // any farther along. In at once, back out gently.
    const float radius = read_float(rdram, camera, 0x95C);
    const float step = std::max(radius * 0.75f, 8.0f);
    float px = cx, py = cy, pz = cz;
    float clear = 0.0f;
    int hits = 0, steps = 0;
    while (clear < zoomed && steps < 256) {
        const float t = std::min(clear + step, zoomed);
        float hx = cx + dx * t, hy = cy + dy * t, hz = cz + dz * t;
        hits += collide_camera(rdram, ctx, camera, px, py, pz, &hx, &hy, &hz);
        steps++;
        const float along = (hx - cx) * dx + (hy - cy) * dy + (hz - cz) * dz;
        px = hx;
        py = hy;
        pz = hz;
        if (along < clear + (t - clear) * 0.5f) {
            clear = std::max(clear, along);
            break;
        }
        clear = along;
    }
    const float hx = px, hy = py, hz = pz;
    const float allowed = std::clamp(clear, min_distance, std::max(zoomed, min_distance));
    if (allowed < orbit.distance) {
        orbit.distance = allowed;
    }
    else {
        orbit.distance += (allowed - orbit.distance) * ease_out;
    }
    // TEMP-DEBUG
    {
        static FILE* log = std::fopen("mouse_camera_log.txt", "w");
        static int frames = 0;
        if (log != nullptr && (hits != 0 || (frames % 30) == 0) && frames < 20000) {
            std::fprintf(log, "steps %d hits %d radius %.1f clear %.1f wanted %.1f -> %.1f (end %.1f %.1f %.1f)\n", steps, hits, radius, clear, zoomed, orbit.distance, hx - cx, hy - cy, hz - cz);
            std::fflush(log);
        }
        frames++;
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

// TEMP-DEBUG: around func_1512BB10's own call of func_15044380 ($s0 the camera, its
// stand-in object at $sp + 0x74): before it, repeat the same move through
// collide_camera; after it, log both answers to wall_compare_log.txt.
namespace {
    struct {
        float target[3];
        float ours[3];
        int ours_hits;
    } compare;
}
extern "C" void conker_wall_compare_before(uint8_t* rdram, recomp_context* ctx) {
    const gpr sp = ctx->r29, camera = ctx->r16, object = sp + 0x74;
    for (int i = 0; i < 3; i++) {
        compare.target[i] = compare.ours[i] = read_float(rdram, object, 0x14 + i * 4);
    }
    compare.ours_hits = collide_camera(rdram, ctx, camera, ctx->f12.fl, ctx->f14.fl, read_float(rdram, camera, 0x30C),
        &compare.ours[0], &compare.ours[1], &compare.ours[2]);
}
extern "C" void conker_wall_compare_after(uint8_t* rdram, recomp_context* ctx) {
    static FILE* log = std::fopen("wall_compare_log.txt", "w");
    static int lines = 0;
    if (log == nullptr || lines >= 2000) {
        return;
    }
    const gpr sp = ctx->r29, object = sp + 0x74;
    const int game_hits = (int)ctx->r2;
    if (game_hits != 0 || compare.ours_hits != 0 || (lines % 30) == 0) {
        std::fprintf(log, "game %d (%.1f %.1f %.1f) | ours %d (%.1f %.1f %.1f) | target (%.1f %.1f %.1f) | DBE62 %d DBE50 %d\n",
            game_hits, read_float(rdram, object, 0x14), read_float(rdram, object, 0x18), read_float(rdram, object, 0x1C),
            compare.ours_hits, compare.ours[0], compare.ours[1], compare.ours[2],
            compare.target[0], compare.target[1], compare.target[2],
            (int)MEM_BU(0, (gpr)(int32_t)0x800DBE62), (int)MEM_W(0, (gpr)(int32_t)0x800DBE50));
        std::fflush(log);
    }
    lines++;
}
