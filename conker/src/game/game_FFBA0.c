/**
 * Auto-decompiled from asm/FFBA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
void * func_150AD8B0();     /* extern */
u32 random_u32();                               /* extern */
f32 random_float();                                /* extern */
void * func_1514373C();            /* extern */
void *func_15144B34();                           /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                            /* extern */
void func_150D278C();
extern s32 D_800A0990;
extern f32 D_800A099C;
extern f32 D_800A09A0;
extern f32 D_800A09A4;
extern f32 D_800A09A8;
extern f32 D_800A09AC;
extern f32 D_800A09B0;
extern f32 D_800A09B4;

void func_150D26F0(void *arg0) {
    void *sp18;
    s32 temp_t1;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x78)) & 1) {
        temp_t1 = (*(s32 *)((char *)(temp_v1) + 0xC)) - D_800BE9E4;
        (*(s32 *)((char *)(temp_v1) + 0xC)) = temp_t1;
        if (temp_t1 < 0) {
            sp18 = temp_v1;
            func_150D278C((*(s32 *)((char *)(arg0) + 0x28)), (char *)(temp_v1) + 0x10, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            (*(s32 *)((char *)(temp_v1) + 0xC)) = (s32) ((random_u32() % (u32) ((*(s32 *)((char *)(temp_v1) + 0x8)) + 1)) + (*(s32 *)((char *)(temp_v1) + 0x4)));
        }
    }
}

void func_150D278C(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    u8 spA6;
    u8 spA5;
    u8 spA4;
    void * sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s32 sp48;
    void * sp38;
    f32 temp_f2;
    s32 temp_v0;
    void *temp_v1;

    sp48 = arg0;
    sp4C = 2.0f * random_float() * D_800A099C;
    temp_f2 = (random_float() * D_800A09A0) + D_800A09A4;
    sp50 = temp_f2;
    sp54 = 1.0f / temp_f2;
    sp58 = (random_float() * D_800A09A8) + D_800A09AC;
    if (random_u32() & 1) {
        sp58 = -sp58;
    }
    sp5C = 0.0f;
    sp60 = 0.0f;
    memcpy(&sp64, arg1, 0x40);
    (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A0990) + 0x0));
    (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A0990) + 0x4));
    (*(u8 *)((char *)&(sp38) + 0x8)) = (u8) (*(u8 *)((char *)&(D_800A0990) + 0x8));
    temp_v1 = (((random_u32() % 3U) & 0xFF) * 3) + &sp38;
    spA4 = (*(s32 *)((char *)(temp_v1) + 0x0));
    spA5 = (*(s32 *)((char *)(temp_v1) + 0x1));
    spA6 = (*(s32 *)((char *)(temp_v1) + 0x2));
    temp_v0 = func_15149130((s16) ((random_u32(3) % 101U) + 0x64), -1, 0x32, -1, 1, 0, 0x60, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp48, 0x60);
    }
}

void func_150D2924(void *arg0) {
    s8 sp128;
    s32 sp124;
    s8 sp123;
    s8 sp122;
    s8 sp121;
    s8 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    void * sp10C;
    void * sp108;
    void * sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    s8 spEF;
    u8 spEE;
    u8 spED;
    u8 spEC;
    s32 spE8;
    s32 spE4;
    s16 spE0;
    s16 spDE;
    s8 spDD;
    s8 spDC;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s32 spA4;
    f32 spA0;
    s32 sp9C;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s2;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x30)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x3C)) > 1.0f) {
        temp_s2 = (*(s32 *)((char *)(arg0) + 0x28));
        spC0 = 0.0f;
        spC4 = 0.0f;
        spDC = 0x59;
        spDD = 0;
        spDE = 0x5A03;
        spE0 = 0x16;
        spE4 = 0;
        spE8 = 0;
        spD4 = 9.0f;
        spEC = (*(s32 *)((char *)(temp_s0) + 0x5C));
        spED = (*(s32 *)((char *)(temp_s0) + 0x5D));
        spEF = 0xFF;
        spF4 = 1.0f;
        spEE = (*(s32 *)((char *)(temp_s0) + 0x5E));
        spF8 = (f32) (*(f32 *)((char *)(temp_s2) + 0x0));
        spFC = (f32) (*(f32 *)((char *)(temp_s2) + 0x2));
        sp110 = 1.0f;
        sp114 = 1.0f;
        sp118 = 1.0f;
        sp11C = 0x026C0000;
        sp121 = 0xFF;
        sp122 = 0;
        sp123 = 6;
        sp124 = 0;
        sp128 = 0xFF;
        sp100 = (f32) (*(f32 *)((char *)(temp_s2) + 0x4));
        do {
            temp_f4 = 22.0f - (*(s32 *)((char *)(temp_s0) + 0x18));
            spD0 = temp_f4;
            if (temp_f4 > 0.0f) {
                func_1514373C((*(f32 *)((char *)(temp_s0) + 0x4)), (f32) (*(f32 *)((char *)(temp_s2) + 0x6)), &sp9C, &spA4);
                spA0 = (f32) (*(f32 *)((char *)(temp_s2) + 0x8));
                func_150A7960((char *)(temp_s0) + 0x1C, sp9C, spA0, spA4, &sp104, &sp108, &sp10C);
                spF0 = (random_float() * 25.0f) + 50.0f;
                temp_f2 = (random_float() * 1024.0f) + -2560.0f + 2048.0f;
                spA8 = temp_f2;
                spB0 = temp_f2;
                temp_f2_2 = (random_float() * 1024.0f) + 1536.0f + 2048.0f;
                spAC = temp_f2_2;
                spB4 = temp_f2_2;
                spB8 = (random_float() * 768.0f) + 768.0f;
                spBC = (random_float() * 768.0f) + 768.0f;
                spC8 = ((random_float() * 80.0f) + 50.0f) * D_800A09B0;
                spCC = ((random_float() * 80.0f) + 50.0f) * D_800A09B4;
                sp120 = (s8) (u32) (spD4 * spD0);
                temp_v0 = func_1513D2F0(&spDC, &D_800A4AA0, 0, 0x26, 0, 0x1F, 0, 0, 0, 0x30, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x110, (s32 *) &spA8, 0x30);
                }
            }
            (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) + (*(f32 *)((char *)(temp_s0) + 0x10)));
            (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x18)) - (*(f32 *)((char *)(temp_s0) + 0xC)));
            (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x14)) > 1.0f);
    }
}

void *func_150D2D6C(void *arg0, s32 arg1) {
    void *sp94;
    void *sp90;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    u8 sp47;
    void *sp3C;
    s32 *sp38;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8;
    s32 *temp_a1;
    void *temp_t1;
    void *temp_t5;
    void *temp_t7;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp94, &sp47);
    sp90 = sp94;
    if (sp94 != NULL) {
        if (sp47 != 0) {
            temp_v1 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp38 = temp_a1;
            sp3C = temp_v1;
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_v0 = func_15144B34(arg1);
        sp80 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34));
        sp84 = (*(s32 *)((char *)(arg0) + 0x44)) - (*(s32 *)((char *)(arg0) + 0x38));
        temp_f8 = (*(s32 *)((char *)(arg0) + 0x48)) - (*(s32 *)((char *)(arg0) + 0x3C));
        sp88 = temp_f8;
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x38));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x34));
        sp78 = temp_f2 + sp84;
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x3C));
        sp7C = temp_f12 + temp_f8;
        temp_f14 = temp_f0 + (sp80 * 0.5f);
        sp6C = temp_f2 + (sp84 * 0.5f);
        sp70 = temp_f12 + (temp_f8 * 0.5f);
        sp5C = temp_f14 - (*(s32 *)((char *)(temp_v0) + 0x0));
        sp60 = sp6C - (*(s32 *)((char *)(temp_v0) + 0x4));
        sp74 = temp_f0 + sp80;
        sp64 = sp70 - (*(s32 *)((char *)(temp_v0) + 0x8));
        func_150AD8B0(temp_f12, temp_f14, &sp80, &sp5C, &sp50);
        sp28 = sp50;
        temp_f0_2 = (sp50 * sp50) + (sp54 * sp54) + (sp58 * sp58);
        if (temp_f0_2 != 0.0f) {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(temp_f0_2);
            sp50 = sp28 * temp_f2_2;
            sp54 *= temp_f2_2;
            sp58 *= temp_f2_2;
        } else {
            sp50 = 0.0f;
            sp54 = 0.0f;
            sp58 = 0.0f;
        }
        temp_v1_2 = (char *)(arg0) + 0x110;
        (*(s16 *)((char *)(sp94) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - sp50);
        (*(s16 *)((char *)(sp94) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - sp54);
        (*(s16 *)((char *)(sp94) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - sp58);
        (*(s16 *)((char *)(sp94) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(temp_v1_2) + 0x4));
        (*(s32 *)((char *)(sp94) + 0x6)) = 0;
        temp_t5 = (char *)(sp94) + 0x10;
        sp94 = temp_t5;
        (*(s16 *)((char *)(sp94) + 0x10)) = (s16) (s32) (sp74 - sp50);
        (*(s16 *)((char *)(sp94) + 0x2)) = (s16) (s32) (sp78 - sp54);
        (*(s16 *)((char *)(sp94) + 0x4)) = (s16) (s32) (sp7C - sp58);
        (*(s16 *)((char *)(sp94) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x110));
        (*(s32 *)((char *)(temp_t5) + 0x6)) = 0;
        temp_t7 = (char *)(sp94) + 0x10;
        sp94 = temp_t7;
        (*(s16 *)((char *)(sp94) + 0x10)) = (s16) (s32) (sp74 + sp50);
        (*(s16 *)((char *)(sp94) + 0x2)) = (s16) (s32) (sp78 + sp54);
        (*(s16 *)((char *)(sp94) + 0x4)) = (s16) (s32) (sp7C + sp58);
        (*(s16 *)((char *)(sp94) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x110));
        (*(s32 *)((char *)(temp_t7) + 0x6)) = 0;
        temp_t1 = (char *)(sp94) + 0x10;
        sp94 = temp_t1;
        (*(s16 *)((char *)(sp94) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + sp50);
        (*(s16 *)((char *)(sp94) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + sp54);
        (*(s16 *)((char *)(sp94) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + sp58);
        (*(s16 *)((char *)(sp94) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(temp_v1_2) + 0x4));
        (*(s32 *)((char *)(temp_t1) + 0x6)) = 0;
        return sp90;
    }
    return NULL;
}

s32 func_150D317C(void *arg0) {
    s32 var_v0;
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x128)) = (f32) ((*(f32 *)((char *)(arg0) + 0x128)) + ((*(f32 *)((char *)(arg0) + 0x130)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x12C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x12C)) + ((*(f32 *)((char *)(arg0) + 0x134)) * D_800BE9A4));
    temp_s0 = (char *)(arg0) + 0x110;
    (*(s32 *)((char *)(temp_s0) + 0x18)) = func_15144B68((*(s32 *)((char *)(arg0) + 0x128)));
    (*(s32 *)((char *)(temp_s0) + 0x1C)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x1C)));
    (*(f32 *)((char *)(arg0) + 0x110)) = (f32) ((sinf((*(f32 *)((char *)(temp_s0) + 0x18))) * (*(f32 *)((char *)(temp_s0) + 0x10))) + (*(f32 *)((char *)(temp_s0) + 0x8)));
    var_v0 = 0;
    (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((sinf((*(f32 *)((char *)(temp_s0) + 0x1C))) * (*(f32 *)((char *)(temp_s0) + 0x14))) + (*(f32 *)((char *)(temp_s0) + 0xC)));
    (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - D_800BE9A4);
    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) ((*(s8 *)((char *)(temp_s0) + 0x2C)) * (*(s8 *)((char *)(temp_s0) + 0x28)));
    if ((*(s32 *)((char *)(temp_s0) + 0x28)) > 0.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_150D32FC(void *arg0, u8 *arg1, s32 arg2) {
    void *temp_v0;

    if ((arg2 & 0xFF) == 0x34) {
        temp_v0 = (char *)(arg0) + 0x28;
        if (*arg1 == (*(s32 *)((char *)(temp_v0) + 0x51))) {
            func_150D278C((*(s32 *)((char *)(arg0) + 0x28)), (char *)(temp_v0) + 0x10, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
        }
    }
}
