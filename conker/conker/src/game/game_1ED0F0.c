/**
 * Auto-decompiled from asm/1ED0F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000FD38(s32 (*)(void *, void *, s32 *, void *, s16 *), void *, void *); /* extern */
s32 func_15046C80();            /* extern */
void * func_1504715C();                        /* extern */
void * func_15055A2C();             /* extern */
void * func_15081690(); /* extern */
u32 random_u32();                           /* extern */
f32 random_float();                                /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();               /* extern */
void * func_15102B38(); /* extern */
void * func_15103254(); /* extern */
void * func_15132570();                            /* extern */
void * func_1513259C();                            /* extern */
s32 func_15132A4C();        /* extern */
void * func_15143134();               /* extern */
f32 func_15144AA8();                      /* extern */
s32 func_15144E80();              /* extern */
s32 func_15145128();          /* extern */
void * func_15145740();        /* extern */
void * func_15145974();            /* extern */
void * func_15145EA4();                /* extern */
void * func_1514FB98();                    /* extern */
void * func_1514FBFC();                    /* extern */
void * func_1514FCE8();                   /* extern */
void * func_151541B8(); /* extern */
s32 func_151602C0(); /* extern */
void * func_151ABE40();        /* extern */
s32 func_151B8400();                             /* extern */
s32 func_151B8668();                    /* extern */
s32 func_151B8908();                             /* extern */
void * func_151D40D4(); /* extern */
void * func_151D42E8();      /* extern */
void * func_151D5334();            /* extern */
s32 func_151D5B6C(); /* extern */
void * func_151D8868();                     /* extern */
void * memcpy();                           /* extern */
void func_151C0360();
void func_151C0418();
void func_151C04F8();
void func_151C05A4();
void func_151C05F0();
void func_151C0644();
s32 func_151C110C();
void func_151C1654();
void func_151C1798();              /* static */
void func_151C1860();
s32 func_151C196C();
void func_151C1D5C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s8 arg8, void *arg9, void * *arg10, f32 *arg11, void * *arg12, s32 arg13);
extern s32 D_800AA930;
extern s32 D_800AA93C;
extern s32 D_800AA948;
extern s32 D_800AA954;
extern s32 D_800AA958;
extern f32 D_800AA97C;
extern f32 D_800AA980;
extern f32 D_800AA984;
extern f32 D_800AA988;
extern f32 D_800AA98C;
extern f32 D_800AA990;
extern f32 D_800AA994;
extern f32 D_800AA998;
extern f32 D_800AA99C;
extern f32 D_800AA9A0;
extern f32 D_800AA9A4;
extern f32 D_800AA9A8;
extern f32 D_800AA9AC;
extern f32 D_800AA9B0;
extern f32 D_800AA9B4;
extern f32 D_800AA9B8;
extern f32 D_800AA9BC;
extern f32 D_800AA9C0;
extern f32 D_800AA9C4;
s32 func_151C02E4();

void func_151BFC40(void * *arg0, f32 *arg1) {
    s32 var_v0;
    s32 var_v0_2;

    (*(s32 *)((char *)(arg0) + 0x0)) = 3;
    if (D_80082FA0 >= 2) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (4 >> var_v0);
    *arg1 = 494.0f;
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) D_800AA97C;
    (*(s32 *)((char *)(arg0) + 0x2C)) = 7;
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) D_800AA980;
    (*(s32 *)((char *)(arg0) + 0x1C)) = 45.0f;
    (*(s32 *)((char *)(arg0) + 0x20)) = 53.0f;
    (*(s32 *)((char *)(arg0) + 0x24)) = 203.0f;
    (*(s32 *)((char *)(arg0) + 0x28)) = 414.0f;
    if ((D_80082FA0 >= 2) || (var_v0_2 = 0, ((D_8008FD8C < 8) == 0))) {
        var_v0_2 = 1;
    }
    (*(s32 *)((char *)(arg0) + 0x30)) = (s32) (3 >> var_v0_2);
    (*(s32 *)((char *)(arg0) + 0x34)) = 15.0f;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) D_800AA984;
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) D_800AA988;
    (*(s32 *)((char *)(arg0) + 0x44)) = 0x19;
    (*(s32 *)((char *)(arg0) + 0x46)) = 0xF;
    (*(s32 *)((char *)(arg0) + 0x48)) = 0x64;
    (*(s32 *)((char *)(arg0) + 0x4A)) = 0x64;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0xC;
    (*(s32 *)((char *)(arg0) + 0x4E)) = 0x14;
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) D_800AA98C;
    if ((D_80082FA0 >= 2) || (D_8008FD8C >= 8)) {
        (*(s32 *)((char *)(arg0) + 0x50)) = -1;
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x50)) = 0;
}

void func_151BFDA0(f32 *arg0, void * *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void * sp3C;
    void * sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 temp_s1;

    temp_s1 = arg3 & 0xFF;
    func_151C0418(arg0, temp_s1 & 0xFF, arg4);
    func_151C04F8(arg0, temp_s1 & 0xFF, arg4);
    func_151C05A4(arg0, temp_s1 & 0xFF, arg4);
    func_151C05F0(arg0, temp_s1 & 0xFF, arg4);
    if (arg2 != 0) {
        sp24 = -(*(s32 *)((char *)(arg1) + 0x0));
        sp28 = -(*(s32 *)((char *)(arg1) + 0x4));
        sp2C = -(*(s32 *)((char *)(arg1) + 0x8));
        func_151BFC40(&sp34, &sp30);
        (*(f32 *)((char *)&(sp3C) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
        (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        func_1514FB98(&sp24, temp_s1 & 0xFF, arg4);
    }
}

void func_151BFE84(void * *arg0, f32 *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    void * sp114;
    void * sp108;
    void * spFC;
    void * spB0;
    void * spA8;
    f32 spA4;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp38;
    void * sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;

    f32 sp100;
    func_151C0418(arg1, arg4, arg5);
    func_151C04F8(arg1, arg4, arg5);
    func_151C05A4(arg1, arg4, arg5);
    func_151C05F0(arg1, arg4, arg5);
    if ((arg0 != NULL) && (arg3 != 0) && (func_15144E80(arg0, &sp114, &sp108, &spFC) != 0) && (sp100 < 0.0f)) {
        func_151C0644(arg1, arg4, arg5);
    }
    if ((arg0 != NULL) && (arg3 != 0)) {
        func_151C0360(arg0, arg1, arg4, arg5);
    }
    if (arg3 != 0) {
        if (arg0 != NULL) {
            sp84 = -(*(s32 *)((char *)(arg2) + 0x0));
            sp88 = -(*(s32 *)((char *)(arg2) + 0x4));
            sp8C = -(*(s32 *)((char *)(arg2) + 0x8));
            (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
            (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
            (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
            (*(s32 *)((char *)&(sp90) + 0xC)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
            (*(u16 *)((char *)&(sp90) + 0x10)) = (u16) (*(u16 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)&(spB0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
            (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
            func_151BFC40(&spA8, &spA4);
            func_1514FBFC(&sp84, arg4, arg5);
            return;
        }
        sp20 = -(*(s32 *)((char *)(arg2) + 0x0));
        sp24 = -(*(s32 *)((char *)(arg2) + 0x4));
        sp28 = -(*(s32 *)((char *)(arg2) + 0x8));
        func_151BFC40(&sp30, &sp2C);
        (*(f32 *)((char *)&(sp38) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        func_1514FB98(&sp20, arg4, arg5);
    }
}

void func_151C0098(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    void * sp74;
    s32 sp70;
    s32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp58;
    void * sp38;
    f32 sp34;
    s32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 temp_s1;

    temp_s1 = arg3 & 0xFF;
    func_151C0418(arg0, temp_s1 & 0xFF, arg4);
    func_151C04F8(arg0, temp_s1 & 0xFF, arg4);
    func_151C05A4(arg0, temp_s1 & 0xFF, arg4);
    func_151C05F0(arg0, temp_s1 & 0xFF, arg4);
    if (arg2 != 0) {
        sp64 = 0;
        sp66 = 0xFF;
        sp68 = -0x40;
        sp6A = 0x47;
        sp6C = 6;
        sp70 = 4;
        (*(f32 *)((char *)&(sp74) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(f32 *)((char *)&(sp74) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        (*(s32 *)((char *)&(sp74) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        sp80 = 23.0f;
        sp84 = 30.0f;
        sp88 = 45.0f;
        sp8C = 53.0f;
        sp98 = 7;
        sp9C = 3;
        spB0 = 0x19;
        spB2 = 0xF;
        spB4 = 0x64;
        spB6 = 0x64;
        spB8 = 0xC;
        spBA = 0x14;
        spBC = 0;
        sp90 = 203.0f;
        sp94 = 414.0f;
        spA0 = 15.0f;
        spA4 = D_800AA990;
        spA8 = D_800AA994;
        spAC = D_800AA998;
        func_1514FCE8(&sp64, temp_s1 & 0xFF, arg4);
    }
    if ((arg2 != 0) && (arg1 != 0)) {
        sp58 = (*(s32 *)((char *)(arg0) + 0x0));
        sp5C = (*(s32 *)((char *)(arg0) + 0x4)) + 100.0f;
        sp60 = (*(s32 *)((char *)(arg0) + 0x8));
        func_1504715C(&sp34, arg1);
        if (func_15046C80(&sp58, 0, (*(s32 *)((char *)(arg0) + 0x4)) - 1000.0f, &sp34) != 0) {
            sp28 = sp58;
            sp2C = sp34;
            sp30 = sp60;
            func_151C0360(&sp38, &sp28, temp_s1 & 0xFF, arg4);
            func_151C0644(arg0, temp_s1 & 0xFF, arg4);
        }
    }
}

s32 func_151C02E4(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_t9;
    s32 var_v0;

    var_v0 = 0;
    if (arg2 > 0) {
loop_1:
        temp_t9 = (var_v0 + 1) & 0xFF;
        if ((char *)(arg0) == (char *)(*(s32 *)((char *)(arg3) + (var_v0 * 4)))) {
            return 0;
        }
        var_v0 = temp_t9;
        if (temp_t9 >= arg2) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    if (arg0 == arg1) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0xFF) {
        return 0;
    }
    return 1;
}

void func_151C0360(void * *arg0, f32 *arg1, s32 arg2, s32 arg3) {
    u32 sp40;
    f32 sp3C;

    sp3C = random_float();
    sp40 = random_u32();
    func_150E7FEC((sp3C * 75.0f) + 75.0f, ((sp40 % 56U) + 0xC8) & 0xFF, arg0, arg1, (random_u32() % 205U) + 0x12B, 1, 1, 0, 0, 0, (s32) arg2, 0);
}

void func_151C0418(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;

    sp48 = 3;
    sp49 = -1;
    sp4A = (random_u32() % 11U) + 0x14;
    sp4C = 0;
    sp3C = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp48, &sp3C, (random_u32(arg0) % 121U) + 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151C04F8(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    f32 var_f18;
    s32 temp_t7;

    sp28 = random_float();
    temp_f14 = sp28 * 4.0f;
    temp_f12 = temp_f14 + 14.0f;
    temp_t7 = (random_u32() % 56U) + 0xC8;
    var_f18 = (f32) temp_t7;
    if (temp_t7 < 0) {
        var_f18 += 4294967296.0f;
    }
    func_151541B8(temp_f12, temp_f14, arg0, temp_f12, 0x3F974EB9, var_f18, 0.0f, (s32) arg1, arg2);
}

void func_151C05A4(void *arg0, s32 arg1, s32 arg2) {
    func_151D5334(0x44480000, 0x44FA0000, 0x3A03126F, 5, (s32) arg1, arg2);
}

void func_151C05F0(void *arg0, s32 arg1, s32 arg2) {
    func_151D5404(0x44480000, 0x44FA0000, 0x3A03126F, 0xF, 0x14, (s32) arg1, arg2);
}

void func_151C0644(f32 *arg0, s32 arg1, s32 arg2) {
    func_150E83AC(arg0, (s16) ((random_u32() % 62U) + 0x78), arg1, arg2);
}

void func_151C0698(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp2A4;
    f32 sp2A0;
    void * sp294;
    void * sp270;
    u8 sp26F;
    f32 sp268;
    f32 sp264;
    f32 sp260;
    f32 sp25C;
    f32 sp258;
    f32 sp254;
    f32 sp248;
    f32 sp244;
    f32 sp240;
    f32 sp23C;
    s32 sp238;
    void *sp234;
    f32 sp22C;
    void * sp218;
    s32 sp214;
    s8 sp210;
    void * sp1EC;
    void * sp1E0;
    f32 sp1DC;
    u8 sp1DA;
    s32 sp1CC;
    s32 sp1C8;
    void * sp1B8;
    void *sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    void * sp148;
    s16 sp140;
    s16 sp13E;
    s8 sp13C;
    s32 sp138;
    s8 sp136;
    s8 sp134;
    s8 sp133;
    s8 sp132;
    s8 sp131;
    s8 sp130;
    s8 sp12F;
    s8 sp12E;
    s8 sp12D;
    s8 sp12C;
    s32 sp128;
    s8 sp124;
    s16 sp122;
    s16 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    void * spF4;
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
    s32 spC8;
    s8 spC0;
    s16 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    void * spA4;
    void * sp98;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    void * sp78;
    f32 sp6C;
    void * *sp68;
    void * *sp64;
    f32 *sp60;
    void * *sp5C;
    f32 *sp58;                                      /* compiler-managed */
    f32 *sp54;                                      /* compiler-managed */
    void *sp48;
    f32 *var_a2;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_v0_3;
    s32 var_v1;
    u8 temp_v0_4;
    u8 var_t0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_v0;

    f32 sp180;
    f32 sp184;
    f32 sp188;
    f32 sp14C;
    sp2A0 = 0.0f;
    if (D_800BE616 != 0) {
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            func_151C1798(arg0, &sp260);
        } else {
            sp260 = (*(s32 *)((char *)(arg0) + 0x14));
            sp264 = (*(s32 *)((char *)(arg0) + 0x18)) + 65.0f;
            goto block_15;
        }
    } else {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x318));
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        temp_v1 = (char *)(temp_v0) + 0x13C;
        if (temp_a1 != NULL) {
            if ((*(s32 *)((char *)(arg0) + 0x65)) != 0) {
                sp260 = (*(s32 *)((char *)(temp_v0) + 0x13C));
                sp264 = (*(s32 *)((char *)(temp_v1) + 0x4)) + -13.0f;
                sp268 = (*(s32 *)((char *)(temp_v1) + 0x8));
            } else if ((*(s32 *)((char *)(temp_v0) + 0x197)) != 0) {
                sp234 = temp_v1;
                temp_f12 = func_15144AA8((*(s32 *)((char *)(temp_a1) + 0x23D)), temp_a1) * D_800AA99C;
                sp22C = temp_f12;
                sp260 = (cosf(temp_f12) * 25.0f) + (*(s32 *)((char *)(temp_v0) + 0x13C));
                sp264 = (*(s32 *)((char *)(temp_v1) + 0x4));
                sp268 = (*(s32 *)((char *)(temp_v1) + 0x8)) - (sinf(temp_f12) * 25.0f);
            } else if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
                func_151C1798(arg0, &sp260);
            } else {
                sp260 = (*(s32 *)((char *)(arg0) + 0x14));
                sp264 = (*(s32 *)((char *)(arg0) + 0x18)) + 65.0f;
                sp268 = (*(s32 *)((char *)(arg0) + 0x1C));
            }
        } else if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            func_151C1798(arg0, &sp260);
        } else {
            sp260 = (*(s32 *)((char *)(arg0) + 0x14));
            sp264 = (*(s32 *)((char *)(arg0) + 0x18)) + 65.0f;
block_15:
            sp268 = (*(s32 *)((char *)(arg0) + 0x1C));
        }
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x31C));
    if (((temp_v0_2 != NULL) && ((*(s32 *)((char *)(temp_v0_2) + 0x197)) != 0)) || (arg1 != NULL)) {
        var_v0 = arg0;
        if (arg1 != NULL) {
            var_v0 = arg1;
        }
        temp_v1_2 = (*(s32 *)((char *)(var_v0) + 0x31C));
        var_t0 = 1;
        temp_v1_3 = (char *)(temp_v1_2) + 0x13C;
        (*(s32 *)((char *)&(sp248) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x13C));
        (*(s32 *)((char *)&(sp248) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x4));
        (*(s32 *)((char *)&(sp248) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_3) + 0x8));
        sp23C = (*(s32 *)((char *)((*(s32 *)((char *)(var_v0) + 0x31C))) + 0x130));
        sp240 = (*(s32 *)((char *)((*(s32 *)((char *)(var_v0) + 0x31C))) + 0x134));
        sp244 = (*(s32 *)((char *)((*(s32 *)((char *)(var_v0) + 0x31C))) + 0x138));
    } else {
        func_15145740(arg0, &sp254, &sp218, 0, 0.0f);
        var_t0 = 0;
        sp254 *= D_800AA9A0;
        sp258 *= D_800AA9A0;
        sp25C *= D_800AA9A0;
    }
    if (D_800BE9F0 == 0x24) {
        var_v1 = 0;
    } else {
        if (var_t0 != 0) {
            sp54 = &sp248;
        } else {
            sp54 = &sp260;
        }
        if (var_t0 != 0) {
            sp58 = &sp23C;
        } else {
            sp58 = &sp254;
        }
        sp26F = var_t0;
        var_v1 = func_151D5B6C(sp54, sp58, arg0, 3, arg2);
    }
    if (var_t0 != 0) {
        var_a2 = NULL;
    } else {
        var_a2 = &sp254;
    }
    if (var_t0 != 0) {
        sp54 = &sp248;
    } else {
        sp54 = NULL;
    }
    if (var_t0 != 0) {
        sp58 = &sp23C;
    } else {
        sp58 = NULL;
    }
    sp238 = var_v1;
    if (func_151C196C(&sp2A4, &sp260, var_a2, sp54, sp58, arg0, arg2, &sp294, &sp2A0, &sp270, var_v1) != 0) {
        sp214 = sp238;
        sp1C8 = 0;
        M2C_MEMCPY_ALIGNED(&sp148, &sp2A4, 0x60);
        (*(s32 *)((char *)&(sp148) + 0x60)) = (s32) (*(s32 *)((char *)&(sp2A4) + 0x60));
        sp1CC = 0;
        spCC = 1.0f;
        spD0 = 1.0f;
        spD4 = D_800AA9A4;
        spD8 = D_800AA9A4;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spE8 = 1.0f;
        spEC = 1.0f;
        spF0 = 1.0f;
        (*(f32 *)((char *)&(spF4) + 0x0)) = (f32) (*(f32 *)((char *)&(sp260) + 0x0));
        (*(s32 *)((char *)&(spF4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp260) + 0x4));
        (*(s32 *)((char *)&(spF4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp260) + 0x8));
        sp118 = 0.0f;
        sp11C = 0x500920;
        sp120 = 0x12C;
        sp122 = 0x2F;
        sp124 = 1;
        sp1B4 = arg0;
        (*(s32 *)((char *)&(sp1B8) + 0x0)) = (s32) (*(s32 *)((char *)(arg2) + 0x0));
        (*(s32 *)((char *)&(sp1B8) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
        (*(s32 *)((char *)&(sp1B8) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x8));
        (*(s32 *)((char *)&(sp1B8) + 0xC)) = (s32) (*(s32 *)((char *)(arg2) + 0xC));
        sp1DC = sp2A0 * D_800AA9A8;
        (*(s32 *)((char *)&(sp1E0) + 0x0)) = (s32) (*(s32 *)((char *)&(sp294) + 0x0));
        (*(s32 *)((char *)&(sp1E0) + 0x4)) = (s32) (*(s32 *)((char *)&(sp294) + 0x4));
        (*(s32 *)((char *)&(sp1E0) + 0x8)) = (s32) (*(s32 *)((char *)&(sp294) + 0x8));
        if (sp2A0 != 0.0f) {
            sp58 = 1;
        } else {
            sp58 = NULL;
        }
        sp210 = (s8) sp58;
        M2C_MEMCPY_ALIGNED(&sp1EC, &sp270, 0x24);
        sp1B0 = 200.0f;
        sp100 = sp180 * 200.0f;
        sp104 = sp184 * 200.0f;
        sp108 = sp188 * 200.0f;
        func_15145974(0, &sp100, &spE0, &spDC);
        spE4 = 0.0f;
        sp1AC = sp14C * D_800AA9AC;
        sp128 = 0;
        sp12C = 0xFF;
        sp12D = 0xA;
        sp12E = 0;
        sp12F = 0;
        sp130 = 0;
        sp131 = 0;
        sp132 = 0;
        sp133 = 0;
        sp134 = 2;
        sp136 = 2;
        sp138 = 0;
        sp13C = 0;
        sp13E = 1;
        sp140 = 0xFF;
        sp10C = 0.0f;
        sp110 = 0.0f;
        sp114 = 0.0f;
        sp1DA = arg3;
        temp_v0_3 = func_15132A4C(&spCC, 3, 0xFF, 0xD0, (s32) arg4, arg5);
        if (temp_v0_3 != 0) {
            temp_a0 = temp_v0_3 + 0x170;
            sp48 = temp_a0;
            spC8 = temp_v0_3;
            memcpy(temp_a0, &sp148, 0xD0);
            spB0 = (s32) sp260;
            spBC = 2;
            spBD = -1;
            spBE = 0x12C;
            spC0 = 0;
            spB4 = (s32) sp264;
            spB8 = (s32) sp268;
            (*(s32 *)((char *)(sp48) + 0x80)) = func_151602C0(&spBC, &spB0, 0x28, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg4, arg5);
            (*(s32 *)((char *)(sp48) + 0x84)) = func_151B8908(spC8);
            (*(s16 *)((char *)(sp48) + 0x90)) = func_1000FA64(((random_u32() % 3U) + 0x2EE) & 0xFFFF, (s16) (s32) sp260, (s16) (s32) sp264, (s16) (s32) sp268, 0x7530, 0x3E8, 0x1F4, func_151C110C, spC8, 0, 4, 0);
            (*(s32 *)((char *)(sp48) + 0x88)) = func_151B8400(spC8);
            if ((D_80082FA0 < 2) && (D_8008FD8C < 4)) {
                (*(s32 *)((char *)(sp48) + 0x8C)) = func_151B8668(spC8, arg4, arg5);
            } else {
                (*(s32 *)((char *)(sp48) + 0x8C)) = 0;
            }
        } else {
            if (sp1C8 != 0) {
                func_1516972C(sp1C8);
            }
            if (sp1CC != 0) {
                func_1516972C(sp1CC);
            }
        }
        if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
            temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x4));
            if ((temp_v0_4 != 0x77) && (temp_v0_4 != 0x28)) {
                (*(s32 *)((char *)&(spA4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA930) + 0x0));
                (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA930) + 0x4));
                (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA930) + 0x8));
                (*(s32 *)((char *)&(sp98) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA93C) + 0x0));
                (*(s32 *)((char *)&(sp98) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA93C) + 0x4));
                (*(s32 *)((char *)&(sp98) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA93C) + 0x8));
                (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA948) + 0x0));
                (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA948) + 0x4));
                (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA948) + 0x8));
                sp84 = (random_float() * 10.0f) + 25.0f;
                temp_f16 = random_float() * D_800AA9B0;
                sp64 = &spA4;
                sp68 = &sp98;
                sp5C = &sp78;
                sp60 = &sp6C;
                sp88 = temp_f16 + D_800AA9B4;
                func_15145EA4(&sp64, &sp5C, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x240, 2);
                sp54 = random_u32();
                sp58 = random_u32();
                func_15102B38(arg0, 9, &spA4, &sp8C, &sp84, ((u32)(sp54) % 3U) + 8, ((u32)(sp58) % 56U) + 0xC8, (random_float() * 204.0f) + D_800AA9B8, &sp78, 0xFF, 0, -1, (s32) arg4, arg5);
                sp54 = random_u32();
                sp58 = random_u32();
                func_15103254((s16) (((u32)(sp54) % 3U) + 8), (((u32)(sp58) % 56U) + 0xC8) & 0xFF, (random_float() * 204.0f) + D_800AA9BC, &sp6C, 0xFF, (s32) arg4, arg5);
                func_151C1860(&sp6C, arg4, arg5);
            }
        }
    }
}

s32 func_151C110C(void *arg0, void * arg1, s32 *arg2, void * arg3, s16 *arg6) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((temp_v1 != NULL) && (*arg2 != 0)) {
        (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x38));
        (*(s16 *)((char *)(arg0) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x3C));
        (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x40));
        return 0;
    }
    *arg6 = 0;
    return 0;
}

s32 func_151C1180(void *arg0) {
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spC8;
    f32 sp6C;
    s32 sp64;
    void * *sp54;
    f32 *sp50;
    void * *temp_a1;
    void * *temp_v0;
    f32 *temp_a0;
    f32 temp_f0;
    f32 var_f0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    f32 spCC;
    f32 spD0;
    f32 spBD;
    f32 sp70;
    f32 sp74;
    var_s0 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) < D_800BE9A4) {
        var_s0 = (char *)(arg0) + 0x170;
        var_f0 = (*(s32 *)((char *)(var_s0) + 0x68)) * (*(s32 *)((char *)(var_s0) + 0x64));
    } else {
        var_f0 = (*(s32 *)((char *)(var_s0) + 0x68)) * D_800BE9A4;
    }
    spD4 = (*(s32 *)((char *)(var_s0) + 0x38)) * var_f0;
    spD8 = (*(s32 *)((char *)(var_s0) + 0x3C)) * var_f0;
    spDC = (*(s32 *)((char *)(var_s0) + 0x40)) * var_f0;
    if (D_800E0930 != NULL) {
        spE0 = var_f0;
        var_f0 = spE0;
        if (D_800E0930((char *)(arg0) + 0x38, &spD4, &spC8) != 0) {
            func_15055A2C(0, spC8, spCC, spD0, 0);
            temp_a1 = (char *)(var_s0) + 0x38;
            sp54 = temp_a1;
            func_151C1654(&spC8, temp_a1, (*(s32 *)((char *)(var_s0) + 0x6C)), (*(s32 *)((char *)(var_s0) + 0x92)), NULL);
            func_151BFDA0(&spC8, sp54, (((*(s32 *)((char *)(var_s0) + 0xC8)) & 1) == 0) & 0xFF, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            return 0;
        }
    }
    if (var_f0 != 0.0f) {
        func_15081690((*(s32 *)((char *)(var_s0) + 0x6C)), (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(arg0) + 0x40)), spD4, spD8, spDC, &sp64, var_f0, 1, 0, 1, 3, (char *)(var_s0) + 0x70, (*(s32 *)((char *)(var_s0) + 0xCC)));
        if ((s32) spBD >= 2) {
            func_15055A2C(1, sp6C, sp70, sp74, 0);
            func_151C1654(&sp6C, (char *)(var_s0) + 0x38, (*(s32 *)((char *)(var_s0) + 0x6C)), (*(s32 *)((char *)(var_s0) + 0x92)), NULL);
            func_151C0098(&sp6C, sp64, (((*(s32 *)((char *)(var_s0) + 0xC8)) & 1) == 0) & 0xFF, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            return 0;
        }
    }
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x48)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(var_s0) + 0xC8)) & 1) {
        temp_f0 = (*(s32 *)((char *)(var_s0) + 0x94));
        if (temp_f0 > 0.0f) {
            (*(f32 *)((char *)(var_s0) + 0x94)) = (f32) (temp_f0 - D_800BE9A4);
            if ((*(s32 *)((char *)(var_s0) + 0x94)) <= 0.0f) {
                func_151ABE40((char *)(var_s0) + 0x98, (char *)(var_s0) + 0xA4, 2, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
    }
    (*(f32 *)((char *)(var_s0) + 0x64)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x64)) - D_800BE9A4);
    if ((*(s32 *)((char *)(var_s0) + 0x64)) <= 0.0f) {
        if ((*(s32 *)((char *)(var_s0) + 0x59)) == 1) {
            func_15055A2C(0, (*(s32 *)((char *)(var_s0) + 0x8)), (*(s32 *)((char *)(var_s0) + 0xC)), (*(s32 *)((char *)(var_s0) + 0x10)), 0);
            temp_a0 = (char *)(var_s0) + 8;
            temp_v0 = (char *)(var_s0) + 0x44;
            sp54 = temp_v0;
            sp50 = temp_a0;
            func_151C1654(temp_a0, (char *)(var_s0) + 0x38, (*(s32 *)((char *)(var_s0) + 0x6C)), (*(s32 *)((char *)(var_s0) + 0x92)), temp_v0);
            func_151BFE84(sp54, sp50, (char *)(arg0) + 0x44, (((*(u8 *)((char *)(var_s0) + 0xC8)) & 1) == 0) & 0xFF, (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
        }
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(var_s0) + 0x80));
    if (temp_v1 != NULL) {
        (*(s16 *)((char *)((*(s16 *)((char *)(temp_v1) + 0x14))) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38));
        (*(s16 *)((char *)((*(s16 *)((char *)(temp_v1) + 0x14))) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x3C));
        (*(s16 *)((char *)((*(s16 *)((char *)(temp_v1) + 0x14))) + 0x12)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x40));
    }
    temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x84));
    if (temp_v0_2 != NULL) {
        (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
        (*(f32 *)((char *)(temp_v0_2) + 0x44)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
        (*(f32 *)((char *)(temp_v0_2) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x40));
    }
    return 1;
}

void func_151C1570(void *arg0) {
    void *sp1C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t7;
    void *temp_a1;
    void *temp_v1;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0x1F0));
    if (temp_t7 != 0) {
        func_1516972C(temp_t7);
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x1F4));
    temp_a1 = (char *)(arg0) + 0x170;
    if (temp_a0 != 0) {
        sp1C = temp_a1;
        func_1516972C(temp_a0, temp_a1);
    }
    temp_v1 = (*(s32 *)((char *)(temp_a1) + 0x88));
    if (temp_v1 != NULL) {
        (*(s32 *)((char *)(temp_v1) + 0x110)) = 0;
    }
    temp_a0_2 = (*(s32 *)((char *)(temp_a1) + 0x8C));
    if (temp_a0_2 != 0) {
        func_1516972C(temp_a0_2, temp_a1);
    }
    func_1000FD38(func_151C110C, arg0, 0);
}

void func_151C15FC(void *arg0) {
    func_151C1570(arg0);
    func_15132570(arg0);
}

void func_151C1628(void *arg0) {
    func_151C1570(arg0);
    func_1513259C(arg0);
}

void func_151C1654(f32 *arg0, void * *arg1, void *arg2, s32 arg3, void * *arg4) {
    if (D_800E0934 != NULL) {
        D_800E0934((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x4)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    }
    switch (arg3) {                                 /* irregular */
    case 1:
        func_151D42E8(arg0, arg1, arg2, arg4, 0x24);
        return;
    case 2:
        func_151D42E8(arg0, arg1, arg2, arg4, 0x25);
        return;
    case 3:
        func_151D40D4(arg0, arg1, arg2, 0, arg4, 0x16, 0x26, 0);
        return;
    default:
    case 0:
        func_151D40D4(arg0, arg1, arg2, 0, arg4, 0x16, 0x15, 0);
        return;
    }
}

void func_151C1798(void *arg0) {
    s32 var_v0;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (temp_v0 != 0x28) {
        if (temp_v0 != 0x77) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
    } else {
        var_v0 = 2;
    }
    func_15143134((var_v0 * 0xC) + &D_800AA958, (*(&D_800AA954 + var_v0) << 6) + (*(s32 *)((char *)(arg0) + 0x1D4)), arg0);
}

void func_151C1814(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = arg0 + 0x170;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(temp_v0) + 0x6C));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x6C)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x6C)) = temp_v1;
        }
    }
}

void func_151C1860(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;

    sp48 = 3;
    sp49 = -1;
    sp4A = (random_u32() % 5U) + 5;
    sp4C = 0;
    sp3C = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp48, &sp3C, (random_u32(arg0) % 11U) + 5, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151C1940(void **arg2) {
    func_151C02E4(*arg2, (char *)(arg2) + 4, 0, 0);
}

s32 func_151C196C(s32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, void *arg5, void *arg6, void * *arg7, f32 *arg8, void * *arg9, s32 arg10) {
    u8 sp57;
    u8 sp56;
    f32 *var_v1_2;
    s32 *temp_v0;
    s32 *var_s2;
    s32 *var_s3;
    s32 var_at;
    s32 var_v1;

    var_v1 = 1;
    sp56 = 0;
    if ((arg3 != NULL) && (arg4 != NULL)) {
        var_s2 = arg0 + 0x2C;
        var_s3 = arg0 + 0x38;
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg3) + 0x0));
        (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (*(f32 *)((char *)(arg3) + 0x4));
        (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(arg4) + 0x0));
        (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
        (*(s32 *)((char *)(var_s3) + 0x8)) = (s32) (*(s32 *)((char *)(arg4) + 0x8));
        sp57 = 1;
        func_151C1D5C(arg5, var_s2, var_s3, arg0, 0.0f, 0, 0, 1, 3, arg6, arg7, arg8, arg9, arg10);
        var_v1 = 1;
        if ((*(s32 *)((char *)(arg0) + 0x59)) == 0) {
            if (((*(s32 *)((char *)(arg0) + 0x2C)) != (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg0) + 0x30)) != (*(s32 *)((char *)(arg1) + 0x4))) || ((*(s32 *)((char *)(arg0) + 0x34)) != (*(s32 *)((char *)(arg1) + 0x8)))) {
                (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
                (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
                (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
                (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(arg4) + 0x0));
                (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
                var_at = (*(s32 *)((char *)(arg4) + 0x8));
                goto block_14;
            }
            var_v1 = 0;
            goto block_15;
        }
        if (((*(s32 *)((char *)(arg0) + 0x2C)) != (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg0) + 0x30)) != (*(s32 *)((char *)(arg1) + 0x4))) || ((*(s32 *)((char *)(arg0) + 0x34)) != (*(s32 *)((char *)(arg1) + 0x8)))) {
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
            (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
            (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
            (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) - (*(f32 *)((char *)(arg1) + 0x0)));
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) - (*(f32 *)((char *)(arg1) + 0x4)));
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) - (*(f32 *)((char *)(arg1) + 0x8)));
            sp57 = 1;
            var_v1 = 1;
            if (func_15145128(var_s3, var_s3, arg0 + 4, 0) == 0) {
                return 0;
            }
        }
        goto block_15;
    }
    var_s2 = arg0 + 0x2C;
    var_s3 = arg0 + 0x38;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
    (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
    (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
    (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
    var_at = (*(s32 *)((char *)(arg2) + 0x8));
block_14:
    (*(s32 *)((char *)(var_s3) + 0x8)) = var_at;
block_15:
    if (var_v1 != 0) {
        func_151C1D5C(arg5, var_s2, var_s3, arg0, 0.0f, 0, 1, 1, 3, arg6, arg7, arg8, arg9, arg10);
        if ((*(s32 *)((char *)(arg0) + 0x59)) != 0) {
            sp56 = 1;
        }
    }
    if (sp56 == 0) {
        (*(s32 *)((char *)(arg0) + 0x0)) = 0;
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) D_800AA9C0;
        (*(s32 *)((char *)(var_s2) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(f32 *)((char *)(var_s2) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
        (*(f32 *)((char *)(var_s2) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
        var_v1_2 = arg2;
        if (arg4 != NULL) {
            var_v1_2 = arg4;
        }
        temp_v0 = arg0 + 8;
        (*(s32 *)((char *)(var_s3) + 0x0)) = (*(s32 *)((char *)(var_v1_2) + 0x0));
        (*(s32 *)((char *)(var_s3) + 0x4)) = (s32) (*(s32 *)((char *)(var_v1_2) + 0x4));
        (*(s32 *)((char *)(var_s3) + 0x8)) = (s32) (*(s32 *)((char *)(var_v1_2) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800AA9C0));
        (*(f32 *)((char *)(arg0) + 0xC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800AA9C0));
        (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x40)) * D_800AA9C0));
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x1C)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x56)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x59)) = 0U;
        (*(s32 *)((char *)(arg0) + 0x5A)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
        (*(s32 *)((char *)(arg0) + 0x60)) = 0;
        (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
    }
    return 1;
}

void func_151C1D5C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s8 arg8, void *arg9, void * *arg10, f32 *arg11, void * *arg12, s32 arg13) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 temp_f20;
    f32 var_f22;
    s32 var_v0;
    void *temp_v0;

    var_f22 = 0.0f;
    *arg11 = 0.0f;
    (*(s32 *)((char *)&(sp98) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp98) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp98) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    temp_f20 = D_800AA9C4;
    do {
        func_15081690(arg0, sp98, sp9C, spA0, (*(s32 *)((char *)(arg2) + 0x0)), (*(s32 *)((char *)(arg2) + 0x4)), (*(s32 *)((char *)(arg2) + 0x8)), arg3, arg4, arg5, arg6, arg7, (s32) arg8, arg9, arg13);
        temp_v0 = (*(s32 *)((char *)(arg3) + 0x5C));
        var_f22 += (*(s32 *)((char *)(arg3) + 0x4));
        if (temp_v0 != NULL) {
            var_v0 = 0;
            if (((*(s32 *)((char *)(temp_v0) + 0x4F)) & 0x60) == 0x40) {
                var_v0 = 1;
                sp98 = (*(s32 *)((char *)(arg3) + 0x8)) + ((*(s32 *)((char *)(arg3) + 0x38)) * temp_f20);
                sp9C = (*(s32 *)((char *)(arg3) + 0xC)) + ((*(s32 *)((char *)(arg3) + 0x3C)) * temp_f20);
                spA0 = (*(s32 *)((char *)(arg3) + 0x10)) + ((*(s32 *)((char *)(arg3) + 0x40)) * temp_f20);
                (*(f32 *)((char *)(arg10) + 0x0)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
                (*(f32 *)((char *)(arg10) + 0x4)) = (f32) (*(f32 *)((char *)(arg3) + 0xC));
                (*(f32 *)((char *)(arg10) + 0x8)) = (f32) (*(f32 *)((char *)(arg3) + 0x10));
                *arg11 = var_f22;
                var_f22 += temp_f20;
                (*(f32 *)((char *)(arg12) + 0x0)) = (f32) (*(f32 *)((char *)(arg3) + 0xC));
                (*(s32 *)((char *)(arg12) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x44));
                (*(s32 *)((char *)(arg12) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x48));
                (*(s32 *)((char *)(arg12) + 0xC)) = (s32) (*(s32 *)((char *)(arg3) + 0x4C));
                (*(s32 *)((char *)(arg12) + 0x10)) = (s32) (*(s32 *)((char *)(arg3) + 0x50));
                (*(u16 *)((char *)(arg12) + 0x14)) = (u16) (*(u16 *)((char *)(arg3) + 0x54));
                (*(s32 *)((char *)(arg12) + 0x1C)) = 7;
                (*(s32 *)((char *)(arg12) + 0x1D)) = 3;
                (*(s32 *)((char *)(arg12) + 0x20)) = temp_v0;
                (*(s32 *)((char *)(arg12) + 0x18)) = (s32) (*(s32 *)((char *)(arg3) + 0x60));
            }
        } else {
            var_v0 = 0;
        }
    } while (var_v0 != 0);
    (*(f32 *)((char *)(arg3) + 0x2C)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)(arg3) + 0x30)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)(arg3) + 0x4)) = var_f22;
    (*(s32 *)((char *)(arg3) + 0x34)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
}

void func_151C1FB8(f32 *arg0) {
    s8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s16 sp1A;
    s8 sp18;

    if ((*(s32 *)((char *)(arg0) + 0x318)) != NULL) {
        sp18 = 1;
        sp1A = (random_u32() & 7) + 0xD;
        sp1D = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D));
        sp1C = (random_u32(arg0) % 3U) + 6;
        sp1E = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}
