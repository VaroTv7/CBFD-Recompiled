/**
 * Auto-decompiled from asm/12C1E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1505D1C4(); /* extern */
void * func_15081690(); /* extern */
void * func_15081E0C();                      /* extern */
void * func_15081E78();                     /* extern */
u32 random_u32();                           /* extern */
f32 random_float();                                /* extern */
void * func_150F7470(); /* extern */
void * func_15102B38(); /* extern */
void * func_15130280();          /* extern */
void * func_15143794();                /* extern */
void * func_15145740();                               /* extern */
void * func_15145974();               /* extern */
void * func_15145EA4();               /* extern */
s32 func_1514654C(); /* extern */
void * func_151C229C(); /* extern */
void * func_151D3E6C();            /* extern */
void * func_151D3F14();                    /* extern */
void * func_151D4408(); /* extern */
void * func_151D5148();                             /* extern */
void * func_151D5174(); /* extern */
void * func_151D5A18();            /* extern */
void * func_151D8868();                     /* extern */
void *func_150FF288();                         /* static */
void func_150FF2AC();           /* static */
void func_150FF2D4();
void func_150FF474();
u8 func_150FF6E0();
void func_150FFB6C(void *arg0, f32 arg1, f32 *arg2, s32 arg3);
void func_150FFC3C();
void func_150FFCC8();
void func_150FFD84();
extern s32 D_8008FC8C;
extern u8 *D_8008FC94;
extern s32 D_800A2050;
extern s32 D_800A205C;
extern s32 D_800A2068;
extern s32 D_800A2074;
extern s32 D_800A2080;
extern f32 D_800A2110;
extern f32 D_800A2114;
extern f32 D_800A2118;
extern f32 D_800A211C;
extern f32 D_800A2120;
extern f32 D_800A2124;
extern f32 D_800A2128;
extern f32 D_800A212C;
extern s32 D_800A2130;
extern s32 D_800A213C;
extern s32 D_800A2160;
extern f32 D_800A2170;
extern f32 D_800A2174;
extern f32 D_800A2178;
extern f32 D_800A217C;
extern f32 D_800A2180;
extern f32 D_800A2184;
extern f32 D_800A2188;
extern f32 D_800A218C;
extern f32 D_800A2190;
extern f32 D_800A2194;
extern f32 D_800A2198;

void func_150FED30(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp14C;
    void * sp140;
    void * sp134;
    void * sp128;
    void * sp11C;
    void * sp110;
    void * sp104;
    void * spF8;
    void * spEC;
    void * spA4;
    s32 spA0;
    s32 sp9C;
    void *sp98;
    u8 sp97;
    f32 sp84;
    f32 sp80;
    s32 var_v0;
    s32 var_v1;
    u32 temp_t0;
    void *temp_v0;

    temp_v0 = func_150FF288(arg0);
    sp98 = temp_v0;
    if (temp_v0 != NULL) {
        func_151D5148(arg0);
        func_150FF2AC(arg0, &sp134, &sp128, &sp11C);
        if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
            sp97 = 1;
        } else {
            sp97 = 0;
        }
        func_150FF2D4(&sp97, &spA4, &sp14C, &sp110, &sp104, &sp134, &sp128, &sp11C, &spF8, &spEC, &spA0, &sp9C, &sp140, arg0, sp98);
        sp80 = random_float();
        sp84 = random_float();
        temp_t0 = random_u32();
        if (D_800BE616 != 0) {
            var_v1 = 0x35;
        } else {
            var_v1 = 0x1A;
        }
        if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x98) {
            var_v0 = 1;
        } else {
            var_v0 = -1;
        }
        func_151C229C(&sp140, &sp134, spA0, sp9C, 1, 0, 300.0f, D_800A2110, (sp80 * 10.0f) + 25.0f, (sp84 * 200.0f) + 600.0f, 50.0f, (temp_t0 % 156U) + 0x64, arg0, 0x63, 1, 1, 1, 0, 1, 0, var_v1, 0.0f, 0xFF, var_v0, 0, (s32) arg1, arg2);
        if (sp97 != 0) {
            func_151D3F14(&sp14C, arg1, arg2);
            func_151D4408(&sp110, &sp104, (*(s32 *)((char *)(arg0) + 0x1D4)) + ((*(s32 *)((char *)(sp98) + 0x2)) << 6), arg0, 1.0f, (s32) arg1, arg2);
            func_150FF474(&sp14C, &spA4, arg1, arg2);
        }
    }
}

void func_150FEFD0(f32 *arg0, s32 arg1, f32 *arg2) {
    void * *sp34;
    f32 *sp30;
    void *temp_v0;

    if (arg1 == -1) {
        (*(s32 *)((char *)(arg2) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
        (*(f32 *)((char *)(arg2) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
        return;
    }
    temp_v0 = func_1503195C(arg1, 0);
    if (temp_v0 == NULL) {
        (*(s32 *)((char *)(arg2) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
        (*(f32 *)((char *)(arg2) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
        return;
    }
    sp34 = &D_800A2050;
    sp30 = arg2;
    func_1514654C(arg0, temp_v0, 0, &sp34, &sp30, 1);
}

void func_150FF084(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp124;
    void * sp118;
    void * sp10C;
    void * sp100;
    void * spF4;
    void * spE8;
    void * spDC;
    void * spD0;
    void * spC4;
    void * sp7C;
    s32 sp78;
    s32 sp74;
    void *sp70;
    u8 sp6F;
    s32 sp64;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_150FF288(arg0);
    sp70 = temp_v0;
    if (temp_v0 != NULL) {
        func_151D5148(arg0);
        func_150FF2AC(arg0, &sp10C, &sp100, &spF4);
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            sp6F = 1;
        } else {
            sp6F = 0;
        }
        func_150FF2D4(&sp6F, &sp7C, &sp124, &spE8, &spDC, &sp10C, &sp100, &spF4, &spD0, &spC4, &sp78, &sp74, &sp118, arg0, sp70);
        var_v1 = 1;
        if (sp74 == 0) {
            var_v1 = 0;
        }
        sp64 = var_v1;
        func_150F7470(&sp124, &sp10C, sp78, sp74, var_v1, 0, D_800A2114, D_800A2118, 300.0f, arg0, 1, 1, 1, 0, 0x1A, 1, (random_u32() % 5U) + 0x327, 0, (s32) arg1, arg2);
        if (sp6F != 0) {
            func_151D3F14(&sp124, arg1, arg2);
            func_151D4408(&spE8, &spDC, (*(s32 *)((char *)(arg0) + 0x1D4)) + ((*(s32 *)((char *)(sp70) + 0x2)) << 6), arg0, 1.0f, (s32) arg1, arg2);
            func_150FF474(&sp124, &sp7C, arg1, arg2);
        }
    }
}

void *func_150FF288(void) {
    return func_1503195C(0x82, 0);
}

void func_150FF2AC(void) {
    func_15145740(D_800A211C);
}

void func_150FF2D4(u8 *arg0, void * *arg1, f32 *arg2, void * *arg3, void * *arg4, void * *arg5, void * *arg6, void * *arg7, void * *arg8, void * *arg9, s32 *arg10, s32 *arg11, void * *arg12, f32 *arg13, void *arg14) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f16;
    f32 var_f18;
    u8 temp_v0;
    u8 var_v1;

    var_v1 = *arg0;
    if (var_v1 != 0) {
        temp_v0 = func_150FF6E0(arg1, arg2, arg3, arg4, arg12, arg13, arg14);
        var_v1 = temp_v0 & 0xFF;
        *arg0 = temp_v0;
    }
    if (var_v1 == 0) {
        temp_f14 = (*(s32 *)((char *)(arg5) + 0x0));
        if ((D_800A2120 < fabsf(temp_f14)) || (D_800A2120 < fabsf((*(s32 *)((char *)(arg5) + 0x8))))) {
            temp_f2 = (*(s32 *)((char *)(arg5) + 0x8));
            temp_f12 = 1.0f / sqrtf((temp_f14 * temp_f14) + (temp_f2 * temp_f2));
            var_f16 = temp_f2 * temp_f12;
            var_f18 = -temp_f14 * temp_f12;
        } else {
            var_f16 = 1.0f;
            var_f18 = 0.0f;
        }
        (*(s32 *)((char *)(arg2) + 0x0)) = (*(s32 *)((char *)(arg13) + 0x14)) + (34.0f * var_f18);
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) ((*(f32 *)((char *)(arg13) + 0x18)) + 49.0f);
        (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((*(f32 *)((char *)(arg13) + 0x1C)) + (34.0f * var_f16));
        (*(f32 *)((char *)(arg12) + 0x0)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
        (*(f32 *)((char *)(arg12) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
        (*(f32 *)((char *)(arg12) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
    }
    func_151D5174(arg13, arg2, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

void func_150FF474(f32 *arg0, void * *arg1, s32 arg2, s32 arg3) {
    s8 spD0;
    s32 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    void * spAC;
    void * spA0;
    f32 sp9C;
    f32 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s32 sp8C;
    s16 sp88;
    s16 sp86;
    s8 sp85;
    s8 sp84;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_t5;
    s32 var_s0;
    s32 var_v0;
    void *temp_t4;

    sp84 = 0x5F;
    sp85 = 5;
    sp86 = 0x2203;
    sp8C = 0;
    sp90 = 0;
    sp94 = 0xFF;
    sp95 = 0xFF;
    sp96 = 0xFF;
    sp97 = 0xFF;
    (*(s32 *)((char *)&(spA0) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spB8 = 0.0f;
    spBC = 0.0f;
    spC0 = 0.0f;
    spC4 = 0x40CC0009;
    spC9 = 0xFF;
    spCA = 0;
    spCB = 7;
    spD0 = 0xFF;
    spCC = 0;
    temp_f26 = D_800A2124;
    temp_f24 = D_800A2128;
    sp88 = (random_u32() & 3) + 3;
    temp_f20 = D_800A212C;
    var_s0 = 0;
    do {
        sp98 = (random_float() * temp_f20) + 5.0f;
        temp_t4 = (char *)(arg1) + (var_s0 * 0xC);
        sp9C = (random_float() * temp_f24) + temp_f26;
        (*(s32 *)((char *)&(spAC) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x0));
        (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x4));
        (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x8));
        spC8 = (random_u32() % 156U) + 0x64;
        if (random_u32() & 1) {
            var_v0 = 2;
        } else {
            var_v0 = 0;
        }
        func_1513D2F0(&sp84, &D_800A4AA0, 0, 0, 0, 0x1B, var_v0 + 1, 0, 0, 0, arg2 & 0xFF, arg3);
        temp_t5 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t5;
    } while (temp_t5 < 6);
}

s32 func_150FF6B4(void *arg0, void * arg1, void * arg2) {
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x98) {
        return 0;
    }
    return 1;
}

u8 func_150FF6E0(void * *arg0, f32 *arg1, void * *arg2, void * *arg3, void * *arg4, f32 *arg5, void *arg6) {
    f32 *sp34[64];
    void * *sp68;
    void * *sp64;
    void * *sp60;
    void * *sp5C;
    void * *sp40;
    void * *sp3C;
    void * *sp38;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;

    temp_t4 = (random_u32() & 1) * 0x48;
    sp5C = &D_800A2050;
    sp60 = &D_800A2068;
    sp64 = &D_800A2074;
    sp68 = &D_800A205C;
    var_v1 = 0;
    var_a0 = 0;
    do {
        temp_v0 = var_a0 * 4;
        var_a0 = (var_v1 + 1) & 0xFF;
        (*(s32 *)((char *)((&sp5C + temp_v0)) + 0x10)) = (void *) (temp_t4 + &D_800A2080 + (var_v1 * 0xC));
        temp_t2 = (var_v1 * 0xC) + (char *)(arg0);
        var_v1 = var_a0;
        (*(s32 *)((char *)((&sp34[0] + temp_v0)) + 0x10)) = temp_t2;
    } while (var_a0 < 6);
    sp38 = arg2;
    sp3C = arg3;
    sp34[0] = arg1;
    sp40 = arg4;
    if (func_1514654C(arg5, arg6, 0, &sp5C, &sp34[0], 0xA) != 0) {
        (*(f32 *)((char *)(arg3) + 0x0)) = (f32) ((*(f32 *)((char *)(arg3) + 0x0)) - (*(f32 *)((char *)(arg2) + 0x0)));
        (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)(arg3) + 0x4)) - (*(f32 *)((char *)(arg2) + 0x4)));
        (*(f32 *)((char *)(arg3) + 0x8)) = (f32) ((*(f32 *)((char *)(arg3) + 0x8)) - (*(f32 *)((char *)(arg2) + 0x8)));
        return 1U;
    }
    return 0U;
}

void func_150FF840(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp11C;
    f32 sp110;
    void * sp104;
    void * spF8;
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
    void * sp68;
    void * *sp64;
    u32 sp5C;
    u32 sp58;
    s32 temp_v0;

    f32 sp114;
    f32 sp118;
    f32 sp120;
    f32 sp124;
    func_150FFCC8(arg0, &sp11C, &sp110, &sp104, &spF8);
    func_151D5148(arg0);
    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        func_151D3F14(&sp11C, arg3, arg4);
        spF4 = ((random_float() * D_800A2170) + 4800.0f) * D_800A2174;
        spF0 = ((random_float() * 220.0f) + 320.0f) * D_800A2178;
        sp58 = random_u32();
        sp5C = random_u32();
        func_15102B38(arg0, D_80088BB0, &D_800A2130, &D_800A213C, &spF0, (sp58 % 3U) + 4, (sp5C & 0x7F) + 0x80, (random_float() * 450.0f) + 780.0f, &sp11C, 0xFF, 0, -1, (s32) arg3, arg4);
        func_150FFD84(&sp11C, &sp110, arg3, arg4);
    }
    if (arg1 != 0) {
        spCC = (sp110 * D_800A217C) + sp11C;
        spD0 = (sp114 * D_800A217C) + sp120;
        spD4 = (sp118 * D_800A217C) + sp124;
        spD8 = (sp110 * D_800A2180) + sp11C;
        spDC = (sp114 * D_800A2180) + sp120;
        spE0 = (sp118 * D_800A2180) + sp124;
        spE4 = (sp110 * D_800A2184) + sp11C;
        spE8 = (sp114 * D_800A2184) + sp120;
        spEC = (sp118 * D_800A2184) + sp124;
        func_150FFB6C(&D_800A2184, sp110, &spCC, &sp11C);
        func_150FFB6C(&spD8, (f32)(s32)&sp11C, arg0, 0x30);
        func_150FFB6C(&spE4, (f32)(s32)&sp11C, arg0, 0x31);
    }
    if (arg2 != 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        if (temp_v0 != 0) {
            sp64 = temp_v0 + 0xB0;
        } else {
            sp64 = &sp68;
        }
        func_15081690(arg0, sp11C, sp120, sp124, sp110 * D_800A2188, sp114 * D_800A2188, sp118 * D_800A2188, sp64, 2000.0f, 0, 0, 0, -1, 0, 0);
        func_15081E78(arg0, sp64, 0x10);
    }
    func_150FFC3C(arg0);
}

void func_150FFB6C(void *arg0, f32 arg1, f32 *arg2, s32 arg3) {
    func_1505D1C4((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x4)), (*(s32 *)((char *)(arg0) + 0x8)), arg3 | 0x60000, (s32) ((char *)(arg2) - (char *)(&gObjects)) / 812, (s32) (*(s32 *)((char *)(arg2) + 0x7A)), 0, arg1);
}

void func_150FFBDC(void *arg0, void * arg1, s32 arg2) {
    void * *sp1C;
    s32 sp18;

    sp1C = &D_800A2130;
    sp18 = arg2;
    func_15145EA4(&sp1C, &sp18, (*(s32 *)((char *)(arg0) + 0x1D4)) + (D_80088BB0 << 6), 1);
}

void func_150FFC3C(f32 *arg0) {
    s8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s16 sp1A;
    s8 sp18;

    if ((*(s32 *)((char *)(arg0) + 0x318)) != NULL) {
        sp18 = 1;
        sp1A = (random_u32() % 11U) + 0x14;
        sp1D = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D));
        sp1C = (random_u32(arg0) & 1) + 7;
        sp1E = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}

void func_150FFCC8(f32 *arg0, f32 *arg1, f32 *arg4) {
    func_151D5A18(arg0, arg4, D_8008FC8C, (s32) *D_8008FC94);
    func_151D3E6C(arg0, arg1, arg1, 0x8003A);
}

void func_150FFD2C(s32 arg0, void *arg1, void * arg2) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x4));
    if (((temp_v0 == 0x9F) || (temp_v0 == 0xA0)) && !((*(s32 *)((char *)(arg1) + 0x94)) & 0x80)) {
        func_15081E0C(arg1, 4, 0);
    }
}

void func_150FFD84(f32 *arg0, f32 *arg1, s32 arg2, s32 arg3) {
    s32 sp84[64];
    s8 sp10E;
    s8 sp10D;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s32 sp104;
    s32 sp100;
    f32 spFC;
    void * spF0;
    void * spE4;
    void * spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB8;
    s32 spB4;
    s16 spB2;
    s16 spB0;
    s32 spAC;
    s32 spA8;
    f32 sp98;
    f32 sp94;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_s5;
    s16 temp_s6;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u32 temp_hi;
    u32 temp_s0;
    u32 temp_s1;

    temp_hi = random_u32() % 9U;
    spB0 = 0x2203;
    spA8 = 0x200005;
    spAC = 0;
    spB4 = 0;
    spB8 = 0;
    spBC = 0xFF;
    spBD = 0xFF;
    spBE = 0xFF;
    spBF = 0xFF;
    spC0 = 0xFF;
    spC1 = 0xFF;
    spC2 = 0xFF;
    spC4 = 0xFF;
    (*(s32 *)((char *)&(spD8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(spE4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    var_s2 = temp_hi + 0xA;
    spC6 = 7;
    spC8 = 0x24;
    spCA = 1;
    sp100 = 0x4C207;
    sp108 = 0;
    sp109 = 7;
    sp10A = -1;
    sp10B = -1;
    sp10C = -1;
    sp10D = 0;
    sp104 = 0;
    sp10E = 0xFF;
    spCC = 1.0f;
    func_15145974(arg1, &sp98, &sp94);
    sp94 = 0.0f;
    temp_f28 = D_800A2194;
    temp_f26 = D_800A2198;
    temp_s5 = ((s16) (s32) (sp98 * D_800A218C) >> 8) - 0x8A;
    temp_s6 = ((s16) (s32) (0.0f * D_800A2190) >> 8) - 0x8A;
    do {
        sp84[0] = (*(s32 *)((char *)&(D_800A2160) + 0x0));
        sp84[1] = (s32) (*(s32 *)((char *)&(D_800A2160) + 0x4));
        sp84[3] = (s32) (*(s32 *)((char *)&(D_800A2160) + 0xC));
        sp84[2] = (s32) (*(s32 *)((char *)&(D_800A2160) + 0x8));
        spC5 = (s8) (&sp84[0])[random_u32() & 3];
        spB2 = (random_u32() % 13U) + 0xA;
        spC3 = (random_u32() % 101U) + 0x9B;
        temp_f2 = (random_float() * 155.0f) + 75.0f;
        spD0 = temp_f2;
        spD4 = temp_f2;
        temp_s1 = random_u32();
        temp_s0 = random_u32();
        func_15143794((s16) ((temp_s1 % 21U) + temp_s5), (s16) ((temp_s0 % 21U) + temp_s6), (random_float() * 20.0f) + 20.0f, &spF0);
        temp_f6 = random_float() * temp_f26;
        sp100 &= ~0xC0;
        spFC = temp_f6 + temp_f28;
        var_s1 = 0;
        if (random_u32() & 1) {
            var_s1 = 0x80;
        }
        if (random_u32() & 1) {
            var_s0 = 0x40;
        } else {
            var_s0 = 0;
        }
        sp100 |= var_s0 | var_s1;
        func_15130280(&spA8, 1, 0, 0, (s32) arg2, arg3);
        var_s2 -= 1;
    } while (var_s2 > 0);
}
