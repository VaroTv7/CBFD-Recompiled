/**
 * Auto-decompiled from asm/116D40.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15130374();              /* extern */
void * func_15132A4C();          /* extern */
void * func_15143794();                /* extern */
void * func_1514470C();                          /* extern */
void * func_151602C0(); /* extern */
extern f32 D_800A13F0;
extern f32 D_800A13F4;
extern f32 D_800A13F8;
extern f32 D_800A13FC;
extern f32 D_800A1400;
extern f32 D_800A1404;
extern f32 D_800A1408;
extern f32 D_800A140C;

void func_150E9890(void * *arg0, void * *arg1, f32 arg2, u8 arg3, s32 arg4) {
    s8 sp19B;
    s8 sp19A;
    s8 sp199;
    s8 sp198;
    s32 sp190;
    f32 sp18C;
    void * sp180;
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    void * sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    s16 sp15A;
    s16 sp158;
    s16 sp156;
    s8 sp155;
    s8 sp154;
    s8 sp153;
    s8 sp152;
    s8 sp151;
    s8 sp150;
    s8 sp14F;
    s8 sp14E;
    s8 sp14D;
    s8 sp14C;
    s32 sp148;
    s32 sp144;
    s16 sp142;
    s16 sp140;
    s32 sp13C;
    s32 sp138;
    s16 sp12C;
    s16 sp12A;
    s8 sp128;
    s32 sp124;
    s8 sp122;
    s8 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s8 sp11B;
    s8 sp11A;
    s8 sp119;
    s8 sp118;
    s32 sp114;
    s8 sp110;
    s16 sp10E;
    s16 sp10C;
    s32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    void * spEC;
    void * spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s8 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    f32 temp_f20;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s16 temp_v1;
    s32 var_s2;
    u32 temp_s0;
    u32 temp_s1;

    temp_v1 = (random_u32() % 31U) + 0x14;
    sp15A = temp_v1;
    sp156 = temp_v1;
    sp158 = (s16) (0xFF / temp_v1);
    sp153 = 0xFF;
    sp142 = temp_v1;
    temp_f2 = ((random_float() * 608.0f) + 808.0f) * arg2;
    sp160 = temp_f2;
    sp164 = temp_f2;
    sp15C = ((random_float() * 18.0f) + 1016.0f) * D_800A13F0;
    sp155 = 0x16;
    sp140 = 0x2001;
    sp138 = 0x200005;
    sp13C = 0;
    sp144 = 0;
    sp148 = 0;
    sp14F = 0xFF;
    sp154 = 0xFF;
    sp190 = 0x800E05;
    sp198 = 3;
    sp199 = 3;
    sp19A = -1;
    sp19B = -1;
    sp174 = 0.0f;
    sp178 = 0.0f;
    sp17C = 0.0f;
    if (random_u32() & 1) {
        sp190 |= 0x40;
    }
    if (random_u32() & 1) {
        sp190 |= 0x80;
    }
    sp150 = 0xFF;
    sp151 = 0x8E;
    sp152 = 0x13;
    sp14C = 0x2F;
    sp14D = 0;
    sp14E = 0;
    (*(f32 *)((char *)&(sp168) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp168) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp168) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(sp180) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp180) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp180) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp18C = 0.0f;
    func_15130374(&sp138, 0, 0, arg3, arg4);
    var_s2 = (random_u32() & 7) + 5;
    sp108 = 0x21E8;
    sp10E = 0x1B;
    spB8 = 0.0f;
    spC8 = 0.0f;
    spCC = 0.0f;
    spD0 = 0.0f;
    spFC = 0.0f;
    sp110 = 0;
    sp114 = 0;
    sp119 = 1;
    sp11A = 0;
    sp11B = 0;
    sp11C = 0;
    sp11D = 0;
    sp11E = 0;
    sp11F = 0;
    sp120 = 0;
    sp122 = 2;
    sp124 = 0;
    sp128 = 0;
    sp12A = 0x14;
    sp12C = 0xC;
    spD4 = 1.0f;
    spD8 = 1.0f;
    spDC = 1.0f;
    spBC = D_800A13F4;
    if (var_s2 > 0) {
        temp_f30 = D_800A13F8;
        temp_f28 = D_800A13FC;
        temp_f26 = D_800A1400;
        temp_f20 = D_800A1404;
        do {
            (*(f32 *)((char *)&(spE0) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
            (*(f32 *)((char *)&(spE0) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
            (*(f32 *)((char *)&(spE0) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
            sp10C = (random_u32() % 41U) + 0x1D;
            sp118 = (random_u32() % 76U) + 0xB4;
            temp_s0 = random_u32();
            temp_s1 = random_u32();
            func_15143794((s16) (temp_s0 & 0xFF), (s16) ((s32) (temp_s1 % 65U) * -1), ((random_float() * temp_f26) + temp_f28) * temp_f20, &spEC);
            temp_f2_2 = ((random_float() * temp_f30) + 1016.0f) * D_800A1408 * arg2;
            spC0 = temp_f2_2;
            spC4 = temp_f2_2;
            sp104 = ((random_float() * 99.0f) + -206.0f) * temp_f20;
            spF8 = (random_float() * 101.0f) + -49.0f;
            sp100 = (random_float() * 101.0f) + -49.0f;
            func_15132A4C(&spB8, 3, 0xFF, 0, (s32) arg3, arg4);
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
    spB0 = 3;
    spB1 = -1;
    spB2 = (random_u32() % 13U) + 8;
    spB4 = 0;
    spA4 = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    spA8 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    spAC = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&spB0, &spA4, (random_u32() % 31U) + 0x46, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg3, arg4);
}

void func_150E9E34(void *arg0) {
    void * sp80;
    void * sp74;
    f32 temp_f20;
    f32 temp_f26;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) + (((*(f32 *)((char *)(temp_s0) + 0x4)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x8)))) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s0) + 0x14)) > 1.0f) {
        temp_f26 = D_800A140C;
        do {
            temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x10))) + (*(s32 *)((char *)(temp_s0) + 0xC));
            func_1514470C((*(s32 *)((char *)(arg0) + 0x28)), &sp80);
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) (temp_s1 & 0xFF), (s16) (0x40 - (temp_s2 % 129U)), random_float() * 600.0f * temp_f26, &sp74);
            func_150E9890(&sp80, &sp74, temp_f20, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x14)) > 1.0f);
    }
}
