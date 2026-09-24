/**
 * Auto-decompiled from asm/135D00.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
void *func_1513B5E0();            /* extern */
void *func_15144B34();                           /* extern */
s32 func_1516037C();            /* extern */
void * memcpy();                       /* extern */
void func_15108B80();                     /* static */
void func_15108BC0();                     /* static */
extern s32 D_80088C50;
extern s32 D_80088C58;
extern f32 D_800A2470;
extern f32 D_800A2474;
extern f32 D_800A2478;
extern f32 D_800A247C;
extern f32 D_800A2480;
extern f32 D_800A2484;
extern f32 D_800A2488;
extern f32 D_800A248C;
extern f32 D_800A2490;
extern f32 D_800A2494;
extern f32 D_800A2498;
extern f32 D_800A249C;
extern f32 D_800A24A0;
extern f32 D_800A24A4;

void func_15108850(s32 arg0) {
    void *spFC;
    s8 spF8;
    s32 spF4;
    s32 spF0;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s16 spC4;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBC;
    s32 spB8;
    s8 spB4;
    s32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    void *sp9C;
    s8 sp98;
    s16 sp96;
    s8 sp95;
    s8 sp94;
    void *sp90;
    s8 sp84;
    s32 sp80;
    s32 sp7C;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp50;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp48;
    s32 sp44;
    s8 sp40;
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void *sp28;
    s32 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;

    spB0 = 0x3E7;
    spB4 = 0xFF;
    spB8 = -1;
    spBC = 1;
    spC2 = 1;
    spC4 = 0x12C;
    spF0 = 9;
    sp9C = NULL;
    spA0 = 0.0f;
    spA4 = 0.0f;
    spA8 = 0.0f;
    spC0 = 0;
    spC1 = 0;
    spF4 = 0x1AB;
    spC8 = 1;
    spCC = 0x220205;
    spD0 = 0x40600;
    spE4 = 0;
    spE5 = 0;
    spD4 = 1;
    spD8 = 0x36;
    spDC = 0x80;
    spE0 = 0x20;
    spF8 = 1;
    spAC = 226.0f;
    temp_v0 = func_1513B5E0(&spC0, 1, 0x24, 0xFF, 1);
    if (temp_v0 != NULL) {
        spFC = temp_v0;
        memcpy((char *)(temp_v0) + (*(s32 *)((char *)(temp_v0) + 0x50)) + 0xF8, &sp9C, 0x24);
        sp90 = spFC;
        sp94 = 2;
        sp95 = 8;
        sp96 = 0x12C;
        sp98 = 0x13;
        temp_v0_2 = func_1516037C(&sp94, arg0, 4, 0xFF, 1);
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0x18, &sp90, 4);
        }
    }
    sp3C = 0x3E7;
    sp40 = 0xFF;
    sp44 = -1;
    sp48 = 1;
    sp4D = 1;
    sp4E = 4;
    sp50 = 0x12C;
    sp7C = 9;
    sp28 = NULL;
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp4C = 0;
    sp80 = 0x1AC;
    sp54 = 1;
    sp58 = 0x220205;
    sp5C = 0x40600;
    sp70 = 0;
    sp71 = 0;
    sp60 = 1;
    sp64 = 0x36;
    sp68 = 0x80;
    sp6C = 0x20;
    sp84 = 1;
    sp38 = 226.0f;
    temp_v0_3 = func_1513B5E0(&sp4C, 1, 0x24, 0xFF, 1);
    if (temp_v0_3 != NULL) {
        memcpy((char *)(temp_v0_3) + (*(s32 *)((char *)(temp_v0_3) + 0x50)) + 0xF8, &sp28, 0x24);
    }
}

s32 func_15108AB4(void *arg0) {
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_s0_2 = (char *)(temp_s0) + 0xF8;
    (*(f32 *)((char *)(temp_s0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x100)) + (D_800A2470 * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0xC)) + (D_800A2474 * D_800BE9A4));
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0x8)));
    (*(s32 *)((char *)(temp_s0_2) + 0xC)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0xC)));
    (*(f32 *)((char *)(temp_s0) + 0xF8)) = (f32) (sinf((*(f32 *)((char *)(temp_s0_2) + 0x8))) * D_800A2478);
    (*(f32 *)((char *)(temp_s0_2) + 0x4)) = (f32) (sinf((*(f32 *)((char *)(temp_s0_2) + 0xC))) * D_800A247C);
    func_15108B80(arg0);
    func_15108BC0(arg0);
    return 1;
}

void func_15108B80(void *arg0) {
    s32 temp_t0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_v0_2 = (char *)(temp_v0) + 0xF8;
    if ((*(s32 *)((char *)(temp_v0) + 0x10C)) != 0x3E7) {
        temp_t0 = (*(s32 *)((char *)(temp_v0_2) + 0x1C)) - D_800BE9E4;
        (*(s32 *)((char *)(temp_v0_2) + 0x1C)) = temp_t0;
        if (temp_t0 < 0) {
            (*(s32 *)((char *)(temp_v0_2) + 0x14)) = 0x3E7;
        }
    }
}

void func_15108BC0(void *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x10C));
    temp_v0_2 = (char *)(temp_v0) + 0xF8;
    if (temp_v1 == 0x3E7) {
        (*(s32 *)((char *)(temp_v0_2) + 0x10)) = 226.0f;
        return;
    }
    if (D_800C35EA == 1) {
        (*(f32 *)((char *)(temp_v0_2) + 0x10)) = (f32) (*(f32 *)((char *)((D_800C3958 + (temp_v1 * 0x44))) + 0x4));
        return;
    }
    (*(s32 *)((char *)(temp_v0_2) + 0x10)) = 226.0f;
}

s32 func_15108C38(void *arg0) {
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_s0_2 = (char *)(temp_s0) + 0xF8;
    (*(f32 *)((char *)(temp_s0_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x100)) + (D_800A2480 * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0xC)) + (D_800A2484 * D_800BE9A4));
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0x8)));
    (*(s32 *)((char *)(temp_s0_2) + 0xC)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0xC)));
    (*(f32 *)((char *)(temp_s0) + 0xF8)) = (f32) (sinf((*(f32 *)((char *)(temp_s0_2) + 0x8))) * D_800A2488);
    (*(f32 *)((char *)(temp_s0_2) + 0x4)) = (f32) (sinf((*(f32 *)((char *)(temp_s0_2) + 0xC))) * D_800A248C);
    func_15108B80(arg0);
    func_15108BC0(arg0);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x20)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x12)) = 4;
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x12)) = 2;
    return 1;
}

s32 func_15108D24(void *arg0, void * arg1) {
    f32 sp54;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *sp1C;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_v0_2 = (char *)(temp_v0) + 0xF8;
    sp1C = temp_v0_2;
    func_150A8050(&sp20, (*(f32 *)((char *)(temp_v0) + 0xF8)), 0.0f, (*(f32 *)((char *)(temp_v0_2) + 0x4)));
    sp54 = (*(s32 *)((char *)(sp1C) + 0x10));
    sp20 *= D_800A2490;
    sp24 *= D_800A2490;
    sp28 *= D_800A2490;
    sp30 *= D_800A2490;
    sp34 *= D_800A2490;
    sp38 *= D_800A2490;
    sp40 *= D_800A2490;
    sp44 *= D_800A2490;
    sp48 *= D_800A2490;
    guMtxF2L(&sp20, (char *)(arg0) + (D_800BE9C0 << 6) + 0x78);
    return 1;
}

s32 func_15108E10(void *arg0) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spA4;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f14;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_s1 = (char *)(temp_v0) + (*(s32 *)((char *)(temp_v0) + 0x50));
    temp_s1_2 = (char *)(temp_s1) + 0xF8;
    func_150A8050(&sp70, (*(f32 *)((char *)(temp_s1) + 0xF8)), 0.0f, (*(f32 *)((char *)(temp_s1_2) + 0x4)));
    spA4 = (*(s32 *)((char *)(temp_s1_2) + 0x10));
    sp70 *= D_800A2494;
    sp74 *= D_800A2494;
    sp78 *= D_800A2494;
    sp80 *= D_800A2494;
    sp84 *= D_800A2494;
    sp88 *= D_800A2494;
    sp90 *= D_800A2494;
    sp94 *= D_800A2494;
    sp98 *= D_800A2494;
    func_150A7960(0.0f, &sp70, 0.0f, -1108.0f, 0.0f, &spB0, &spB4, &spB8);
    temp_f14 = (*(s32 *)((char *)(temp_s1_2) + 0x10));
    if (func_150AC9C0(0, temp_f14, 0, spB0, spB4 - temp_f14, spB8, 0, 0, &sp58, &sp5C, &sp60, 0, 0, 0, 0.0f) == 0) {
        (*(s32 *)((char *)&(sp58) + 0x0)) = (*(s32 *)((char *)&(spB0) + 0x0));
        (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)&(spB0) + 0x4));
        (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)&(spB0) + 0x8));
    }
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0xE)) = (s16) (s32) sp58;
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) sp5C;
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x12)) = (s16) (s32) sp60;
    if ((*(s32 *)((char *)(temp_s1_2) + 0x20)) != 0) {
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 0;
        return 1;
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 1;
    return 1;
}

void func_15108FFC(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp2C;
    s32 sp28;
    s32 sp24;
    void * sp1C;

    (*(s32 *)((char *)&(sp1C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088C50) + 0x0));
    (*(s32 *)((char *)&(sp1C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088C50) + 0x4));
    sp24 = arg0;
    sp28 = arg1;
    sp2C = arg2;
    func_15169260(&sp1C, 2, &sp24, 0x1D);
}

void func_15109064(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50)) + 0xF8;
    switch (temp_t6) {                              /* irregular */
    case 29:
        (*(s32 *)((char *)(temp_v0) + 0x14)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(u8 *)((char *)(temp_v0) + 0x18)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        return;
    case 30:
        if ((*(s32 *)((char *)(temp_v0) + 0x20)) != 0) {
            (*(s32 *)((char *)(temp_v0) + 0x20)) = 0U;
            return;
        }
        (*(s32 *)((char *)(temp_v0) + 0x20)) = 1U;
        return;
    }
}

void func_151090DC(void) {
    void * sp18;

    (*(s32 *)((char *)&(sp18) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088C58) + 0x0));
    (*(s32 *)((char *)&(sp18) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088C58) + 0x4));
    func_15169260(&sp18, 2, NULL, 0x1E);
}

s32 func_15109120(void *arg0, s32 arg1) {
    f32 spFC;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f22;
    f32 var_f24;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v0;

    temp_s0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_s0_2 = (char *)(temp_s0) + 0xF8;
    func_150A8050(&spC8, (*(f32 *)((char *)(temp_s0) + 0xF8)), 0.0f, (*(f32 *)((char *)(temp_s0_2) + 0x4)));
    spFC = (*(s32 *)((char *)(temp_s0_2) + 0x10));
    spC8 *= D_800A2498;
    spCC *= D_800A2498;
    spD0 *= D_800A2498;
    spD8 *= D_800A2498;
    spDC *= D_800A2498;
    spE0 *= D_800A2498;
    spE8 *= D_800A2498;
    spEC *= D_800A2498;
    spF0 *= D_800A2498;
    guMtxF2L(&spC8, (char *)(arg0) + (D_800BE9C0 << 6) + 0x78);
    temp_v0 = func_15144B34(arg1);
    temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x0));
    var_s1 = 0;
    if ((D_800A249C < fabsf(temp_f14)) || (D_800A249C < fabsf((*(s32 *)((char *)(temp_v0) + 0x4))))) {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x8));
        temp_f12 = 1.0f / sqrtf((temp_f14 * temp_f14) + (temp_f2 * temp_f2));
        var_f22 = temp_f2 * temp_f12;
        var_f24 = -temp_f14 * temp_f12;
    } else {
        var_f22 = 1.0f;
        var_f24 = 0.0f;
    }
    temp_f30 = D_800A24A0;
    temp_f26 = D_800A24A4;
    do {
        temp_s0_3 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 0x10) + (arg1 * 4))) + 0x58)) + (var_s1 * 0x10);
        temp_f12_2 = (f32) (*(f32 *)((char *)(temp_s0_3) + 0x4));
        func_150A7960(temp_f12_2, &spC8, (f32) (*(f32 *)((char *)(temp_s0_3) + 0x0)), (f32) (*(f32 *)((char *)(temp_s0_3) + 0x2)), temp_f12_2, &sp94, &sp98, &sp9C);
        var_s1 += 1;
        (*(s16 *)((char *)(temp_s0_3) + 0x8)) = (s16) (s32) (((((sp94 * var_f22) + (sp9C * var_f24)) * temp_f30) + 26.0f) * 32.0f);
        (*(s16 *)((char *)(temp_s0_3) + 0xA)) = (s16) (s32) (((sp98 * temp_f26) + 81.0f) * 32.0f);
    } while (var_s1 != 0x10);
    return 1;
}
