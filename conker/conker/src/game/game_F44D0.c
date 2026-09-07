/**
 * Auto-decompiled from asm/F44D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15134DAC();                           /* extern */
void * func_1516962C();              /* extern */
void * func_151DB5D0(); /* extern */
extern f32 D_800A0490;
extern f32 D_800A0494;
extern f32 D_800A0498;
extern f32 D_800A049C;
extern f32 D_800A04A0;
extern f32 D_800A04A4;

void func_150C7020(void *arg0, s32 arg1, void * arg2, void * arg3) {
    s8 sp55;
    s8 sp54;
    f32 sp50;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s8 sp24;
    void *sp20;
    u8 sp1C;

    if (arg0 != NULL) {
        func_1516962C(0x29, arg0, 0x12, arg0);
        sp24 = 0xD;
        sp40 = 0;
        sp4A = -1;
        sp4B = 1;
        sp4C = -1;
        sp54 = 2;
        sp55 = -1;
        sp20 = arg0;
        sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
        sp30 = 34.0f;
        sp3C = 34.0f;
        sp28 = 2.0f;
        sp34 = -15.0f;
        sp2C = 0.0f;
        sp38 = 0.0f;
        sp50 = D_800A0490;
        if (arg1 != 0) {
            sp46 = arg1;
            sp40 = 2;
        } else {
            sp46 = 0x12C;
        }
        sp42 = (random_u32() % 66U) + 0x23;
        sp44 = (random_u32() % 26U) + 0x19;
        func_15134DAC(&sp1C, 0);
        sp24 = 0xC;
        sp30 = 34.0f;
        sp3C = 34.0f;
        sp28 = -2.0f;
        sp2C = 0.0f;
        sp38 = 0.0f;
        sp34 = 15.0f;
        sp42 = (random_u32() % 66U) + 0x23;
        sp44 = (random_u32() % 26U) + 0x19;
        func_15134DAC(&sp1C, 0);
    }
}

void func_150C71C0(void *arg0, void *arg1, void * arg2, void * arg3, void *arg5) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s16 sp52;
    f32 sp48;
    f32 sp44;
    f32 sp40;

    sp54 = ((*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0))) * D_800A0494;
    sp58 = ((*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4))) * D_800A0494;
    sp5C = ((*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8))) * D_800A0494;
    sp52 = (random_u32() % 31U) + 0x2A;
    sp40 = random_float();
    sp44 = random_float();
    sp48 = random_float();
    func_151DB5D0(0, arg0, &sp54, (sp40 * 70.0f) + 30.0f, (sp44 * D_800A0498) + D_800A049C, 1.0f, (sp48 * D_800A04A0) + D_800A04A4, (s32) sp52, (random_u32() % 101U) + 0x9B, (s32) sp52, 0xFF / sp52, 1, (s32) (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
}
