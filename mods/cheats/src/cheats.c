// Cheats: infinite health, infinite lives and a full wallet, each a config option.
//
// These are player 1's counters, at the addresses of the well-known GameShark codes
// for the US version: health is gObjects[0]'s chocolate count (func_150F2A60 zeroes
// it for instant deaths), lives and cash are fields of the per-player stats at
// D_800D2138 (0x1C bytes each; func_150855xx's accessors). Like a GameShark, the
// mod rewrites them every frame, from a hook on func_1501BBB8, which reads the
// controllers once per game frame.

#include "modding.h"
#include "PR/ultratypes.h"
#include "recompconfig.h"

#define health (*(volatile u8*)0x800CC49A)
#define lives  (*(volatile u8*)0x800D2144)
#define cash   (*(volatile s32*)0x800D2148)

#define MAX_HEALTH 6
#define MAX_LIVES  9
#define FULL_CASH  9999

RECOMP_HOOK_RETURN("func_1501BBB8") void cheats_on_frame(void) {
    // Health 0 means Conker is already dying (a fall, drowning...): don't revive
    // him halfway through the death sequence.
    if (recomp_get_config_u32("infinite_health") && health != 0 && health < MAX_HEALTH) {
        health = MAX_HEALTH;
    }
    if (recomp_get_config_u32("infinite_lives") && lives < MAX_LIVES) {
        lives = MAX_LIVES;
    }
    if (recomp_get_config_u32("max_cash") && cash < FULL_CASH) {
        cash = FULL_CASH;
    }
}
