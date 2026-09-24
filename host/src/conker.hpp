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

    // main.cpp
    ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);

    // null_renderer.cpp
    std::unique_ptr<ultramodern::renderer::RendererContext> create_null_renderer(
        uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode);
}

#endif
