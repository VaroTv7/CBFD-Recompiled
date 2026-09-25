// Skip Any Cutscene: lets L skip a cutscene even the first time it plays.
//
// func_1501E05C decides each frame whether the playing cutscene should be skipped.
// For most cutscenes that's L, but only when func_1501D2C4 says the cutscene has
// been watched before. The opening cutscene (scene 0x21) instead takes Start, and
// only after a soft reset (osResetType == 1). This patch is the same function
// without those two conditions, written from the original instructions.
//
// Cutscenes whose script contains command 0x0E are also never skippable
// (D_800C3C9C, set by func_1501DAAC when the cutscene starts); that includes the
// opening and the hangover scene after it. The "Skip Unskippable Cutscenes" option
// (on by default) lets L skip those too.

#include "modding.h"
#include "PR/ultratypes.h"
#include "recompconfig.h"

#define BUTTON_START 0x1000
#define BUTTON_L     0x0020

#define scene_id            (*(volatile s32*)0x800BE9F0)
#define buttons_pressed     (*(volatile u16*)0x800BE710)
#define scene_1D_skip       (*(volatile s8*)0x8008FD84)
#define cutscene_ids        ((volatile u8*)0x800C35E8)
#define cutscene_timers     ((volatile s32*)0x800C35B0)
#define cutscene_lengths    ((volatile s32*)0x800C3640)
#define skip_blocked        (*(volatile u8*)0x800C3C9C)
#define always_skippable    (*(volatile u8*)0x800D2E40)
#define skip_anywhere       (*(volatile u8*)0x800C3C99)

RECOMP_PATCH s32 func_1501E05C(s32 i) {
    s32 scene = scene_id;

    if (scene == 0x1D) {
        if (scene_1D_skip != 0) {
            scene_1D_skip = 0;
            return 1;
        }
        if (cutscene_ids[0] != 5) {
            return 0;
        }
    }

    if (scene == 0x21) {
        // Originally also required osResetType == 1 (a soft reset).
        return (buttons_pressed & BUTTON_START) && cutscene_timers[0] >= 0x12D;
    }

    if (!(buttons_pressed & BUTTON_L)) {
        return 0;
    }
    // Some cutscenes (e.g. the opening in the throne room) are marked unskippable by
    // the game's script, watched or not. Skipping those is optional.
    if (skip_blocked && recomp_get_config_u32("skip_unskippable") == 0) {
        return 0;
    }
    if (always_skippable) {
        return 1;
    }
    // Originally: `if (!func_1501D2C4(scene, cutscene_ids[i])) return 0;`, i.e. only
    // cutscenes that were watched before could be skipped.
    if (skip_anywhere) {
        return 1;
    }
    return cutscene_timers[i] + 0x1E < cutscene_lengths[i];
}
