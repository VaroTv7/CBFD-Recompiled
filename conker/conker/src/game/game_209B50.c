/**
 * Auto-decompiled from asm/209B50.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15103254(); /* extern */
s32 func_15130280();        /* extern */
void * func_15150178();            /* extern */
void * func_15182670();  /* extern */
void * func_151D3F14();                   /* extern */
void * memcpy();                             /* extern */
extern s32 D_800AB500;
extern s32 D_800AB50C;
extern f32 D_800AB518;
extern f32 D_800AB51C;
extern f32 D_800AB520;
extern f32 D_800AB524;
extern f32 D_800AB528;
extern f32 D_800AB52C;
extern f32 D_800AB530;
extern f32 D_800AB534;
extern f32 D_800AB538;
extern f32 D_800AB53C;
extern f32 D_800AB540;

void func_151DC6A0(void *arg0, s32 arg1, s32 arg2) {
    f32 sp7C;
    s8 sp78;
    f32 sp74;
    s8 sp71;
    s8 sp70;
    f32 sp6C;
    f32 sp68;
    s8 sp65;
    s8 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    void * sp40;
    s16 sp3E;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    u32 sp30;
    u32 sp2C;

    sp2C = random_u32();
    sp30 = random_u32();
    func_15103254((s16) ((sp2C % 5U) + 0xC), ((sp30 % 56U) + 0xC8) & 0xFF, (random_float() * 600.0f) + D_800AB518, arg0, 0xFF, (s32) arg1, arg2);
    (*(s32 *)((char *)&(sp40) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp50 = 8.0f;
    sp4E = 7;
    sp54 = 10.0f;
    sp4C = 0xC;
    sp38 = 0;
    sp3A = 0xFF;
    sp3C = -0x40;
    sp3E = 0x3C;
    sp58 = 0x24;
    sp5A = 0x3C;
    sp64 = 0xC8;
    sp65 = 0x37;
    sp70 = 0;
    sp71 = 0xC;
    sp78 = 1;
    sp5C = D_800AB51C;
    sp60 = D_800AB520;
    sp68 = 280.0f;
    sp6C = 390.0f;
    sp74 = D_800AB524;
    sp7C = 1.0f;
    func_15150178(&sp38, &sp40, 0, arg1, arg2);
    func_151D3F14(arg0, arg1, arg2);
    sp2C = random_u32();
    func_15182670(0xFF, 0xFF, 0xFF, ((sp2C % 51U) + 0x96) & 0xFF, (random_u32() % 5U) + 8, 0, (s32) arg1, arg2);
}

void func_151DC8BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp44;
    f32 sp40;
    s8 sp34;
    s32 temp_v0;

    if (arg2 & 0xFF) {
        func_151DC6A0(arg0, arg4, arg5);
    }
    (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp40 = 0.0f;
    sp44 = arg3;
    temp_v0 = func_15149130(arg1, -1, 0x5B, -1, 1, 0, 0x14, (s32) arg4, arg5);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0x14);
    }
}

void func_151DC97C(void *arg0) {
    s8 sp121;
    s8 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    void * spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s8 spD9;
    s8 spD8;
    s8 spD7;
    u8 spD6;
    u8 spD5;
    u8 spD4;
    s8 spD3;
    u8 spD2;
    u8 spD1;
    u8 spD0;
    s32 spCC;
    s32 spC8;
    s16 spC6;
    s16 spC4;
    s32 spC0;
    s32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    void * sp9C;
    void * sp90;
    f32 temp_f16;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f30;
    f32 temp_f4;
    s32 temp_lo;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_v1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((D_800AB528 + (random_float() * D_800AB52C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        spD9 = 0x6C;
        spC4 = 0x5103;
        spBC = 0x200005;
        spAC = 0;
        spAD = 0;
        spC0 = 0;
        spC8 = 0;
        spCC = 0;
        spDA = 0x28;
        spDC = 6;
        sp114 = 0x80DE07;
        sp11C = 8;
        sp11D = 6;
        sp11E = 0x16;
        sp11F = -1;
        sp120 = -1;
        sp121 = 0;
        spDE = 0x78;
        spD8 = 0xFF;
        spB8 = D_800AB530;
        spE0 = D_800AB534;
        (*(s32 *)((char *)&(spEC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x8));
        spF8 = 0.0f;
        spFC = 0.0f;
        sp100 = 0.0f;
        sp104 = 0.0f;
        sp108 = 0.0f;
        sp10C = 0.0f;
        if ((*(s32 *)((char *)(temp_s1) + 0x10)) == 0) {
            spD0 = 0xEF;
            spD1 = 0xE0;
            spD2 = 0xCD;
            spD3 = 0xFF;
            spD4 = 0x30;
            spD5 = 0x30;
            spD6 = 0x30;
        }
        temp_f30 = D_800AB538;
        temp_f26 = D_800AB53C;
        temp_f24 = D_800AB540;
        do {
            spAE = (random_u32() % 5U) + 4;
            spAF = (random_u32() % 5U) + 4;
            spB0 = random_float() * 50.0f;
            spB4 = random_float() * 50.0f;
            temp_f4 = random_float() * temp_f24;
            sp114 &= ~0xC0;
            sp110 = temp_f4 + temp_f26;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            sp114 |= var_v0 | var_s0;
            spD7 = (random_u32() % 56U) + 0xC8;
            spC6 = (random_u32() % 36U) + 0x6E;
            temp_f16 = (random_float() * 370.0f) + temp_f30;
            spE8 = temp_f16;
            spE4 = temp_f16;
            if ((*(s32 *)((char *)(temp_s1) + 0x10)) != 0) {
                (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AB500) + 0x0));
                (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AB500) + 0x4));
                (*(u8 *)((char *)&(sp9C) + 0x8)) = (u8) (*(u8 *)((char *)&(D_800AB500) + 0x8));
                (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AB50C) + 0x0));
                (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AB50C) + 0x4));
                (*(u8 *)((char *)&(sp90) + 0x8)) = (u8) (*(u8 *)((char *)&(D_800AB50C) + 0x8));
                temp_lo = ((random_u32() % 3U) & 0xFF) * 3;
                temp_v1 = &sp9C + temp_lo;
                temp_a0 = &sp90 + temp_lo;
                spD0 = (*(s32 *)((char *)(temp_v1) + 0x0));
                spD1 = (*(s32 *)((char *)(temp_v1) + 0x1));
                spD3 = 0xFF;
                spD2 = (*(s32 *)((char *)(temp_v1) + 0x2));
                spD4 = (*(s32 *)((char *)(temp_a0) + 0x0));
                spD5 = (*(s32 *)((char *)(temp_a0) + 0x1));
                spD6 = (*(s32 *)((char *)(temp_a0) + 0x2));
            }
            temp_v0 = func_15130280(&spBC, 0, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &spAC, 0x10);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}
