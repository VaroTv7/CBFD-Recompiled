/**
 * Auto-decompiled from asm/DF260.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1509BE40();                    /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();        /* extern */
void * memcpy();                             /* extern */
extern s64 D_8009F8D0;
extern s64 D_8009F8D8;
extern f32 D_8009F8E0;
extern f32 D_8009F8E4;
extern f32 D_8009F8E8;
extern f32 D_8009F8EC;
extern f32 D_8009F8F0;
extern f32 D_8009F8F4;
extern f32 D_8009F8F8;
extern f32 D_8009F8FC;

void func_150B1DB0(s32 arg0, s32 arg1) {
    s32 var_a0;
    s64 temp_t2;
    s64 temp_t3;
    u64 temp_t2_2;
    u64 temp_t3_2;

    var_a0 = arg0;
    do {
        temp_t2 = (*(s32 *)((char *)(var_a0) + 0x0));
        temp_t3 = (*(s32 *)((char *)(var_a0) + 0x8));
        temp_t2_2 = temp_t2 & D_8009F8D0;
        (*(s32 *)((char *)(var_a0) + 0x0)) = (s64) ((temp_t2_2 >> 5) | ((temp_t2 & D_8009F8D8) | (temp_t2_2 << 5)));
        temp_t3_2 = temp_t3 & D_8009F8D0;
        (*(s32 *)((char *)(var_a0) + 0x8)) = (s64) ((temp_t3_2 >> 5) | ((temp_t3 & D_8009F8D8) | (temp_t3_2 << 5)));
        var_a0 += 0x10;
    } while (var_a0 < arg1);
}

void func_150B1E20(void *arg0) {
    void *temp_v0;

    if (func_1509BE40(1, 0x4054, 6, 0x9000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x10000);
    } else {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0xFFFEFFFF);
    }
    if ((func_1509BE40(1, 0x405C, 6, 0x9000) == 0) && (func_1509BE40(1, 0x405B, 6, 0x2000) != 0) && ((*(s32 *)((char *)(arg0) + 0x2C)) != 0x40)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x3D0));
        (*(f32 *)((char *)(temp_v0) + 0x17C)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x180)) + 10.0f);
    }
}

void func_150B1EE0(void *arg0, void *arg1, void * arg2, void * arg3) {
    f32 sp44;
    s8 sp38;
    s32 temp_v0;

    (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp44 = 0.0f;
    temp_v0 = func_15149130((s16) ((random_u32() % 133U) + 0x45), -1, 0x49, -1, 1, 0, 0x10, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0x10);
    }
}

void func_150B1F90(void *arg0) {
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 temp_f16;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f4;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((D_8009F8E0 + (random_float() * D_8009F8E4)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        spB9 = 0x6C;
        spA4 = 0x5103;
        sp9C = 0x200005;
        spBA = 0x50;
        spBC = 3;
        spF4 = 0x90DE07;
        spFC = 8;
        spFD = 6;
        spFE = 0x16;
        sp8C = 0;
        sp8D = 0;
        spA0 = 0;
        spA8 = 0;
        spAC = 0;
        spFF = -1;
        sp100 = -1;
        sp101 = 0;
        spBE = 0x50;
        spB0 = 0x67;
        spB1 = 0x6C;
        spB2 = 0x6C;
        spB3 = 0xFF;
        spB4 = 0x16;
        spB5 = 0xB;
        spB6 = 0;
        spB8 = 0xFF;
        sp98 = D_8009F8E8;
        spC0 = D_8009F8EC;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x8));
        temp_f30 = D_8009F8F0;
        temp_f28 = D_8009F8F4;
        temp_f26 = D_8009F8F8;
        temp_f24 = D_8009F8FC;
        spD8 = 0.0f;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        do {
            sp8E = (random_u32() % 5U) + 4;
            sp8F = (random_u32() % 5U) + 4;
            sp90 = random_float() * 27.0f;
            sp94 = random_float() * 27.0f;
            temp_f4 = random_float() * temp_f24;
            spF4 &= ~0xC0;
            spF0 = temp_f4 + temp_f26;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            spF4 |= var_v0 | var_s0;
            spB7 = (random_u32() % 101U) + 0x64;
            spA6 = (random_u32() % 78U) + 0x7E;
            temp_f16 = (random_float() * temp_f28) + temp_f30;
            spC8 = temp_f16;
            spC4 = temp_f16;
            temp_v0 = func_15130280(&sp9C, 1, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 0x10);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}

void func_150B2340(void *arg0) {
    s32 sp24;
    s32 sp20;

    sp24 = func_1509BE40(0, func_1509BE40(0, 0x2007, 0xB7) | 0x2000, 0xBC);
    sp20 = func_1509BE40(0, 0x2000, 0xBB);
    if (func_1509BE40(0, 0x5043, 0x1A) != 0) {
        if (func_1509BE40(0, 0x5045, 0x1A) != 0) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x4000);
        }
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x400000);
        (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
    } else if (func_1509BE40(1, 0x4030, 6, 0x2000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x190)) = 235.0f;
    } else {
        (*(s32 *)((char *)(arg0) + 0x348)) = 114.0f;
        (*(s32 *)((char *)(arg0) + 0x34C)) = 114.0f;
        (*(s32 *)((char *)(arg0) + 0x374)) = 384.0f;
        (*(s32 *)((char *)(arg0) + 0x190)) = 60.0f;
    }
    if ((sp24 != 0) && (sp20 != -1)) {
        (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) | 0x100);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) ((*(s32 *)((char *)(arg0) + 0x5F0)) & ~0x100);
}
