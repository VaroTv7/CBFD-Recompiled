/**
 * Auto-decompiled from asm/FB060.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                                /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
void * func_15143794();                /* extern */
void * func_1514C678(); /* extern */
void * memcpy();                            /* extern */
extern f32 D_800A07B0;
extern f32 D_800A07B4;
extern f32 D_800A07B8;
extern f32 D_800A07BC;
extern f32 D_800A07C0;
extern f32 D_800A07C4;
extern f32 D_800A07C8;
extern f32 D_800A07CC;
extern f32 D_800A07D0;
extern f32 D_800A07D4;
extern f32 D_800A07D8;
extern f32 D_800A07DC;
extern f32 D_800A07E0;

void func_150CDBB0(void *arg0, s32 arg1, void * arg2) {
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp48;

    if (arg0 != NULL) {
        func_1504715C(&sp48, arg0);
        sp6C = (*(s32 *)((char *)(arg0) + 0x14));
        sp70 = (*(s32 *)((char *)(arg0) + 0x18)) + 1000.0f;
        sp74 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (func_15046C80(&sp6C, 0, (*(s32 *)((char *)(arg0) + 0x18)) - D_800A07B0, &sp48) != 0) {
            sp70 = sp48;
            func_1514C678(sp6C, sp70, sp74, 0x437B0000, 0, 0xFF, (random_u32() & 0xF) + 0x23, 0x17, 0, 0.0f, 0, (s32) arg1);
            func_1514C678(sp6C, sp70, sp74, 0x43910000, 0, 0xFF, (random_u32() % 21U) + 0x1E, 0x18, 0, 0.0f, 0, (s32) arg1);
        }
    }
}

s32 func_150CDCF4(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp8C;
    f32 sp88;
    void * sp7C;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3E;
    s16 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp2C;
    u32 sp24;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0;

    sp51 = 0x29;
    sp3C = 0xE03;
    sp34 = 0x200005;
    sp38 = 0;
    sp3E = (random_u32() % 41U) + 0x32;
    sp40 = 0;
    sp44 = 0;
    sp4C = 0xB0;
    sp4D = 0xA0;
    sp4E = 0x2A;
    sp48 = 0x40;
    sp49 = 0xB;
    sp4A = 0x6A;
    sp4B = 0xFF;
    sp4F = (random_u32() % 101U) + 0x64;
    sp50 = 0xFF;
    sp94 = 3;
    sp95 = 3;
    temp_f6 = random_float() * D_800A07B4;
    sp64 = arg2;
    sp68 = arg3;
    sp6C = arg4;
    temp_f2 = temp_f6 + 404.0f;
    sp5C = temp_f2;
    sp60 = temp_f2;
    sp24 = random_u32();
    func_15143794(arg8, (s16) ((sp24 % 20U) - 0x13), ((random_float() * 150.0f) + 150.0f) * D_800A07B8, &sp7C);
    sp8C = 0xE05;
    sp88 = 0.0f;
    if (random_u32() & 1) {
        sp8C |= 0x40;
    }
    if (random_u32() & 1) {
        sp8C |= 0x80;
    }
    sp96 = 0xA;
    sp97 = -1;
    sp52 = 0x1E;
    sp54 = 8;
    sp56 = 0x46;
    sp58 = D_800A07BC;
    sp2C = D_800A07C0;
    temp_v0 = func_15130374(&sp34, 1, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp2C, 4);
    }
    return 1;
}

s32 func_150CDF10(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s16 sp9C;
    s16 sp9A;
    s8 sp98;
    s32 sp94;
    s8 sp92;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp84;
    s8 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    u32 sp20;
    f32 temp_f10;
    f32 temp_f2;

    sp50 = arg2;
    sp54 = arg3;
    sp44 = 1.0f;
    sp48 = 1.0f;
    sp4C = 1.0f;
    sp78 = 0x29E8;
    sp38 = 0.0f;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp6C = 0.0f;
    sp28 = 1.0f;
    sp7E = 0x20;
    sp58 = arg4;
    sp2C = D_800A07C4;
    sp20 = random_u32(arg2, arg3);
    func_15143794(arg8, (s16) ((sp20 % 41U) - 0x3D), ((random_float() * 101.0f) + 150.0f) * D_800A07C8, &sp5C);
    sp68 = ((random_float() * 260.0f) + -130.0f) * D_800A07CC;
    sp70 = ((random_float() * 260.0f) + -130.0f) * D_800A07D0;
    sp7C = (random_u32() % 21U) + 0x32;
    sp74 = ((random_float() * D_800A07D4) + D_800A07D8) * D_800A07DC;
    temp_f10 = random_float() * 302.0f;
    sp80 = 0;
    sp84 = 0;
    temp_f2 = (temp_f10 + 52.0f) * D_800A07E0;
    sp30 = temp_f2;
    sp34 = temp_f2;
    sp88 = (random_u32() % 76U) + 0xB4;
    sp89 = 8;
    sp8A = 0;
    sp8B = 0;
    sp8C = 0;
    sp8D = 0;
    sp8E = 0;
    sp8F = 0;
    sp90 = 0;
    sp92 = 2;
    sp94 = 0;
    sp98 = 0;
    sp9A = 0x20;
    sp9C = 7;
    func_15132A4C(&sp28, 3, 0xFF, 0, (s32) arg14, 0);
    return 1;
}
