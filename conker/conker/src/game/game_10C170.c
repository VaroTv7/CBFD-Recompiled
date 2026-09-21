/**
 * Auto-decompiled from asm/10C170.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1504697C();            /* extern */
u32 random_u32();                           /* extern */
f32 random_float();                                /* extern */
void * func_150E83AC();                /* extern */
void * func_1513264C();     /* extern */
void * func_15143874();              /* extern */
void * func_15149550();          /* extern */
void * func_151541B8(); /* extern */
void * func_15165F80(); /* extern */
void * func_151A6F00();                 /* extern */
void * func_151A9834(); /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D5334(); /* extern */
void * func_151D5514();                   /* extern */
void * memcpy();                              /* extern */
extern s32 D_80088960;
extern s32 D_8008896C;
extern s32 D_800A0D60;
extern f32 D_800A0E14;
extern f32 D_800A0E50;
extern f32 D_800A0E8C;
extern f32 D_800A0EC8;
extern f32 D_800A0F04;
extern f32 D_800A0F08;
extern f32 D_800A0F0C;
extern f32 D_800A0F10;
extern f32 D_800A0F14;
extern f32 D_800A0F18;
extern f32 D_800A0F1C;
extern f32 D_800A0F20;
extern f32 D_800A0F24;
extern f32 D_800A0F28;
extern f32 D_800A0F2C;
extern f32 D_800A0F30;
extern f32 D_800A0F34;
extern f32 D_800A0F38;
extern f32 D_800A0F3C;
extern f32 D_800A0F40;
extern f32 D_800A0F44;
extern f32 D_800A0F48;
extern f32 D_800A0F4C;
extern f32 D_800A0F50;

void func_150DECC0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp184;
    s32 sp17C;
    s16 sp178;
    s16 sp176;
    s8 sp174;
    s32 sp170;
    s8 sp16E;
    s8 sp16C;
    s8 sp16B;
    s8 sp16A;
    s8 sp169;
    s8 sp168;
    s8 sp167;
    s8 sp166;
    s8 sp165;
    s8 sp164;
    s32 sp160;
    s8 sp15C;
    s16 sp15A;
    s16 sp158;
    s32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    void * sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    s16 spFC;
    s16 spFA;
    s8 spF9;
    s8 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    f32 spB8;
    s16 spB4;
    void * spA8;
    s16 spA4;
    void * sp94;
    void * *var_s0;
    f32 *var_s1;
    f32 *var_s3;
    f32 *var_s4;
    f32 *var_s5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 var_f10;
    s32 temp_s2;
    s32 temp_t5;
    s32 temp_v0;
    s32 temp_v0_2;

    sp184 = (s32) ((*(s32 *)((char *)((D_800DBFF0 + (D_80082FA4 * 0x9A0))) + 0x380)) * D_800A0F04);
    sp104 = 15.0f;
    sp110 = 1.0f;
    sp10C = 1.0f;
    sp108 = D_800A0F08;
    (*(s32 *)((char *)&(sp114) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp114) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp114) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    temp_f24 = D_800A0F0C;
    temp_f22 = D_800A0F10;
    sp120 = 1.0f;
    sp124 = 1.0f;
    sp128 = 1.0f;
    sp148 = 0.0f;
    sp154 = 0x29E9;
    sp15C = 0;
    sp160 = 0;
    sp164 = 0xFF;
    sp165 = 0xD;
    sp166 = 0;
    sp167 = 0xA;
    sp168 = 0;
    sp169 = 0;
    sp16A = 0;
    sp16B = 0;
    sp16C = 2;
    sp16E = 2;
    sp170 = 0;
    sp174 = 0;
    sp176 = 0x23;
    sp178 = 7;
    sp17C = 0;
    sp138 = 0.0f;
    sp140 = 0.0f;
    var_s1 = &D_800A0E14;
    var_s5 = &D_800A0E8C;
    var_s4 = &D_800A0E50;
    temp_f20 = D_800A0F14;
    var_s0 = &D_800A0D60;
    var_s3 = &D_800A0EC8;
    do {
        temp_s2 = (u32) *var_s3 & 0xFF;
        sp12C = (*(s32 *)((char *)(var_s0) + 0x0)) + (*(s32 *)((char *)(arg0) + 0x0));
        sp130 = (*(s32 *)((char *)(var_s0) + 0x4)) + (*(s32 *)((char *)(arg0) + 0x4));
        sp134 = (*(s32 *)((char *)(var_s0) + 0x8)) + (*(s32 *)((char *)(arg0) + 0x8));
        temp_v0 = temp_s2 * 4;
        temp_f2 = *var_s5;
        sp13C = (*(&D_8008896C + temp_v0) * random_float()) + *(&D_80088960 + temp_v0);
        sp144 = *var_s4 * temp_f2 * temp_f20;
        sp14C = *var_s1 * temp_f2 * temp_f20;
        sp150 = (random_float() * temp_f22) + temp_f24;
        sp158 = (random_u32() % 111U) + 0x82;
        if (random_u32() & 1) {
            sp15A = 0xC4;
        } else {
            sp15A = 0xC5;
        }
        func_1513264C(&sp104, 3, 0xFF, 0, 0, (s32) arg1, arg2);
        var_s1 += 4;
        var_s3 += 4;
        var_s0 = (char *)(var_s0) + 0xC;
        var_s4 += 4;
        var_s5 += 4;
    } while ((char *)(var_s1) != (char *)(&D_800A0E50));
    func_15165F80(-1, (s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x4)), (s32) (*(s32 *)((char *)(arg0) + 0x8)), 0x1E, 0x32, 0, (s32) arg1, arg2);
    temp_f22_2 = D_800A0F18;
    temp_f24_2 = D_800A0F1C;
    func_151D5404(arg0, 506.0f, temp_f22_2, temp_f24_2, 0xF, 0x14, (s32) arg1, arg2);
    func_151D5334(arg0, 0x43FD0000, temp_f22_2, temp_f24_2, 5, (s32) arg1, arg2);
    func_151D5514(arg0, arg1, arg2);
    func_151D3FF4(arg0, arg1, arg2);
    temp_f20_2 = random_float();
    temp_t5 = (random_u32() % 56U) + 0xC8;
    var_f10 = (f32) temp_t5;
    if (temp_t5 < 0) {
        var_f10 += 4294967296.0f;
    }
    func_151541B8(arg0, (temp_f20_2 * 4.0f) + 12.0f, 0x3FD20C49, var_f10, 0.0f, (s32) arg1, arg2);
    spA4 = (random_u32() & 3) + 3;
    spB4 = 0xBE;
    spBC = sp184 - 0x40;
    spBE = 0x80;
    spC0 = -0x3F;
    spC2 = 0x5A;
    spB8 = 250.0f;
    (*(f32 *)((char *)&(spA8) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(spA8) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(spA8) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    spC4 = 5.0f;
    spCC = 15.0f;
    spD0 = 15.0f;
    spD4 = 0.0f;
    spD8 = 0.0f;
    spF8 = 1;
    spF9 = 1;
    spFA = 0x64;
    spFC = 0x32;
    spC8 = 10.0f;
    spF4 = 10.0f;
    spDC = 0.0f;
    spE0 = 0.25f;
    spE4 = 0.5f;
    spE8 = D_800A0F20;
    spEC = D_800A0F24;
    spF0 = -5.0f;
    func_151A6F00(&spA4, 0, arg1, arg2);
    (*(f32 *)((char *)&(sp94) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp94) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp94) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    temp_v0_2 = func_15149130(0xF, 8, -1, -1, 1, 0, 0xC, (s32) arg1, arg2);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x28, &sp94, 0xC);
    }
}

void func_150DF334(void *arg0) {
    f32 sp70;
    u8 sp6F;
    f32 sp68;
    f32 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp58;
    s32 sp54;
    f32 sp4C;
    void * sp48;
    s32 *sp40;
    s32 *var_a0;
    s32 *var_v0;

    sp6F = 0;
    sp54 = (*(s32 *)((char *)(arg0) + 0x28));
    sp58 = (*(s32 *)((char *)(arg0) + 0x2C)) + 500.0f;
    sp5C = (*(s32 *)((char *)(arg0) + 0x30));
    var_a0 = (char *)(arg0) + 0x28;
    if (func_1504697C(&sp54, 0, sp58 - 1000.0f, &sp70) != 0) {
        sp60 = (*(s32 *)((char *)(arg0) + 0x28));
        sp64 = sp70;
        sp6F = 1;
        sp68 = (*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x8));
    }
    if (sp6F != 0) {
        var_a0 = &sp60;
    }
    sp40 = var_a0;
    func_150E83AC(var_a0, (s16) ((random_u32(var_a0) % 62U) + 0x78), (*(s16 *)((char *)(arg0) + 0xC)), (*(s16 *)((char *)(arg0) + 0x1)));
    var_v0 = (char *)(arg0) + 0x28;
    if (sp6F != 0) {
        var_v0 = &sp60;
    }
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)(var_v0) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)(var_v0) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)(var_v0) + 0x8));
    sp4C += 500.0f;
    func_151A9834(&sp48, sp4C - 1000.0f, 0x437A0000, &sp70, (random_u32() % 3U) + 3, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}

void func_150DF4B8(void *arg0, void * arg1, void * arg2, s32 arg3, s32 arg4) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s8 spBC;
    s32 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp88;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s32 temp_s7;
    s32 var_s0;

    temp_s7 = arg3 & 0xFF;
    (*(s32 *)((char *)&(sp88) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp88) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    temp_f20 = (random_float() * 0.5f) + 1.0f;
    temp_f28 = D_800A0F28;
    temp_f30 = D_800A0F2C;
    temp_f10 = random_float() * 0.5f;
    sp94 = temp_f28 * temp_f20;
    sp9C = temp_f30 * temp_f20;
    temp_f2 = temp_f10 + 1.0f;
    spAA = 0x1A4D;
    spA8 = 0x6231;
    sp98 = D_800A0F30 * temp_f2;
    spA0 = D_800A0F34 * temp_f2;
    spA4 = D_800A0F38 * temp_f2;
    spAC = (random_u32() % 151U) + 0x96;
    spAE = 0;
    spAF = 0;
    spB0 = 0;
    spB1 = 0xFF;
    spB2 = 1;
    spB4 = (random_u32() % 156U) + 0x64;
    spB5 = 0xFF;
    spB6 = 0;
    spB7 = 1;
    spB8 = 0;
    spBC = 0xF;
    spC4 = D_800A0F3C;
    spC8 = D_800A0F40;
    spC0 = 0.0f;
    spCC = D_800A0F44;
    func_15149550(&sp88, 0xA, 0, 0, temp_s7, arg4);
    var_s0 = (random_u32() % 3U) + 1;
    if (var_s0 > 0) {
        do {
            func_15143874((s16) (random_u32() & 0xFF), 0x41F00000, &sp88, &sp90);
            sp88 += (*(s32 *)((char *)(arg0) + 0x0));
            sp90 += (*(s32 *)((char *)(arg0) + 0x8));
            temp_f20_2 = (random_float() * 0.5f) + 0.75f;
            temp_f18 = random_float() * 0.5f;
            sp94 = temp_f28 * temp_f20_2;
            sp9C = temp_f30 * temp_f20_2;
            temp_f2_2 = temp_f18 + 0.75f;
            sp98 = D_800A0F48 * temp_f2_2;
            spA0 = D_800A0F4C * temp_f2_2;
            spA4 = D_800A0F50 * temp_f2_2;
            spAC = (random_u32() % 151U) + 0x96;
            spB4 = (random_u32() % 156U) + 0x64;
            spB7 = 0;
            func_15149550(&sp88, 0xA, 0, 0, temp_s7, arg4);
            var_s0 -= 1;
        } while (var_s0 != 0);
    }
}
