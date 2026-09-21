/**
 * Auto-decompiled from asm/105760.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"

s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
void * func_150A7960(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();                  /* extern */
void * func_15153634();                    /* extern */
void * func_15165F80(); /* extern */
void * func_151875E0(); /* extern */
extern s32 D_80090298;
extern f32 D_800A0B10;
extern f32 D_800A0B14;
extern f32 D_800A0B18;
extern f32 D_800A0B1C;
extern f32 D_800A0B20;
extern f32 D_800A0B24;
extern f32 D_800A0B30;
extern f32 D_800A0B34;
s32 func_150D88E0();

void func_150D82B0(s32 arg0) {

}

s32 func_150D82BC(void *arg0, void *arg1) {
    f32 temp_f0;
    s32 *temp_a0;
    s32 temp_f6;
    s32 var_a1;
    s32 var_a2;
    s8 *temp_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x2D0));
    if (temp_v0 == NULL) {
        return 0;
    }
    (*(s16 *)((char *)(arg0) + 0x18)) = (s16) (*(s16 *)((char *)&(D_80090298) + 0x18));
    if ((*(s32 *)((char *)(arg1) + 0x84)) == 0xD) {
        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x8));
        if ((temp_f0 >= 23.0f) && (temp_f0 <= 40.0f)) {
            (*(s16 *)((char *)(arg0) + 0x18)) = (s16) (*(s16 *)((char *)&(D_80090298) + 0x1C));
            temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x24))));
            var_a1 = 0;
            if (*temp_v1 != -0xE) {
                do {
                    var_a1 += 1;
                } while ((*(s32 *)((var_a1 * 8) + (char *)(temp_v1))) != -0xE);
            }
            temp_a0 = temp_v1 + (var_a1 * 8);
            temp_f6 = (s32) ((70.0f * (((*(s32 *)((char *)(temp_v0) + 0x8)) - 23.0f) * D_800A0B10)) + 2.0f);
            var_a2 = temp_f6;
            if (temp_f6 < 0) {
                var_a2 = temp_f6 + (((s32) *temp_a0 >> 0xC) & 0xFFF);
            }
            *temp_a0 = ((var_a2 & 0xFFF) << 0xC) | 0xF2000000 | 2;
        }
    }
    return 0;
}

s32 func_150D83D8(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    s8 *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x38));
    switch (temp_v0) {                              /* irregular */
    default:
        var_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
        break;
    case 0:
        (*(s32 *)((char *)(arg0) + 0x3C)) = 0x32;
        (*(s16 *)((char *)(arg0) + 0x18)) = (s16) (*(s16 *)((char *)&(D_80090298) + 0x6C));
        if (((*(s32 *)((char *)(arg1) + 0x84)) == 0x18D) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x2D0))) + 0x8)) >= 46.0f)) {
            (*(s32 *)((char *)(arg0) + 0x38)) = 1;
            (*(s16 *)((char *)(arg0) + 0x18)) = (s16) (*(s16 *)((char *)&(D_80090298) + 0x70));
        }
        var_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
        break;
    case 1:
        var_v0 = (*(s32 *)((char *)(arg0) + 0x3C)) + D_800BE9E4;
        (*(s32 *)((char *)(arg0) + 0x3C)) = var_v0;
        if (var_v0 >= 0x64) {
            var_v0 = 0x64;
            (*(s32 *)((char *)(arg0) + 0x3C)) = 0x64;
            (*(s32 *)((char *)(arg0) + 0x38)) = 2;
        }
        break;
    case 2:
        if (((*(s32 *)((char *)(arg1) + 0x84)) == 0x18E) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x2D0))) + 0x8)) >= 34.0f)) {
            (*(s32 *)((char *)(arg0) + 0x38)) = 3;
        }
        var_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
        break;
    case 3:
        var_v0 = (*(s32 *)((char *)(arg0) + 0x3C)) - (D_800BE9E4 * 4);
        (*(s32 *)((char *)(arg0) + 0x3C)) = var_v0;
        if (var_v0 <= 0) {
            (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
            (*(s32 *)((char *)(arg0) + 0x38)) = 4;
            var_v0 = 0;
        }
        break;
    }
    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x24))));
    var_a1 = 0;
    if (*temp_v1 != -0xE) {
        do {
            var_a1 += 1;
        } while ((*(s32 *)((var_a1 * 8) + (char *)(temp_v1))) != -0xE);
    }
    (*(s32 *)((char *)(temp_v1) + (var_a1 * 8))) = ((s32) ((120.0f * ((f32) var_v0 * D_800A0B14)) + 2.0f) & 0xFFF) | 0xF2002000;
    return 0;
}

void *func_150D8590(void *arg0, void * arg1) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 0x42;
    (*(s32 *)((char *)(arg0) + 0x2)) = 0;
    return (char *)(arg0) + 4;
}

void func_150D85AC(void *arg0) {
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spB8;
    f32 spB4;
    f32 spB0;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s32 sp60;
    s32 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s8 sp4C;
    s16 sp4A;
    s16 sp48;
    u32 sp40;
    f32 sp3C;

    s32 spD0;
    spE4 = (*(s32 *)((char *)(arg0) + 0x14));
    spE8 = (*(s32 *)((char *)(arg0) + 0x180));
    spEC = (*(s32 *)((char *)(arg0) + 0x1C));
    spD8 = spE4;
    spE0 = spEC;
    spDC = spE8 + 100.0f;
    func_1504715C(&spB4, arg0);
    if ((func_15046C80(&spD8, 0, spE8 - 200.0f, &spB4) != 0) && (spD0 & 1)) {
        spE4 = spD8;
        spE8 = spB4;
        spEC = spE0;
        sp3C = random_float();
        sp40 = random_u32();
        func_150E7FEC((sp3C * 109.0f) + 140.0f, ((sp40 % 86U) + 0xAA) & 0xFF, &spB8, &spE4, (random_u32() % 251U) + 0x1F4, 0, 1, 0, 0, 0, 0xFF, 0);
    }
    func_150E83AC(&spE4, (s16) ((random_u32() % 62U) + 0x78), 0xFF, 1);
    sp7C = 298.0f;
    sp4E = 0x5103;
    sp74 = D_800A0B18;
    sp80 = spE4;
    sp48 = 0x1A;
    sp4A = 7;
    sp4C = 0x6C;
    sp50 = 0x200005;
    sp58 = 0x1E;
    sp5A = 0xA;
    sp67 = 0xFF;
    sp64 = 0xB9;
    sp6A = 0x7E;
    sp78 = 150.0f;
    sp65 = 0xC7;
    sp66 = 0xC4;
    sp68 = 0x95;
    sp69 = 0x91;
    sp6B = 0x64;
    sp6C = 0x9B;
    sp6D = 0xFF;
    sp6E = 0x1E;
    sp70 = 8;
    sp54 = 0;
    sp5C = 0;
    sp60 = 0;
    sp72 = 0x1E;
    sp84 = spE8 + 35.0f;
    sp8C = 0;
    sp8E = -0x10;
    sp90 = 0xFF;
    sp92 = 0x14;
    sp94 = 18.0f;
    sp98 = 18.0f;
    spA4 = 0x840E07;
    spA8 = 0x10;
    spA9 = -1;
    spAA = 8;
    spAB = 6;
    spAC = 1;
    sp9C = D_800A0B1C;
    spA0 = D_800A0B20;
    sp88 = spEC;
    spB0 = D_800A0B24;
    func_15153634(&sp48, 0xFF, 0xFF, 1);
}

s32 func_150D88AC(void *arg0) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x6F)) != 0) {
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 0;
        return 1;
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 1;
    return 1;
}

s32 func_150D88E0(f32 *arg0, void *arg1, s32 arg2) {
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 sp30;
    s32 var_f6;
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    switch (temp_t6) {                              /* irregular */
    case 3:
        var_f6 = 0x41F00000;
        sp3C = 0x12;
        sp38 = -7.0f;
block_9:
        sp30 = var_f6;
        break;
    case 4:
        sp3C = 0x15;
        sp38 = -4.0f;
        sp30 = 0x420C0000;
        break;
    case 5:
        sp3C = 0xF;
        sp38 = 5.0f;
        sp30 = 0x41A00000;
        break;
    case 6:
        var_f6 = 0x41F80000;
        sp3C = 0x18;
        sp38 = 5.0f;
        goto block_9;
    }
    sp34 = 0.0f;
    func_150A7960((*(s32 *)((char *)(arg1) + 0x1D4)) + (sp3C << 6), sp38, 0, sp30, &sp38, &sp34, &sp30);
    (*(s32 *)((char *)(arg0) + 0x0)) = sp38;
    (*(s32 *)((char *)(arg0) + 0x4)) = sp34;
    (*(s32 *)((char *)(arg0) + 0x8)) = sp30;
    return 1;
}

s32 func_150D8A20(s32 arg0, void * arg1) {
    return 8;
}

void func_150D8A34(void *arg0, s32 arg1, void * arg2) {
    f32 sp34;

    f32 sp38;
    f32 sp3C;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        func_150D88E0(&sp34, arg0, arg1);
        func_151875E0(sp34, sp38, sp3C, 0x1E, 0xF, 7, D_800A0B30, D_800A0B34);
        func_15165F80(-1, (s32) sp34, (s32) ((*(s32 *)((char *)(arg0) + 0x180)) + 4.0f), (s32) sp3C, 4, 0x32, 0, 0xFF, 0);
    }
}
