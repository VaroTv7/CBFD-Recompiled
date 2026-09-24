// A renderer that draws nothing. It stands in for RT64 while bringing up the
// recompiled game headlessly: it only records the graphics tasks it receives.

#include <atomic>
#include <cstdio>

#include "conker.hpp"

namespace {
    std::atomic<uint32_t> display_lists_received{0};
    std::atomic<uint32_t> screen_updates{0};

    class NullRenderer : public ultramodern::renderer::RendererContext {
    public:
        NullRenderer() {
            setup_result = ultramodern::renderer::SetupResult::Success;
            chosen_api = ultramodern::renderer::GraphicsApi::Auto;
        }

        bool valid() override { return true; }

        bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override {
            return true;
        }

        void enable_instant_present() override {}

        void send_dl(const OSTask* task) override {
            uint32_t count = ++display_lists_received;
            // Log the first few tasks and then every 60th, to show the game is alive without flooding.
            if (count <= 3 || count % 60 == 0) {
                std::printf("[null renderer] display list #%u: data_ptr=0x%08X size=0x%X\n",
                    count, (uint32_t)task->t.data_ptr, (uint32_t)task->t.data_size);
            }
        }

        void send_dummy_workload(uint32_t) override {}

        void update_screen() override { ++screen_updates; }

        void shutdown() override {
            std::printf("[null renderer] shutdown after %u display lists, %u screen updates\n",
                display_lists_received.load(), screen_updates.load());
        }

        uint32_t get_display_framerate() const override { return 60; }

        float get_resolution_scale() const override { return 1.0f; }
    };
}

std::unique_ptr<ultramodern::renderer::RendererContext> conker::create_null_renderer(
    uint8_t*, ultramodern::renderer::WindowHandle, bool) {
    return std::make_unique<NullRenderer>();
}
