/**
 * Auto-decompiled from asm/15A840.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1508EF80(); /* extern */
extern f32 D_800A36E0;

void func_1512D390(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f2;
    u16 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_2;
    void *temp_v0_3;

    var_f12 = (*(f32 *)&arg0);
    temp_v0 = (*(s32 *)((*(s32 *)((char *)(*(void **)&(arg0)) + 0x36C))));
    if ((temp_v0 & 3) && !((*(s32 *)((char *)(*(void **)&(arg0)) + 0x84)) & 0x200000)) {
        temp_v0_2 = (char *)(arg0) + 0x69C;
        if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x698)) == 0) {
            if (temp_v0 & 1) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x6B0)) = 1;
            } else {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x6B0)) = -1;
            }
            var_f2 = -10.0f;
            (*(s32 *)((char *)(temp_v0_2) + 0x24)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x24)) + 1);
            (*(f32 *)((char *)(temp_v0_2) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x28)) + ((f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0x6B0)) * 0.5f * D_800BE9A4));
            temp_f0 = (*(s32 *)((char *)(temp_v0_2) + 0x28));
            if (temp_f0 < -10.0f) {

            } else {
                var_f12 = 10.0f;
                if (temp_f0 > 10.0f) {
                    var_f2 = 10.0f;
                } else {
                    var_f2 = temp_f0;
                }
            }
            (*(s32 *)((char *)(temp_v0_2) + 0x28)) = var_f2;
            if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x2C)) & 0x400) {
                (*(s32 *)((char *)(temp_v0_2) + 0x24)) = 0x14;
                return;
            }
            temp_a0 = (char *)(arg0) + 0x2F8;
            func_1508EF80((*(void **)&var_f12), temp_a0, (char *)(arg0) + 0x2A4, ((*(s32 *)((char *)(temp_v0_2) + 0x28)) * D_800BE9A4) / 2.5f, temp_a0);
        }
    } else {
        temp_v0_3 = (char *)(arg0) + 0x69C;
        temp_f0_2 = (*(s32 *)((char *)(temp_v0_3) + 0x28));
        if (temp_f0_2 != 0.0f) {
            temp_a0_2 = (char *)(arg0) + 0x2F8;
            (*(f32 *)((char *)(temp_v0_3) + 0x28)) = (f32) (temp_f0_2 - (temp_f0_2 * D_800A36E0 * D_800BE9A4));
            func_1508EF80(temp_a0_2, (char *)(arg0) + 0x2A4, ((*(f32 *)((char *)(temp_v0_3) + 0x28)) * D_800BE9A4) / 2.5f, (f32)(s32)(temp_a0_2));
        }
    }
}
