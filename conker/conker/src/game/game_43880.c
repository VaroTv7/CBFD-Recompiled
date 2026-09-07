/**
 * Auto-decompiled from asm/43880.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 *D_800D18B0;

void func_150163D0(s32 arg0) {
    s32 *var_v0;
    s32 temp_a3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    void **temp_v0;
    void **temp_v0_2;
    void *temp_t0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    if (func_1502B7F0(&D_800D18B0, 3, 0xC, arg0, 9) > 0) {
        var_a0 = 1;
        var_a1 = 0;
        var_v0 = D_800D18B0;
        if (*D_800D18B0 != 0) {
            do {
                temp_t8 = (*(s32 *)((char *)(var_v0) + 0x8));
                var_a0 += 1;
                var_v0 += 8;
            } while (temp_t8 != 0);
            var_a1 = 0;
        }
        temp_a3 = var_a0 - 1;
        if (temp_a3 > 0) {
            temp_t9 = (var_a0 - 1) & 3;
            if (temp_t9 != 0) {
                var_a0_2 = 0 * 8;
                do {
                    var_a1 += 1;
                    temp_v0 = D_800D18B0 + var_a0_2;
                    temp_t0 = *temp_v0;
                    var_a0_2 += 8;
                    *temp_v0 = (char *)(D_800D18B0) + (s32)(temp_t0);
                } while (temp_t9 != var_a1);
                if (var_a1 != temp_a3) {
                    goto block_9;
                }
            } else {
block_9:
                var_a0_3 = var_a1 * 8;
                do {
                    temp_v0_2 = D_800D18B0 + var_a0_3;
                    *temp_v0_2 = (char *)(D_800D18B0) + (s32)(*temp_v0_2);
                    temp_v0_3 = D_800D18B0 + var_a0_3;
                    (*(s32 *)((char *)(temp_v0_3) + 0x8)) = (void *) ((*(s32 *)((char *)(temp_v0_3) + 0x8)) + D_800D18B0);
                    temp_v0_4 = D_800D18B0 + var_a0_3;
                    (*(s32 *)((char *)(temp_v0_4) + 0x10)) = (void *) ((*(s32 *)((char *)(temp_v0_4) + 0x10)) + D_800D18B0);
                    temp_v0_5 = D_800D18B0 + var_a0_3;
                    temp_t8_2 = (*(s32 *)((char *)(temp_v0_5) + 0x18));
                    var_a0_3 += 0x20;
                    (*(s32 *)((char *)(temp_v0_5) + 0x18)) = (void *) (temp_t8_2 + D_800D18B0);
                } while (var_a0_3 != (temp_a3 * 8));
            }
        }
    } else {
        D_800D18B0 = NULL;
    }
}
