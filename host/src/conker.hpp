#ifndef __CONKER_HPP__
#define __CONKER_HPP__

#include <array>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <span>
#include <string>
#include <vector>

#include "librecomp/game.hpp"
#include "ultramodern/input.hpp"
#include "ultramodern/renderer_context.hpp"

namespace recomp::config {
    class Config;
}

struct _SDL_GameController;

namespace conker {
    // overlays.cpp
    void register_overlays();
    void register_tlb_mapped_code();
    void map_tlb_code_pages(uint8_t* rdram);
    std::vector<uint8_t> decompress_rom(std::span<const uint8_t> rom);

    // mod_api.cpp: functions the game exports to mods.
    void register_mod_exports();

    // cutscene_aspect.cpp: the Cutscene Aspect Ratio setting, full cutscenes in 4:3.
    namespace cutscene_aspect {
        // Every frame, as the game starts its display list: sets the renderer's aspect ratio for a
        // full cutscene, and back after it.
        void update(uint8_t* rdram);
        // conker_config.cpp: whether the setting is 4:3.
        bool in_4x3();
    }

    // rom_versions.cpp: the ROMs the game accepts, and the versions of them kept for the
    // launcher to switch between.
    namespace roms {
        inline constexpr uint64_t us_rom_hash = 0x23FBBA2DBCF2FD8EULL; // XXH3-64 of the US ROM (big-endian .z64)
        // The US ROM, or a ROM hack that only changes the game's assets.
        bool accept(std::span<const uint8_t> rom);
        // Keeps versions next to the runtime's stored ROM (the one in play).
        void init(const std::filesystem::path& stored_rom);
        // Keeps a newly stored ROM (from Load ROM) as a version. True if the one in play changed.
        bool update();
        size_t version_count();
        // "US Original", "US Uncensored" or "US ROM hack (<hash>)"; empty with no ROM yet.
        std::string current_name();
        // Puts the next kept version in play. False if there's no other.
        bool switch_to_next();
        // The region a ROM file's header names ("US", "European"...); empty if it can't tell.
        std::string region_of(const std::filesystem::path& rom_path);
    }

    // main.cpp: why a ROM was refused.
    const char* rom_error_text(recomp::RomValidationError error);

    // main.cpp: the device info for whichever input backend is active.
    ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);

    // null_renderer.cpp
    std::unique_ptr<ultramodern::renderer::RendererContext> create_null_renderer(
        uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode);

#if defined(CONKER_RT64)
    inline constexpr const char* program_name = "Conker's Bad Fur Day: Recompiled";
    // The data folder's name (%LOCALAPPDATA%\<id>). CONKER_TEST_PROFILE=1 gives test
    // runs their own ("ConkerRecompiledTest"), so they never touch the player's saves.
    std::u8string program_id();

    // frontend.cpp: RecompFrontend's launcher and menus (recompui) and input (recompinput).
    namespace frontend {
        // The window's size when it opens (main.cpp's --window); 1600 x 900 when 0.
        inline int window_width = 0;
        inline int window_height = 0;
        // Registers the game with the launcher and sets up the menus.
        void init(recomp::GameEntry& game);
        // The window, renderer, input and error callbacks.
        void set_callbacks(recomp::Configuration& cfg);
        void on_vi();
        ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num);
        // The controllers holding ports 1-4, in port order; returns how many hold one.
        int port_controllers(std::array<_SDL_GameController*, 4>& out);
    }

    // texture_packs.cpp: RT64 texture packs (issue #63).
    namespace texture_packs {
        // Registers the texture pack content type and .rtz files with the mod loader, and has the mod
        // installer take .htc files.
        void register_type();
        // gliden64_packs.cpp: unpacks each GLideN64 texture cache (.htc) in the mods folder not unpacked
        // yet into a pack folder, on a thread of its own, and has the runtime open it.
        void unpack_gliden64_packs();
        // gliden64_packs.cpp: on the main thread (update_gfx), shows the unpacking's progress, and once
        // it's done has the runtime open the packs.
        void update_unpacking();
        // gliden64_packs.cpp: the mod id of the pack a .htc unpacks into.
        std::string gliden64_pack_id(const std::filesystem::path& htc);
        // The Texture Packs settings tab, listing the packs in the mods folder (a .htc as the pack it
        // unpacks into).
        void add_tab();
        // Turns on the pack chosen in the settings and the others off (unless it's left to the
        // Mods menu). Needs the runtime to have opened the mods.
        void apply();
    }

    // rumble.cpp: the Rumble Pak, sent to each port's controller.
    namespace rumble {
        // Its settings (motor, style), on the General tab.
        void add_options(recomp::config::Config& config);
        // The runtime's rumble callback: the game turning a port's Rumble Pak on or off.
        void set(int port, bool on);
        // Every VI: sends each port's rumble to its controller.
        void update();
    }

    // conker_config.cpp: the settings tabs.
    void init_config();

    // look_aim.cpp: gyro and mouse in the look mode (hold R), and how each input moves the view.
    namespace look_aim {
        // Its settings, on the General tab.
        void add_options(recomp::config::Config& config);
        // Called on every input poll: queues its mouse and gyro movement for the look mode.
        void on_input_poll();
    }

    // SDL sound output (audio_output.cpp).
    namespace audio {
        void queue_samples(int16_t* samples, size_t sample_count);
        size_t get_frames_remaining();
        void set_frequency(uint32_t frequency);
    }
#endif
}

#endif
