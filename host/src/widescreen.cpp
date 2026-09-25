// Widescreen fixes, called from hooks in conker.toml.
//
// RT64 widens the 3D view, but 2D texture rectangles are drawn in the N64's
// 320-wide screen space, and the G_TEXRECT command can't hold coordinates left
// of 0. So the game culls and clips its screen-space sprites (bubbles, bees,
// sparkles: func_15130A9C) to the 4:3 screen. These hooks let those sprites
// reach into the widened area: the cull bounds are pushed outwards, and the
// rectangle is emitted as RT64's extended texture rectangle, which takes signed
// coordinates and isn't limited to the 4:3 scissor.

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
    constexpr uint32_t g_ex_setscissor_v1 = 0x000005;
    constexpr uint32_t g_ex_pushscissor_v1 = 0x000017;
    constexpr uint32_t g_ex_popscissor_v1 = 0x000018;
    constexpr uint32_t g_ex_origin_none = 0x800;
    constexpr uint32_t g_ex_origin_left = 0x0;
    constexpr uint32_t g_ex_origin_right = 0x400;

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

// func_15130A9C at 0x15131168: $v0 is where the sprite's G_TEXRECT goes. The game
// clamps its corners to 0 and moves the texture start instead; emit the unclamped
// rectangle as an extended one. RT64 keeps a rectangle's scissor in the 4:3 area
// (only 3D draws are clipped to the widened viewport), so the rectangle is drawn
// under a scissor spanning the whole window, pushed and popped around it. All of
// it follows an enable of RT64's extended GBI, which RT64 turns off at the start of
// every display list. That's 8 commands where the game wrote 3; the function then
// continues at its end (L_15131360), which returns sp + 0x100.
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
    put_command(rdram, dl, (rt64_hook_opcode << 24) | rt64_hook_magic, (rt64_hook_op_enable << 28) | rt64_extended_opcode);
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_pushscissor_v1, 0);
    // Mode G_SC_NON_INTERLACE; x 0 from the window's left edge to x 0 from its right.
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_setscissor_v1,
        (g_ex_origin_left << 2) | (g_ex_origin_right << 14));
    put_command(rdram, dl, 0, (uint32_t)(240 * 4));
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_texrect_v1,
        tile | (g_ex_origin_none << 3) | (g_ex_origin_none << 15));
    put_command(rdram, dl, ((uint32_t)(ulx & 0xFFFF) << 16) | (uint32_t)(uly & 0xFFFF),
        ((uint32_t)(lrx & 0xFFFF) << 16) | (uint32_t)(lry & 0xFFFF));
    put_command(rdram, dl, (s << 16) | t, (dsdx << 16) | dtdy);
    put_command(rdram, dl, (rt64_extended_opcode << 24) | g_ex_popscissor_v1, 0);
    MEM_W(0x100, sp) = (int32_t)dl;
}
