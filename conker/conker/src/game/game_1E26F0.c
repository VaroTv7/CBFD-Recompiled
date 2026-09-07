/**
 * Auto-decompiled from asm/1E26F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                    /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();                   /* extern */
f32 func_15143E64();                           /* extern */
void * memcpy();                              /* extern */
extern u8 D_8008FB80;
extern u8 D_8008FB84;
extern s32 D_80090F68;
extern s32 D_800A4AC8;
extern s32 D_800AA400;
extern s32 D_800AA40C;
extern f32 D_800AA418;
extern f32 D_800AA41C;
extern f32 D_800AA420;
extern f32 D_800AA424;
extern f32 D_800AA428;
extern s32 D_800D2C9C;

s32 func_151B5240( s32 arg0, s32 arg1, s32 arg2) {
    s32 sp5DC;
    f32 sp5D0;
    f32 sp5CC;
    f32 sp5C8;
    f32 sp5C4;
    f32 sp5C0;
    u8 sp5BC;
    s32 sp5B8;
    s8 sp5B4;
    s32 sp5B0;
    void * sp30;
    s32 temp_v0;
    s32 var_v1;

    sp5B4 = 0x17;
    sp5BC = 0x16;
    sp5B0 = func_15083E90(0x17U);
    sp5B8 = func_15083E90(sp5BC);
    sp5C8 = 250.0f;
    sp5C0 = 18.0f;
    sp5D0 = D_800AA418;
    sp5C4 = 0.0f;
    sp5CC = 1.0f / 250.0f;
    temp_v0 = func_15149130(arg0, -1, -1, 1, 1, 0x15, 0x5A8, (s32) arg1, arg2);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp5DC = temp_v0;
        memcpy(temp_v0 + 0x28, &sp30, 0x5A8);
        var_v1 = sp5DC;
    }
    return var_v1;
}

void *func_151B5328(void *arg0, void *arg1, s32 arg2) {
    u8 sp13B;
    s8 sp13A;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp108;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 sp80;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f30;
    f32 var_f14;
    f32 var_f20;
    f32 var_f24;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_v0;
    s32 var_s2_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_s2;
    void *var_s3;

    f32 sp100;
    f32 sp104;
    f32 sp10C;
    f32 sp110;
    var_s3 = arg0;
    sp13B = 0;
    var_s2 = (char *)(arg1) + 0x28;
    if (((*(s32 *)((*(s32 *)((char *)(arg1) + 0x5A8)))) == 0) || ((*(s32 *)((char *)(var_s2) + 0x584)) != (*(s32 *)((char *)((*(s32 *)((char *)(var_s2) + 0x580))) + 0x3B)))) {
        sp13B = 1;
        var_s2 = (char *)(arg1) + 0x28;
    }
    temp_v1 = (*(s32 *)((char *)(var_s2) + 0x588));
    if (((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || ((*(s32 *)((char *)(var_s2) + 0x58C)) != (*(s32 *)((char *)(temp_v1) + 0x3B)))) {
        sp13B = 1;
    }
    if (sp13B == 0) {
        temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(var_s2) + 0x580))) + 0x1D4));
        if ((temp_v0 != 0) && ((*(s32 *)((char *)(temp_v1) + 0x1D4)) != 0)) {
            func_15143134(&D_800AA400, &sp108, temp_v0 + (D_8008FB80 << 6));
            func_15143134(&D_800AA40C, &spFC, (*(s32 *)((char *)((*(s32 *)((char *)(var_s2) + 0x588))) + 0x1D4)) + (D_8008FB84 << 6));
            sp13A = 1;
            var_s0 = (char *)(var_s2) + (D_800BE9C0 * 0x2C0);
            temp_s4 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
            var_s3 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142E24(func_15142B7C(var_s3, 0x200005, 0x60600), &D_80090F68, 0, 0, 0, 0, 0x56, 0, 0, &sp13A, 3), 0xFF, 0xFF, 0xFF, 0xFF, &sp13A), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF, &sp13A), 0x2E, &sp13A), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x2C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x28)), &sp13A);
            spF0 = spFC - sp108;
            spF4 = sp100 - sp10C;
            spF8 = sp104 - sp110;
            spCC = func_15143E64(&spF0);
            temp_f20 = ((spF0 * 0.5f) + sp108) - (*(s32 *)((char *)(temp_s4) + 0x0));
            sp80 = spF0;
            temp_f22 = ((spF4 * 0.5f) + sp10C) - (*(s32 *)((char *)(temp_s4) + 0x4));
            temp_f24 = ((spF8 * 0.5f) + sp110) - (*(s32 *)((char *)(temp_s4) + 0x8));
            temp_f14 = (spF4 * temp_f24) - (temp_f22 * spF8);
            temp_f16 = (spF8 * temp_f20) - (temp_f24 * sp80);
            temp_f18 = (sp80 * temp_f22) - (temp_f20 * spF4);
            temp_f26 = (temp_f14 * temp_f14) + (temp_f16 * temp_f16) + (temp_f18 * temp_f18);
            if (temp_f26 == 0.0f) {
                sp118 = 0.0f;
                sp11C = 0.0f;
                sp120 = 0.0f;
            } else {
                temp_f2 = (*(s32 *)((char *)(var_s2) + 0x590)) / sqrtf(temp_f26);
                sp118 = temp_f14 * temp_f2;
                sp11C = temp_f16 * temp_f2;
                sp120 = temp_f18 * temp_f2;
            }
            var_f14 = D_800AA41C;
            temp_f0 = (*(s32 *)((char *)(var_s2) + 0x594));
            temp_f26_2 = spF0 * var_f14;
            temp_f28 = spF4 * var_f14;
            temp_f30 = spF8 * var_f14;
            if (spCC < temp_f0) {
                spC8 = 0.0f;
            } else if (spCC < (*(s32 *)((char *)(var_s2) + 0x598))) {
                spC8 = (spCC - temp_f0) * (*(s32 *)((char *)(var_s2) + 0x59C)) * (*(s32 *)((char *)(var_s2) + 0x5A0));
            } else {
                spC8 = (*(s32 *)((char *)(var_s2) + 0x5A0));
            }
            var_s2_2 = 0;
            (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)&(sp108) + 0x0));
            var_f20 = 0.0f;
            var_f24 = 0.0f;
            (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp108) + 0x4));
            (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp108) + 0x8));
            spD0 = 0.0f;
            do {
                temp_s0 = (char *)(var_s0) + 0x20;
                temp_f2_2 = 1.0f - (sinf(var_f20) * spC8);
                temp_f12 = sp118 * temp_f2_2;
                (*(s16 *)((char *)(temp_s0) - 0x20)) = (s16) (s32) (temp_f12 + spD8);
                (*(s16 *)((char *)(temp_s0) - 0x1E)) = (s16) (s32) ((sp11C * temp_f2_2) + spDC);
                (*(s32 *)((char *)(temp_s0) - 0x14)) = 0xFF;
                (*(s32 *)((char *)(temp_s0) - 0x13)) = 0;
                (*(s32 *)((char *)(temp_s0) - 0x12)) = 0;
                (*(s32 *)((char *)(temp_s0) - 0x11)) = 0xFF;
                (*(s32 *)((char *)(temp_s0) - 0x18)) = 0;
                temp_f8 = (s32) var_f24;
                (*(s16 *)((char *)(temp_s0) - 0x16)) = (s16) temp_f8;
                (*(s16 *)((char *)(temp_s0) - 0x1C)) = (s16) (s32) ((sp120 * temp_f2_2) + spE0);
                (*(s16 *)((char *)(temp_s0) - 0x10)) = (s16) (s32) (spD8 - temp_f12);
                (*(s16 *)((char *)(temp_s0) - 0xE)) = (s16) (s32) (spDC - (sp11C * temp_f2_2));
                (*(s32 *)((char *)(temp_s0) - 0x4)) = 0xFF;
                (*(s32 *)((char *)(temp_s0) - 0x3)) = 0;
                (*(s32 *)((char *)(temp_s0) - 0x2)) = 0;
                (*(s32 *)((char *)(temp_s0) - 0x1)) = 0xFF;
                (*(s32 *)((char *)(temp_s0) - 0x8)) = 0x7C0;
                (*(s16 *)((char *)(temp_s0) - 0x6)) = (s16) temp_f8;
                (*(s16 *)((char *)(temp_s0) - 0xC)) = (s16) (s32) (spE0 - (sp120 * temp_f2_2));
                temp_f22_2 = var_f20 + D_800AA420;
                temp_v0_2 = var_s3;
                temp_s3 = (char *)(var_s3) + 8;
                temp_v1_2 = temp_s3;
                temp_f2_3 = 1.0f - (sinf(temp_f22_2) * spC8);
                temp_s3_2 = (char *)(temp_s3) + 8;
                var_s0 = (char *)(temp_s0) + 0x20;
                temp_f12_2 = sp118 * temp_f2_3;
                temp_a0 = temp_s3_2;
                var_s3 = (char *)(temp_s3_2) + 8;
                (*(s16 *)((char *)(var_s0) - 0x20)) = (s16) (s32) ((spD8 + temp_f26_2) - temp_f12_2);
                var_f14 = sp11C * temp_f2_3;
                (*(s16 *)((char *)(var_s0) - 0x1E)) = (s16) (s32) ((spDC + temp_f28) - var_f14);
                (*(s32 *)((char *)(var_s0) - 0x14)) = 0xFF;
                temp_f16_2 = sp120 * temp_f2_3;
                (*(s32 *)((char *)(var_s0) - 0x13)) = 0;
                (*(s32 *)((char *)(var_s0) - 0x12)) = 0;
                (*(s32 *)((char *)(var_s0) - 0x11)) = 0xFF;
                (*(s32 *)((char *)(var_s0) - 0x18)) = 0x7C0;
                (*(s16 *)((char *)(var_s0) - 0x1C)) = (s16) (s32) ((spE0 + temp_f30) - temp_f16_2);
                temp_f18_2 = var_f24 + D_800AA424;
                temp_f8_2 = (s32) temp_f18_2;
                (*(s16 *)((char *)(var_s0) - 0x16)) = (s16) temp_f8_2;
                (*(s16 *)((char *)(var_s0) - 0x10)) = (s16) (s32) (spD8 + temp_f26_2 + temp_f12_2);
                (*(s16 *)((char *)(var_s0) - 0xE)) = (s16) (s32) (spDC + temp_f28 + var_f14);
                (*(s32 *)((char *)(var_s0) - 0x4)) = 0xFF;
                (*(s32 *)((char *)(var_s0) - 0x3)) = 0;
                (*(s32 *)((char *)(var_s0) - 0x2)) = 0;
                (*(s32 *)((char *)(var_s0) - 0x1)) = 0xFF;
                (*(s32 *)((char *)(var_s0) - 0x8)) = 0;
                (*(s16 *)((char *)(var_s0) - 0x6)) = (s16) temp_f8_2;
                (*(s16 *)((char *)(var_s0) - 0xC)) = (s16) (s32) (spE0 + temp_f30 + temp_f16_2);
                (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0x01004008;
                (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (void *) ((char *)(var_s0) - 0x40);
                (*(s32 *)((char *)(temp_v1_2) + 0x0)) = 0x05000204;
                (*(s32 *)((char *)(temp_v1_2) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_a0) + 0x0)) = 0x05000406;
                (*(s32 *)((char *)(temp_a0) + 0x4)) = 0;
                var_s2_2 += 1;
                spDC += temp_f28;
                spD8 += temp_f26_2;
                var_f20 = temp_f22_2;
                spE0 += temp_f30;
                var_f24 = temp_f18_2;
                spD0 += D_800AA428;
            } while (var_s2_2 != 0xA);
        }
    }
    if (sp13B != 0) {
        (*(s32 *)((char *)(arg1) + 0xE)) = -1;
    }
    return var_s3;
}

void func_151B5A9C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t6;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v1_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = arg0 + 0x28;
        temp_a2 = (*(s32 *)((char *)(temp_v0) + 0x580));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x580)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x584)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
        } else if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x580)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x584)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
        temp_a2_2 = (*(s32 *)((char *)(temp_v0) + 0x588));
        if ((*(s32 *)((char *)(arg1) + 0x0)) == temp_a2_2) {
            (*(s32 *)((char *)(temp_v0) + 0x588)) = (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x58C)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2_2) {
            (*(s32 *)((char *)(temp_v0) + 0x588)) = (*(s32 *)((char *)(arg1) + 0x0));
            (*(u8 *)((char *)(temp_v0) + 0x58C)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else {
        temp_v0_2 = arg0 + 0x28;
        if ((temp_t6 == 0) && ((temp_v1_2 = (*(u8 *)((char *)(arg1) + 0x0)), (temp_v1_2 == (*(u8 *)((char *)(temp_v0_2) + 0x580)))) || (temp_v1_2 == (*(u8 *)((char *)(temp_v0_2) + 0x588))) || (temp_v1_3 = (u8) (*(u8 *)((char *)(arg1) + 0x4)), ((*(u8 *)((char *)(temp_v0_2) + 0x584)) == temp_v1_3)) || ((*(u8 *)((char *)(temp_v0_2) + 0x58C)) == temp_v1_3))) {
            func_1516972C(temp_t6);
        }
    }
}
