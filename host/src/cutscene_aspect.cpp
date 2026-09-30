// The Cutscene Aspect Ratio setting (Graphics tab): full cutscenes in 4:3, with black bars at the
// sides, and the rest of the game in the window's aspect ratio. Cutscenes are framed for the N64's
// 4:3 screen, and in widescreen characters waiting for their cue can be seen beside the picture.
//
// A full cutscene is a story scene with dialogue (the new game's opening, arriving in the Windy hub),
// not a conversation with a character or a B pad's hint: all of them are played by the same
// cutscene system, but the full ones' scripts mark them as not skippable the first time (command
// 0x0E, D_800C3C9C, set by func_1501DAAC when a cutscene starts), and those can be told apart by
// that. A cutscene plays while its slot's byte at D_800C35EA (two slots) is 1. The opening
// with the N64 logo (scene 0x21, the chainsaw) is one too, though its script doesn't mark it.
//
// While one plays, the renderer's aspect ratio is set to Original, and back to what the Graphics tab
// has when it ends. Only the renderer's configuration changes (what's saved is the tab's), and the
// widescreen fixes (widescreen.cpp) turn themselves off with it.

#include <cstdint>

#include "recomp.h"
#include "ultramodern/config.hpp"

#include "conker.hpp"

#if defined(CONKER_RT64)
#include "recompui/config.h"
#endif

namespace {
    constexpr uint32_t scene_address = 0x800BE9F0;      // the scene in play
    constexpr uint32_t cutscene_playing = 0x800C35EA;   // D_800C35EA, a byte per slot
    constexpr uint32_t cutscene_unskippable = 0x800C3C9C; // D_800C3C9C
    constexpr uint32_t opening_scene = 0x21;

    bool forced = false;

    bool full_cutscene(uint8_t* rdram) {
        const bool playing = MEM_BU(0, (gpr)(int32_t)cutscene_playing) == 1 || MEM_BU(1, (gpr)(int32_t)cutscene_playing) == 1;
        if (!playing) {
            return false;
        }
        return MEM_BU(0, (gpr)(int32_t)cutscene_unskippable) != 0 ||
               (uint32_t)MEM_W(0, (gpr)(int32_t)scene_address) == opening_scene;
    }

    void set_aspect(ultramodern::renderer::AspectRatio aspect) {
        ultramodern::renderer::GraphicsConfig config = ultramodern::renderer::get_graphics_config();
        if (config.ar_option != aspect) {
            config.ar_option = aspect;
            ultramodern::renderer::set_graphics_config(config);
        }
    }
}

void conker::cutscene_aspect::update(uint8_t* rdram) {
#if defined(CONKER_RT64)
    const auto chosen = static_cast<ultramodern::renderer::AspectRatio>(std::get<uint32_t>(
        recompui::config::get_graphics_config().get_option_value(recompui::config::graphics::options::ar_option)));
    const bool want_4x3 = conker::cutscene_aspect::in_4x3() && chosen != ultramodern::renderer::AspectRatio::Original &&
        full_cutscene(rdram);
    if (want_4x3) {
        set_aspect(ultramodern::renderer::AspectRatio::Original);
        forced = true;
    }
    else if (forced) {
        set_aspect(chosen);
        forced = false;
    }
#else
    (void)rdram;
    (void)forced;
#endif
}
