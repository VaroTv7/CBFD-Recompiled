/**
 * Auto-decompiled from asm/E5E90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();           /* extern */
s32 func_150A3058();      /* extern */
void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                          /* extern */
void * func_15142600(); /* extern */
s32 func_15145C90();                             /* extern */
void * func_15151670();                       /* extern */
void * func_15151A38();                     /* extern */
void * memcpy();                            /* extern */
extern s32 D_80088734;
extern f32 D_8008873C;
extern f32 D_80088740;
extern f32 D_8009FDB0;
extern f32 D_8009FDB4;
extern f32 D_8009FDB8;
extern f32 D_8009FDBC;
extern f32 D_8009FDC0;
extern f32 D_8009FDC4;
extern f32 D_8009FDC8;
extern f32 D_8009FDCC;
extern f32 D_8009FDD0;
extern f32 D_8009FDD4;
extern f32 D_8009FDD8;
extern f32 D_8009FDDC;
extern f32 D_8009FDE0;
extern f32 D_8009FDE4;
extern f32 D_8009FDE8;
extern f32 D_8009FDEC;
extern f32 D_8009FDF0;
extern f32 D_8009FDF4;
extern f32 D_8009FDF8;
extern f32 D_8009FDFC;
extern f32 D_8009FE00;

s32 func_150B89E0(void *arg0, f32 arg1, void * arg2, f32 arg3, f32 arg4, void * *arg5) {
    s16 sp18E;
    s16 sp18C;
    s32 sp188;
    s8 sp17F;
    s8 sp17E;
    s8 sp17D;
    s8 sp17C;
    s32 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    s8 sp14B;
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s32 sp144;
    s32 sp140;
    s16 sp13C;
    s16 sp13A;
    s8 sp139;
    s8 sp138;
    f32 sp130;
    s32 sp12C;
    s16 sp12A;
    s16 sp128;
    s8 sp125;
    s8 sp124;
    s32 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    s32 sp100;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF8;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    s16 spD6;
    s16 spD4;
    s16 spD2;
    s16 spD0;
    s16 spCE;
    s16 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    void * sp68;
    u32 sp60;
    u32 sp5C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s32 temp_v0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x140));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + arg4);
    if (temp_f0 > 15.0f) {
        if (temp_f0 > 30.0f) {
            sp18C = 0x19;
            sp18E = 0xA;
            sp138 = 4;
            sp139 = 0;
            sp13A = 0x3B02;
            sp13C = (random_u32(&sp68) % 31U) + 0x28;
            sp140 = 0;
            sp144 = 0;
            sp148 = 0xFF;
            sp149 = 0xFF;
            sp14A = 0xFF;
            sp14B = 0xFF;
            temp_f12 = ((random_float() * 25.0f) + 25.0f) * D_8009FDB0;
            sp178 = 0x0C5C0001;
            sp17C = 0xFF;
            sp17D = 0xFF;
            sp17E = 0;
            sp17F = 7;
            sp154 = arg1;
            sp14C = temp_f12;
            sp150 = temp_f12;
            sp160 = 0.0f;
            sp164 = 0.0f;
            sp168 = 0.0f;
            sp16C = 0.0f;
            sp170 = 0.0f;
            sp174 = 0.0f;
            sp158 = arg4;
            sp15C = arg3;
            sp130 = ((random_float(temp_f12, 0x41C80000) * 80.0f) + 50.0f) * D_8009FDB4;
            sp188 = (*(s32 *)((char *)(arg0) + 0x128));
            sp5C = random_u32();
            sp60 = random_u32();
            temp_v0 = func_1513D594(&sp138, &D_800A4AA0, 0x18, 0, 0, (sp60 & 1) + ((sp5C & 1) * 2), random_u32() & 0xFF, 500.0f, 500.0f, 0, arg5, (*(s32 *)((char *)(arg0) + 0x14C)), (*(s32 *)((char *)(arg0) + 0x168)), 0, 8, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x128, &sp130, 8);
            }
            spCC = 6;
            spCE = 6;
            spD2 = 0xFF;
            spD4 = -0x3F;
            spD6 = 0x1D;
            spA8 = arg1;
            spB4 = 3.0f;
            spB8 = 3.0f;
            spC4 = 10.0f;
            spC8 = 10.0f;
            spD0 = 0;
            spD8 = 3;
            spDA = 3;
            spDC = 0x32;
            spDE = 0x14;
            spE0 = 1;
            spE1 = 0x21;
            spE2 = 0x48;
            spE4 = 1;
            spE8 = 0;
            spEC = 0;
            spF0 = 0;
            spF4 = 0;
            spF8 = 0;
            spFC = 0;
            spFD = 0x9B;
            spFE = 0x64;
            spAC = arg4;
            spB0 = arg3;
            spBC = D_8009FDB8;
            spC0 = 0.0f;
            sp100 = (*(s32 *)((char *)(arg0) + 0x14C));
            sp108 = 0;
            sp10C = 0x220005;
            sp110 = 0x1D0600;
            sp114 = 1;
            sp118 = 0x3B;
            sp11C = 0x80;
            sp120 = 0x20;
            sp124 = 0;
            sp125 = 7;
            sp128 = 0xA;
            sp12A = 0x19;
            sp104 = (*(s32 *)((char *)(arg0) + 0x168));
            sp12C = (*(s32 *)((char *)(arg0) + 0x128));
            func_15151A38(&spA8, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            func_10010F88(*(&D_80088734 + ((random_u32() & 1) * 4)), 4.4842e-41f, 0.0f, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (arg4 + 25.0f), (s32) (*(s32 *)((char *)(arg0) + 0x40)), 0x3E8, 0xFA0);
            return 0;
        }
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (-(*(f32 *)((char *)(arg0) + 0x48)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f0_2);
        (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f0_2);
        func_10010F88(D_8008873C, 4.4842e-41f, 0.0f, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), (s32) (*(s32 *)((char *)(arg0) + 0x40)), 0x3E8, 0xFA0);
        goto block_7;
    }
    (*(s32 *)((char *)(arg0) + 0x72)) = 1;
    (*(s32 *)((char *)(arg0) + 0x78)) = 1;
    (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & ~0xFF);
    func_150A8050(&sp68, (*(s32 *)((char *)(arg0) + 0x20)), (*(s32 *)((char *)(arg0) + 0x24)), (*(s32 *)((char *)(arg0) + 0x28)));
    func_150A7960(&sp68, 0, 0, 0x43480000, (char *)(arg0) + 0x20, (char *)(arg0) + 0x24, (char *)(arg0) + 0x28);
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + (*(f32 *)((char *)(arg0) + 0x38)));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + (*(f32 *)((char *)(arg0) + 0x3C)));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + (*(f32 *)((char *)(arg0) + 0x40)));
block_7:
    return 1;
}

s32 func_150B8F44(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp198;
    f32 sp194;
    f32 sp190;
    void * sp18C;
    void * sp188;
    void * sp184;
    void * sp170;
    s32 sp16C;
    s16 sp16A;
    s16 sp168;
    s32 sp164;
    s8 sp15B;
    s8 sp15A;
    s8 sp159;
    s8 sp158;
    s32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    void * sp130;
    f32 sp12C;
    f32 sp128;
    s8 sp127;
    s8 sp126;
    s8 sp125;
    s8 sp124;
    s32 sp120;
    s32 sp11C;
    s16 sp118;
    s16 sp116;
    s8 sp115;
    s8 sp114;
    f32 sp10C;
    s32 sp108;
    s16 sp106;
    s16 sp104;
    s8 sp101;
    s8 sp100;
    s32 spFC;
    s32 spF8;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s8 spDA;
    s8 spD9;
    s8 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    void * sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    u32 sp60;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    s32 temp_v0;
    u32 temp_s0;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x48));
    if (((*(s32 *)((char *)(arg0) + 0x140)) - fabsf(temp_f12)) > 6.0f) {
        if (func_150A3058(temp_f12, arg3, 1, (s16) (s32) (*(s16 *)((char *)(arg1) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x18)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x1C))) == 0) {
            temp_f16 = (*(s32 *)((char *)(arg0) + 0x38)) - arg2;
            temp_f18 = (*(s32 *)((char *)(arg0) + 0x3C)) - arg3;
            sp198 = (*(s32 *)((char *)(arg0) + 0x40)) - arg4;
            sp194 = temp_f18;
            sp190 = temp_f16;
            if (func_150AC9C0(arg2, arg3, arg4, temp_f16, temp_f18, sp198, 0, &sp170, &sp184, &sp188, &sp18C, 0, &sp16C, 0, 0.0f) != 0) {
                if (func_15145C90(sp16C) != 0) {
                    sp168 = 0x19;
                    sp16A = 0xA;
                    sp114 = 4;
                    sp115 = 0;
                    sp116 = 0x3B02;
                    sp118 = (random_u32() % 31U) + 0x28;
                    sp11C = 0;
                    sp120 = 0;
                    sp124 = 0xFF;
                    sp125 = 0xFF;
                    sp126 = 0xFF;
                    sp127 = 0xFF;
                    temp_f4 = ((random_float() * 25.0f) + 25.0f) * D_8009FDBC;
                    sp12C = temp_f4;
                    sp128 = temp_f4;
                    (*(s32 *)((char *)&(sp130) + 0x0)) = (s32) (*(s32 *)((char *)&(sp184) + 0x0));
                    (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)&(sp184) + 0x4));
                    (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)&(sp184) + 0x8));
                    sp154 = 0x0C5C0001;
                    sp158 = 0xFF;
                    sp159 = 0xFF;
                    sp15A = 0;
                    sp15B = 7;
                    sp13C = 0.0f;
                    sp140 = 0.0f;
                    sp144 = 0.0f;
                    sp148 = 0.0f;
                    sp14C = 0.0f;
                    sp150 = 0.0f;
                    sp10C = ((random_float(25.0f) * 80.0f) + 50.0f) * D_8009FDC0;
                    sp164 = (*(s32 *)((char *)(arg0) + 0x128));
                    temp_s0 = random_u32();
                    sp60 = random_u32();
                    temp_v0 = func_1513D594(&sp114, &D_800A4AA0, 0x18, 0, 0, (sp60 & 1) + ((temp_s0 & 1) * 2), random_u32() & 0xFF, 500.0f, 500.0f, 0, &sp170, (*(s32 *)((char *)(arg0) + 0x14C)), (*(s32 *)((char *)(arg0) + 0x168)), 0, 8, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (temp_v0 != 0) {
                        memcpy(temp_v0 + 0x128, &sp10C, 8);
                    }
                }
                sp74 = -sp190;
                sp78 = -sp194;
                sp7C = -sp198;
                (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)&(sp170) + 0x0));
                (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)&(sp170) + 0x4));
                (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)&(sp170) + 0x8));
                (*(s32 *)((char *)&(sp80) + 0xC)) = (s32) (*(s32 *)((char *)&(sp170) + 0xC));
                (*(u16 *)((char *)&(sp80) + 0x10)) = (u16) (*(u16 *)((char *)&(sp170) + 0x10));
                sp94 = 502.0f;
                (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)&(sp184) + 0x0));
                (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(sp184) + 0x4));
                (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(sp184) + 0x8));
                spB0 = 6;
                spB2 = 6;
                sp98 = 3.0f;
                sp9C = 3.0f;
                spB4 = 3;
                spB6 = 3;
                spB8 = 0x32;
                spBA = 0x14;
                spBC = 1;
                spBD = 0x21;
                spBE = 0x48;
                spC0 = 1;
                spC4 = 0;
                spC8 = 0;
                spCC = 0;
                spD0 = 0;
                spD4 = 0;
                spD8 = 0;
                spD9 = 0x9B;
                spDA = 0x64;
                spA0 = D_8009FDC4;
                spA4 = D_8009FDC8;
                spA8 = D_8009FDCC;
                spAC = D_8009FDD0;
                spDC = (*(s32 *)((char *)(arg0) + 0x14C));
                spE4 = 0;
                spE8 = 0x220005;
                spEC = 0x1D0600;
                spF0 = 1;
                spF4 = 0x3B;
                spF8 = 0x80;
                spFC = 0x20;
                sp100 = 0;
                sp101 = 7;
                sp104 = 0xA;
                sp106 = 0x19;
                spE0 = (*(s32 *)((char *)(arg0) + 0x168));
                sp108 = (*(s32 *)((char *)(arg0) + 0x128));
                func_15151670(&sp68, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
        func_10010F88(*(&D_80088734 + ((random_u32() & 1) * 4)), 4.4842e-41f, 0.0f, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), (s32) (*(s32 *)((char *)(arg0) + 0x40)), 0x3E8, 0xFA0);
        return 0;
    }
    (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
    if (temp_f12 > 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f12 * (*(f32 *)((char *)(arg0) + 0x14)));
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(arg1) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(arg1) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(arg1) + 0x1C));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f0);
    func_10010F88(D_8008873C, 0xFA00, 0, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0x14)), (s32) (*(s32 *)((char *)(arg1) + 0x18)), (s32) (*(s32 *)((char *)(arg1) + 0x1C)), 0x3E8, 0xFA0);
    return 1;
}

s32 func_150B9560(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x1C)) < 0x50) {
        (*(f32 *)((char *)(arg0) + 0x110)) = (f32) ((*(f32 *)((char *)(arg0) + 0x110)) + (D_8009FDD4 * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) - (*(f32 *)((char *)(arg0) + 0x110)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x1C)) >= 0x73) {
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) * D_8009FDD8);
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) * D_8009FDD8);
        return 1;
    }
    if ((*(s32 *)((char *)(arg0) + 0x1C)) < 0x41) {
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + D_8009FDDC);
    }
    return 1;
}

s32 func_150B95FC(void *arg0) {
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x20) {
        (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (temp_v0 * 8);
    }
    return 1;
}

s32 func_150B961C(void *arg0) {
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x40) {
        (*(s8 *)((char *)(arg0) + 0x28)) = (s8) (temp_v0 * 4);
    }
    return 1;
}

s32 func_150B963C(void *arg0) {
    f32 sp17C;
    f32 sp178;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    s16 sp15A;
    s16 sp158;
    s32 sp154;
    s8 sp14B;
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    void * sp120;
    f32 sp11C;
    f32 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s32 sp110;
    s32 sp10C;
    s16 sp108;
    s16 sp106;
    s8 sp105;
    s8 sp104;
    f32 spFC;
    s32 spF8;
    s16 spF6;
    s16 spF4;
    s8 spF1;
    s8 spF0;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp9A;
    s16 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp74;
    u32 sp6C;
    u32 sp68;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = D_80088730;
    if ((temp_v1 == NULL) || ((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x3B)) != 1)) {
        D_80088730 = func_15083E90(1);
    }
    if (temp_v1 != NULL) {
        temp_f4 = (*(s32 *)((char *)(temp_v1) + 0x1C));
        sp178 = temp_f4;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(temp_v1) + 0x14));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(temp_v1) + 0x18));
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x40)) - temp_f4;
        temp_f6 = (temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
        sp17C = temp_f6;
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x10));
        if (temp_f6 < ((temp_f14 * temp_f14) + D_8009FDE0)) {
            if (((*(s32 *)((char *)(temp_v1) + 0x3C)) > 15.0f) && (random_u32((*(void **)&temp_f12), temp_f14) & 1)) {
                sp16C = func_151423D8(((s32) D_80088730->unk76 >> 8) & 0xFF);
                sp168 = func_151423D8((((s32) D_80088730->unk76 >> 8) + 0x40) & 0xFF);
                (*(s32 *)((char *)(arg0) + 0x71)) = 1;
                (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) | 0x7D);
                (*(s32 *)((char *)(arg0) + 0x73)) = 1;
                (*(s32 *)((char *)(arg0) + 0x75)) = 1;
                (*(s32 *)((char *)(arg0) + 0x78)) = 0;
                (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (D_80088730->xz_velocity * sp16C * D_8009FDE4);
                (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((random_float() * 15.0f) + 10.0f);
                (*(s32 *)((char *)(arg0) + 0x64)) = 0x12C;
                (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) | 0x80);
                (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x24)) = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x28)) = 0.0f;
                (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) (D_80088730->xz_velocity * sp168 * D_8009FDE8);
                return 1;
            }
            sp15C = (*(s32 *)((char *)(arg0) + 0x38));
            sp160 = (*(s32 *)((char *)(arg0) + 0x3C)) + 100.0f;
            sp164 = (*(s32 *)((char *)(arg0) + 0x40));
            if (func_15046C80(&sp15C, 0, (*(s32 *)((char *)(arg0) + 0x3C)) - 2000.0f, (char *)(arg0) + 0x110) != 0) {
                sp160 = (*(s32 *)((char *)(arg0) + 0x110));
                sp158 = 0x19;
                sp15A = 0xA;
                sp104 = 4;
                sp105 = 0;
                sp106 = 0x3B02;
                sp108 = (random_u32() % 31U) + 0x28;
                sp10C = 0;
                sp110 = 0;
                sp114 = 0xFF;
                sp115 = 0xFF;
                sp116 = 0xFF;
                sp117 = 0xFF;
                temp_f8 = ((random_float() * 25.0f) + 25.0f) * D_8009FDEC;
                sp11C = temp_f8;
                sp118 = temp_f8;
                (*(f32 *)((char *)&(sp120) + 0x0)) = (f32) (*(f32 *)((char *)&(sp15C) + 0x0));
                (*(s32 *)((char *)&(sp120) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
                (*(s32 *)((char *)&(sp120) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
                sp144 = 0x0C5C0001;
                sp148 = 0xFF;
                sp149 = 0xFF;
                sp14A = 0;
                sp14B = 7;
                sp12C = 0.0f;
                sp130 = 0.0f;
                sp134 = 0.0f;
                sp138 = 0.0f;
                sp13C = 0.0f;
                sp140 = 0.0f;
                spFC = ((random_float(25.0f) * 80.0f) + 50.0f) * D_8009FDF0;
                sp154 = (*(s32 *)((char *)(arg0) + 0x128));
                sp68 = random_u32();
                sp6C = random_u32();
                temp_v0 = func_1513D594(&sp104, &D_800A4AA0, 0x18, 0, 0, (sp6C & 1) + ((sp68 & 1) * 2), random_u32() & 0xFF, 500.0f, 500.0f, 0, (char *)(arg0) + 0x114, (*(s32 *)((char *)(arg0) + 0x14C)), (*(s32 *)((char *)(arg0) + 0x168)), 0, 8, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x128, &spFC, 8);
                }
            }
            (*(s32 *)((char *)&(sp74) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x38));
            (*(f32 *)((char *)&(sp74) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
            (*(f32 *)((char *)&(sp74) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x40));
            sp80 = 3.0f;
            sp84 = D_8009FDF4;
            sp98 = 6;
            sp9A = 6;
            sp9E = 0xFF;
            spA0 = -0x40;
            spA2 = 0x1E;
            sp9C = 0;
            spA4 = 3;
            spA6 = 3;
            spA8 = 0x1E;
            spAA = 0x14;
            spAC = 1;
            spAD = 0x21;
            spAE = 0x48;
            spB0 = 1;
            spB4 = 0;
            spB8 = 0;
            spBC = 0;
            spC0 = 0;
            spC4 = 0;
            spC8 = 0;
            spC9 = 0x9A;
            spCA = 0x65;
            sp88 = D_8009FDF8;
            sp8C = D_8009FDFC;
            sp90 = 5.0f;
            sp94 = 7.0f;
            spCC = (*(s32 *)((char *)(arg0) + 0x14C));
            spD4 = 0;
            spD8 = 0x220005;
            spDC = 0x1D0600;
            spE0 = 1;
            spE4 = 0x3B;
            spE8 = 0x80;
            spEC = 0x20;
            spF0 = 0;
            spF1 = 7;
            spF4 = 0xA;
            spF6 = 0x19;
            spD0 = (*(s32 *)((char *)(arg0) + 0x168));
            spF8 = (*(s32 *)((char *)(arg0) + 0x128));
            func_15151A38(&sp74, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            func_10010F88(D_80088740, 3.5032e-41f, 0.0f, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), (s32) (*(s32 *)((char *)(arg0) + 0x40)), 0x3E8, 0xFA0);
            return 0;
        }
    }
    temp_v1_2 = D_80088720;
    if ((temp_v1_2 == NULL) || ((*(s32 *)((char *)(temp_v1_2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1_2) + 0x3B)) != 1)) {
        D_80088720 = func_15083E90(1);
    }
    if (temp_v1_2 != NULL) {
        D_80088724.x = (f32) (*(f32 *)((char *)(temp_v1_2) + 0x14));
        D_80088724.y = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) + 50.0f);
        D_80088724.z = (f32) (*(f32 *)((char *)(temp_v1_2) + 0x1C));
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x28));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (temp_f0_2 + (D_8009FE00 * (D_80088724.x - temp_f0_2)));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (temp_f2_2 + (D_8009FE00 * (D_80088724.y - temp_f2_2)));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (temp_f12_2 + (D_8009FE00 * (D_80088724.z - temp_f12_2)));
    return 1;
}

s32 func_150B9D14(void *arg1) {
    func_15142600((*(s32 *)((char *)(arg1) + 0x18)), (*(s32 *)((char *)(arg1) + 0x1C)), (*(s32 *)((char *)(arg1) + 0x2C)), (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(arg1) + 0x34)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)), (*(s32 *)((char *)(arg1) + 0x20)), (*(s32 *)((char *)(arg1) + 0x24)), (*(s32 *)((char *)(arg1) + 0x28)));
    return 1;
}

void func_150B9D8C(void *arg0) {
    s32 sp74;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s32 sp68;
    s32 sp64;
    s8 sp62;
    s16 sp60;
    s32 sp5C;
    u32 sp54;
    u32 sp50;
    f32 temp_f0;

    if ((*(s32 *)((char *)(arg0) + 0x98)) == -1) {
        sp62 = 4;
        sp64 = 0;
        sp68 = 0;
        sp5C = 0x11;
        sp60 = 0x64;
        sp6C = 0xFF;
        sp6E = 0;
        sp6F = 0;
        sp70 = 0;
        sp71 = 0xFF;
        sp74 = 0x30001;
        sp6D = (s8) (*(s8 *)((char *)(arg0) + 0x90));
        sp50 = random_u32();
        sp54 = random_u32();
        temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0xA2));
        func_1513C4EC(&sp5C, 0, 2, 0, (f32) (*(f32 *)((char *)(arg0) + 0x9C)), (f32) ((*(f32 *)((char *)(arg0) + 0xA6)) + 2), (f32) (*(f32 *)((char *)(arg0) + 0xA0)), temp_f0, temp_f0, sp50 & 0xFF, ((random_u32() & 1) * 2) + (sp54 & 1), 3, 0xFF, 0, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
    }
}
