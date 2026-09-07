/**
 * Auto-decompiled from asm/1355D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
void * func_150E83AC();               /* extern */
void * func_15136C3C(); /* extern */
void * func_15152190(); /* extern */
extern s32 D_800A2430;
extern s32 D_800A2434;
extern f32 D_800A2438;
extern f32 D_800A243C;
extern f32 D_800A2440;
extern f32 D_800A2444;

void func_15108120(void *arg0, s32 arg1, s32 arg2) {
    f32 sp84;
    f32 sp80;
    s32 sp7C;
    f32 sp78;
    f32 sp74;
    s32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    void * sp3C;
    s32 sp38;
    s32 sp34;

    sp7C = (*(s32 *)((char *)(arg0) + 0x14));
    sp80 = (*(s32 *)((char *)(arg0) + 0x18));
    sp84 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp70 = (*(s32 *)((char *)(arg0) + 0x14));
    sp74 = (*(s32 *)((char *)(arg0) + 0x18)) + 30.0f;
    sp78 = (*(s32 *)((char *)(arg0) + 0x1C));
    func_150E83AC(&sp7C, (s16) ((random_u32() % 201U) + 0x1F4), arg1, arg2);
    sp34 = 0xF;
    sp38 = 8;
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp70) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp70) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp70) + 0x8));
    sp48 = 0;
    sp4A = 0xFF;
    sp4C = -0x40;
    sp4E = 0x29;
    sp60 = 0x27;
    sp62 = 0x14;
    sp64 = D_800A2438;
    sp68 = D_800A2438;
    sp50 = 8.0f;
    sp54 = 10.0f;
    sp58 = D_800A243C;
    sp5C = D_800A2440;
    sp6C = D_800A2444;
    func_15152190(&sp34, &D_800A2430, &D_800A2434, 1, 40.0f, 0, (s32) arg1, arg2);
    func_15136C3C(arg0, 1, 1, 1, 0, 0, (s32) arg1, arg2);
}
