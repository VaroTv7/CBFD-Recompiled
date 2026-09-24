// Renders the game with RT64, driven by ultramodern's graphics thread.

#include <cstdio>
#include <memory>

#include "hle/rt64_application.h"

#include "librecomp/game.hpp"
#include "ultramodern/ultramodern.hpp"

#include "conker.hpp"

namespace {
    // RT64 wants pointers to RSP memory and RDP/MI registers. The runtime runs the
    // RSP and RDP at a higher level, so these only need to exist.
    uint8_t dmem[0x1000];
    uint8_t imem[0x1000];
    uint32_t mi_intr_reg;
    uint32_t dpc_start_reg, dpc_end_reg, dpc_current_reg, dpc_status_reg, dpc_clock_reg;
    uint32_t dpc_bufbusy_reg, dpc_pipebusy_reg, dpc_tmem_reg;

    void check_interrupts() {}

    class RT64Renderer : public ultramodern::renderer::RendererContext {
    public:
        RT64Renderer(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
            RT64::Application::Core core{};
#if defined(_WIN32)
            core.window = window_handle.window;
#else
            core.window = window_handle;
#endif
            core.checkInterrupts = check_interrupts;
            // RT64 reads the ROM header to identify the game (e.g. for texture packs).
            core.HEADER = const_cast<uint8_t*>(recomp::get_rom().data());
            core.RDRAM = rdram;
            core.DMEM = dmem;
            core.IMEM = imem;
            core.MI_INTR_REG = &mi_intr_reg;
            core.DPC_START_REG = &dpc_start_reg;
            core.DPC_END_REG = &dpc_end_reg;
            core.DPC_CURRENT_REG = &dpc_current_reg;
            core.DPC_STATUS_REG = &dpc_status_reg;
            core.DPC_CLOCK_REG = &dpc_clock_reg;
            core.DPC_BUFBUSY_REG = &dpc_bufbusy_reg;
            core.DPC_PIPEBUSY_REG = &dpc_pipebusy_reg;
            core.DPC_TMEM_REG = &dpc_tmem_reg;

            ultramodern::renderer::ViRegs* vi = ultramodern::renderer::get_vi_regs();
            core.VI_STATUS_REG = &vi->VI_STATUS_REG;
            core.VI_ORIGIN_REG = &vi->VI_ORIGIN_REG;
            core.VI_WIDTH_REG = &vi->VI_WIDTH_REG;
            core.VI_INTR_REG = &vi->VI_INTR_REG;
            core.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
            core.VI_TIMING_REG = &vi->VI_TIMING_REG;
            core.VI_V_SYNC_REG = &vi->VI_V_SYNC_REG;
            core.VI_H_SYNC_REG = &vi->VI_H_SYNC_REG;
            core.VI_LEAP_REG = &vi->VI_LEAP_REG;
            core.VI_H_START_REG = &vi->VI_H_START_REG;
            core.VI_V_START_REG = &vi->VI_V_START_REG;
            core.VI_V_BURST_REG = &vi->VI_V_BURST_REG;
            core.VI_X_SCALE_REG = &vi->VI_X_SCALE_REG;
            core.VI_Y_SCALE_REG = &vi->VI_Y_SCALE_REG;

            RT64::ApplicationConfiguration app_config{};
            app_config.appId = "ConkerRecomp";
            app_config.useConfigurationFile = false;

            app = std::make_unique<RT64::Application>(core, app_config);
            app->userConfig.developerMode = developer_mode;

#if defined(_WIN32)
            uint32_t thread_id = window_handle.thread_id;
#else
            uint32_t thread_id = 0;
#endif
            RT64::Application::SetupResult result = app->setup(thread_id);
            switch (result) {
                case RT64::Application::SetupResult::Success:
                    setup_result = ultramodern::renderer::SetupResult::Success;
                    break;
                case RT64::Application::SetupResult::DynamicLibrariesNotFound:
                    setup_result = ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
                    break;
                case RT64::Application::SetupResult::InvalidGraphicsAPI:
                    setup_result = ultramodern::renderer::SetupResult::InvalidGraphicsAPI;
                    break;
                case RT64::Application::SetupResult::GraphicsAPINotFound:
                    setup_result = ultramodern::renderer::SetupResult::GraphicsAPINotFound;
                    break;
                case RT64::Application::SetupResult::GraphicsDeviceNotFound:
                    setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
                    break;
            }
            chosen_api = ultramodern::renderer::GraphicsApi::Auto;
            if (result != RT64::Application::SetupResult::Success) {
                std::fprintf(stderr, "[rt64] setup failed (%d)\n", (int)result);
                app.reset();
            }
        }

        ~RT64Renderer() override {
            if (app) {
                app->end();
            }
        }

        bool valid() override { return app != nullptr; }

        bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override {
            return true;
        }

        void enable_instant_present() override {}

        void send_dl(const OSTask* task) override {
            // Each graphics task carries its own microcode, which RT64 identifies
            // from the ucode text in RDRAM (Conker's are in rt64_gbi.cpp's database,
            // see recomp/rt64.patch). Log each new one once.
            uint32_t ucode = (uint32_t)task->t.ucode & 0x3FFFFFF;
            if (ucode != last_ucode) {
                last_ucode = ucode;
                std::printf("[rt64] graphics task microcode: text 0x%08X, data 0x%08X\n",
                    ucode, (uint32_t)task->t.ucode_data & 0x3FFFFFF);
            }
            app->state->rsp->reset();
            app->interpreter->loadUCodeGBI(task->t.ucode & 0x3FFFFFF, task->t.ucode_data & 0x3FFFFFF, true);
            app->processDisplayLists(app->core.RDRAM, task->t.data_ptr & 0x3FFFFFF, 0, true);
        }

        void send_dummy_workload(uint32_t) override {}

        void update_screen() override { app->updateScreen(); }

        void shutdown() override {
            if (app) {
                app->end();
                app.reset();
            }
        }

        uint32_t get_display_framerate() const override { return app->appWindow->getRefreshRate(); }

        float get_resolution_scale() const override { return 1.0f; }

    private:
        std::unique_ptr<RT64::Application> app;
        uint32_t last_ucode = 0xFFFFFFFF;
    };
}

std::unique_ptr<ultramodern::renderer::RendererContext> conker::create_rt64_renderer(
    uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
    return std::make_unique<RT64Renderer>(rdram, window_handle, developer_mode);
}
