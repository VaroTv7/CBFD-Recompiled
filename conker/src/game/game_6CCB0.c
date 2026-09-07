/**
 * Auto-decompiled from asm/6CCB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1510F800();                       /* extern */
extern void *D_800DBE48;
s32 func_1503F800();

s32 func_1503F800(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a1;
    s16 temp_a2;
    s16 var_v0;
    u16 temp_v0;
    void *var_v1;

    temp_a2 = arg2;
    temp_a1 = arg1;
    arg1 = temp_a1;
    arg2 = temp_a2;
    func_1510F800(0, temp_a1, temp_a2);
    var_v1 = D_800DBE48;
    if (var_v1 != NULL) {
loop_1:
        temp_a0 = (*(s32 *)((char *)(var_v1) + 0x8));
        temp_v0 = (*(s32 *)((char *)(var_v1) + 0x6));
        if (((temp_a0 + temp_v0) >= arg1) && (arg1 >= (temp_a0 - temp_v0))) {
            temp_a0_2 = (*(s32 *)((char *)(var_v1) + 0xA));
            if (((temp_a0_2 + temp_v0) >= arg2) && (arg2 >= (temp_a0_2 - temp_v0))) {
                if (!((*(s32 *)((char *)(var_v1) + 0x2)) & (1 << arg3))) {
                    goto block_15;
                }
                temp_a0_3 = (*(s32 *)((char *)(var_v1) + 0xC));
                if (temp_a0_3 != 0) {
                    var_v0 = temp_a0_3;
                    goto block_11;
                }
                return 0;
            }
        }
        var_v0 = (*(s32 *)((char *)(var_v1) + 0x4));
block_11:
        if (var_v0 != 0) {
            var_v1 = (char *)(var_v1) + var_v0;
        } else {
            var_v1 = NULL;
        }
        if (var_v1 == NULL) {
            goto block_15;
        }
        goto loop_1;
    }
block_15:
    return 1;
}

void func_1503F904(void *arg0, s32 arg1, void * arg2) {
    func_1503F800((char *)(arg0) + 0x320, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C)), arg1);
}

void func_1503F964(void) {
    s32 var_a0;

    if (D_800C67F0 != 0) {
        var_a0 = D_800C67F1 + 1;
        if (var_a0 >= 0x19) {
            var_a0 = 0;
        }
        if (var_a0 != D_800C67F1) {
loop_4:
            if ((*(s32 *)((char *)((&gObjects + (var_a0 * 0x32C))) + 0xF8)) & 0x800000) {
                D_800C67F1 = (u8) var_a0;
                return;
            }
            var_a0 += 1;
            if (var_a0 >= 0x19) {
                var_a0 = 0;
            }
            if (var_a0 == D_800C67F1) {

            } else {
                goto loop_4;
            }
        }
    }
}
