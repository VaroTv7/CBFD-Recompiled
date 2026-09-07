/**
 * Auto-decompiled from asm/AD6B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1507E500();                  /* extern */
s32 func_1507E968();                                /* extern */
s32 func_151EF610();                                /* extern */
void func_15080430(); /* static */
extern s32 D_800427F0;
extern s32 D_8009BD10;
extern s32 D_800D1928;
extern s32 D_800D192C;
extern s32 D_800D1930;

void func_15080200(void) {
    D_800D192C = 0;
    D_800D1928 = 0;
    D_800D1930 = 0;
}

void func_15080228(void) {
    u8 sp38;
    s32 var_a2;

    s32 sp3F;
    f32 sp3B;
    s32 sp3E;
    s32 sp3D;
    s32 sp3C;
    if (func_100126E8(&sp38, 0x100) != 0) {
        do {
            if (sp38 == 0x4C) {
                var_a2 = (s32) ((sp3F & 0x7F) | (((sp3E & 0x7F) | (((sp3D & 0x7F) | ((sp3C & 0x7F) << 7)) << 7)) << 7)) / 367;
                if (var_a2 == 0) {
                    var_a2 = 0x14;
                }
                func_15080430(&gObjects + (D_800D18D0 * 0x32C), sp3B - 1, var_a2);
            }
        } while (func_100126E8(&sp38, 0x100) != 0);
    }
}

void func_15080348(void *arg0) {
    s32 sp1C;
    s32 var_v1;

    if ((D_800D1928 != 0) && (arg0 != NULL)) {
        if (D_800D1928 == 1) {
            if (D_800427F0 < 0x3E8) {
                (*(s32 *)((char *)(arg0) + 0x1FF)) = 0;
            } else {
                (*(s32 *)((char *)(arg0) + 0x1FF)) = 1;
            }
        } else if (D_800427F0 >= 0x3E9) {
            var_v1 = D_800D192C + 1;
            if (((*(s32 *)((char *)(arg0) + 0x135)) - D_800BE9E4) < 0) {
                if (var_v1 >= 5) {
                    var_v1 = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x134)) = (s8) *(&D_8009BD10 + (var_v1 * 4));
                sp1C = var_v1;
                (*(u8 *)((char *)(arg0) + 0x135)) = (u8) ((func_151EF610() % 7) + 4);
                D_800D192C = var_v1;
            }
        }
        D_800427F0 = 0;
    }
}

void func_15080430(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;

    if (arg0 != NULL) {
        var_a2 = arg2;
        if (func_1507E968() > 0) {
            if (arg1 == 0) {
                D_800D1928 = 0;
                (*(s32 *)((char *)(arg0) + 0x72)) = 0x14;
                func_1507E500(arg0, 0, 0xA);
                return;
            }
            (*(s32 *)((char *)(arg0) + 0x72)) = 0xFFFE;
            if (arg1 == 1) {
                D_800D1928 = 2;
                return;
            }
            if (var_a2 != 0) {
                if (var_a2 >= 0x15) {
                    var_a2 = 0x14;
                }
                if (var_a2 <= 0) {
                    var_a2 = 1;
                }
            }
            func_1507E500(arg0, arg1, var_a2);
            return;
        }
        temp_v0 = arg1 != 0;
        D_800D1928 = temp_v0;
        if (temp_v0 == 0) {
            (*(s32 *)((char *)(arg0) + 0x1FF)) = 0;
        }
    }
}
