/**
 * Auto-decompiled from asm/DF930.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_151429E0();                  /* extern */
void * func_1514C678(); /* extern */
void * func_15156190();              /* extern */
void * func_151D3FF4();                       /* extern */
extern f32 D_8009F900;
extern f32 D_8009F904;
extern f32 D_8009F908;
extern f32 D_8009F90C;
extern f32 D_8009F910;
extern f32 D_8009F914;

s32 func_150B2480(s32 arg0, void * arg1) {
    return 0xA;
}

void func_150B2494(void *arg0, void * arg1, void * arg2) {
    s32 sp44;
    f32 sp40;
    f32 sp3C;

    sp3C = (*(s32 *)((char *)(arg0) + 0x14));
    sp40 = (*(s32 *)((char *)(arg0) + 0x180));
    sp44 = (*(s32 *)((char *)(arg0) + 0x1C));
    func_1514C678(sp3C, sp40, sp44, 0x43070000, 0, 0xFF, (random_u32() % 15U) + 0x1B, 7, 0, 0.0f, 0, 0xFF);
    func_151D5404(&sp3C, 0x44BBC000, 0x453B8000, 0x39AEC33E, 0xC, 0xF, 0xFF, 0);
    func_151D3FF4(&sp3C, 0xFF, 0);
}

s32 func_150B2570(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg8, u8 arg14) {
    s32 unksp37;
    s16 sp70;
    s16 sp6E;
    s8 sp6C;
    f32 sp68;
    s16 sp64;
    s16 sp62;
    s8 sp60;
    s8 sp5F;
    void * sp5E;
    void * sp5D;
    void * sp5C;
    s8 sp5B;
    void * sp5A;
    void * sp59;
    void * sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_t7;

    sp30 = func_151423D8((arg8 - 0x40) & 0xFF);
    sp2C = func_151423D8((u8) arg8);
    temp_t7 = (random_u32() % 21U) - 0x1E;
    sp36 = temp_t7;
    sp28 = func_151423D8((temp_t7 - 0x40) & 0xFF);
    temp_f2 = 10.0f * func_151423D8(unksp37);
    sp38 = arg2;
    sp3C = arg3;
    sp40 = arg4;
    sp44 = temp_f2 * sp30;
    sp48 = -10.0f * sp28;
    sp4C = temp_f2 * sp2C;
    sp50 = (random_float() * D_8009F900) + D_8009F904;
    sp54 = (random_float() * D_8009F908) + D_8009F90C;
    func_151429E0(8, &sp58, &sp59, &sp5A);
    func_151429E0(8, &sp5C, &sp5D, &sp5E);
    sp5B = 0xFF;
    sp5F = 0xFF;
    sp60 = 9;
    sp62 = (random_u32() % 7U) + 0x12;
    temp_f8 = random_float() * D_8009F910;
    sp64 = 0x1601;
    sp6C = 0xFF;
    sp6E = 8;
    sp70 = 0x1F;
    sp68 = temp_f8 + D_8009F914;
    func_15156190(&sp38, 1, 0, arg14, 1);
    return 1;
}
