#ifndef __CONKER_HPP__
#define __CONKER_HPP__

#include <cstdint>
#include <memory>

#include "ultramodern/input.hpp"
#include "ultramodern/renderer_context.hpp"

#if defined(CONKER_RT64)
#include <string>
#include "librecomp/game.hpp"
#endif

namespace conker {
    // overlays.cpp
    void register_overlays();
    void register_tlb_mapped_code();
    void map_tlb_code_pages(uint8_t* rdram);

    // main.cpp: the device info for whichever input backend is active.
    ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);

    // null_renderer.cpp
    std::unique_ptr<ultramodern::renderer::RendererContext> create_null_renderer(
        uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode);

#if defined(CONKER_RT64)
    inline constexpr const char* program_name = "Conker's Bad Fur Day: Recompiled";
    inline const std::u8string program_id = u8"ConkerRecompiled";

    // frontend.cpp: RecompFrontend's launcher and menus (recompui) and input (recompinput).
    namespace frontend {
        // Registers the game with the launcher and sets up the menus.
        void init(recomp::GameEntry& game);
        // The window, renderer, input and error callbacks.
        void set_callbacks(recomp::Configuration& cfg);
        void on_vi();
        ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);
    }

    // conker_config.cpp: the settings tabs.
    void init_config();

    // SDL sound output (audio_output.cpp).
    namespace audio {
        void queue_samples(int16_t* samples, size_t sample_count);
        size_t get_frames_remaining();
        void set_frequency(uint32_t frequency);
    }
#endif
}

#endif
