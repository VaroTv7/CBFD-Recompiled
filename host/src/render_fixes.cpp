// Rendering fixes for things the game did that RT64 draws differently, called from hooks in
// conker.toml.

#include <SDL.h>

// Light glows (such as the two lights over the Feral Reserve's doors).
//
// func_151408A4 draws a glow over a light, fading it out while something stands in front
// of it. It finds that by having the RDP copy the one pixel of the depth buffer under the
// light into memory (its display list gets the pixel's x and y), then, the next frame,
// decoding that sample (D_80089630: the N64's depth format) and comparing it with the
// light's own depth: more than 31 behind the sample, and the glow fades out. RT64 draws
// depth on the GPU, and that sample doesn't come back as the N64's depth, so glows faded
// out wrongly (lit near the light, gone a little way off). The comparison is skipped: a
// glow on screen is shown.

#include <cstdio>

#include "recomp.h"

// func_151408A4 at 0x15140DB4, just after it compared the depths: $t3 is the light's depth
// ($t8) less the sample's ($a2), $a0 the raw sample. Zero passes the test.
extern "C" void conker_light_glow_depth(uint8_t* rdram, recomp_context* ctx) {
    // TEMP-DEBUG: what the sample holds, to see why the test failed.
    static FILE* log = std::fopen("light_glow_log.txt", "w");
    static int lines = 0;
    if (log != nullptr && lines < 3000) {
        std::fprintf(log, "on screen %d light %d sample %d (raw 0x%04X) diff %d\n", (int)ctx->r5, (int)ctx->r24,
            (int)ctx->r6, (unsigned)(ctx->r4 & 0xFFFF), (int)ctx->r11);
        if ((++lines % 20) == 0) {
            std::fflush(log);
        }
    }
    ctx->r11 = 0;
}

// func_1510FEA0 at 0x1510FFA4 (it starts each frame's display list): $t8 is D_800BE635, which
// decides whether the frame is cleared to black before it is drawn. Level setup clears the
// flag, since the level and sky are meant to cover the screen; where they don't (such as with
// the mouse camera in a wall), the last frame's picture repeated. Clear every frame.
extern "C" void conker_frame_clear(uint8_t* rdram, recomp_context* ctx) {
    // TEMP-DEBUG: CONKER_NO_FRAME_CLEAR leaves the game's own choice, to compare.
    static const bool disabled = SDL_getenv("CONKER_NO_FRAME_CLEAR") != nullptr;
    if (!disabled) {
        ctx->r24 = 1;
    }
}
