/**
 * Auto-decompiled from asm/12D630.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * memcpy();                          /* extern */

void func_15100180(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0(&sp18, 0x48, arg0);
}

void func_151001B4(void *arg0) {
    s16 sp3E;
    u8 sp3C;
    void *sp38;
    s32 temp_v0;

    sp38 = arg0;
    sp3E = 0;
    sp3C = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x12C, -1, 0x4E, -1, 0, 0x3B, 8, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 8);
    }
}

void func_15100230(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a2_2;

    temp_a2 = (char *)(arg0) + 0x28;
    if (arg2 == 0x48) {
        temp_a2_2 = (char *)(arg0) + 0x28;
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_a2_2) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_a2_2);
        }
    } else {
        func_15149514(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
    }
}

void func_151002BC(void *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x28));
    if (((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || (temp_v0 = (char *)(arg0) + 0x28, ((*(s32 *)((char *)(temp_v1) + 0x4)) == 0xFF)) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_v1) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if ((*(s32 *)((char *)(temp_v1) + 0x318)) != 0) {
        (*(s16 *)((char *)(temp_v0) + 0x6)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x6)) - D_800BE9E4);
    }
}
