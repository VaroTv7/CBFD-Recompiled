// Widescreen fixes, called from hooks in conker.toml.
//
// RT64 widens the 3D view, but 2D texture rectangles are drawn in the N64's
// 320-wide screen space, and the G_TEXRECT command can't hold coordinates left
// of 0. So the game culls and clips its screen-space sprites (bubbles, bees,
// sparkles: func_15130A9C) to the 4:3 screen. These hooks let those sprites
// reach into the widened area: the cull bounds are pushed outwards, and the
// rectangle is emitted as RT64's extended texture rectangle, which takes signed
// coordinates, in the same display list space as the game's own rectangle.

#include <cstdint>
#include <cstring>

#include "recomp.h"

namespace {
    // How far past each 4:3 edge sprites are kept, in N64 screen pixels: enough
    // for a 32:9 window. Sprites outside the actual window cost a draw, nothing more.
    constexpr float cull_margin = 160.0f;

    // RT64's extended GBI (tools/rt64/include/rt64_extended_gbi.h) for F3DEX2,
    // whose no-op (0xE0) carries RT64's hooks.
    constexpr uint32_t rt64_hook_opcode = 0xE0;
    constexpr uint32_t rt64_hook_magic = 0x525464;
    constexpr uint32_t rt64_hook_op_enable = 0x1;
    constexpr uint32_t rt64_extended_opcode = 0x64;
    constexpr uint32_t g_ex_texrect_v1 = 0x000002;
    constexpr uint32_t g_ex_origin_none = 0x800;

    float stack_float(uint8_t* rdram, gpr sp, int32_t offset) {
        uint32_t word = (uint32_t)MEM_W(offset, sp);
        float value;
        std::memcpy(&value, &word, sizeof(value));
        return value;
    }

    void put_command(uint8_t* rdram, gpr& dl, uint32_t w0, uint32_t w1) {
        MEM_W(0, dl) = (int32_t)w0;
        MEM_W(4, dl) = (int32_t)w1;
        dl += 8;
    }
}

// func_15130A9C at 0x15130CEC / 0x15130D08: $f6 and $f10 hold the camera's left
// and right sprite bounds (camera + 0x2C / + 0x30), about to be compared with the
// sprite's right and left edges.
extern "C" void conker_widen_sprite_cull_left(uint8_t* rdram, recomp_context* ctx) {
    ctx->f6.fl -= cull_margin;
}

extern "C" void conker_widen_sprite_cull_right(uint8_t* rdram, recomp_context* ctx) {
    ctx->f10.fl += cull_margin;
}

// func_15130A9C at 0x15130DA0: the game has just written a G_RDPPIPESYNC at $v0,
// the first command of the sprite. RT64 doesn't need syncs; put the enable of its
// extended GBI there instead (RT64 turns it off at the start of every display
// list), so the extended rectangle below costs no extra display list space. The
// sprites are drawn into display lists allocated to fit what the game writes.
extern "C" void conker_enable_extended_gbi(uint8_t* rdram, recomp_context* ctx) {
    gpr dl = ctx->r2;
    put_command(rdram, dl, (rt64_hook_opcode << 24) | rt64_hook_magic, (rt64_hook_op_enable << 28) | rt64_extended_opcode);
}

// func_15130A9C at 0x15131168: $v0 is where the sprite's G_TEXRECT goes (three
// commands: the rectangle and its two G_RDPHALF words). The game clamps its corners
// to 0 and moves the texture start instead; emit the unclamped rectangle as an
// extended one, which is also three commands. RT64 (rt64.patch) clips a rectangle
// whose scissor spans the frame at the edges of the widened frame. The function
// then continues at its end (L_15131360), which returns sp + 0x100.
extern "C" void conker_emit_sprite_texrect(uint8_t* rdram, recomp_context* ctx) {
    gpr sp = ctx->r29;
    // Corners in 10.2 fixed point, already scaled by 4.
    int32_t ulx = (int32_t)stack_float(rdram, sp, 0xBC);
    int32_t uly = (int32_t)stack_float(rdram, sp, 0xB8);
    int32_t lrx = (int32_t)stack_float(rdram, sp, 0xB4);
    int32_t lry = (int32_t)stack_float(rdram, sp, 0xB0);
    // Texture start (s10.5) and steps (s5.10), including the flips' adjustments.
    uint32_t s = (uint32_t)MEM_W(0x98, sp) & 0xFFFF;
    uint32_t t = (uint32_t)MEM_W(0x94, sp) & 0xFFFF;
    uint32_t dsdx = (uint32_t)MEM_W(0x90, sp) & 0xFFFF;
    uint32_t dtdy = (uint32_t)MEM_W(0x8C, sp) & 0xFFFF;
    const uint32_t tile = 0;

    gpr dl = ctx->r2;
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_texrect_v1,
        tile | (g_ex_origin_none << 3) | (g_ex_origin_none << 15));
    put_command(rdram, dl, ((uint32_t)(ulx & 0xFFFF) << 16) | (uint32_t)(uly & 0xFFFF),
        ((uint32_t)(lrx & 0xFFFF) << 16) | (uint32_t)(lry & 0xFFFF));
    put_command(rdram, dl, (s << 16) | t, (dsdx << 16) | dtdy);
    MEM_W(0x100, sp) = (int32_t)dl;
}

// func_151D5E90 (and func_151D6418) draw a saved copy of the frame, such as the
// pause menu's blurred background, as 42 textured tiles. The copy only holds the
// 4:3 frame, so RT64 draws the tiles in the 4:3 area and the widened sides show
// the game frozen behind them. Stretch the tiles over the whole width instead,
// with RT64's rect aspect. The tiles are full of load and pipe syncs, which RT64
// doesn't need: before the first rectangle, the first sync becomes the enable of
// RT64's extended GBI and the second the stretch; the last sync, after the last
// rectangle, returns to the automatic aspect. The display list doesn't grow.
namespace {
    constexpr uint32_t g_ex_setrectaspect_v1 = 0x000033;
    constexpr uint32_t g_ex_aspect_auto = 0x0;
    constexpr uint32_t g_ex_aspect_stretch = 0x1;
    constexpr uint32_t g_texrect = 0xE4;

    gpr frame_copy_dl_start = 0;

    bool is_sync(uint8_t* rdram, gpr cmd) {
        uint32_t w0 = (uint32_t)MEM_W(0, cmd);
        return (w0 == 0xE6000000 || w0 == 0xE7000000 || w0 == 0xE8000000) && MEM_W(4, cmd) == 0;
    }
}

// At the start of the function: $a0 is where it writes its first command.
extern "C" void conker_frame_copy_begin(uint8_t* rdram, recomp_context* ctx) {
    frame_copy_dl_start = ctx->r4;
}

// At its return: $v0 is the end of what it wrote.
extern "C" void conker_frame_copy_end(uint8_t* rdram, recomp_context* ctx) {
    gpr start = frame_copy_dl_start;
    gpr end = ctx->r2;
    frame_copy_dl_start = 0;
    if (start == 0 || end <= start || end - start > 0x10000) {
        return;
    }
    gpr syncs_before[2] = { 0, 0 };
    int before_count = 0;
    gpr last_rect = 0;
    gpr last_sync = 0;
    for (gpr cmd = start; cmd < end; cmd += 8) {
        if (((uint32_t)MEM_W(0, cmd) >> 24) == g_texrect) {
            last_rect = cmd;
            cmd += 16; // its two RDPHALF words
        }
        else if (is_sync(rdram, cmd)) {
            if (last_rect == 0 && before_count < 2) {
                syncs_before[before_count++] = cmd;
            }
            last_sync = cmd;
        }
    }
    if (before_count < 2 || last_rect == 0 || last_sync < last_rect) {
        return;
    }
    gpr dl = syncs_before[0];
    put_command(rdram, dl, (rt64_hook_opcode << 24) | rt64_hook_magic, (rt64_hook_op_enable << 28) | rt64_extended_opcode);
    dl = syncs_before[1];
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_setrectaspect_v1, g_ex_aspect_stretch);
    dl = last_sync;
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_setrectaspect_v1, g_ex_aspect_auto);
}
