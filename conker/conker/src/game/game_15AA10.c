/**
 * Auto-decompiled from asm/15AA10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void func_1512D560(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    *((char *)(temp_v0) + ((*(s32 *)((char *)(temp_v0) + 0xAC)) * 8)) = arg1;
    temp_v0_2 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    (*(s32 *)((char *)(((char *)(temp_v0_2) + ((*(s32 *)((char *)(temp_v0_2) + 0xAC)) * 8))) + 0x4)) = arg2;
    temp_v0_3 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    (*(s32 *)((char *)(temp_v0_3) + 0xAC)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0xAC)) + 1);
    temp_v0_4 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    if ((*(s32 *)((char *)(temp_v0_4) + 0xAC)) == 0x14) {
        (*(s32 *)((char *)(temp_v0_4) + 0xAC)) = 0;
    }
}

void *func_1512D604(void *arg0) {
    s32 temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    temp_a1 = (*(s32 *)((char *)(temp_v0) + 0xA8));
    (*(s32 *)((char *)(temp_v0) + 0xA8)) = (s32) (temp_a1 + 1);
    temp_v0_2 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    if ((*(s32 *)((char *)(temp_v0_2) + 0xA8)) == 0x14) {
        (*(s32 *)((char *)(temp_v0_2) + 0xA8)) = 0;
    }
    return (char *)(temp_v0) + (temp_a1 * 8);
}

void func_1512D66C(void *arg0) {
    (*(s32 *)((char *)((D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0))) + 0xA8)) = 0;
    (*(s32 *)((char *)((D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0))) + 0xAC)) = 0;
}

s32 func_1512D6B0(void *arg0) {
    void *temp_v1;

    temp_v1 = D_800DC2B0 + ((*(s32 *)((char *)(arg0) + 0x23D)) * 0xB0);
    return (*(s32 *)((char *)(temp_v1) + 0xA8)) == (*(s32 *)((char *)(temp_v1) + 0xAC));
}
