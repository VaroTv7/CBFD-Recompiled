/**
 * Auto-decompiled from asm/17CAF0.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 *allocate_memory();                  /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                        /* extern */
void * func_150CCEB0();                     /* extern */
s32 func_15130280();       /* extern */
s32 func_1513264C(); /* extern */
s32 func_15132A4C();        /* extern */
s32 func_1513F4E4();                   /* extern */
void *func_15142B7C();              /* extern */
s32 func_15142C10(); /* extern */
s32 func_15142CF0(); /* extern */
void *func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143794();              /* extern */
void * func_15143874();            /* extern */
void * func_151441A4(); /* extern */
void * func_151442FC(); /* extern */
f32 func_15144A74();                      /* extern */
s32 func_15144E80();     /* extern */
s32 func_15145128();          /* extern */
s32 func_15145C90();                             /* extern */
s32 func_15146078();             /* extern */
void * func_15147DA0(); /* extern */
void * func_15156190();              /* extern */
void * func_15157898(); /* extern */
void * func_1515C2F0();        /* extern */
void *func_15167A68();      /* extern */
void * func_15167D84();          /* extern */
s32 func_1517EF00();                             /* extern */
s32 func_15181CC8();                        /* extern */
void * func_1518A3C0(); /* extern */
void * func_151A2A14(); /* extern */
void * func_151A2AD4(); /* extern */
void * func_151C5F44(); /* extern */
void * func_151D9014(); /* extern */
void * func_151DA6F8(); /* extern */
void * memcpy();                       /* extern */
void func_1514FF44();
void func_15153CCC();
s32 func_151555AC();
extern s32 D_8008AC60;
extern s32 D_8008ACC8;
extern s32 D_8008AD04;
extern s32 D_80090B60;
extern s32 D_800A4AC8;
extern s32 D_800A5FE0;
extern f32 D_800A5FF0;
extern f32 D_800A5FF4;
extern f32 D_800A5FF8;
extern f32 D_800A5FFC;
extern f32 D_800A6000;
extern f32 D_800A6004;
extern f32 D_800A6008;
extern f32 D_800A600C;
extern f32 D_800A6010;
extern f32 D_800A6014;
extern f32 D_800A6018;
extern f32 D_800A601C;
extern f32 D_800A6020;
extern f32 D_800A6024;
extern f32 D_800A6028;
extern f32 D_800A602C;
extern s32 D_800A6030;
extern s32 D_800A6038;
extern s32 D_800D2C9C;
extern s32 D_800DCE50;
void func_1514F640();

void func_1514F640(void * *arg0, void *arg1) {
    f32 *sp24;
    f32 *temp_a3;

    (*(s32 *)((char *)(arg1) + 0x0)) = 2;
    temp_a3 = (char *)(arg1) + 4;
    (*(f32 *)((char *)(arg1) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x20));
    sp24 = temp_a3;
    if ((func_15144E80((char *)(arg0) + 0xC, (char *)(arg1) + 0x10, (char *)(arg1) + 0x1C, temp_a3) != 0) && (func_15144A74(temp_a3, arg0) < 0.0f)) {
        (*(f32 *)((char *)(arg1) + 0x4)) = (f32) -(*(f32 *)((char *)(arg1) + 0x4));
        (*(f32 *)((char *)(arg1) + 0x8)) = (f32) -(*(f32 *)((char *)(arg1) + 0x8));
        (*(f32 *)((char *)(arg1) + 0xC)) = (f32) -(*(f32 *)((char *)(arg1) + 0xC));
    }
}

s32 func_1514F6E8(void * *arg0) {
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    u8 temp_t1;
    u8 temp_t8;
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_a0 = (char *)(arg0) + 4;
    if (!(var_v0 & 1)) {
        if (func_15145128(temp_a0, temp_a0, NULL, NULL) == 0) {
            return 0;
        }
        temp_t8 = (*(s32 *)((char *)(arg0) + 0x0)) | 1;
        (*(s32 *)((char *)(arg0) + 0x0)) = temp_t8;
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) * 1000.0f);
        var_v0 = temp_t8 & 0xFF;
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) * 1000.0f);
        (*(f32 *)((char *)(arg0) + 0xC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) * 1000.0f);
        goto block_4;
    }
block_4:
    if (!(var_v0 & 2)) {
        if (func_15146078((char *)(arg0) + 4, (char *)(arg0) + 0x10, (char *)(arg0) + 0x1C) == 0) {
            return 0;
        }
        temp_t1 = (*(s32 *)((char *)(arg0) + 0x0)) | 6;
        (*(s32 *)((char *)(arg0) + 0x0)) = temp_t1;
        var_v0 = temp_t1 & 0xFF;
        goto block_8;
    }
block_8:
    temp_a0_2 = (char *)(arg0) + 0x10;
    if (!(var_v0 & 4)) {
        temp_a0_3 = (char *)(arg0) + 0x1C;
        if (func_15145128(temp_a0_2, temp_a0_2, NULL, NULL) == 0) {
            return 0;
        }
        if (func_15145128(temp_a0_3, temp_a0_3, NULL, NULL) == 0) {
            return 0;
        }
        (*(u8 *)((char *)(arg0) + 0x0)) = (u8) ((*(u8 *)((char *)(arg0) + 0x0)) | 4);
        goto block_14;
    }
block_14:
    return 1;
}

void func_1514F808(void * *arg0, f32 arg1, f32 *arg2) {
    f32 sp2C;
    f32 sp28;
    u32 sp20;

    sp20 = random_u32();
    func_15143874((s16) (sp20 & 0xFF), random_float() * (*(s16 *)((char *)(arg0) + 0x28)), &sp28, &sp2C);
    (*(s32 *)((char *)(arg2) + 0x0)) = (((*(s32 *)((char *)(arg0) + 0x10)) * sp28) + ((*(s32 *)((char *)(arg0) + 0x1C)) * sp2C) + (*(s32 *)((char *)(arg0) + 0x4))) * arg1;
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x14)) * sp28) + ((*(f32 *)((char *)(arg0) + 0x20)) * sp2C) + (*(f32 *)((char *)(arg0) + 0x8))) * arg1);
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((((*(f32 *)((char *)(arg0) + 0x18)) * sp28) + ((*(f32 *)((char *)(arg0) + 0x24)) * sp2C) + (*(f32 *)((char *)(arg0) + 0xC))) * arg1);
}

void func_1514F8F8(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, u8 arg5, s32 arg6) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    void *sp94;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s32 var_s3;
    u32 temp_s1;

    (*(s32 *)((char *)(arg1) + 0x0)) *= 1000.0f;
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg1) + 0x4)) * 1000.0f);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8)) * 1000.0f);
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s3 != 0) {
        sp94 = arg0 + 8;
        do {
            temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14));
            temp_s1 = random_u32();
            func_15143874((s16) (temp_s1 & 0xFF), random_float() * arg4, &spA8, &spAC);
            spB0 = (((*(s32 *)((char *)(arg2) + 0x0)) * spA8) + ((*(s32 *)((char *)(arg3) + 0x0)) * spAC) + (*(s32 *)((char *)(arg1) + 0x0))) * temp_f20;
            spB4 = (((*(s32 *)((char *)(arg2) + 0x4)) * spA8) + ((*(s32 *)((char *)(arg3) + 0x4)) * spAC) + (*(s32 *)((char *)(arg1) + 0x4))) * temp_f20;
            spB8 = (((*(s32 *)((char *)(arg2) + 0x8)) * spA8) + ((*(s32 *)((char *)(arg3) + 0x8)) * spAC) + (*(s32 *)((char *)(arg1) + 0x8))) * temp_f20;
            temp_f22 = random_float();
            temp_f20_2 = random_float();
            func_151A2AD4(sp94, &spB0, (temp_f22 * (*(u32 *)((char *)(arg0) + 0x20))) + (*(u32 *)((char *)(arg0) + 0x1C)), (temp_f20_2 * (*(u32 *)((char *)(arg0) + 0x28))) + (*(u32 *)((char *)(arg0) + 0x24)), (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x30)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2C)), (*(u32 *)((char *)(arg0) + 0x34)), (*(u32 *)((char *)(arg0) + 0x38)), (*(u32 *)((char *)(arg0) + 0x3C)), (*(u32 *)((char *)(arg0) + 0x40)), (s32) (*(u32 *)((char *)(arg0) + 0x44)), (s32) (*(u32 *)((char *)(arg0) + 0x46)), (s32) (*(u32 *)((char *)(arg0) + 0x48)), (s32) (*(u32 *)((char *)(arg0) + 0x4A)), (s32) (*(u32 *)((char *)(arg0) + 0x4C)), (s32) (*(u32 *)((char *)(arg0) + 0x4E)), (s32) (*(u32 *)((char *)(arg0) + 0x50)), (s32) arg5, arg6);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_1514FB98(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp34;
    f32 sp28;

    if (func_15146078(arg0, &sp34, &sp28) != 0) {
        func_1514F8F8(arg0 + 0x10, arg0, &sp34, &sp28, (*(u8 *)((char *)(arg0) + 0xC)), (u8) (s32) arg1, arg2);
    }
}

void func_1514FBFC(void * *arg0, s32 arg1, s32 arg2) {
    f32 sp5C;
    void * sp58;
    void * sp54;
    f32 sp48;
    void * sp44;
    void * sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    void * sp30;
    void * sp2C;

    if (func_15144E80((char *)(arg0) + 0xC, &sp5C, &sp48, &sp34) != 0) {
        func_15145128(&sp5C, &sp5C, &sp58, &sp54);
        func_15145128(&sp48, &sp48, &sp44, &sp40);
        func_15145128(&sp34, &sp34, &sp30, &sp2C);
        if (func_15144A74(&sp34, arg0) < 0.0f) {
            sp34 = -sp34;
            sp38 = -sp38;
            sp3C = -sp3C;
        }
        func_1514F8F8((char *)(arg0) + 0x24, &sp34, &sp5C, &sp48, (*(u8 *)((char *)(arg0) + 0x20)), (u8) (s32) arg1, arg2);
    }
}

void func_1514FCE8(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_s3;

    var_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0xC)) + 1)) + (*(u32 *)((char *)(arg0) + 0x8));
    if (var_s2 != 0) {
        do {
            temp_s3 = random_u32();
            temp_s1 = random_u32();
            temp_f20 = random_float();
            temp_f22 = random_float();
            temp_f24 = random_float();
            func_151A2A14((char *)(arg0) + 0x10, (s16) ((temp_s3 % (u32) ((*(s16 *)((char *)(arg0) + 0x2)) + 1)) + (*(s16 *)((char *)(arg0) + 0x0))), (s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x6)) + 1)) + (*(s16 *)((char *)(arg0) + 0x4))), (temp_f20 * (*(s16 *)((char *)(arg0) + 0x20))) + (*(s16 *)((char *)(arg0) + 0x1C)), (temp_f22 * (*(s16 *)((char *)(arg0) + 0x28))) + (*(s16 *)((char *)(arg0) + 0x24)), (temp_f24 * (*(s16 *)((char *)(arg0) + 0x30))) + (*(s16 *)((char *)(arg0) + 0x2C)), (random_u32() % (u32) ((*(s16 *)((char *)(arg0) + 0x38)) + 1)) + (*(s16 *)((char *)(arg0) + 0x34)), (*(s16 *)((char *)(arg0) + 0x3C)), (*(s16 *)((char *)(arg0) + 0x40)), (*(s16 *)((char *)(arg0) + 0x44)), (*(s16 *)((char *)(arg0) + 0x48)), (s32) (*(s16 *)((char *)(arg0) + 0x4C)), (s32) (*(s16 *)((char *)(arg0) + 0x4E)), (s32) (*(s16 *)((char *)(arg0) + 0x50)), (s32) (*(s16 *)((char *)(arg0) + 0x52)), (s32) (*(s16 *)((char *)(arg0) + 0x54)), (s32) (*(s16 *)((char *)(arg0) + 0x56)), (s32) (*(s16 *)((char *)(arg0) + 0x58)), arg1 & 0xFF, arg2);
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
}

void func_1514FEFC(void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void * sp24;

    func_1514F640(&sp24, 0);
    func_1514FF44(&sp24, arg1, arg2, arg3, arg4);
}

void func_1514FF44(void * *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 spA8;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s32 var_s3;
    s32 var_t3;
    u32 temp_s1;
    u32 temp_s2;

    if (func_1514F6E8(arg0) != 0) {
        var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0xE)) + 1)) + (*(u32 *)((char *)(arg1) + 0xC));
        if (var_s3 != 0) {
            temp_f26 = D_800A5FF0;
            do {
                func_1514F808(arg0, (random_float() * (*(s32 *)((char *)(arg1) + 0x14))) + (*(s32 *)((char *)(arg1) + 0x10)), &spA8);
                temp_f24 = random_float();
                temp_s1 = random_u32();
                temp_s2 = random_u32();
                temp_f20 = random_float();
                temp_f22 = random_float();
                temp_f0 = random_float();
                if (temp_f22 < (*(s32 *)((char *)(arg1) + 0x34))) {

                }
                var_t3 = 0;
                if (temp_f0 < (*(s32 *)((char *)(arg1) + 0x3C))) {
                    var_t3 = 1;
                }
                func_151D9014(arg1, &spA8, (*(s32 *)((char *)(arg1) + 0x31)), (temp_f24 * (*(s32 *)((char *)(arg1) + 0x20))) + (*(s32 *)((char *)(arg1) + 0x1C)), var_t3, arg3 & 0xFF, arg4);
                var_s3 -= 1;
            } while (var_s3 != 0);
        }
    }
}

void func_15150178(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 spA8;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s32 var_s4;
    s32 var_t5;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s2;
    u32 temp_s2_2;

    var_s4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0xE)) + 1)) + (*(u32 *)((char *)(arg1) + 0xC));
    if (var_s4 != 0) {
        temp_f26 = D_800A5FF4;
        do {
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x2)) + 1)) + (*(s16 *)((char *)(arg0) + 0x0))), (s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x6)) + 1)) + (*(s16 *)((char *)(arg0) + 0x4))), (random_float() * (*(s16 *)((char *)(arg1) + 0x14))) + (*(s16 *)((char *)(arg1) + 0x10)), &spA8);
            temp_f24 = random_float();
            temp_s1_2 = random_u32();
            temp_s2_2 = random_u32();
            temp_f20 = random_float();
            temp_f22 = random_float();
            temp_f0 = random_float();
            if (temp_f22 < (*(s32 *)((char *)(arg1) + 0x34))) {

            }
            var_t5 = 0;
            if (temp_f0 < (*(s32 *)((char *)(arg1) + 0x3C))) {
                var_t5 = 1;
            }
            func_151D9014(arg1, &spA8, (*(s32 *)((char *)(arg1) + 0x31)), (temp_f24 * (*(s32 *)((char *)(arg1) + 0x20))) + (*(s32 *)((char *)(arg1) + 0x1C)), var_t5, arg3 & 0xFF, arg4);
            var_s4 -= 1;
        } while (var_s4 != 0);
    }
}

void func_15150400(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 spE8;
    s16 spE4;
    s16 spE2;
    s8 spE0;
    s32 spDC;
    s8 spDA;
    s8 spD9;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    u8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s8 spC8;
    s16 spC6;
    s16 spC4;
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * var_a1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_s1;
    s16 temp_s2;
    s32 temp_a2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s4;

    sp8C = 1.0f;
    sp90 = 1.0f;
    sp94 = 1.0f;
    spB4 = 0.0f;
    if ((*(s32 *)((char *)(arg0) + 0x58)) & 1) {
        var_a1 = 0x800;
    } else {
        var_a1 = 0;
    }
    spC0 = var_a1 | 0x21E9 | 0x10000;
    spC8 = 0;
    spCC = 0;
    spD0 = 0xFF;
    spD2 = 0;
    spD4 = 0;
    spD5 = 0;
    spD6 = 0;
    spD7 = 0;
    spD8 = 2;
    spD9 = -1;
    spDA = 0;
    spDC = 0;
    spE0 = 0;
    spE2 = 0xC;
    spE4 = 0x15;
    spE8 = 0;
    var_s4 = (random_u32(var_a1) % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s4 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0x2)) + 1)) + (*(u32 *)((char *)(arg1) + 0x0));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0x6)) + 1)) + (*(u32 *)((char *)(arg1) + 0x4));
            if (random_float() < (*(s32 *)((char *)(arg0) + 0x38))) {
                spD1 = 0xD;
                spD3 = (*(s32 *)((char *)(arg0) + 0x59));
            } else {
                spD1 = 8;
                spD3 = 0;
            }
            sp74 = (random_float() * (*(s32 *)((char *)(arg0) + 0x40))) + (*(s32 *)((char *)(arg0) + 0x3C));
            sp80 = random_float() * 360.0f;
            sp84 = random_float() * 360.0f;
            sp88 = random_float() * 360.0f;
            func_15143794(temp_s1, temp_s2, (random_float() * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14)), &spA4);
            temp_f20 = (*(s32 *)((char *)(arg0) + 0x30));
            spB0 = (random_float() * (2.0f * temp_f20)) - temp_f20;
            temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x30));
            spB8 = (random_float() * (2.0f * temp_f20_2)) - temp_f20_2;
            spBC = (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C));
            spC4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x26)) + 1)) + (*(u32 *)((char *)(arg0) + 0x24));
            func_15143794(temp_s1, temp_s2, (*(s32 *)((char *)(arg0) + 0x54)), &sp98);
            sp98 += (*(s32 *)((char *)(arg0) + 0x8));
            sp9C += (*(s32 *)((char *)(arg0) + 0xC));
            spA0 += (*(s32 *)((char *)(arg0) + 0x10));
            temp_s1_2 = (random_u32() % (u32) (*(u32 *)((char *)(arg0) + 0x50))) * 4;
            spC6 = (s16) (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x48))) + temp_s1_2));
            var_a1_2 = 0;
            sp7C = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x4C))) + temp_s1_2)) * ((*(s32 *)((char *)(arg0) + 0x28)) + (random_float() * (*(s32 *)((char *)(arg0) + 0x2C))));
            sp78 = sp7C;
            sp70 = (*(s32 *)((char *)(arg0) + 0x44)) * sp7C;
            if ((*(s32 *)((char *)(arg0) + 0x58)) & 1) {
                var_a1_2 = 3;
            }
            temp_v0 = func_1513264C(&sp70, var_a1_2, 0xFF, (*(s32 *)((char *)(arg0) + 0x34)), (*(s32 *)((char *)(arg0) + 0x5C)), arg2 & 0xFF, arg3);
            temp_a2 = (*(s32 *)((char *)(arg0) + 0x5C));
            if ((temp_a2 > 0) && (temp_v0 != 0)) {
                memcpy(temp_v0 + 0x170, (*(s32 *)((char *)(arg0) + 0x60)), temp_a2);
            }
            var_s4 -= 1;
        } while (var_s4 != 0);
    }
}

void func_1515080C(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 *arg4, s32 arg5, u8 arg6, u8 arg7, s8 arg8, s32 arg9, f32 arg10, u8 arg11, u8 arg12, u8 arg13, s32 arg14) {
    s16 sp114;
    s16 sp112;
    s8 sp110;
    s32 sp10C;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s8 sp107;
    s8 sp106;
    s8 sp105;
    s8 sp104;
    u8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s32 spFC;
    u8 spF8;
    s16 spF6;
    s16 spF4;
    s32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
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
    f32 spA4;
    f32 spA0;
    u8 *sp68;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_s2;
    s16 temp_s3;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s7;
    s32 var_v0;
    s32 var_v1_3;
    u32 var_a0_3;
    u8 *temp_v0;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_4;
    u8 temp_t9;

    temp_v0 = allocate_memory(arg3, 2, 2, 1);
    if (temp_v0 != NULL) {
        var_a0 = 0;
        if (arg3 > 0) {
            temp_a2 = arg3 & 3;
            if (temp_a2 != 0) {
                var_v1 = temp_v0;
                do {
                    var_a0 += 1;
                    *var_v1 = 0;
                    var_v1 += 1;
                } while (temp_a2 != var_a0);
                if (var_a0 != arg3) {
                    goto block_6;
                }
            } else {
block_6:
                var_v1_2 = &temp_v0[var_a0];
                do {
                    var_a0 += 4;
                    (*(s32 *)((char *)(var_v1_2) + 0x1)) = 0;
                    (*(s32 *)((char *)(var_v1_2) + 0x2)) = 0;
                    (*(s32 *)((char *)(var_v1_2) + 0x3)) = 0;
                    var_v1_2 += 4;
                    (*(s32 *)((char *)(var_v1_2) - 0x4)) = 0;
                } while (var_a0 != arg3);
            }
        }
        var_fp = arg3;
        spA0 = 1.0f;
        spBC = 1.0f;
        spC0 = 1.0f;
        spC4 = 1.0f;
        spA4 = D_800A5FF8;
        spE4 = 0.0f;
        if (arg11 != 0) {
            var_v1_3 = 0x4000;
        } else {
            var_v1_3 = 0;
        }
        var_a0_2 = 0;
        if (arg7 != 0) {
            var_a0_2 = 0x80;
        }
        var_v0 = 0;
        if (arg12 != 0) {
            var_v0 = 0x100000;
        }
        spF0 = var_v0 | 0x68 | var_a0_2 | 0x3900 | 0x10000 | var_v1_3;
        var_s7 = (random_u32(var_a0_2) % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
        if (arg3 < var_s7) {
            var_s7 = arg3;
        }
        spF8 = arg6;
        spFC = 0;
        sp100 = 0xFF;
        sp102 = 0;
        sp104 = 0;
        sp105 = 0;
        sp106 = 0;
        sp107 = 0;
        sp108 = 2;
        sp10A = 0;
        sp10C = 0;
        sp110 = 0;
        sp112 = 0xC;
        sp114 = 0x15;
        sp109 = arg8;
        if (var_s7 != 0) {
            do {
                var_s0 = 0;
                var_s1 = 0;
                temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x16)) + 1)) + (*(u32 *)((char *)(arg0) + 0x14));
                temp_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x1A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x18));
                func_15143794(temp_s2, temp_s3, (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C)), &spD4);
                func_15143794(temp_s2, temp_s3, arg10, &spC8);
                spC8 += (*(s32 *)((char *)(arg0) + 0x8));
                spCC += (*(s32 *)((char *)(arg0) + 0xC));
                spD0 += (*(s32 *)((char *)(arg0) + 0x10));
                spB0 = random_float() * 360.0f;
                spB4 = random_float() * 360.0f;
                spB8 = random_float() * 360.0f;
                temp_f20 = (*(s32 *)((char *)(arg0) + 0x38));
                spE0 = (random_float() * (2.0f * temp_f20)) - temp_f20;
                temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x38));
                spE8 = (random_float() * (2.0f * temp_f20_2)) - temp_f20_2;
                spEC = (random_float() * (*(s32 *)((char *)(arg0) + 0x28))) + (*(s32 *)((char *)(arg0) + 0x24));
                spF4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2C));
                var_a0_3 = random_u32() % (u32) var_fp;
                var_v1_4 = temp_v0;
loop_20:
                if (*var_v1_4 != 0) {
                    do {
                        temp_t9 = (*(s32 *)((char *)(var_v1_4) + 0x1));
                        var_s0 += 1;
                        var_v1_4 += 1;
                    } while (temp_t9 != 0);
                }
                if (var_a0_3 != 0) {
                    var_s0 += 1;
                    var_a0_3 -= 1;
                    var_v1_4 += 1;
                    if (var_s0 >= arg3) {
                        var_s0 = 0;
                        var_v1_4 = temp_v0;
                    }
                } else {
                    var_s1 = 1;
                }
                if (var_s1 == 0) {
                    goto loop_20;
                }
                temp_s1 = var_s0 * 4;
                sp68 = var_v1_4;
                spF6 = (s16) (*(s16 *)((char *)(arg1) + temp_s1));
                var_fp -= 1;
                spAC = (*(s32 *)((char *)(arg2) + temp_s1)) * ((*(s32 *)((char *)(arg0) + 0x30)) + (random_float(var_a0_3) * (*(s32 *)((char *)(arg0) + 0x34))));
                spA8 = spAC;
                *var_v1_4 = 1;
                if (random_float() < (*(s32 *)((char *)(arg0) + 0x3C))) {
                    spF0 |= 1;
                    sp101 = 0xD;
                    sp103 = (*(s32 *)((char *)(arg0) + 0x40));
                } else {
                    spF0 &= ~1;
                    sp103 = 0;
                    sp101 = 8;
                }
                temp_v0_2 = func_1513264C(&spA0, 3, 0xFF, arg9, arg5, (s32) arg13, arg14);
                if ((arg4 != NULL) && (temp_v0_2 != 0)) {
                    memcpy(temp_v0_2 + 0x170, arg4, arg5);
                }
                var_s7 -= 1;
            } while (var_s7 != 0);
        }
    }
}

void func_15150D1C(void *arg0, s32 arg1, s32 arg2) {
    f32 spC0;
    void * spAC;
    void * spA8;
    void * spA4;
    void * spA0;
    f32 sp9C;
    s32 sp98;
    f32 temp_f20;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_s1_2;

    f32 spC4;
    f32 spC8;
    var_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s2 != 0) {
        do {
            temp_s1 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x16)) + 1)) + (*(s16 *)((char *)(arg0) + 0x14))), (s16) ((random_u32() % (u32) ((*(s16 *)((char *)(arg0) + 0x1A)) + 1)) + (*(s16 *)((char *)(arg0) + 0x18))), 100.0f, &spC0);
            if ((func_150AC9C0((*(s32 *)((char *)(arg0) + 0x8)), (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x10)), spC0, spC4, spC8, 0, &spAC, &spA0, &spA4, &spA8, &sp9C, &sp98, 0, 0.0f) != 0) && (func_15145C90(sp98) != 0) && (sp9C < (*(s32 *)((char *)(arg0) + 0x1C)))) {
                temp_f20 = random_float();
                temp_s1_2 = random_u32();
                func_151D9B8C((*(u32 *)((char *)(arg0) + 0x2C)), (temp_f20 * (*(u32 *)((char *)(arg0) + 0x24))) + (*(u32 *)((char *)(arg0) + 0x20)), ((temp_s1_2 % 156U) + 0x64) & 0xFF, &spAC, &spA0, (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x28)), 1, 1, 1, arg1 & 0xFF, arg2);
            }
            var_s2 -= 1;
        } while (var_s2 != 0);
    }
}

void func_15150F90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 sp9C;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f26;
    s32 var_s3;
    u32 temp_s1;
    u32 temp_s2;

    temp_f26 = 2.0f * (*(s32 *)((char *)(arg0) + 0x2C));
    spC0 = 0.0f;
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s3 != 0) {
        do {
            spA8 = random_float() * 360.0f;
            spAC = random_float() * 360.0f;
            spB0 = random_float() * 360.0f;
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x1E)) + 1)) + (*(s16 *)((char *)(arg0) + 0x1C))), (s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x22)) + 1)) + (*(s16 *)((char *)(arg0) + 0x20))), (random_float() * (*(s16 *)((char *)(arg0) + 0x28))) + (*(s16 *)((char *)(arg0) + 0x24)), &sp9C);
            spBC = (random_float() * temp_f26) - (*(s32 *)((char *)(arg0) + 0x2C));
            spC4 = (random_float() * temp_f26) - (*(s32 *)((char *)(arg0) + 0x2C));
            temp_f22 = random_float();
            temp_f20 = random_float();
            func_1518A3C0((char *)(arg0) + 8, &spA8, (temp_f22 * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14)), &sp9C, &spBC, (temp_f20 * (*(s32 *)((char *)(arg0) + 0x34))) + (*(s32 *)((char *)(arg0) + 0x30)), (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), (random_u32() % (u32) ((*(s32 *)((char *)(arg0) + 0x40)) + 1)) + (*(s32 *)((char *)(arg0) + 0x3E)), arg1 & 0xFF, 0, arg2 & 0xFF, arg3);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_151511FC(void *arg0, s32 arg1, s32 arg2) {
    f32 sp138;
    void * sp134;
    void * sp130;
    f32 sp124;
    void * sp120;
    void * sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    void * sp10C;
    void * sp108;
    s16 sp106;
    s16 sp104;
    u8 spF7;
    u8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s32 spBC;
    s32 spB8;
    s16 spB4;
    u16 spB2;
    u8 spB1;
    u8 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp88;
    f32 sp84;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    s32 temp_v0;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_s1_2;

    f32 sp13C;
    f32 sp140;
    f32 sp128;
    f32 sp12C;
    sp104 = (*(s32 *)((char *)(arg0) + 0x68));
    sp106 = (*(s32 *)((char *)(arg0) + 0x6A));
    spB0 = (*(s32 *)((char *)(arg0) + 0x34));
    spB1 = (*(s32 *)((char *)(arg0) + 0x35));
    spB8 = 0;
    spBC = 0;
    spC0 = 0xFF;
    spC1 = 0xFF;
    spC2 = 0xFF;
    spC3 = 0xFF;
    spB2 = (*(s32 *)((char *)(arg0) + 0x36));
    (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    spE4 = 1.0f;
    spE8 = 1.0f;
    spEC = 1.0f;
    spF5 = 0xFF;
    spF0 = (*(s32 *)((char *)(arg0) + 0x44)) | 0x08000000;
    spF6 = (*(s32 *)((char *)(arg0) + 0x5C));
    spF7 = (*(s32 *)((char *)(arg0) + 0x5D));
    spA0 = (*(s32 *)((char *)(arg0) + 0x6C));
    if (func_15144E80((char *)(arg0) + 0x1C, &sp138, &sp124, &sp110) != 0) {
        func_15145128(&sp138, &sp138, &sp134, &sp130);
        func_15145128(&sp124, &sp124, &sp120, &sp11C);
        func_15145128(&sp110, &sp110, &sp10C, &sp108);
        if (func_15144A74(&sp110, (char *)(arg0) + 0x10) < 0.0f) {
            sp110 = -sp110;
            sp114 = -sp114;
            sp118 = -sp118;
        }
        spA8 = 0.0f;
        sp110 *= 1000.0f;
        sp114 *= 1000.0f;
        sp118 *= 1000.0f;
        var_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
        if (var_s2 != 0) {
            do {
                temp_s1 = random_u32();
                func_15143874((s16) (temp_s1 & 0xFF), random_float() * (*(s16 *)((char *)(arg0) + 0x30)), &sp84, &sp88);
                temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x58))) + (*(s32 *)((char *)(arg0) + 0x54));
                spB4 = (s16) (s32) ((random_float() * (f32) (*(s16 *)((char *)(arg0) + 0x3A))) + (f32) (*(s16 *)((char *)(arg0) + 0x38)));
                temp_f16 = (random_float() * (*(s32 *)((char *)(arg0) + 0x40))) + (*(s32 *)((char *)(arg0) + 0x3C));
                spC8 = temp_f16;
                spC4 = temp_f16;
                spD8 = random_float() * 360.0f;
                spDC = random_float() * 360.0f;
                spE0 = random_float() * 360.0f;
                spF4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x49)) + 1)) + (*(u32 *)((char *)(arg0) + 0x48));
                sp90 = ((sp138 * sp84) + (sp124 * sp88) + sp110) * temp_f20;
                sp94 = ((sp13C * sp84) + (sp128 * sp88) + sp114) * temp_f20;
                sp98 = ((sp140 * sp84) + (sp12C * sp88) + sp118) * temp_f20;
                sp9C = (random_float() * (*(s32 *)((char *)(arg0) + 0x50))) + (*(s32 *)((char *)(arg0) + 0x4C));
                temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x70));
                spA4 = (random_float() * (2.0f * temp_f20_2)) - temp_f20_2;
                temp_f20_3 = (*(s32 *)((char *)(arg0) + 0x70));
                spAC = (random_float() * (2.0f * temp_f20_3)) - temp_f20_3;
                temp_s1_2 = random_u32();
                temp_v0 = func_1513D2F0(&spB0, &D_800A4AA0, 0x19, 0, 0, 0x17, (random_u32() & 1) + ((temp_s1_2 & 1) * 2), (*(s32 *)((char *)(arg0) + 0x60)), (*(s32 *)((char *)(arg0) + 0x64)), 0x20, arg1 & 0xFF, arg2);
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x110, &sp90, 0x20);
                }
                var_s2 -= 1;
            } while (var_s2 != 0);
        }
    }
}

void func_15151670(void *arg0, s32 arg1, s32 arg2) {
    s32 sp10C;
    s8 sp109;
    s32 sp104;
    s16 sp102;
    s16 sp100;
    void * spF4;
    s16 spF2;
    s16 spF0;
    s8 spEF;
    u8 spEE;
    u8 spED;
    u8 spEC;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spC4;
    void * spC0;
    void * spBC;
    f32 spB0;
    void * spAC;
    void * spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    void * sp98;
    void * sp94;
    f32 sp8C;
    f32 sp88;
    f32 temp_f20;
    s32 var_s2;
    u32 temp_s1;

    f32 spC8;
    f32 spCC;
    f32 spB4;
    f32 spB8;
    if (func_15144E80((char *)(arg0) + 0x18, &spC4, &spB0, &sp9C) != 0) {
        func_15145128(&spC4, &spC4, &spC0, &spBC);
        func_15145128(&spB0, &spB0, &spAC, &spA8);
        func_15145128(&sp9C, &sp9C, &sp98, &sp94);
        if (func_15144A74(&sp9C, (char *)(arg0) + 0xC) < 0.0f) {
            sp9C = -sp9C;
            spA0 = -spA0;
            spA4 = -spA4;
        }
        sp104 = 1;
        sp9C *= 1000.0f;
        spA0 *= 1000.0f;
        spA4 *= 1000.0f;
        sp102 = (s16) (*(s16 *)((char *)(arg0) + 0x55));
        spED = (*(s32 *)((char *)(arg0) + 0x54));
        spEE = (*(s32 *)((char *)(arg0) + 0x70));
        spEC = (*(s32 *)((char *)(arg0) + 0x56));
        spF0 = (*(s32 *)((char *)(arg0) + 0x9C));
        spF2 = (*(s32 *)((char *)(arg0) + 0x9E));
        (*(s32 *)((char *)&(spF4) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
        (*(s32 *)((char *)&(spF4) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
        (*(s32 *)((char *)&(spF4) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        sp10C = (*(s32 *)((char *)(arg0) + 0xA0));
        var_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x48));
        if (var_s2 != 0) {
            do {
                temp_s1 = random_u32();
                func_15143874((s16) (temp_s1 & 0xFF), random_float() * (*(s16 *)((char *)(arg0) + 0x2C)), &sp88, &sp8C);
                temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x44))) + (*(s32 *)((char *)(arg0) + 0x40));
                spEF = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x72)) + 1)) + (*(u32 *)((char *)(arg0) + 0x71));
                sp109 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x4C));
                sp100 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x52)) + 1)) + (*(u32 *)((char *)(arg0) + 0x50));
                spD4 = (random_float() * (*(s32 *)((char *)(arg0) + 0x34))) + (*(s32 *)((char *)(arg0) + 0x30));
                spE4 = (random_float() * (*(s32 *)((char *)(arg0) + 0x3C))) + (*(s32 *)((char *)(arg0) + 0x38));
                spD8 = ((spC4 * sp88) + (spB0 * sp8C) + sp9C) * temp_f20;
                spDC = ((spC8 * sp88) + (spB4 * sp8C) + spA0) * temp_f20;
                spE0 = ((spCC * sp88) + (spB8 * sp8C) + spA4) * temp_f20;
                func_15147DA0(&spF4, &spD4, 0, (*(s32 *)((char *)(arg0) + 0x58)), (*(s32 *)((char *)(arg0) + 0x5C)), (*(s32 *)((char *)(arg0) + 0x60)), (*(s32 *)((char *)(arg0) + 0x64)), (*(s32 *)((char *)(arg0) + 0x68)), (*(s32 *)((char *)(arg0) + 0x6C)), (*(s32 *)((char *)(arg0) + 0x74)), (*(s32 *)((char *)(arg0) + 0x78)), (char *)(arg0) + 0x7C, 0, arg1 & 0xFF, arg2);
                var_s2 -= 1;
            } while (var_s2 != 0);
        }
    }
}

void func_15151A38(void *arg0, s32 arg1, s32 arg2) {
    s32 spF4;
    s8 spF1;
    s32 spEC;
    s16 spEA;
    s16 spE8;
    void * spDC;
    s16 spDA;
    s16 spD8;
    s8 spD7;
    u8 spD6;
    u8 spD5;
    u8 spD4;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s3;

    spEC = 1;
    spEA = (s16) (*(s16 *)((char *)(arg0) + 0x39));
    spD5 = (*(s32 *)((char *)(arg0) + 0x38));
    spD6 = (*(s32 *)((char *)(arg0) + 0x54));
    spD4 = (*(s32 *)((char *)(arg0) + 0x3A));
    (*(s32 *)((char *)&(spDC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spDC) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spDC) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spD8 = (*(s32 *)((char *)(arg0) + 0x80));
    spDA = (*(s32 *)((char *)(arg0) + 0x82));
    spF4 = (*(s32 *)((char *)(arg0) + 0x84));
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x26)) + 1)) + (*(u32 *)((char *)(arg0) + 0x24));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x28));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2C));
            temp_f28 = func_151423D8(temp_s2 & 0xFF);
            temp_f22 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f24 = func_151423D8(temp_s1 & 0xFF);
            temp_f26 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C));
            spD7 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x56)) + 1)) + (*(u32 *)((char *)(arg0) + 0x55));
            spF1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x32)) + 1)) + (*(u32 *)((char *)(arg0) + 0x30));
            spE8 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x36)) + 1)) + (*(u32 *)((char *)(arg0) + 0x34));
            spBC = (random_float() * (*(s32 *)((char *)(arg0) + 0x10))) + (*(s32 *)((char *)(arg0) + 0xC));
            temp_f2 = temp_f20 * temp_f28;
            spCC = (random_float() * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14));
            spC0 = temp_f2 * temp_f26;
            spC4 = -temp_f20 * temp_f22;
            spC8 = temp_f2 * temp_f24;
            func_15147DA0(&spDC, &spBC, 0, (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(arg0) + 0x40)), (*(s32 *)((char *)(arg0) + 0x44)), (*(s32 *)((char *)(arg0) + 0x48)), (*(s32 *)((char *)(arg0) + 0x4C)), (*(s32 *)((char *)(arg0) + 0x50)), (*(s32 *)((char *)(arg0) + 0x58)), (*(s32 *)((char *)(arg0) + 0x5C)), (char *)(arg0) + 0x60, 0, arg1 & 0xFF, arg2);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15151D6C(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5) {
    s16 sp124;
    s16 sp122;
    s8 sp120;
    s32 sp11C;
    s8 sp11A;
    s8 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s8 sp113;
    s8 sp112;
    s8 sp111;
    s8 sp110;
    s32 sp10C;
    s8 sp108;
    s16 sp106;
    s16 sp104;
    s32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    void * spD8;
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
    f32 spA4;
    void * spA0;
    void * sp9C;
    f32 sp90;
    void * sp8C;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    void * sp78;
    void * sp74;
    f32 sp70;
    f32 sp6C;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    s32 var_s2;
    u32 temp_hi;
    u32 temp_s1;

    f32 spA8;
    f32 spAC;
    f32 sp94;
    f32 sp98;
    if (func_15144E80((char *)(arg0) + 0x20, &spA4, &sp90, &sp7C) != 0) {
        func_15145128(&spA4, &spA4, &spA0, &sp9C);
        func_15145128(&sp90, &sp90, &sp8C, &sp88);
        func_15145128(&sp7C, &sp7C, &sp78, &sp74);
        if (func_15144A74(&sp7C, (char *)(arg0) + 0x14) < 0.0f) {
            sp7C = -sp7C;
            sp80 = -sp80;
            sp84 = -sp84;
        }
        spB0 = 1.0f;
        spB4 = 1.0f;
        spCC = 1.0f;
        spD0 = 1.0f;
        sp7C *= 1000.0f;
        spD4 = 1.0f;
        sp80 *= 1000.0f;
        sp84 *= 1000.0f;
        (*(s32 *)((char *)&(spD8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
        (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
        spF4 = 0.0f;
        sp100 = 0x29E8;
        var_s2 = (random_u32(0) % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
        sp108 = 0;
        sp10C = 0;
        sp110 = 0xFF;
        sp111 = 8;
        sp112 = 0;
        sp113 = 0;
        sp114 = 0;
        sp115 = 0;
        sp116 = 0;
        sp117 = 0;
        sp118 = 2;
        sp11A = 0;
        sp11C = 0;
        sp120 = 0;
        sp122 = 0xC;
        sp124 = 0x15;
        if (var_s2 != 0) {
            do {
                temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x3C))) + (*(s32 *)((char *)(arg0) + 0x38));
                temp_s1 = random_u32();
                func_15143874((s16) (temp_s1 & 0xFF), random_float() * (*(s16 *)((char *)(arg0) + 0x34)), &sp6C, &sp70);
                spE4 = ((spA4 * sp6C) + (sp90 * sp70) + sp7C) * temp_f20;
                spE8 = ((spA8 * sp6C) + (sp94 * sp70) + sp80) * temp_f20;
                spEC = ((spAC * sp6C) + (sp98 * sp70) + sp84) * temp_f20;
                spC0 = random_float() * 360.0f;
                spC4 = random_float() * 360.0f;
                spC8 = random_float() * 360.0f;
                temp_hi = random_u32() % arg3;
                sp106 = (s16) (*(s16 *)((char *)(arg1) + (temp_hi * 4)));
                spBC = (*(s32 *)((char *)(arg2) + (temp_hi * 4))) * ((*(s32 *)((char *)(arg0) + 0x4C)) + (random_float() * (*(s32 *)((char *)(arg0) + 0x50))));
                spB8 = spBC;
                temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x54));
                spF0 = (random_float() * (2.0f * temp_f20_2)) - temp_f20_2;
                temp_f20_3 = (*(s32 *)((char *)(arg0) + 0x54));
                spF8 = (random_float() * (2.0f * temp_f20_3)) - temp_f20_3;
                spFC = (random_float() * (*(s32 *)((char *)(arg0) + 0x44))) + (*(s32 *)((char *)(arg0) + 0x40));
                sp104 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x48));
                func_15132A4C(&spB0, 3, 0xFF, 0, (s32) arg4, arg5);
                var_s2 -= 1;
            } while (var_s2 != 0);
        }
    }
}

void func_15152190(void *arg0, s32 arg1, s32 arg2, u32 arg3, f32 arg4, u8 arg5, u8 arg6, s32 arg7) {
    s16 spE4;
    s16 spE2;
    s8 spE0;
    s32 spDC;
    s8 spDA;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s8 spC8;
    s16 spC6;
    s16 spC4;
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s3;
    s32 var_v0;
    u32 temp_hi;

    sp70 = 1.0f;
    sp74 = 1.0f;
    sp8C = 1.0f;
    sp90 = 1.0f;
    sp94 = 1.0f;
    spB4 = 0.0f;
    if (arg5 != 0) {
        var_v0 = 0x100000;
    } else {
        var_v0 = 0;
    }
    spC0 = var_v0 | 0x29E8;
    spC8 = 0;
    spCC = 0;
    spD0 = 0xFF;
    spD1 = 8;
    spD2 = 0;
    spD3 = 0;
    spD4 = 0;
    spD5 = 0;
    spD6 = 0;
    spD7 = 0;
    spD8 = 2;
    spDA = 0;
    spDC = 0;
    spE0 = 0;
    spE2 = 0xC;
    spE4 = 0x15;
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x16)) + 1)) + (*(u32 *)((char *)(arg0) + 0x14));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x1A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x18));
            sp80 = random_float() * 360.0f;
            sp84 = random_float() * 360.0f;
            sp88 = random_float() * 360.0f;
            func_15143794(temp_s1, temp_s2, (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C)), &spA4);
            temp_f20 = (*(s32 *)((char *)(arg0) + 0x38));
            spB0 = (random_float() * (2.0f * temp_f20)) - temp_f20;
            temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x38));
            spB8 = (random_float() * (2.0f * temp_f20_2)) - temp_f20_2;
            spBC = (random_float() * (*(s32 *)((char *)(arg0) + 0x28))) + (*(s32 *)((char *)(arg0) + 0x24));
            spC4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2C));
            func_15143794(temp_s1, temp_s2, arg4, &sp98);
            sp98 += (*(s32 *)((char *)(arg0) + 0x8));
            sp9C += (*(s32 *)((char *)(arg0) + 0xC));
            spA0 += (*(s32 *)((char *)(arg0) + 0x10));
            temp_hi = random_u32() % arg3;
            spC6 = (s16) (*(s16 *)((char *)(arg1) + (temp_hi * 4)));
            sp7C = (*(s32 *)((char *)(arg2) + (temp_hi * 4))) * ((*(s32 *)((char *)(arg0) + 0x30)) + (random_float() * (*(s32 *)((char *)(arg0) + 0x34))));
            sp78 = sp7C;
            func_15132A4C(&sp70, 3, 0xFF, 0, (s32) arg6, arg7);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15152520(void *arg0, s32 arg1, s32 arg2) {
    s16 spFA;
    s16 spF8;
    void * spE8;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    s8 spDC;
    void * spD8;
    void * spD4;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s16 spAA;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    u8 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s32 var_s3;
    u32 temp_s1;
    u32 temp_s2;

    spDC = 0;
    spA4 = (*(s32 *)((char *)(arg0) + 0x70)) | 2;
    spA5 = 0;
    spA6 = 1;
    spA7 = -1;
    spA8 = -1;
    spAC = (*(s32 *)((char *)(arg0) + 0x34));
    spC8 = 0x80;
    spCC = 0x20;
    spB4 = 0;
    spB8 = 0x220405;
    spBC = 0x40200;
    spD0 = 0;
    spD1 = 8;
    spC0 = 1;
    spC4 = 0x38;
    spE0 = 0;
    spE4 = 0;
    spE5 = 2;
    spB0 = (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(spE8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(spE8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    (*(s32 *)((char *)&(spE8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    sp9C = (*(s32 *)((char *)(arg0) + 0x24));
    spD4 = (s32) (*(s32 *)((char *)(arg0) + 0x68));
    spD8 = (s32) (*(s32 *)((char *)(arg0) + 0x6C));
    spF8 = (*(s32 *)((char *)(arg0) + 0x72));
    spFA = (*(s32 *)((char *)(arg0) + 0x74));
    spA0 = (*(s32 *)((char *)(arg0) + 0x71));
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s3 != 0) {
        do {
            spAA = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x32)) + 1)) + (*(u32 *)((char *)(arg0) + 0x30));
            sp70 = random_float() * 360.0f;
            sp74 = random_float() * 360.0f;
            sp78 = random_float() * 360.0f;
            sp7C = (random_float() * (*(s32 *)((char *)(arg0) + 0x4C))) + (*(s32 *)((char *)(arg0) + 0x48));
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x16)) + 1)) + (*(s16 *)((char *)(arg0) + 0x14))), (s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x1A)) + 1)) + (*(s16 *)((char *)(arg0) + 0x18))), (random_float() * (*(s16 *)((char *)(arg0) + 0x20))) + (*(s16 *)((char *)(arg0) + 0x1C)), &sp80);
            sp8C = (random_float() * (*(s32 *)((char *)(arg0) + 0x5C))) + (*(s32 *)((char *)(arg0) + 0x50));
            sp90 = (random_float() * (*(s32 *)((char *)(arg0) + 0x60))) + (*(s32 *)((char *)(arg0) + 0x54));
            sp94 = (random_float() * (*(s32 *)((char *)(arg0) + 0x64))) + (*(s32 *)((char *)(arg0) + 0x58));
            sp98 = (random_float() * (*(s32 *)((char *)(arg0) + 0x2C))) + (*(s32 *)((char *)(arg0) + 0x28));
            func_15157898(&spA4, &sp70, (*(s32 *)((char *)(arg0) + 0x3C)), (random_float() * (*(s32 *)((char *)(arg0) + 0x44))) + (*(s32 *)((char *)(arg0) + 0x40)), 0, 0, 0, arg1 & 0xFF, arg2);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15152874(void *arg0, s32 arg1, s32 arg2) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s32 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp64;
    void * sp58;
    s32 var_s3;
    s8 temp_v0;
    u32 temp_hi;
    u32 temp_s1;
    u32 temp_s2;

    temp_hi = random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1);
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    var_s3 = temp_hi + (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    sp70 = (*(s32 *)((char *)(arg0) + 0x24));
    sp88 = (*(s32 *)((char *)(arg0) + 0x48));
    if (var_s3 != 0) {
        do {
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x16)) + 1)) + (*(s16 *)((char *)(arg0) + 0x14))), (s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x1A)) + 1)) + (*(s16 *)((char *)(arg0) + 0x18))), (random_float() * (*(s16 *)((char *)(arg0) + 0x20))) + (*(s16 *)((char *)(arg0) + 0x1C)), &sp64);
            sp74 = (random_float() * (*(s32 *)((char *)(arg0) + 0x2C))) + (*(s32 *)((char *)(arg0) + 0x28));
            sp7C = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x34)) + 1)) + (*(u32 *)((char *)(arg0) + 0x32));
            sp80 = (random_float() * (*(s32 *)((char *)(arg0) + 0x40))) + (*(s32 *)((char *)(arg0) + 0x38));
            sp84 = (random_float() * (*(s32 *)((char *)(arg0) + 0x44))) + (*(s32 *)((char *)(arg0) + 0x3C));
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x30));
            if (temp_v0 != -1) {
                ((s32 (*)())((char *)(&D_8008AC60 + (temp_v0 * 4))))(&sp78);
            } else {
                sp78 = 0xFF;
                sp79 = 0xFF;
                sp7A = 0xFF;
                sp7B = 0xFF;
            }
            func_150CCEB0(&sp58, arg1 & 0xFF & 0xFF, arg2 & 0xFF & 0xFF);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15152ABC(void *arg0) {
    void *sp18;
    void *temp_v1;

    temp_v1 = (((random_u32() % 5U) & 0xFF) * 3) + &D_800A5FE0;
    sp18 = temp_v1;
    (*(s8 *)((char *)(arg0) + 0x3)) = (s8) ((random_u32() % 101U) + 0x9B);
    (*(u8 *)((char *)(arg0) + 0x0)) = (u8) (*(u8 *)((char *)(temp_v1) + 0x0));
    (*(u8 *)((char *)(arg0) + 0x1)) = (u8) (*(u8 *)((char *)(temp_v1) + 0x1));
    (*(u8 *)((char *)(arg0) + 0x2)) = (u8) (*(u8 *)((char *)(temp_v1) + 0x2));
}

void func_15152B38(void *arg0, s32 arg1, s32 arg2) {
    s8 spA9;
    s32 spA4;
    u16 spA2;
    s16 spA0;
    void * sp94;
    s8 sp91;
    s8 sp90;
    f32 sp8C;
    u8 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    s32 sp80;
    s32 sp7C;
    u8 sp79;
    u8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    u8 sp6E;
    u8 sp6D;
    u8 sp6C;
    f32 sp68;
    f32 sp5C;
    f32 sp58;
    s32 var_s3;
    u32 temp_hi;
    u32 temp_s1;
    u32 temp_s2;

    temp_hi = random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4)) + 1);
    (*(s32 *)((char *)&(sp94) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    var_s3 = temp_hi + (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp94) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    spA4 = 0xA;
    spA2 = (*(s32 *)((char *)(arg0) + 0x40));
    sp6C = (*(s32 *)((char *)(arg0) + 0x42));
    sp6D = (*(s32 *)((char *)(arg0) + 0x43));
    sp6E = (*(s32 *)((char *)(arg0) + 0x44));
    sp78 = (*(s32 *)((char *)(arg0) + 0x57));
    sp79 = (*(s32 *)((char *)(arg0) + 0x58));
    sp7C = (*(s32 *)((char *)(arg0) + 0x5C));
    sp80 = (*(s32 *)((char *)(arg0) + 0x60));
    sp84 = (*(s32 *)((char *)(arg0) + 0x64));
    sp86 = (*(s32 *)((char *)(arg0) + 0x66));
    sp90 = (*(s32 *)((char *)(arg0) + 0x70));
    sp91 = (*(s32 *)((char *)(arg0) + 0x71));
    sp88 = (*(s32 *)((char *)(arg0) + 0x68));
    sp8A = (*(s32 *)((char *)(arg0) + 0x6A));
    sp8C = (*(s32 *)((char *)(arg0) + 0x6C));
    if (var_s3 != 0) {
        do {
            spA9 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x38)) + 1)) + (*(u32 *)((char *)(arg0) + 0x34));
            spA0 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x3E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x3C));
            sp58 = (random_float() * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14));
            sp68 = (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C));
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x2E)) + 1)) + (*(s16 *)((char *)(arg0) + 0x2C))), (s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x32)) + 1)) + (*(s16 *)((char *)(arg0) + 0x30))), (random_float() * (*(s16 *)((char *)(arg0) + 0x28))) + (*(s16 *)((char *)(arg0) + 0x24)), &sp5C);
            sp6F = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x49)) + 1)) + (*(u32 *)((char *)(arg0) + 0x45));
            sp70 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x46));
            sp71 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4B)) + 1)) + (*(u32 *)((char *)(arg0) + 0x47));
            sp72 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4C)) + 1)) + (*(u32 *)((char *)(arg0) + 0x48));
            sp73 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x51)) + 1)) + (*(u32 *)((char *)(arg0) + 0x4D));
            sp74 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x52)) + 1)) + (*(u32 *)((char *)(arg0) + 0x4E));
            sp75 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x53)) + 1)) + (*(u32 *)((char *)(arg0) + 0x4F));
            sp76 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x54)) + 1)) + (*(u32 *)((char *)(arg0) + 0x50));
            sp77 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x56)) + 1)) + (*(u32 *)((char *)(arg0) + 0x55));
            func_1515C2F0(&sp94, 0, &sp58, 0, arg1 & 0xFF, arg2);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15152F70(void *arg0, s32 arg1) {
    s8 sp101;
    s32 spFC;
    s16 spFA;
    s16 spF8;
    void * spEC;
    u8 spE7;
    u8 spE6;
    u8 spE5;
    u8 spE4;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s3;

    spFC = 1;
    spFA = 1;
    spE5 = (*(s32 *)((char *)(arg0) + 0x38));
    spE6 = (*(s32 *)((char *)(arg0) + 0x54));
    spE4 = (*(s32 *)((char *)(arg0) + 0x39));
    spE7 = (*(s32 *)((char *)(arg0) + 0x55));
    (*(s32 *)((char *)&(spEC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spA8 = 0;
    spAC = 1;
    spB0 = 0x160600;
    spB4 = 3;
    spB8 = 0x10;
    spBC = 0x80;
    spC0 = 0x20;
    spC4 = 0;
    spC5 = 9;
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x26)) + 1)) + (*(u32 *)((char *)(arg0) + 0x24));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x28));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2E)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2C));
            temp_f22 = func_151423D8(temp_s2 & 0xFF);
            temp_f24 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f26 = func_151423D8(temp_s1 & 0xFF);
            temp_f28 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x20))) + (*(s32 *)((char *)(arg0) + 0x1C));
            sp101 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x32)) + 1)) + (*(u32 *)((char *)(arg0) + 0x30));
            spF8 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x36)) + 1)) + (*(u32 *)((char *)(arg0) + 0x34));
            spCC = (random_float() * (*(s32 *)((char *)(arg0) + 0x10))) + (*(s32 *)((char *)(arg0) + 0xC));
            temp_f2 = temp_f20 * temp_f22;
            spDC = (random_float() * (*(s32 *)((char *)(arg0) + 0x18))) + (*(s32 *)((char *)(arg0) + 0x14));
            spD0 = temp_f2 * temp_f28;
            spD4 = -temp_f20 * temp_f24;
            spD8 = temp_f2 * temp_f26;
            func_15147DA0(&spEC, &spCC, 0, (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(arg0) + 0x40)), (*(s32 *)((char *)(arg0) + 0x44)), (*(s32 *)((char *)(arg0) + 0x48)), (*(s32 *)((char *)(arg0) + 0x4C)), (*(s32 *)((char *)(arg0) + 0x50)), 0, 0, &spA8, 0, arg1 & 0xFF, 1);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15153298(void *arg0, s32 arg1, s32 arg2) {
    s16 spBC;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    u8 spB7;
    u8 spB6;
    u8 spB5;
    u8 spB4;
    s8 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp9A;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s32 sp88;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s3;

    sp98 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x0));
    sp9A = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x4));
    sp9C = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x8));
    spA4 = (s8) (s32) ((*(s8 *)((char *)(arg0) + 0x0)) * 256.0f);
    spA5 = (s8) (s32) ((*(s8 *)((char *)(arg0) + 0x4)) * 256.0f);
    spA6 = (s8) (s32) ((*(s8 *)((char *)(arg0) + 0x8)) * 256.0f);
    spB4 = (*(s32 *)((char *)(arg0) + 0x3C));
    spB5 = (*(s32 *)((char *)(arg0) + 0x3C));
    spB8 = 0;
    spB9 = 0;
    spBA = 0;
    spB6 = (*(s32 *)((char *)(arg0) + 0x3C));
    spB7 = (*(s32 *)((char *)(arg0) + 0x3D));
    spA7 = (*(s32 *)((char *)(arg0) + 0x28));
    sp94 = 0;
    spBC = (s16) (*(s16 *)((char *)(arg0) + 0x29));
    sp96 = (*(s32 *)((char *)(arg0) + 0x2E));
    sp88 = (*(s32 *)((char *)(arg0) + 0x38));
    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0xE)) + 1)) + (*(u32 *)((char *)(arg0) + 0xC));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x12)) + 1)) + (*(u32 *)((char *)(arg0) + 0x10));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x16)) + 1)) + (*(u32 *)((char *)(arg0) + 0x14));
            temp_f28 = func_151423D8(temp_s2 & 0xFF);
            temp_f22 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f24 = func_151423D8(temp_s1 & 0xFF);
            temp_f26 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x1C))) + (*(s32 *)((char *)(arg0) + 0x18));
            temp_f0 = temp_f20 * temp_f28;
            spB0 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x22)) + 1)) + (*(u32 *)((char *)(arg0) + 0x20));
            sp9E = (s16) (s32) (temp_f0 * temp_f26);
            spA8 = (s16) (s32) (-temp_f20 * temp_f22);
            spA0 = (s16) (s32) (temp_f0 * temp_f24);
            spAA = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x26)) + 1)) + (*(u32 *)((char *)(arg0) + 0x24));
            spB2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2C)) + 1)) + (*(u32 *)((char *)(arg0) + 0x2A));
            spAC = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x32)) + 1)) + (*(u32 *)((char *)(arg0) + 0x30));
            spAE = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x36)) + 1)) + (*(u32 *)((char *)(arg0) + 0x34));
            func_15167D84(&sp88, 0, 0, -1, arg1 & 0xFF, arg2);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15153634(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 spF6;
    s8 spF3;
    s8 spF2;
    u8 spF1;
    u8 spF0;
    s32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    u8 spAD;
    u8 spAC;
    s8 spAB;
    u8 spAA;
    u8 spA9;
    u8 spA8;
    u8 spA7;
    u8 spA6;
    u8 spA5;
    u8 spA4;
    s32 spA0;
    s32 sp9C;
    s16 sp9A;
    u16 sp98;
    s32 sp94;
    s32 sp90;
    f32 sp8C;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_s1;
    s16 temp_s2;
    s32 temp_v0;
    s32 var_s3;
    u32 temp_hi;

    temp_hi = random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2)) + 1);
    sp8C = (*(s32 *)((char *)(arg0) + 0x68));
    spAD = (*(s32 *)((char *)(arg0) + 0x4));
    var_s3 = temp_hi + (*(s32 *)((char *)(arg0) + 0x0));
    sp98 = (*(s32 *)((char *)(arg0) + 0x6));
    sp94 = (*(s32 *)((char *)(arg0) + 0xC));
    sp9C = 0;
    sp90 = (*(s32 *)((char *)(arg0) + 0x8));
    spA4 = (*(s32 *)((char *)(arg0) + 0x1C));
    spA5 = (*(s32 *)((char *)(arg0) + 0x1D));
    spA6 = (*(s32 *)((char *)(arg0) + 0x1E));
    spA7 = (*(s32 *)((char *)(arg0) + 0x1F));
    spA8 = (*(s32 *)((char *)(arg0) + 0x20));
    spA9 = (*(s32 *)((char *)(arg0) + 0x21));
    spAA = (*(s32 *)((char *)(arg0) + 0x22));
    (*(s32 *)((char *)&(spC0) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(spC0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)&(spC0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    spE8 = (*(s32 *)((char *)(arg0) + 0x5C));
    spAC = (*(s32 *)((char *)(arg0) + 0x25));
    spF2 = (*(s32 *)((char *)(arg0) + 0x60));
    spF3 = (*(s32 *)((char *)(arg0) + 0x61));
    spAE = (*(s32 *)((char *)(arg0) + 0x26));
    spB0 = (*(s32 *)((char *)(arg0) + 0x28));
    spF0 = (*(s32 *)((char *)(arg0) + 0x62));
    spF1 = (*(s32 *)((char *)(arg0) + 0x63));
    spB2 = (*(s32 *)((char *)(arg0) + 0x2A));
    spF6 = arg1 & 0xFF;
    spB4 = (*(s32 *)((char *)(arg0) + 0x2C));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x48)) + 1)) + (*(u32 *)((char *)(arg0) + 0x44));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x4A)) + 1)) + (*(u32 *)((char *)(arg0) + 0x46));
            temp_f24 = func_151423D8(temp_s2 & 0xFF);
            temp_f26 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f28 = func_151423D8(temp_s1 & 0xFF);
            temp_f22 = func_151423D8((temp_s1 - 0x40) & 0xFF);
            temp_f20 = (random_float() * (*(s32 *)((char *)(arg0) + 0x50))) + (*(s32 *)((char *)(arg0) + 0x4C));
            sp9A = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x12)) + 1)) + (*(u32 *)((char *)(arg0) + 0x10));
            spA0 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x18)) + 1)) + (*(u32 *)((char *)(arg0) + 0x14));
            temp_f2 = temp_f20 * temp_f24;
            temp_f8 = (random_float() * (*(s32 *)((char *)(arg0) + 0x34))) + (*(s32 *)((char *)(arg0) + 0x30));
            spBC = temp_f8;
            spB8 = temp_f8;
            spD8 = temp_f2 * temp_f22;
            spDC = -temp_f20 * temp_f26;
            spE0 = temp_f2 * temp_f28;
            spE4 = (random_float() * (*(s32 *)((char *)(arg0) + 0x58))) + (*(s32 *)((char *)(arg0) + 0x54));
            spAB = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x24)) + 1)) + (*(u32 *)((char *)(arg0) + 0x23));
            temp_v0 = func_15130280(&sp90, (*(s32 *)((char *)(arg0) + 0x64)), 0, 4, arg2 & 0xFF, arg3);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 4);
            }
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_151539B4(void *arg0, s32 arg1) {
    s16 spB4;
    s16 spB2;
    s8 spB0;
    f32 spAC;
    u16 spA8;
    s16 spA6;
    u8 spA4;
    u8 spA3;
    u8 spA2;
    u8 spA1;
    u8 spA0;
    u8 sp9F;
    u8 sp9E;
    u8 sp9D;
    u8 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    void * sp7C;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s3;
    u32 temp_hi;

    temp_hi = random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2)) + 1);
    (*(s32 *)((char *)&(sp7C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    var_s3 = temp_hi + (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    sp9C = (*(s32 *)((char *)(arg0) + 0x28));
    sp9D = (*(s32 *)((char *)(arg0) + 0x29));
    sp9E = (*(s32 *)((char *)(arg0) + 0x2A));
    sp9F = (*(s32 *)((char *)(arg0) + 0x2B));
    spA0 = (*(s32 *)((char *)(arg0) + 0x2C));
    spA1 = (*(s32 *)((char *)(arg0) + 0x2D));
    spA2 = (*(s32 *)((char *)(arg0) + 0x2E));
    spA3 = (*(s32 *)((char *)(arg0) + 0x2F));
    spA4 = (*(s32 *)((char *)(arg0) + 0x30));
    spA8 = (*(s32 *)((char *)(arg0) + 0x36));
    spB2 = (*(s32 *)((char *)(arg0) + 0x42));
    spB4 = (*(s32 *)((char *)(arg0) + 0x44));
    if (var_s3 != 0) {
        do {
            temp_s1 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x14)) + 1)) + (*(u32 *)((char *)(arg0) + 0x10));
            temp_s2 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x16)) + 1)) + (*(u32 *)((char *)(arg0) + 0x12));
            temp_f20 = func_151423D8(temp_s2 & 0xFF);
            temp_f22 = func_151423D8((temp_s2 - 0x40) & 0xFF);
            temp_f24 = func_151423D8(temp_s1 & 0xFF);
            temp_f2 = 10.0f * temp_f20;
            sp88 = temp_f2 * func_151423D8((temp_s1 - 0x40) & 0xFF);
            sp8C = -10.0f * temp_f22;
            sp90 = temp_f2 * temp_f24;
            sp94 = (random_float() * (*(s32 *)((char *)(arg0) + 0x1C))) + (*(s32 *)((char *)(arg0) + 0x18));
            sp98 = (random_float() * (*(s32 *)((char *)(arg0) + 0x24))) + (*(s32 *)((char *)(arg0) + 0x20));
            spA6 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x34)) + 1)) + (*(u32 *)((char *)(arg0) + 0x32));
            spAC = (random_float() * (*(s32 *)((char *)(arg0) + 0x3C))) + (*(s32 *)((char *)(arg0) + 0x38));
            spB0 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x41)) + 1)) + (*(u32 *)((char *)(arg0) + 0x40));
            func_15156190(&sp7C, (*(s32 *)((char *)(arg0) + 0x46)), 0, arg1 & 0xFF & 0xFF, 0);
            var_s3 -= 1;
        } while (var_s3 != 0);
    }
}

void func_15153C84(void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void * sp24;

    func_1514F640(&sp24, 0);
    func_15153CCC(&sp24, arg1, arg2, arg3, arg4);
}

void func_15153CCC(void * *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 spA8;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s32 var_s4;
    s32 var_t6;
    u32 temp_s1;
    u32 temp_s2;
    u32 temp_s3;

    if (func_1514F6E8(arg0) != 0) {
        var_s4 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0x26)) + 1)) + (*(u32 *)((char *)(arg1) + 0x24));
        if (var_s4 != 0) {
            temp_f24 = D_800A5FFC;
            do {
                func_1514F808(arg0, (random_float() * (*(s32 *)((char *)(arg1) + 0x20))) + (*(s32 *)((char *)(arg1) + 0x1C)), &spA8);
                temp_f22 = random_float();
                temp_s1 = random_u32();
                temp_s2 = random_u32();
                temp_f20 = random_float();
                temp_s3 = random_u32();
                var_t6 = 0;
                if (random_float() < (*(s32 *)((char *)(arg1) + 0x38))) {
                    var_t6 = 1;
                }
                func_151DA6F8(arg1, &spA8, (temp_f22 * (*(s16 *)((char *)(arg1) + 0x18))) + (*(s16 *)((char *)(arg1) + 0x14)), (s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg1) + 0x2E)) + 1)) + (*(s16 *)((char *)(arg1) + 0x2C))), var_t6, temp_f24, temp_f24, 1, (s32) (*(s16 *)((char *)(arg1) + 0x34)), arg2, (s32) (*(s16 *)((char *)(arg1) + 0x3C)), (s32) (*(s16 *)((char *)(arg1) + 0x3E)), (*(s16 *)((char *)(arg1) + 0x40)), (s32) arg3, arg4);
                var_s4 -= 1;
            } while (var_s4 != 0);
        }
    }
}

void func_15153F18(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 spA8;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s32 var_s5;
    s32 var_t8;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s2;
    u32 temp_s2_2;
    u32 temp_s3;

    var_s5 = (random_u32() % (u32) ((*(u32 *)((char *)(arg1) + 0x26)) + 1)) + (*(u32 *)((char *)(arg1) + 0x24));
    if (var_s5 != 0) {
        temp_f24 = D_800A6000;
        do {
            temp_s2 = random_u32();
            temp_s1 = random_u32();
            func_15143794((s16) ((temp_s2 % (u32) ((*(s16 *)((char *)(arg0) + 0x2)) + 1)) + (*(s16 *)((char *)(arg0) + 0x0))), (s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0x6)) + 1)) + (*(s16 *)((char *)(arg0) + 0x4))), (random_float() * (*(s16 *)((char *)(arg1) + 0x20))) + (*(s16 *)((char *)(arg1) + 0x1C)), &spA8);
            temp_f22 = random_float();
            temp_s3 = random_u32();
            temp_s2_2 = random_u32();
            temp_f20 = random_float();
            temp_s1_2 = random_u32();
            var_t8 = 0;
            if (random_float() < (*(s32 *)((char *)(arg1) + 0x38))) {
                var_t8 = 1;
            }
            func_151DA6F8(arg1, &spA8, (temp_f22 * (*(s16 *)((char *)(arg1) + 0x18))) + (*(s16 *)((char *)(arg1) + 0x14)), (s16) ((temp_s3 % (u32) ((*(s16 *)((char *)(arg1) + 0x2E)) + 1)) + (*(s16 *)((char *)(arg1) + 0x2C))), var_t8, temp_f24, temp_f24, 1, (s32) (*(s16 *)((char *)(arg1) + 0x34)), arg2, (s32) (*(s16 *)((char *)(arg1) + 0x3C)), (s32) (*(s16 *)((char *)(arg1) + 0x3E)), (*(s16 *)((char *)(arg1) + 0x40)), (s32) arg3, arg4);
            var_s5 -= 1;
        } while (var_s5 != 0);
    }
}

s32 func_151541B8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, s32 arg6) {
    s32 spBC;
    s16 spB4;
    s16 spB2;
    s8 spB0;
    s32 spAC;
    s8 spAA;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s8 sp98;
    s16 sp96;
    s16 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    u32 sp64;
    u32 sp60;
    u32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s8 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 temp_v0;
    s32 var_t4;
    s32 var_v1;
    s8 var_v0;

    if (arg1 <= 0.0f) {
        return 0;
    }
    sp28 = 0.0f;
    sp2C = arg1;
    sp34 = arg3;
    sp30 = arg2;
    sp38 = arg3 / (arg1 * arg1);
    if (arg4 != 0.0f) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    sp3C = var_v0;
    sp48 = 0.0f;
    sp4C = arg4;
    sp40 = 1.0f;
    sp44 = 1.0f;
    if (arg4 != 0.0f) {
        sp50 = 0.0f;
    } else {
        sp50 = random_float(0x3F800000U, arg4) * 360.0f;
    }
    sp54 = random_float() * 360.0f;
    if (arg4 != 0.0f) {
        sp58 = 0.0f;
    } else {
        sp58 = random_float(0x3F800000U, arg4) * 360.0f;
    }
    sp5C = 0x3F800000;
    sp60 = 0x3F800000;
    sp64 = 0x3F800000;
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    if (arg4 != 0.0f) {
        sp80 = 0.0f;
    } else {
        sp80 = (random_float(0x3F800000U, arg4) * D_800A6004) + D_800A6008;
    }
    if (arg4 != 0.0f) {
        sp84 = (random_float() * D_800A600C) + D_800A6010;
    } else {
        sp84 = 0.0f;
    }
    if (arg4 != 0.0f) {
        sp88 = 0.0f;
    } else {
        sp88 = (random_float() * D_800A6014) + D_800A6018;
    }
    sp8C = 0.0f;
    sp90 = 0x100140;
    sp96 = 0x54;
    sp98 = 0;
    sp9C = 0;
    if (M2C_ERROR(/* cfc1 */) & 0x78) {
        if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
            var_t4 = (s32) (arg3 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_23;
        }
    } else {
        var_t4 = (s32) arg3;
        if (var_t4 < 0) {
block_23:
            var_t4 = -1;
        }
    }
    spA0 = (s8) var_t4;
    spA1 = 0xF;
    spA2 = 0;
    spA3 = 0;
    spA4 = 0;
    spA5 = 0;
    spA6 = 0;
    spA7 = 0;
    spA8 = 2;
    spAA = 0;
    spAC = 0;
    spB0 = 0;
    spB2 = 1;
    spB4 = 0xFF;
    sp94 = 0x12C;
    temp_v0 = func_15132A4C(&sp40, 0, 0, 0x18, (s32) arg5, arg6);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spBC = temp_v0;
        memcpy(temp_v0 + 0x170, &sp28, 0x18);
        var_v1 = spBC;
    }
    return var_v1;
}

s32 func_1515452C(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x170;
    temp_f2 = sqrtf((*(s32 *)((char *)(arg0) + 0x170))) * (*(s32 *)((char *)(arg0) + 0x178));
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2;
    if (!((*(s32 *)((char *)(arg0) + 0x184)) & 1)) {
        (*(s32 *)((char *)(arg0) + 0x1C)) = temp_f2;
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x170));
    (*(s8 *)((char *)(arg0) + 0x70)) = (s8) (u32) ((*(s8 *)((char *)(temp_v0) + 0xC)) - ((*(s8 *)((char *)(temp_v0) + 0x10)) * temp_f0 * temp_f0));
    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) + D_800BE9A4);
    if ((*(s32 *)((char *)(temp_v0) + 0x4)) < (*(s32 *)((char *)(arg0) + 0x170))) {
        return 0;
    }
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

void func_15154684(void *arg0, s32 arg1, s32 arg2) {
    f32 sp80;
    f32 temp_f20;
    f32 temp_f22;
    s32 var_s3;
    s32 var_t8;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s2;
    u32 temp_s2_2;

    var_s3 = (random_u32() % (u32) ((*(u32 *)((char *)(arg0) + 0x2)) + 1)) + (*(u32 *)((char *)(arg0) + 0x0));
    if (var_s3 > 0) {
        do {
            temp_s2 = random_u32();
            temp_s1 = random_u32();
            func_15143794((s16) (temp_s2 & 0xFF), (s16) ((temp_s1 % (u32) ((*(s16 *)((char *)(arg0) + 0xE)) + 1)) + (*(s16 *)((char *)(arg0) + 0xA))), (random_float() * (*(s16 *)((char *)(arg0) + 0x14))) + (*(s16 *)((char *)(arg0) + 0x10)), &sp80);
            temp_f20 = random_float();
            temp_s2_2 = random_u32();
            temp_s1_2 = random_u32();
            temp_f22 = random_float();
            var_t8 = 0;
            if (random_float() < (*(s32 *)((char *)(arg0) + 0x34))) {
                var_t8 = 1;
            }
            func_151C5F44((*(s32 *)((char *)(arg0) + 0x4)), &sp80, (temp_f20 * (*(s32 *)((char *)(arg0) + 0x1C))) + (*(s32 *)((char *)(arg0) + 0x18)), (*(s32 *)((char *)(arg0) + 0x20)), var_t8, (*(s32 *)((char *)(arg0) + 0x38)), arg1 & 0xFF, arg2);
            var_s3 -= 1;
        } while (var_s3 > 0);
    }
}

s32 func_15154884(void *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, s32 arg5) {
    s32 spBC;
    s16 spB4;
    s16 spB2;
    s8 spB0;
    s32 spAC;
    s8 spAA;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s8 sp98;
    s16 sp96;
    s16 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f16;
    s32 temp_v0;
    s32 var_v1;

    if (arg1 <= 0.0f) {
        return 0;
    }
    sp2C = arg1;
    sp30 = arg2;
    sp38 = 0.0f;
    sp48 = 0.0f;
    sp4C = 0.0f;
    sp40 = 1.0f;
    sp44 = 1.0f;
    sp34 = arg3;
    sp3C = D_800A601C / arg1;
    sp50 = random_float((u32) arg1, arg2) * 360.0f;
    sp54 = random_float() * 360.0f;
    temp_f0 = random_float();
    sp5C = 1.0f;
    sp60 = 1.0f;
    sp64 = 1.0f;
    sp58 = temp_f0 * 360.0f;
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    temp_f16 = random_float() * D_800A6020;
    sp84 = 0.0f;
    sp80 = temp_f16 + D_800A6024;
    sp88 = (random_float() * D_800A6028) + D_800A602C;
    sp8C = 0.0f;
    sp90 = 0x140;
    sp96 = 0x55;
    sp98 = 0;
    sp9C = 0;
    spA0 = 0xFF;
    spA1 = 0x12;
    spA2 = 0;
    spA3 = 0;
    spA4 = 0;
    spA5 = 0;
    spA6 = 0;
    spA7 = 0;
    spA8 = 2;
    spAA = 0;
    spAC = 0;
    spB0 = 0;
    spB2 = 1;
    spB4 = 0xFF;
    sp94 = 0x12C;
    temp_v0 = func_15132A4C(&sp40, 0, 0, 0x14, (s32) arg4, arg5);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spBC = temp_v0;
        memcpy(temp_v0 + 0x170, &sp2C, 0x14);
        var_v1 = spBC;
    }
    return var_v1;
}

s32 func_15154A88(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f16;
    s32 temp_t8;
    void *temp_v1;

    temp_f0 = sinf((*(s32 *)((char *)(arg0) + 0x17C)));
    temp_v1 = (char *)(arg0) + 0x170;
    temp_f2 = (*(s32 *)((char *)(temp_v1) + 0x4)) * temp_f0;
    (*(s32 *)((char *)(arg0) + 0x1C)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2;
    temp_t8 = (u32) (*(u32 *)((char *)(temp_v1) + 0x8)) & 0xFF;
    var_f16 = (f32) temp_t8;
    if (temp_t8 < 0) {
        var_f16 += 4294967296.0f;
    }
    (*(s8 *)((char *)(arg0) + 0x70)) = (s8) (u32) (var_f16 * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x170)) <= 0.0f) {
        return 0;
    }
    (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0xC)) + ((*(f32 *)((char *)(temp_v1) + 0x10)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

void func_15154C90(void *arg0) {
    s8 sp1B;
    s16 temp_lo;
    s16 temp_v1;
    s32 temp_t2;
    s8 var_a1;

    var_a1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x24)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x22)) = (s16) ((*(s16 *)((char *)(arg0) + 0x22)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x22)) < 0) {
            var_a1 = 1;
        }
    }
    temp_t2 = (*(s32 *)((char *)(arg0) + 0x68)) & 0xF;
    if ((temp_t2 != 0) && (var_a1 == 0)) {
        sp1B = var_a1;
        if (((s32 (*)())((char *)(&D_8008ACC8 + (temp_t2 * 4))))(var_a1) == 0) {
            var_a1 = 1;
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x24)) & 8) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x22));
        if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x26))) {
            temp_lo = temp_v1 * (*(s32 *)((char *)(arg0) + 0x28));
            if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(u8 *)((char *)(arg0) + 0x2E)) = (u8) temp_lo;
            }
        }
    }
    if (var_a1 != 0) {
        func_1516972C(arg0, var_a1);
    }
}

void *func_15154D80(void *arg0, void *arg1, s32 arg2) {
    s8 spEB;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp9A;
    s16 sp98;
    void *sp94;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    void * var_a3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f2;
    s16 temp_a0;
    s16 temp_a2;
    s16 var_a3_2;
    s16 var_a3_3;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 temp_f4_3;
    s32 temp_f4_4;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_a2;
    s32 var_ra;
    s32 var_t2;
    s32 var_t3;
    s32 var_t5;
    s32 var_v1;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    u16 temp_a1;
    u16 temp_a2_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_4;
    u8 temp_v0;
    void *temp_a0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_v0_2;
    void *temp_v1_3;

    temp_a2 = arg2;
    spEB = 1;
    sp94 = (D_80082FA4 * 0x180) + D_800BE628;
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x24));
    if ((temp_v1 & 0x10) && (temp_a2 != (*(s32 *)((char *)(arg1) + 0x54)))) {
        return arg0;
    }
    if ((temp_v1 & 0x40) && (D_800C35EA == 1)) {
        return arg0;
    }
    temp_a0 = temp_a2;
    if ((temp_v1 & (1 << (temp_a2 + 0xB))) && ((arg2 = temp_a2, (func_15181CC8(temp_a0, temp_a2) == 0)) || (func_1517EF00(arg2) >= 0xC9))) {
        return arg0;
    }
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x20));
    if (temp_v0 != 0xFF) {
        temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x24));
        if (temp_v1_2 & 0x200) {
            var_a3 = 0;
        } else {
            var_a3 = 2;
        }
        if (temp_v1_2 & 0x400) {
            var_v1 = 0x3E;
        } else {
            var_v1 = 3;
        }
        arg0 = func_15142E24(arg0, (temp_v0 * 0xC) + &D_80090B60, 0, var_a3, 0, 0, (s32) temp_v0, 0, 0, &spEB, var_v1);
    }
    arg0 = func_15142B7C(arg0, (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)));
    func_151441A4(&spA6, &spA4, &spA2, &spA0, (s32) (*(s32 *)((char *)(arg1) + 0x2F)), (s32) (*(s32 *)((char *)(arg1) + 0x30)), (s32) (*(s32 *)((char *)(arg1) + 0x31)), (s32) (*(s32 *)((char *)(arg1) + 0x32)), (s32) (*(s32 *)((char *)(arg1) + 0x2B)), (s32) (*(s32 *)((char *)(arg1) + 0x2C)), (s32) (*(s32 *)((char *)(arg1) + 0x2D)), (s32) (*(s32 *)((char *)(arg1) + 0x2E)), (s32) (*(s32 *)((char *)(arg1) + 0x33)), (s32) (*(s32 *)((char *)(arg1) + 0x50)));
    func_151442FC(&sp9E, &sp9C, &sp9A, &sp98, (s32) (*(s32 *)((char *)(arg1) + 0x2F)), (s32) (*(s32 *)((char *)(arg1) + 0x30)), (s32) (*(s32 *)((char *)(arg1) + 0x31)), (s32) (*(s32 *)((char *)(arg1) + 0x32)), (s32) (*(s32 *)((char *)(arg1) + 0x2B)), (s32) (*(s32 *)((char *)(arg1) + 0x2C)), (s32) (*(s32 *)((char *)(arg1) + 0x2D)), (s32) (*(s32 *)((char *)(arg1) + 0x2E)), (s32) (*(s32 *)((char *)(arg1) + 0x33)), (s32) (*(s32 *)((char *)(arg1) + 0x51)));
    temp_v1_3 = ((*(s32 *)((char *)(arg1) + 0x40)) * 8) + &D_800A4AC8;
    temp_v0_2 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(arg0, sp9E, sp9C, sp9A, (s32) sp98, &spEB), 0, 0, spA6, (s32) spA4, (s32) spA2, (s32) spA0, &spEB), (*(s32 *)((char *)(arg1) + 0x47)), &spEB), (*(s32 *)((char *)(arg1) + 0x34)) | D_800D2C9C | 0x2C00 | (*(s32 *)((char *)(arg1) + 0x48)) | (*(s32 *)((char *)(arg1) + 0x4C)), (*(s32 *)((char *)(temp_v1_3) + 0x4)) | (*(s32 *)((char *)(temp_v1_3) + 0x0)), &spEB);
    temp_f0 = (*(s32 *)((char *)(sp94) + 0x14));
    temp_f2 = (*(s32 *)((char *)(sp94) + 0x18));
    var_t5 = 0;
    temp_f14 = (*(s32 *)((char *)(sp94) + 0x34)) + ((*(s32 *)((char *)(arg1) + 0x10)) * temp_f0);
    temp_f18 = (*(s32 *)((char *)(arg1) + 0x18)) * temp_f0;
    temp_f16 = (*(s32 *)((char *)(sp94) + 0x38)) + ((*(s32 *)((char *)(arg1) + 0x14)) * temp_f2);
    temp_f10 = (*(s32 *)((char *)(arg1) + 0x1C)) * temp_f2;
    spB8 = temp_f10;
    temp_a0_2 = ((*(s32 *)((char *)(arg1) + 0x20)) * 0xC) + &D_80090B60;
    temp_a2_2 = (*(s32 *)((char *)(temp_a0_2) + 0x6));
    temp_a1 = (*(s32 *)((char *)(temp_a0_2) + 0x8));
    spB4 = (f32) temp_a2_2;
    spB0 = (f32) temp_a1;
    temp_f10_2 = (temp_f14 + temp_f18) * 4.0f;
    temp_f4 = (temp_f14 - temp_f18) * 4.0f;
    sp58 = temp_f10_2;
    sp60 = temp_f4;
    var_f2 = (temp_f10_2 - temp_f4) + 1.0f;
    temp_f8 = (temp_f16 + temp_f10) * 4.0f;
    temp_f4_2 = (temp_f16 - temp_f10) * 4.0f;
    sp54 = temp_f8;
    sp5C = temp_f4_2;
    temp_v1_4 = (*(s32 *)((char *)(arg1) + 0x24));
    var_f12 = (temp_f8 - temp_f4_2) + 1.0f;
    if (temp_v1_4 & 0x80) {
        var_f2 *= (*(s32 *)((char *)(arg1) + 0x58));
        var_f12 *= (*(s32 *)((char *)(arg1) + 0x5C));
    }
    if (var_f2 != 0.0f) {
        var_t3 = (s32) ((4096.0f * spB4) / var_f2);
    } else {
        var_t3 = 0;
    }
    if (var_f12 != 0.0f) {
        var_t2 = (s32) ((4096.0f * spB0) / var_f12);
    } else {
        var_t2 = 0;
    }
    var_ra = 0;
    if (temp_v1_4 & 2) {
        var_t5 = (temp_a2_2 - 1) << 5;
        var_t3 = -var_t3 & 0xFFFF;
    }
    if (temp_v1_4 & 4) {
        var_ra = (temp_a1 - 1) << 5;
        var_t2 = -var_t2 & 0xFFFF;
    }
    if (temp_v1_4 & 0x100) {
        var_t5 = (s32) ((f32) var_t5 + (*(s32 *)((char *)(arg1) + 0x60)));
        var_ra = (s32) ((f32) var_ra + (*(s32 *)((char *)(arg1) + 0x64)));
    }
    temp_f6 = (s32) sp58;
    temp_t1_2 = (char *)(temp_v0_2) + 8;
    temp_f4_3 = (s32) sp54;
    temp_t1 = (char *)(temp_t1_2) + 8;
    var_a3_2 = 0;
    if ((s16) temp_f6 > 0) {
        var_a3_2 = (s16) temp_f6;
    }
    if ((s16) temp_f4_3 > 0) {
        var_v1_2 = (s16) temp_f4_3;
    } else {
        var_v1_2 = 0;
    }
    (*(s32 *)((char *)(temp_v0_2) + 0x0)) = (s32) ((var_v1_2 & 0xFFF) | 0xE4000000 | ((var_a3_2 & 0xFFF) << 0xC));
    var_v1_3 = 0;
    temp_f6_2 = (s32) sp60;
    var_a3_3 = 0;
    temp_f4_4 = (s32) sp5C;
    if ((s16) temp_f6_2 > 0) {
        var_a3_3 = (s16) temp_f6_2;
    }
    if ((s16) temp_f4_4 > 0) {
        var_v1_3 = (s16) temp_f4_4;
    }
    (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) ((var_v1_3 & 0xFFF) | ((var_a3_3 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0xE1000000;
    if ((s16) temp_f6_2 < 0) {
        if ((s16) var_t3 < 0) {
            temp_t9 = (s32) ((s16) temp_f6_2 * (s16) var_t3) >> 7;
            if (temp_t9 > 0) {
                var_a2 = temp_t9;
            } else {
                var_a2 = 0;
            }
        } else {
            var_v1_4 = 0;
            temp_t8 = (s32) ((s16) temp_f6_2 * (s16) var_t3) >> 7;
            if (temp_t8 < 0) {
                var_v1_4 = temp_t8;
            }
            var_a2 = var_v1_4;
        }
    } else {
        var_a2 = 0;
    }
    if (temp_f4_4 < 0) {
        if ((s16) var_t2 < 0) {
            var_v1_5 = 0;
            temp_t7 = (s32) ((s16) temp_f4_4 * (s16) var_t2) >> 7;
            if (temp_t7 > 0) {
                var_v1_5 = temp_t7;
            }
        } else {
            var_v1_6 = 0;
            temp_t9_2 = (s32) ((s16) temp_f4_4 * (s16) var_t2) >> 7;
            if (temp_t9_2 < 0) {
                var_v1_6 = temp_t9_2;
            }
            var_v1_5 = var_v1_6;
        }
    } else {
        var_v1_5 = 0;
    }
    (*(s32 *)((char *)(temp_t1_2) + 0x4)) = (s32) (((var_ra - var_v1_5) & 0xFFFF) | ((var_t5 - var_a2) << 0x10));
    (*(s32 *)((char *)(temp_t1_2) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_t1) + 0x4)) = (s32) ((var_t3 << 0x10) | (var_t2 & 0xFFFF));
    return (char *)(temp_t1) + 8;
}

void *func_1515548C(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *sp34;
    f32 sp30;
    f32 sp2C;
    void * var_a0;
    void *temp_v0;

    if ((arg2 != 0) && (arg3 > 0)) {
        sp2C = (*(s32 *)((char *)(arg0) + 0x8));
        sp30 = (*(s32 *)((char *)(arg0) + 0xC));
        if (func_151555AC(arg0, &sp2C) != 0) {
            return NULL;
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x14)) & 0x20) {
        var_a0 = 0x57;
    } else {
        var_a0 = 0x5D;
    }
    temp_v0 = func_15167A68(var_a0, arg6, arg4 + 0x70, 1, (s32) arg5, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp34 = temp_v0;
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x58);
    (*(s32 *)((char *)(sp34) + 0x68)) = 0;
    (*(s8 *)((char *)(sp34) + 0x68)) = (s8) (0 | arg1);
    return sp34;
}

void func_15155564(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_8008AD04 + ((*(s32 *)((char *)(arg0) + 0x2A)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

s32 func_151555AC(f32 *arg0, f32 *arg1, s32 arg2, s32 arg3) {
    s32 sp3C[64];
    void * *var_t0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_t7;
    s32 var_a2;
    s32 var_t2;
    s32 var_v0;
    void *temp_a0;
    void *var_t3;
    void *var_v1;

    var_t0 = &D_800DCE50;
    sp3C[0] = (*(s32 *)((char *)&(D_800A6030) + 0x0));
    sp3C[1] = (s32) (*(s32 *)((char *)&(D_800A6030) + 0x4));
loop_1:
    var_v0 = 0;
loop_2:
    var_v1 = *((char *)(var_t0) + ((&sp3C[0])[var_v0] * 4));
    if (var_v1 != NULL) {
loop_3:
        temp_a0 = (*(s32 *)((char *)(var_v1) + 0x8));
        var_a2 = 0;
        if (arg3 > 0) {
            var_t2 = arg3 * 4;
            var_t3 = arg2 + var_t2;
loop_5:
            if ((*(s32 *)((char *)(var_v1) + 0x2A)) == (*(s32 *)((char *)(var_t3) - 0x4))) {
                var_a2 = 1;
            } else {
                var_t2 -= 4;
                var_t3 = (char *)(var_t3) - 4;
            }
            if ((var_t2 >= 4) && (var_a2 == 0)) {
                goto loop_5;
            }
        }
        if (var_a2 != 0) {
            temp_f14 = (*(s32 *)((char *)(arg0) + 0x0));
            temp_f12 = (*(s32 *)((char *)(var_v1) + 0x10));
            temp_f0 = (*(s32 *)((char *)(var_v1) + 0x18)) + (*(s32 *)((char *)(arg1) + 0x0));
            temp_f2 = (*(s32 *)((char *)(var_v1) + 0x1C)) + (*(s32 *)((char *)(arg1) + 0x4));
            if (((temp_f14 - temp_f0) <= temp_f12) && (temp_f12 <= (temp_f14 + temp_f0))) {
                temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x4));
                temp_f0_2 = (*(s32 *)((char *)(var_v1) + 0x14));
                if (((temp_f12_2 - temp_f2) <= temp_f0_2) && (temp_f0_2 <= (temp_f12_2 + temp_f2))) {
                    return 1;
                }
            }
        }
        var_v1 = temp_a0;
        if (temp_a0 == NULL) {
            goto block_17;
        }
        goto loop_3;
    }
block_17:
    temp_t7 = (var_v0 + 1) & 0xFF;
    var_v0 = temp_t7;
    if (temp_t7 >= 2) {
        var_t0 = (char *)(var_t0) + 0x1A0;
        if ((char *)(var_t0) == (char *)(&D_800DD190)) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}

void func_1515572C(s32 arg0, s32 arg1) {
    void * sp18;

    (*(s32 *)((char *)&(sp18) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A6038) + 0x0));
    (*(s32 *)((char *)&(sp18) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A6038) + 0x4));
    func_15169260(&sp18, 2, arg0, arg1 & 0xFF);
}
