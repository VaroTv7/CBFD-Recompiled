#ifndef __CONKER_HPP__
#define __CONKER_HPP__

#include <cstdint>
#include <memory>

#include "ultramodern/input.hpp"
#include "ultramodern/renderer_context.hpp"

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
    // rt64_renderer.cpp
    std::unique_ptr<ultramodern::renderer::RendererContext> create_rt64_renderer(
        uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode);

    // window_input.cpp: SDL2 window, keyboard and game controller.
    namespace window {
        void* create_gfx();
        ultramodern::renderer::WindowHandle create_window(void*);
        void update_gfx(void*);
        void poll_input();
        bool get_input(int controller_num, uint16_t* buttons, float* x, float* y);
        void set_rumble(int controller_num, bool rumble);
        ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);
    }
#endif
}

#endif
