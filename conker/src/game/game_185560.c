/**
 * Auto-decompiled from asm/185560.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C00();            /* extern */
void * func_150A7960(); /* extern */
u8 random_u32();                              /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();    /* extern */
s32 func_151303BC();                     /* extern */
s32 func_1513F4E4();                   /* extern */
s32 func_15142B7C();                /* extern */
s32 func_15142C10();   /* extern */
s32 func_15142CF0(); /* extern */
void *func_15142FBC();           /* extern */
void * func_151441A4(); /* extern */
void * func_151442FC(); /* extern */
void *func_151462C8(); /* extern */
s32 func_1514672C();                           /* extern */
s32 func_1514ECE0();         /* extern */
void * func_1514EDF0();                               /* extern */
s32 func_1515D440();                                /* extern */
s32 func_1515D480();                             /* extern */
void *func_15167A68();      /* extern */
void * func_1519F400();                               /* extern */
s32 func_151A8B20();              /* extern */
s32 func_151D8E20();                                /* extern */
void * memcpy();                         /* extern */
u8 func_15159084();
u8 func_15159120();
u8 func_15159184();
u8 func_15159230();
u8 func_151592B8();
s32 func_15159370();
u8 func_151596BC();           /* static */
extern s32 D_8008AE00;
extern s32 D_8008AE0C;
extern s32 D_8008AE18;
extern s32 D_8008AFB8;
extern s32 D_8008AFD0;
extern s32 D_8008B02C;
extern u16 D_8008B040;
extern s32 D_800A4AC8;
extern f32 D_800A6070;
extern s32 D_800A6200;
extern s32 D_800A636C;
extern f32 D_800A63A0;
extern f32 D_800A63A4;
extern f32 D_800A63A8;
extern f32 D_800A63AC;
extern f32 D_800A63B0;
extern f32 D_800A63B4;
extern f32 D_800A63B8;
extern f32 D_800A63BC;
extern f32 D_800A63C0;
extern f32 D_800A63C4;
extern f32 D_800A63C8;
extern f32 D_800A63CC;
extern f32 D_800A63D0;
extern f32 D_800A63D4;
extern f32 D_800A63D8;
extern f32 D_800A63DC;
extern f32 D_800A63E0;
extern f32 D_800A63E4;
extern f32 D_800A63E8;
extern f32 D_800A63EC;
extern f32 D_800A63F0;
extern f32 D_800A63F4;
extern f32 D_800A63F8;
extern f32 D_800A63FC;
extern f32 D_800A6400;
extern f32 D_800A6404;
extern f32 D_800A6408;
extern f32 D_800A640C;
extern f32 D_800A6410;
extern f32 D_800A6414;
extern f32 D_800A6418;
extern f32 D_800A641C;
extern u8 D_800BE9EB;
void * func_151580B0();

void *func_151580B0(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void * var_a0;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_v0;
    void *var_s0;
    void *var_s0_2;

    if (arg3 & 0xFF) {
        var_a0 = 0x55;
    } else {
        var_a0 = 0x37;
    }
    temp_v0 = func_15167A68(var_a0, arg6, arg4 + 0xF8, 1, (s32) arg5, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x44);
    (*(s32 *)((char *)(temp_v0) + 0xD8)) = arg1;
    (*(s32 *)((char *)(temp_v0) + 0xF4)) = arg2;
    (*(s32 *)((char *)(temp_v0) + 0xDC)) = 0;
    var_s1 = 0;
    var_s0 = temp_v0;
    do {
        var_s1 += 1;
        var_s0 = (char *)(var_s0) + 4;
        (*(s32 *)((char *)(var_s0) + 0xDC)) = 0;
    } while (var_s1 < 4);
    (*(s32 *)((char *)(temp_v0) + 0xF0)) = 0;
    if (arg1 != 0) {
        var_s1_2 = 0;
        var_s0_2 = temp_v0;
        if (D_80082FA0 >= 0) {
            do {
                (*(s32 *)((char *)(var_s0_2) + 0xE0)) = func_1515D480(arg1);
                var_s1_2 += 1;
                var_s0_2 = (char *)(var_s0_2) + 4;
            } while (D_80082FA0 >= var_s1_2);
        }
        (*(s32 *)((char *)(temp_v0) + 0xF0)) = func_1515D440();
    }
    return temp_v0;
}

void func_151581D8( s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_151580B0(NULL, 0, (s32) arg1, arg2, (s32) arg3, (u8) arg4, 0);
}

void func_15158224(void *arg0) {
    u8 sp1B;
    s8 temp_v0;
    u8 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x10)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x14)) < 0) {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x12));
        if (temp_v0 != -1) {
            sp1B = var_v1;
            if (((s32 (*)())((char *)(&D_8008AE00 + (temp_v0 * 4))))() == 0) {
                var_v1 = 1;
            }
        }
    }
    if (var_v1 != 0) {
        func_1516972C(arg0);
    }
}

void *func_151582C8(void *arg0, void *arg1, s32 arg2) {
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    s8 sp5B;
    s32 temp_s1_2;
    s32 var_v0;
    s8 temp_v0;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_v1;
    void *var_s1;

    sp5B = 1;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x13));
    if ((temp_v0 != -1) && (((s32 (*)())((char *)(&D_8008AE0C + (temp_v0 * 4))))((char *)(arg1) + (D_800BE9C0 << 6) + 0x58, arg1) == 0)) {
        return arg0;
    }
    temp_s1_2 = func_15142B7C(arg0, (*(s32 *)((char *)(arg1) + 0x1C)), (*(s32 *)((char *)(arg1) + 0x20)));
    func_151441A4(&sp6A, &sp68, &sp66, &sp64, (s32) (*(s32 *)((char *)(arg1) + 0x3C)), (s32) (*(s32 *)((char *)(arg1) + 0x3D)), (s32) (*(s32 *)((char *)(arg1) + 0x3E)), (s32) (*(s32 *)((char *)(arg1) + 0x3F)), (s32) (*(s32 *)((char *)(arg1) + 0x38)), (s32) (*(s32 *)((char *)(arg1) + 0x39)), (s32) (*(s32 *)((char *)(arg1) + 0x3A)), (s32) (*(s32 *)((char *)(arg1) + 0x3B)), 0xFF, (s32) (*(s32 *)((char *)(arg1) + 0x34)));
    func_151442FC(&sp62, &sp60, &sp5E, &sp5C, (s32) (*(s32 *)((char *)(arg1) + 0x3C)), (s32) (*(s32 *)((char *)(arg1) + 0x3D)), (s32) (*(s32 *)((char *)(arg1) + 0x3E)), (s32) (*(s32 *)((char *)(arg1) + 0x3F)), (s32) (*(s32 *)((char *)(arg1) + 0x38)), (s32) (*(s32 *)((char *)(arg1) + 0x39)), (s32) (*(s32 *)((char *)(arg1) + 0x3A)), (s32) (*(s32 *)((char *)(arg1) + 0x3B)), 0xFF, (s32) (*(s32 *)((char *)(arg1) + 0x35)));
    temp_v1 = ((*(s32 *)((char *)(arg1) + 0x24)) * 8) + &D_800A4AC8;
    temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x10));
    var_s1 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(temp_s1_2, sp62, sp60, sp5E, (s32) sp5C, &sp5B), 0, 0, sp6A, (s32) sp68, (s32) sp66, (s32) sp64, &sp5B), (*(s32 *)((char *)(arg1) + 0x2B)), &sp5B), (*(s32 *)((char *)(arg1) + 0x18)) | 0x80000 | 0x2C00 | (*(s32 *)((char *)(arg1) + 0x2C)) | (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(temp_v1) + 0x4)) | (*(s32 *)((char *)(temp_v1) + 0x0)), &sp5B);
    if (temp_v1_2 & 2) {
        if (temp_v1_2 & 4) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        var_s1 = func_151462C8(var_s1, (char *)(arg1) + 0xD8, (*(s32 *)((char *)(arg1) + 0x45)), (*(s32 *)((char *)(arg1) + 0x40)), (s32) (*(s32 *)((char *)(arg1) + 0x44)), (s32) arg2, (char *)(arg1) + 0x48, var_v0, 0);
    }
    (*(s32 *)((char *)(var_s1) + 0x0)) = 0xDA380003;
    temp_s1 = (char *)(var_s1) + 8;
    (*(s32 *)((char *)(var_s1) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x58);
    (*(s32 *)((char *)(var_s1) + 0x8)) = 0xDE000000;
    (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) *(&D_8008AFB8 + ((*(s32 *)((char *)(arg1) + 0x16)) * 4));
    return (char *)(temp_s1) + 8;
}

s32 func_1515858C(s32 arg0, void *arg1) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    void *temp_v0;

    func_150A8050(&sp24, (*(s32 *)((char *)(arg1) + 0xF8)), (*(s32 *)((char *)(arg1) + 0xFC)), (*(s32 *)((char *)(arg1) + 0x100)));
    temp_v0 = (char *)(arg1) + 0xF8;
    sp54 = (*(s32 *)((char *)(arg1) + 0x48));
    sp58 = (*(s32 *)((char *)(arg1) + 0x4C));
    sp5C = (*(s32 *)((char *)(arg1) + 0x50));
    sp24 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp28 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp2C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp34 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp38 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp3C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp44 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp48 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp4C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    guMtxF2L(&sp24, arg0);
    return 1;
}

s32 func_15158684(void *arg0) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f18;
    f32 var_f16;
    f32 var_f18;
    f32 var_f18_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    f32 sp24;
    f32 sp28;
    (*(s32 *)((char *)&(sp20) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x108));
    (*(s32 *)((char *)&(sp20) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x10C));
    (*(s32 *)((char *)&(sp20) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x110));
    var_v0 = D_800BE9E4;
    if (var_v0 != 0) {
        temp_a2 = -(var_v0 & 3);
        temp_a1 = temp_a2 + var_v0;
        if (temp_a2 != 0) {
            temp_v1 = (char *)(arg0) + 0xF8;
            temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x2C));
            var_v0 -= 1;
            var_f18 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0;
            var_f16 = (*(s32 *)((char *)(temp_v1) + 0x18)) * temp_f0;
            if (temp_a1 != var_v0) {
                do {
                    (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f18;
                    (*(s32 *)((char *)(temp_v1) + 0x18)) = var_f16;
                    var_f18 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0;
                    var_v0 -= 1;
                    var_f16 = (*(s32 *)((char *)(temp_v1) + 0x18)) * temp_f0;
                } while (temp_a1 != var_v0);
            }
            (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f18;
            (*(s32 *)((char *)(temp_v1) + 0x18)) = var_f16;
            if (var_v0 != 0) {
                goto block_5;
            }
        } else {
block_5:
            temp_v1_2 = (char *)(arg0) + 0xF8;
            temp_f0_2 = (*(s32 *)((char *)(temp_v1_2) + 0x2C));
            var_v0_2 = var_v0 - 4;
            var_f18_2 = (*(s32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2;
            if (var_v0_2 != 0) {
                do {
                    (*(s32 *)((char *)(temp_v1_2) + 0x10)) = var_f18_2;
                    var_v0_2 -= 4;
                    (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
                    var_f18_2 = (*(s32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2;
                    (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
                } while (var_v0_2 != 0);
            }
            (*(s32 *)((char *)(temp_v1_2) + 0x10)) = var_f18_2;
            (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x18)) * temp_f0_2);
        }
    }
    temp_v1_3 = (char *)(arg0) + 0xF8;
    temp_f18 = (*(s32 *)((char *)(temp_v1_3) + 0x28));
    (*(f32 *)((char *)(temp_v1_3) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x14)) + (temp_f18 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((sp20 + (0.5f * (((*(f32 *)((char *)(temp_v1_3) + 0x10)) - sp20) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) + ((sp24 + (0.5f * temp_f18 * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((sp28 + (0.5f * (((*(f32 *)((char *)(temp_v1_3) + 0x18)) - sp28) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0xF8)) = (f32) ((*(f32 *)((char *)(arg0) + 0xF8)) + ((*(f32 *)((char *)(temp_v1_3) + 0x1C)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) + ((*(f32 *)((char *)(temp_v1_3) + 0x20)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v1_3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x8)) + ((*(f32 *)((char *)(temp_v1_3) + 0x24)) * D_800BE9A4));
    return 1;
}

s32 func_15158920(s32 arg0, void *arg1) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;

    M2C_MEMCPY_ALIGNED(&sp18, &D_8008AE18, 0x3C);
    (*(s32 *)((char *)&(sp18) + 0x3C)) = (s32) (*(s32 *)((char *)&(D_8008AE18) + 0x3C));
    temp_f0 = (*(s32 *)((char *)(arg1) + 0xF8)) * D_800A6070;
    sp48 = (*(s32 *)((char *)(arg1) + 0x48));
    sp4C = (*(s32 *)((char *)(arg1) + 0x4C));
    sp50 = (*(s32 *)((char *)(arg1) + 0x50));
    sp18 *= temp_f0;
    sp1C *= temp_f0;
    sp20 *= temp_f0;
    sp28 *= temp_f0;
    sp2C *= temp_f0;
    sp30 *= temp_f0;
    sp38 *= temp_f0;
    sp3C *= temp_f0;
    sp40 *= temp_f0;
    guMtxF2L(&sp18, arg0);
    return 1;
}

void func_15158A20(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    if (D_80082FA0 >= 0) {
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0xE0));
            if (temp_v0 != 0) {
                func_100043B4(temp_v0, 4);
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 4;
        } while (D_80082FA0 >= var_s1);
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xF0));
    if (temp_v0_2 != 0) {
        func_100043B4(temp_v0_2, 4);
    }
}

void func_15158AA4(void *arg0) {
    func_15158A20(arg0);
    func_15169804(arg0);
}

void func_15158AD0(void *arg0) {
    func_15158A20(arg0);
    func_15169824(arg0);
}

s32 func_15158AFC(void *arg0) {
    s16 temp_v0;
    s32 temp_lo;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x14));
    if (temp_v0 < (*(s32 *)((char *)(arg0) + 0xF8))) {
        temp_lo = temp_v0 * (*(s32 *)((char *)(arg0) + 0xFC));
        if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x3B))) {
            (*(u8 *)((char *)(arg0) + 0x3B)) = (u8) temp_lo;
        }
    }
    return 1;
}

void func_15158B3C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x40));
        if (temp_v0 == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x40)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(arg0) + 0x44)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x40)) = temp_v0;
            (*(u8 *)((char *)(arg0) + 0x44)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x40))) || ((*(u8 *)((char *)(arg0) + 0x44)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        (*(s32 *)((char *)(arg0) + 0x40)) = 0;
        (*(s32 *)((char *)(arg0) + 0x44)) = 0U;
    }
}

void *func_15158BD0(void *arg0, s32 arg1, s32 arg2) {
    void *sp2C;
    void *temp_v0;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_15167A68(0x2E, 0, arg2 + 0x58, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x18)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = 2;
    (*(s32 *)((char *)(temp_v0) + 0x2D)) = 2;
    (*(s32 *)((char *)(temp_v0) + 0x2E)) = 2;
    (*(s32 *)((char *)(temp_v0) + 0x2F)) = 3;
    (*(s32 *)((char *)(temp_v0) + 0x30)) = 0;
    (*(u8 *)((char *)(temp_v0) + 0x1C)) = (u8) (*(u8 *)((char *)(arg0) + 0x3B));
    (*(f32 *)((char *)(temp_v0) + 0x20)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(temp_v0) + 0x24)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    (*(s32 *)((char *)(temp_v0) + 0x31)) = 0;
    (*(f32 *)((char *)(temp_v0) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
    if (arg1 != 0) {
        (*(s32 *)((char *)(temp_v0) + 0x31)) = 1;
    }
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    sp2C = temp_v0;
    if (func_15159370(arg0, (char *)(temp_v0) + 0x1D, temp_v0) == 0) {
        func_1516979C(temp_v0);
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x50)) = 0;
    return temp_v0;
}

void func_15158CD4(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x18)));
    func_15169804(arg0);
}

void func_15158D00(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0x18)));
    func_15169824(arg0);
}

void func_15158D2C(void *arg0) {
    u8 sp49;
    u8 sp48;
    u8 sp47;
    u8 sp46;
    s32 temp_s2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s8 temp_v1;
    u8 temp_fp;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;

    temp_fp = (*(s32 *)((char *)(arg0) + 0x2C));
    sp49 = (*(s32 *)((char *)(arg0) + 0x2D));
    sp48 = (*(s32 *)((char *)(arg0) + 0x2E));
    sp47 = (*(s32 *)((char *)(arg0) + 0x2F));
    sp46 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_v0 = func_15159084((*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x1D)));
    (*(s32 *)((char *)(arg0) + 0x2C)) = temp_v0;
    if (!(temp_v0 & 0xFF)) {
        (*(s32 *)((char *)(arg0) + 0x2D)) = func_15159120((*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x1D)));
    } else {
        (*(s32 *)((char *)(arg0) + 0x2D)) = 2U;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) == 0) {
        if ((*(s32 *)((char *)(arg0) + 0x2D)) == 0) {
            (*(s32 *)((char *)(arg0) + 0x2E)) = 1U;
        } else {
            (*(s32 *)((char *)(arg0) + 0x2E)) = func_15159184((*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x1D)));
        }
    } else {
        (*(s32 *)((char *)(arg0) + 0x2E)) = 0U;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x18));
    (*(s32 *)((char *)(arg0) + 0x2F)) = func_15159230((*(s32 *)((char *)(arg0) + 0x18)), (char *)(arg0) + 0x20, (*(s32 *)((char *)(arg0) + 0x2F)));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x1C));
    temp_v0_2 = func_151592B8(temp_a0, (*(s32 *)((char *)(arg0) + 0x1D)));
    (*(s32 *)((char *)(arg0) + 0x30)) = temp_v0_2;
    if ((*(s32 *)((char *)(arg0) + 0x31)) & 1) {
        temp_s2 = (1 << (*(s32 *)((char *)(arg0) + 0x2C))) | (1 << ((*(s32 *)((char *)(arg0) + 0x2D)) + 3)) | (1 << ((*(s32 *)((char *)(arg0) + 0x2E)) + 6)) | (1 << ((*(s32 *)((char *)(arg0) + 0x2F)) + 9)) | (1 << ((temp_v0_2 & 0xFF) + 0xD));
        var_s0 = 0;
        do {
            temp_v1 = (*(s8 *)(*(&D_8008B02C + ((*(s32 *)((char *)(arg0) + 0x1D)) * 4)) + var_s0));
            temp_a0_2 = &D_800A6200 + (var_s0 * 8);
            if (temp_v1 != -1) {
                temp_v0_3 = (*(s32 *)((char *)(temp_a0_2) + 0x0));
                if ((temp_v0_3 | ((1 << temp_fp) | (1 << (sp49 + 3)) | (1 << (sp48 + 6)) | (1 << (sp47 + 9)) | (1 << (sp46 + 0xD)))) == temp_v0_3) {
                    temp_v0_4 = (*(s32 *)((char *)(temp_a0_2) + 0x4));
                    if ((temp_v0_4 | temp_s2) == temp_v0_4) {
                        ((s32 (*)())((char *)(&D_8008AFD0 + (temp_v1 * 4))))(arg0);
                    }
                }
            }
            var_s0 += 1;
        } while (var_s0 != 0x1C);
    }
}

void func_15158FA4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0x18)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg0) + 0x1C)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C((void *) temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
        if (temp_v0 == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x18)) = temp_v0;
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 4) && (((*(s32 *)((char *)(arg0) + 0x18)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg0) + 0x1C)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
        func_1519F400(temp_t6);
    }
}

u8 func_15159084(void *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_t6;
    u8 var_v1;

    temp_t6 = arg1 & 0xFF;
    if ((temp_t6 == 2) || (temp_t6 == 3)) {
        var_v1 = 0;
    } else {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x118));
        if ((D_800A63A0 == temp_f0) && !((*(s32 *)((char *)(arg0) + 0x184)) & 0x1F & 0xA)) {
            var_v1 = 1;
        } else if ((temp_f0 < (*(s32 *)((char *)(arg0) + 0x18))) || (var_v1 = 0, ((*(s32 *)((char *)(arg0) + 0x137)) != 0))) {
            var_v1 = 1;
        }
    }
    return var_v1;
}

u8 func_15159120(void *arg0, s32 arg1) {
    s32 temp_t6;
    u8 var_v1;

    temp_t6 = arg1 & 0xFF;
    if ((temp_t6 == 2) || (temp_t6 == 3)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
        if ((*(s32 *)((char *)(arg0) + 0x180)) < ((*(s32 *)((char *)(arg0) + 0x118)) - 35.0f)) {
            var_v1 = 1;
        }
    }
    return var_v1;
}

u8 func_15159184(void *arg0, s32 arg1) {
    s32 temp_t6;
    u8 var_v1;

    temp_t6 = arg1 & 0xFF;
    if ((temp_t6 == 2) || (temp_t6 == 3)) {
        if (D_800C35EA != 1) {
            var_v1 = 0;
        } else if (((*(s32 *)((char *)(arg0) + 0x118)) - 75.0f) < (*(s32 *)((char *)(arg0) + 0x18))) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
    } else {
        var_v1 = 0;
        if (((*(s32 *)((char *)(arg0) + 0x118)) - 75.0f) < (*(s32 *)((char *)(arg0) + 0x18))) {
            var_v1 = 1;
        }
    }
    return var_v1;
}

u8 func_15159230(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    u8 var_v1;

    temp_t6 = arg2 & 0xFF;
    if (((*(s32 *)((char *)(arg1) + 0x0)) != (*(s32 *)((char *)(arg0) + 0x14))) || ((*(s32 *)((char *)(arg1) + 0x4)) != (*(s32 *)((char *)(arg0) + 0x18))) || (var_v1 = 0, ((*(s32 *)((char *)(arg1) + 0x8)) != (*(s32 *)((char *)(arg0) + 0x1C))))) {
        if ((temp_t6 == 1) || (temp_t6 == 2)) {
            var_v1 = 2;
        } else {
            var_v1 = 1;
        }
    }
    return var_v1;
}

u8 func_151592B8(void *arg0, s32 arg1) {
    u8 spD;
    u16 spC;
    s32 var_v0;
    u8 *var_a2;
    u8 temp_t8;
    u8 var_v1;

    var_v0 = 0;
    if (!(arg1 & 0xFF)) {
        var_v0 = 0;
        var_a2 = &spD;
        spC = D_8008B040;
loop_2:
        temp_t8 = *var_a2;
        var_a2 -= 1;
        if ((*(s32 *)((char *)(arg0) + 0x84)) == temp_t8) {
            var_v0 = 1;
        }
        if (var_v0 == 0) {
            if ((u32) var_a2 < (u32) &spC) {

            } else {
                goto loop_2;
            }
        }
    }
    if (var_v0 != 0) {
        var_v1 = 3;
    } else if ((*(s32 *)((char *)(arg0) + 0xAD)) != 0) {
        var_v1 = 2;
    } else {
        var_v1 = 4;
        if ((*(s32 *)((char *)(arg0) + 0x28)) != 0.0f) {
            var_v1 = 1;
        }
    }
    return var_v1;
}

s32 func_15159370(void *arg0, s8 *arg1) {
    s32 var_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    var_v1 = 0;
    if (D_800BE616 != 0) {
        *arg1 = 0;
        var_v1 = 1;
    }
    if ((*(s32 *)((char *)(arg0) + 0x3B)) == 1) {
        *arg1 = 0;
        var_v1 = 1;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x5));
    if ((temp_v0 == 5) || (temp_v0 == 2)) {
        *arg1 = 1;
        var_v1 = 1;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x4));
    switch (temp_v0_2) {                            /* irregular */
    case 8:
        *arg1 = 2;
block_15:
        var_v1 = 1;
        break;
    case 10:
        *arg1 = 3;
        goto block_15;
    case 41:
    case 42:
        *arg1 = 4;
        goto block_15;
    }
    return var_v1;
}

u8 func_1515942C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *sp38;
    u8 sp37;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    u8 var_t2;
    void *temp_a1;

    sp37 = 0;
    var_t2 = sp37;
    if (func_1514ECE0((*(s32 *)((char *)(arg0) + 0x2F4)), 0x13, &sp38) == 0) {
        return 0U;
    }
    temp_a1 = (*(s32 *)((char *)(sp38) + 0x10));
    if (arg4 == -1) {
        var_t1 = 0x1E00;
    } else {
        var_t1 = 1 << (arg4 + 9);
    }
    if (arg3 == -1) {
        var_t0 = 0x1C0;
    } else {
        var_t0 = 1 << (arg3 + 6);
    }
    if (arg2 == -1) {
        var_a2 = 0x38;
    } else {
        var_a2 = 1 << (arg2 + 3);
    }
    if (arg1 == -1) {
        var_a3 = 7;
    } else {
        var_a3 = 1 << arg1;
    }
    if (arg5 == -1) {
        var_a0 = 0x3E000;
    } else {
        var_a0 = 1 << (arg5 + 0xD);
    }
    temp_v0 = var_a0 | var_a3 | var_a2 | var_t0 | var_t1;
    if (temp_v0 == (temp_v0 | ((1 << (*(s32 *)((char *)(temp_a1) + 0x2C))) | (1 << ((*(s32 *)((char *)(temp_a1) + 0x2D)) + 3)) | (1 << ((*(s32 *)((char *)(temp_a1) + 0x2E)) + 6)) | (1 << ((*(s32 *)((char *)(temp_a1) + 0x2F)) + 9)) | (1 << ((*(s32 *)((char *)(temp_a1) + 0x30)) + 0xD))))) {
        var_t2 = 1;
    }
    return var_t2;
}

u8 func_15159594(void *arg0, void *arg1) {
    u8 sp47;
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    sp47 = 1;
    if (func_151596BC(arg0, arg1) != 0) {
        if ((*(s32 *)((char *)(arg0) + 0x5C)) > 0.0f) {
            sp34 = (*(s32 *)((char *)(arg0) + 0x40)) + (*(s32 *)((char *)(arg0) + 0x4C));
            sp38 = (*(s32 *)((char *)(arg1) + 0x4));
            sp3C = (*(s32 *)((char *)(arg0) + 0x48)) + (*(s32 *)((char *)(arg0) + 0x54));
            if (func_1514672C(&sp34) == 0) {
                return 0U;
            }
            if (func_15046C00(&sp34, 0, (*(s32 *)((char *)(arg0) + 0x44)), (char *)(arg0) + 0x80) != 0) {
                sp38 = (*(s32 *)((char *)(arg0) + 0x80));
                if ((*(s32 *)((char *)(arg0) + 0x9D)) == 3) {
                    func_151DBCBC(func_151D8E20() & 0xFF, (*(s32 *)((char *)(arg0) + 0xA8)) * D_800A63A4, 0xFFU, (char *)(arg0) + 0x84, &sp34, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                }
                sp47 = 0;
            }
            goto block_9;
        }
        goto block_9;
    }
    sp47 = 0;
block_9:
    return sp47;
}

u8 func_151596BC(void *arg0, void *arg1) {
    f32 sp30;
    u8 sp2B;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_s0;

    sp2B = 1;
    temp_a0 = (*(s32 *)((char *)(arg0) + 0xAC)) + ((*(s32 *)((char *)(arg0) + 0xAE)) * D_800BE9E4);
    (*(s32 *)((char *)(arg0) + 0xAC)) = temp_a0;
    (*(u8 *)((char *)(arg0) + 0xAD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xAD)) + ((*(u8 *)((char *)(arg0) + 0xAF)) * D_800BE9E4));
    sp30 = func_151423D8((temp_a0 - 0x40) & 0xFF);
    temp_s0 = (char *)(arg0) + 0xA8;
    temp_f0 = func_151423D8(((*(s32 *)((char *)(temp_s0) + 0x5)) - 0x40) & 0xFF);
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x5C));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) + ((*(f32 *)((char *)(temp_s0) + 0x8)) * sp30));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) + ((*(f32 *)((char *)(temp_s0) + 0xC)) * temp_f0));
    if (temp_f2 > 0.0f) {
        temp_f0_2 = (*(s32 *)((char *)(temp_s0) + 0x10));
        if (temp_f0_2 < temp_f2) {
            (*(s32 *)((char *)(arg0) + 0x5C)) = temp_f0_2;
        }
        sp24 = (*(s32 *)((char *)(arg0) + 0x5C)) * (*(s32 *)((char *)(temp_s0) + 0x14));
        temp_a0_2 = (*(s32 *)((char *)(temp_s0) + 0x18)) + ((*(s32 *)((char *)(temp_s0) + 0x1A)) * D_800BE9E4);
        (*(s32 *)((char *)(temp_s0) + 0x18)) = temp_a0_2;
        (*(u8 *)((char *)(temp_s0) + 0x19)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x19)) + ((*(u8 *)((char *)(temp_s0) + 0x1B)) * D_800BE9E4));
        sp30 = func_151423D8((temp_a0_2 - 0x40) & 0xFF);
        temp_f0_3 = func_151423D8(((*(s32 *)((char *)(temp_s0) + 0x19)) - 0x40) & 0xFF);
        (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x1C)) * sp30 * sp24);
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x20)) * temp_f0_3 * sp24);
    }
    if (((*(s32 *)((char *)(arg0) + 0x68)) & 0x2000) && ((*(s32 *)((char *)(temp_s0) + 0x24)) < ((*(s32 *)((char *)(arg0) + 0x50)) + (*(s32 *)((char *)(arg0) + 0x44))))) {
        sp2B = 0;
    }
    return sp2B;
}

s32 func_15159890(f32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    f32 sp1C;
    f32 temp_f2;
    s32 temp_v0;
    s32 var_v1;

    sp65 = 0x2F;
    sp50 = 0xC01;
    sp48 = 0x200005;
    sp4C = 0;
    sp62 = 0;
    sp61 = 0;
    sp60 = 0;
    sp5F = 0;
    sp5E = 0;
    sp5D = 0;
    sp5C = 0;
    sp58 = 0;
    sp54 = 0;
    sp64 = 0xFF;
    sp6A = 0;
    sp6C = 0.0f;
    spA0 = 0x3207;
    spA8 = 5;
    spA9 = 5;
    spAA = 4;
    spAB = -1;
    (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp40 = 1000.0f;
    sp2C = 4.0f;
    sp30 = 0.25f;
    (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    if (random_u32() & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 25U) + 0x1E;
    sp66 = 0x1E;
    sp68 = 8;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 20.0f) + 49.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A63A8) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A63AC) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A63B0) + D_800A63B4) * sp1C;
    sp3C = ((random_float() * D_800A63B8) + D_800A63BC) * sp1C;
    sp9C = ((random_float() * 254.0f) + 108.0f) * D_800A63C0;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp44 = temp_v0;
        memcpy(temp_v0 + 0xA8, &sp1C, 0x28);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_15159BB0(f32 arg0, f32 arg1, f32 arg2, void * arg3, void *arg6) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    s32 sp18;

    sp24 = arg0;
    sp28 = arg1;
    sp18 = 0;
    sp1C = 0.0f;
    sp20 = 0.0f;
    sp2C = arg2;
    func_15159890(&sp24, &sp18, (*(s32 *)((char *)(arg6) + 0xC)), (*(s32 *)((char *)(arg6) + 0x1)));
}

void func_15159C08(void *arg0) {
    s8 sp17F;
    s8 sp17E;
    s8 sp17D;
    s8 sp17C;
    s32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    void * sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    s16 sp13E;
    s16 sp13C;
    s16 sp13A;
    s8 sp139;
    s8 sp138;
    s8 sp137;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s8 sp133;
    s8 sp132;
    s8 sp131;
    s8 sp130;
    s32 sp12C;
    s32 sp128;
    s16 sp126;
    s16 sp124;
    s32 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    void * sp110;
    void * sp10C;
    void * sp108;
    f32 sp104;
    f32 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    f32 spF8;
    f32 spA0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s32 temp_f16;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    if (func_151454BC(D_800BE9EB, 0x453B8000, temp_s0) != 0) {
        (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) + (((*(f32 *)((char *)(temp_s0) + 0x2C)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x30)))) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f) {
            sp139 = 0x2F;
            sp124 = 0xC01;
            sp11C = 0x200005;
            sp120 = 0;
            sp136 = 0;
            sp135 = 0;
            sp134 = 0;
            sp133 = 0;
            sp132 = 0;
            sp131 = 0;
            sp130 = 0;
            sp12C = 0;
            sp128 = 0;
            sp138 = 0xFF;
            sp13E = 0;
            sp140 = 0.0f;
            sp174 = 0x1205;
            sp17C = 5;
            sp17D = 5;
            sp17E = 0xC;
            sp17F = -1;
            (*(s32 *)((char *)&(sp14C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
            (*(s32 *)((char *)&(sp14C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x4));
            (*(s32 *)((char *)&(sp14C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x8));
            sp158 = 0.0f;
            sp15C = 0.0f;
            sp160 = 0.0f;
            spFC = 0;
            spFD = 0;
            sp170 = 0.0f;
            temp_f30 = D_800A63C4;
            do {
                temp_f20 = random_float() * temp_f30;
                temp_f22 = random_float() * (*(s32 *)((char *)(temp_s0) + 0x1C));
                temp_f24 = sinf(temp_f20) * temp_f22;
                temp_f20_2 = cosf(temp_f20) * temp_f22;
                func_150A8050(&spA0, (*(s32 *)((char *)(temp_s0) + 0x20)), (*(s32 *)((char *)(temp_s0) + 0x24)), 0);
                func_150A7960(&spA0, temp_f24, 0, temp_f20_2, &sp108, &sp10C, &sp110);
                sp114 = random_float() * temp_f30;
                sp118 = ((random_float() * 320.0f) + -160.0f) * D_800A63C8;
                temp_f20_3 = ((random_float() * 161.0f) + 446.0f) * D_800A63CC;
                temp_f24_2 = 1.0f / temp_f20_3;
                temp_f22_2 = (*(s32 *)((char *)(temp_s0) + 0x18)) * temp_f24_2;
                temp_f2 = ((random_float() * D_800A63D0) + D_800A63D4) * D_800A63D8 * temp_f24_2;
                temp_f12 = temp_f2;
                sp164 = (*(s32 *)((char *)(temp_s0) + 0xC)) * temp_f20_3;
                sp168 = (*(s32 *)((char *)(temp_s0) + 0x10)) * temp_f20_3;
                sp16C = (*(s32 *)((char *)(temp_s0) + 0x14)) * temp_f20_3;
                if (temp_f22_2 > 500.0f) {
                    sp126 = 0x1F4;
                } else {
                    sp126 = (s16) (s32) ((temp_f2 * 0.5f) + temp_f22_2);
                }
                temp_f16 = (s32) temp_f12;
                sp174 &= ~0xC0;
                sp13C = (s16) (0xFF / (s16) temp_f16);
                sp13A = (s16) temp_f16;
                if (random_u32(temp_f12) & 1) {
                    sp174 |= 0x40;
                }
                if (random_u32() & 1) {
                    sp174 |= 0x80;
                }
                sp137 = (random_u32() % 51U) + 0x7C;
                temp_f2_2 = (random_float() * 100.0f) + 240.0f;
                sp144 = temp_f2_2;
                spF8 = temp_f2_2;
                sp148 = temp_f2_2;
                spFE = (random_u32() % 5U) + 4;
                spFF = (random_u32() % 5U) + 4;
                sp100 = ((random_float() * 0.25f) + D_800A63DC) * spF8;
                sp104 = ((random_float() * 0.25f) + D_800A63E0) * spF8;
                temp_v0 = func_151303BC(&sp11C, 2, 0x24);
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0xA8, &spF8, 0x24);
                }
                (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f);
        }
    }
}

s32 func_1515A11C(void *arg0, void * arg1) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    u8 temp_a0;
    void *temp_s0;

    temp_a0 = (*(s32 *)((char *)(arg0) + 0xAC)) + ((*(s32 *)((char *)(arg0) + 0xAE)) * D_800BE9E4);
    (*(s32 *)((char *)(arg0) + 0xAC)) = temp_a0;
    (*(u8 *)((char *)(arg0) + 0xAD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xAD)) + ((*(u8 *)((char *)(arg0) + 0xAF)) * D_800BE9E4));
    sp20 = func_151423D8((temp_a0 - 0x40) & 0xFF);
    temp_s0 = (char *)(arg0) + 0xA8;
    temp_f0 = func_151423D8(((*(s32 *)((char *)(temp_s0) + 0x5)) - 0x40) & 0xFF);
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) + ((*(f32 *)((char *)(temp_s0) + 0x8)) * sp20));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) + ((*(f32 *)((char *)(temp_s0) + 0xC)) * temp_f0));
    (*(f32 *)((char *)(temp_s0) + 0x1C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x1C)) + ((*(f32 *)((char *)(temp_s0) + 0x20)) * D_800BE9A4));
    temp_f0_2 = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x1C)));
    (*(s32 *)((char *)(temp_s0) + 0x1C)) = temp_f0_2;
    temp_f0_3 = sinf(temp_f0_2);
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) * temp_f0_3);
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) * temp_f0_3);
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x18)) * temp_f0_3);
    return 1;
}

s32 func_1515A238(f32 *arg0, void *arg1, f32 arg2, f32 arg3, f32 *arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, s32 arg10) {
    s32 spE4;
    s8 spD9;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s32 spCC;
    f32 spC8;
    void * spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    void * spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp92;
    s8 sp91;
    s8 sp90;
    u8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp84;
    s32 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    s8 sp57;
    s8 sp56;
    u8 sp55;
    u8 sp54;
    f32 sp50;
    s8 sp48;
    f32 sp2C;
    s32 sp24;
    f32 temp_f8;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    sp91 = 0x2F;
    sp7C = 0x2203;
    sp74 = 0x200005;
    sp78 = 0;
    sp8E = 0;
    sp8D = 0;
    sp8C = 0;
    sp8B = 0;
    sp8A = 0;
    sp89 = 0;
    sp88 = 0;
    sp84 = 0;
    sp80 = 0;
    sp90 = 0xFF;
    sp96 = 0;
    sp98 = 0.0f;
    if (random_u32() & 1) {
        var_v1_2 = 0x40;
    } else {
        var_v1_2 = 0;
    }
    sp24 = var_v1_2;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    spCC = var_v0 | 0x1007 | var_v1_2 | 0xC000;
    spD4 = 6;
    spD5 = 8;
    if (arg8 != 0) {
        spD6 = 0x15;
    } else {
        spD6 = 0x14;
    }
    spD7 = -1;
    spD8 = -1;
    (*(s32 *)((char *)&(spA4) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spB0 = 0.0f;
    spB4 = 0.0f;
    spB8 = 0.0f;
    sp92 = 1;
    sp94 = 0xFF;
    sp50 = arg5;
    sp9C = arg5;
    spA0 = arg5;
    sp54 = random_u32();
    sp55 = random_u32();
    sp56 = (random_u32() % 5U) + 4;
    sp57 = (random_u32() % 5U) + 4;
    sp58 = ((random_float() * 0.25f) + D_800A63E4) * sp50;
    temp_f8 = random_float() * 0.25f;
    sp60 = 0;
    sp61 = 0;
    sp5C = (temp_f8 + D_800A63E8) * sp50;
    sp62 = (random_u32() % 5U) + 4;
    sp63 = (random_u32() % 5U) + 4;
    sp64 = ((random_float() * D_800A63EC) + D_800A63F0) * sp50;
    sp68 = ((random_float() * D_800A63F4) + D_800A63F8) * sp50;
    (*(f32 *)((char *)&(spBC) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(f32 *)((char *)&(spBC) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
    spD9 = 0;
    sp7E = arg6;
    sp8F = arg7;
    spC8 = arg2;
    sp6C = arg3;
    if (((*(s32 *)((char *)(arg1) + 0x0)) != 0.0f) || ((*(s32 *)((char *)(arg1) + 0x8)) != 0.0f)) {
        sp70 = D_800A63FC;
    } else {
        if (arg4 != NULL) {
            M2C_MEMCPY_ALIGNED(&sp2C, arg4, 0x24);
        } else {
            sp48 = 0;
        }
        if (func_1514672C(arg0) != 0) {
            if (func_15046C00(arg0, 0, 19500.0f, &sp2C) != 0) {
                arg4 = &sp2C;
                sp70 = sp2C;
            } else {
                sp70 = D_800A6400;
            }
        } else {
            sp70 = D_800A6404;
        }
    }
    temp_v0 = func_15130280(&sp74, 2, arg4, 0x24, (s32) arg9, arg10);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spE4 = temp_v0;
        memcpy(temp_v0 + 0xA8, &sp50, 0x24);
        var_v1 = spE4;
    }
    return var_v1;
}

s32 func_1515A60C(void *arg0, void *arg1) {
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0xA8;
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((func_151423D8(((*(s32 *)((char *)(arg0) + 0xAC)) - 0x40) & 0xFF) * (*(f32 *)((char *)(temp_s1) + 0x8))) + (*(f32 *)((char *)(arg0) + 0xA8)));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((func_151423D8(((*(s32 *)((char *)(temp_s1) + 0x5)) - 0x40) & 0xFF) * (*(f32 *)((char *)(temp_s1) + 0xC))) + (*(f32 *)((char *)(arg0) + 0xA8)));
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) (func_151423D8(((*(s32 *)((char *)(temp_s1) + 0x10)) - 0x40) & 0xFF) * (*(f32 *)((char *)(temp_s1) + 0x14)));
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) (func_151423D8(((*(s32 *)((char *)(temp_s1) + 0x11)) - 0x40) & 0xFF) * (*(f32 *)((char *)(temp_s1) + 0x18)));
    (*(u8 *)((char *)(temp_s1) + 0x4)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0x4)) + ((*(u8 *)((char *)(temp_s1) + 0x6)) * D_800BE9E4));
    (*(u8 *)((char *)(temp_s1) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0x5)) + ((*(u8 *)((char *)(temp_s1) + 0x7)) * D_800BE9E4));
    (*(u8 *)((char *)(temp_s1) + 0x10)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0x10)) + ((*(u8 *)((char *)(temp_s1) + 0x12)) * D_800BE9E4));
    (*(u8 *)((char *)(temp_s1) + 0x11)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0x11)) + ((*(u8 *)((char *)(temp_s1) + 0x13)) * D_800BE9E4));
    var_v0 = D_800BE9E4;
    if (var_v0 > 0) {
        do {
            var_v0 -= 1;
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(temp_s1) + 0x1C)));
            (*(f32 *)((char *)(arg0) + 0x5C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5C)) * (*(f32 *)((char *)(temp_s1) + 0x1C)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(temp_s1) + 0x1C)));
        } while (var_v0 > 0);
    }
    return 1;
}

u8 func_1515A78C(void *arg0, void *arg1) {
    u8 sp4B;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 *sp34;
    f32 *temp_t8;
    f32 temp_f0;

    sp4B = 1;
    func_1515A60C(arg0, arg1);
    if ((*(s32 *)((char *)(arg0) + 0x5C)) < 0.0f) {
        return 1U;
    }
    temp_t8 = (char *)(arg0) + 0xA8;
    sp3C = (*(s32 *)((char *)(arg0) + 0x40)) + (*(s32 *)((char *)(arg0) + 0x4C));
    sp40 = (*(s32 *)((char *)(arg1) + 0x4));
    sp34 = temp_t8;
    sp44 = (*(s32 *)((char *)(arg0) + 0x48)) + (*(s32 *)((char *)(arg0) + 0x54));
    temp_f0 = (*(s32 *)((char *)(temp_t8) + 0x20));
    if (D_800A6408 == temp_f0) {
        if (func_1514672C(&sp3C) == 0) {
            return 0U;
        }
        if (func_15046C00(&sp3C, 0, (*(s32 *)((char *)(arg0) + 0x44)), (char *)(arg0) + 0x80) != 0) {
            sp4B = 0;
            sp40 = (*(s32 *)((char *)(arg0) + 0x80));
        }
        goto block_9;
    }
    if (temp_f0 <= (*(s32 *)((char *)(arg0) + 0x44))) {
        sp40 = temp_f0;
        sp4B = 0;
    }
block_9:
    if ((sp4B == 0) && (random_float() < D_800A640C) && ((*(s32 *)((char *)(arg0) + 0x9D)) == 3)) {
        func_151DBCBC(func_151D8E20() & 0xFF, *sp34 * D_800A6410, (*(s32 *)((char *)(arg0) + 0x2B)), (char *)(arg0) + 0x84, &sp3C, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
    return sp4B;
}

s32 func_1515A920(void *arg0, s32 *arg1) {
    void *sp1C;

    if (func_1514ECE0((*(s32 *)((char *)(arg0) + 0x2F4)), 0x13, &sp1C, arg0) == 0) {
        return 0;
    }
    *arg1 = (*(s32 *)((char *)(sp1C) + 0x10)) + 0x34;
    return 1;
}

void func_1515A974(void *arg0, void * arg1) {
    s8 sp86;
    s8 sp85;
    s8 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void *sp64;
    s8 sp60;
    void * sp30;
    f32 sp2C;
    s32 temp_v0_2;
    u8 temp_v1;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1F));
    if ((s32) temp_v1 <= 0) {
        temp_v0 = (temp_v1 * 0x34) + &D_800A636C;
        sp60 = 0xF;
        sp84 = 0;
        sp85 = -1;
        sp86 = 2;
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp78 = 0.0f;
        sp7C = 0.0f;
        sp80 = 0.0f;
        sp64 = arg0;
        sp68 = (*(s32 *)((char *)(temp_v0) + 0x0));
        sp6C = (*(s32 *)((char *)(temp_v0) + 0x4));
        sp2C = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
        M2C_MEMCPY_ALIGNED(&sp30, (char *)(temp_v0) + 0xC, 0x24);
        (*(s32 *)((char *)&(sp30) + 0x24)) = (s32) (*(s32 *)((char *)(((char *)(temp_v0) + 0x24)) + 0xC));
        temp_v0_2 = func_151A8B20(&sp60, -1, 0x2C, 0xFF, 0);
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0x80, &sp2C, 0x2C);
        }
    }
}

void func_1515AA84(void *arg0, void *arg1, f32 arg2, void * arg3) {
    void * sp58;
    f32 sp54;
    void * sp48;
    f32 sp44;
    s32 temp_v0;

    sp44 = 0.0f;
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp54 = arg2;
    M2C_MEMCPY_ALIGNED(&sp58, (char *)(arg0) + 0x84, 0x28);
    temp_v0 = func_15149130((s16) ((random_u32(arg2) % (u32) ((*(s16 *)((char *)(((char *)(arg0) + 0x80)) + 0x2)) + 1)) + (*(s16 *)((char *)(arg0) + 0x80))), -1, 0x3F, -1, 1, 0, 0x3C, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp44, 0x3C);
    }
}

void func_1515AB88(void *arg0) {
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    u8 spB2;
    u8 spB1;
    u8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    f32 sp74;
    f32 temp_f10;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + (((*(f32 *)((char *)(temp_s0) + 0x14)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x18)))) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f) {
        sp78 = 0;
        sp79 = 0;
        sp8C = 0;
        sp8D = 0;
        sp84 = (*(s32 *)((char *)(temp_s0) + 0x2C));
        sp88 = (*(s32 *)((char *)(temp_s0) + 0x30));
        spB9 = 0x2F;
        spA4 = 0x4403;
        sp9C = 0x200005;
        spA0 = 0x9F0600;
        spA6 = 0x12C;
        spA8 = 0;
        spAC = 0;
        spB4 = 0xFF;
        spB5 = 0xFF;
        spB6 = 0xFF;
        spB3 = 0xFF;
        sp98 = (*(s32 *)((char *)(temp_s0) + 0x10));
        spB0 = (*(s32 *)((char *)(temp_s0) + 0x36));
        spB1 = (*(s32 *)((char *)(temp_s0) + 0x37));
        spB8 = 0xFF;
        spB2 = (*(s32 *)((char *)(temp_s0) + 0x38));
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x8));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s0) + 0xC));
        temp_f26 = D_800A6414;
        temp_f24 = D_800A6418;
        temp_f22 = D_800A641C;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        spBA = 1;
        spBC = 0xFF;
        spBE = 1;
        spC0 = 1.0f;
        spFC = 6;
        spFD = 9;
        spFE = 4;
        spFF = -1;
        sp100 = -1;
        sp101 = 0;
        spD8 = 0.0f;
        spDC = 0.0f;
        spE0 = 0.0f;
        do {
            sp7A = (random_u32() % 5U) + 4;
            sp7B = (random_u32() % 5U) + 4;
            temp_f10 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x20))) + (*(s32 *)((char *)(temp_s0) + 0x1C));
            spC8 = temp_f10;
            spC4 = temp_f10;
            sp74 = temp_f10;
            sp7C = ((random_float() * 0.25f) + temp_f22) * sp74;
            sp80 = ((random_float() * 0.25f) + temp_f22) * sp74;
            sp8E = (random_u32() % 5U) + 4;
            sp8F = (random_u32() % 5U) + 4;
            sp90 = ((random_float() * temp_f24) + temp_f26) * sp74;
            sp94 = ((random_float() * temp_f24) + temp_f26) * sp74;
            spF0 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x28))) + (*(s32 *)((char *)(temp_s0) + 0x24));
            spB7 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x35)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x34));
            var_s1 = 0;
            if (random_u32() & 1) {
                var_s1 = 0x40;
            }
            if (random_u32() & 1) {
                var_v0 = 0x80;
            } else {
                var_v0 = 0;
            }
            spF4 = var_v0 | 6 | var_s1 | 0xF000;
            temp_v0 = func_15130280(&sp9C, 2, NULL, 0x28, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp74, 0x28);
            }
            (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) - 1.0f);
        } while ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f);
    }
}
