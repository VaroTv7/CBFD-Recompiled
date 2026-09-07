/**
 * Auto-decompiled from asm/FDBE0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
void * func_151827D0();                                  /* extern */
extern u8 D_800D98F0;

void func_150D0730(s32 arg0) {
    s32 var_s0;
    void *temp_v1;

    var_s0 = 0;
    func_151827D0();
    if (D_800D98F0 != 0) {
        if (D_800BE9E4 < (s32) D_800D98F0) {
            D_800D98F0 -= D_800BE9E4;
            return;
        }
        D_800D98F0 = 0;
        return;
    }
    if (func_150A29C8(0, 0x15, &D_800D98F0) == 0) {
        var_s0 = 0x15;
    } else if (func_150A29C8(0, 0x1A) == 0) {
        var_s0 = 0x1A;
    } else if (func_150A29C8(0, 0x1B) == 0) {
        var_s0 = 0x1B;
    } else if (func_150A29C8(0, 0x1C) == 0) {
        var_s0 = 0x1C;
    } else if (func_150A29C8(0, 0x1D) == 0) {
        var_s0 = 0x1D;
    } else if (func_150A29C8(0, 0x20) == 0) {
        var_s0 = 0x20;
    }
    if (var_s0 != 0) {
        D_800D98F0 = (random_u32() & 0x7F) + 0x80;
        temp_v1 = D_800D3098 + (var_s0 * 0x34);
        func_10010F88((random_u32() % 3U) + 0x6C, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_v1) + 0x0)), (s32) (*(s32 *)((char *)(temp_v1) + 0x2)), (s32) (*(s32 *)((char *)(temp_v1) + 0x4)), 0x320, 0x5DC);
    }
}
