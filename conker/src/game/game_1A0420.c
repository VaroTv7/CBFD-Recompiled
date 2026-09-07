/**
 * Auto-decompiled from asm/1A0420.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void *func_15172F70(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *var_a0;

    var_a0 = arg0;
    if (D_800DD2D0 != 0) {
        temp_a0 = (char *)(var_a0) + 8;
        (*(s32 *)((char *)(var_a0) + 0x0)) = 0xD9E0FFFE;
        (*(s32 *)((char *)(var_a0) + 0x4)) = 0;
        (*(s32 *)((char *)(var_a0) + 0x8)) = 0xD9FFFFFF;
        (*(s32 *)((char *)(temp_a0) + 0x4)) = 0x200004;
        temp_a0_2 = (char *)(temp_a0) + 8;
        (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0;
        temp_a0_3 = (char *)(temp_a0_2) + 8;
        (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xE3000A01;
        (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
        temp_a0_4 = (char *)(temp_a0_3) + 8;
        (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xFA000000;
        (*(s32 *)((char *)(temp_a0_4) + 0x4)) = (s32) ((D_800DD2D0 & 0xFF) | ~0xFF);
        temp_a0_5 = (char *)(temp_a0_4) + 8;
        (*(s32 *)((char *)(temp_a0_4) + 0x8)) = 0xE200001C;
        (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0x504340;
        temp_a0_6 = (char *)(temp_a0_5) + 8;
        (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0xE3000C00;
        (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0;
        temp_a0_7 = (char *)(temp_a0_6) + 8;
        (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0xE3000F00;
        (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0;
        temp_a0_8 = (char *)(temp_a0_7) + 8;
        (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xFCFFFFFF;
        (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0xFFFDF6FB;
        temp_a0_9 = (char *)(temp_a0_8) + 8;
        var_a0 = (char *)(temp_a0_9) + 8;
        (*(s32 *)((char *)(temp_a0_8) + 0x8)) = (s32) ((((u32) (*(s32 *)((char *)(D_800BE628) + 0x28)) & 0x3FF) * 4) | 0xF6000000 | (((u32) (*(s32 *)((char *)(D_800BE628) + 0x30)) & 0x3FF) << 0xE));
        (*(s32 *)((char *)(temp_a0_9) + 0x4)) = (s32) ((((u32) (*(s32 *)((char *)(D_800BE628) + 0x24)) & 0x3FF) * 4) | (((u32) (*(s32 *)((char *)(D_800BE628) + 0x2C)) & 0x3FF) << 0xE));
    }
    return var_a0;
}
