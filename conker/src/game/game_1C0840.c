/**
 * Auto-decompiled from asm/1C0840.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
void * func_1516865C();                 /* extern */
void * func_15168800();                       /* extern */
extern f32 D_800A81B0;

void func_15193390(void *arg0) {
    s8 spCC;
    u8 spCB;
    s8 spCA;
    s8 spC8;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spAE;
    void * sp28;
    s16 temp_v1;
    void *temp_v0;

    bzero(&sp28, 0xA8);
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x2E));
    temp_v0 = (char *)(arg0) + 0x28;
    if (D_800A81B0 != (f32) temp_v1) {
        spBE = temp_v1;
    } else {
        spBE = (s16) (s32) ((f32) (*(s16 *)((char *)(temp_v0) + 0x2)) - 200.0f);
        (*(s32 *)((char *)(temp_v0) + 0x8)) = 0U;
    }
    spB4 = (*(s32 *)((char *)(arg0) + 0x28));
    spB6 = (*(s32 *)((char *)(temp_v0) + 0x2));
    spBA = 0;
    spBC = 0;
    spCA = 0xF;
    spC8 = 0x45;
    spAE = 0xA;
    spB8 = (*(s32 *)((char *)(temp_v0) + 0x4));
    spC0 = 0x4880;
    spCC = 0x80;
    spCB = (*(s32 *)((char *)(temp_v0) + 0x8));
    func_1516865C(&sp28, 0xFF, 0xFF, 0xFF, 0x80);
    func_15168800(&sp28, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
    (*(s16 *)((char *)(arg0) + 0xE)) = (s16) ((random_u32() & 0x7F) + 0x64);
}

void func_151934B4(void *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 temp_v0;
    s32 temp_v1;

    if ((*(s32 *)((char *)(arg0) + 0xA4)) < (*(s32 *)((char *)(arg0) + 0x96))) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0xAA));
        temp_v1 = temp_v0 >> 2;
        (*(s16 *)((char *)(arg0) + 0xA4)) = (s16) ((s32) (temp_v1 * 0x18) / 3);
        (*(s16 *)((char *)(arg0) + 0xA2)) = (s16) ((s32) (temp_v1 * 6) / 3);
        (*(s16 *)((char *)(arg0) + 0xAA)) = (s16) (temp_v0 + D_800BE9E4);
        return;
    }
    (*(s16 *)((char *)(arg0) + 0x94)) = (s16) ((*(s16 *)((char *)(arg0) + 0x94)) + 1);
    if ((*(s32 *)((char *)(arg0) + 0x94)) >= 0x15) {
        (*(s32 *)((char *)(arg0) + 0x94)) = 0x14;
    }
    (*(s16 *)((char *)(arg0) + 0x9E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x9E)) - ((s32) ((*(s16 *)((char *)(arg0) + 0x94)) * D_800BE9E4) >> 1));
    if ((*(s32 *)((char *)(arg0) + 0x9E)) < (*(s32 *)((char *)(arg0) + 0xA6))) {
        if ((*(s32 *)((char *)(arg0) + 0xB3)) == 1) {
            sp38 = (f32) (*(f32 *)((char *)(arg0) + 0x9C));
            sp3C = (f32) (*(f32 *)((char *)(arg0) + 0xA6));
            sp40 = (f32) (*(f32 *)((char *)(arg0) + 0xA0));
            func_151DBCBC(5, 0x41F00000, 0xFF, 0, &sp38, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        }
        (*(s32 *)((char *)(arg0) + 0x98)) = -1;
    }
}
