/**
 * Auto-decompiled from asm/204660.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();       /* extern */
f32 func_15143E64();                   /* extern */
f32 func_15144528();                     /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_151D5D60();    /* extern */
void * memcpy();                       /* extern */
void func_151D77C8();             /* static */
void func_151D7830();             /* static */
void func_151D8718(void *arg0, f32 *arg1, f32 arg2);
extern s32 D_8008FCA0;
extern s32 D_8008FCA4;
extern s32 D_8008FCA8;
extern s32 D_80090CD4;
extern s32 D_800A4AC8;
extern s32 D_800AB280;
extern s32 D_800AB2D4;
extern f32 D_800AB2DC;
extern f32 D_800AB2E0;
extern f32 D_800AB2E4;
extern f32 D_800AB2E8;
extern f32 D_800AB2EC;
extern f32 D_800AB2F0;
extern s32 D_800D2C9C;
void func_151D7404();

s32 func_151D71B0(s16 arg0, u8 arg1, u8 arg2, f32 arg3, s32 arg4, u8 arg5, s32 arg6) {
    s32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s8 sp39;
    u8 sp38;
    void *sp34;
    s32 temp_v0;
    s32 var_v1;

    sp34 = NULL;
    sp39 = 0;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp48 = arg3;
    sp38 = arg2;
    temp_v0 = func_15149130(arg3, arg0, -1, 0x42, -1, (s32) arg1, 0x36, arg4 + 0x18, (s32) arg5, arg6);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp4C = temp_v0;
        memcpy(temp_v0 + 0x28, &sp34, 0x18);
        var_v1 = sp4C;
    }
    return var_v1;
}

void func_151D7264(void *arg0) {
    f32 sp30;
    u8 sp2F;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *sp1C;
    void *temp_v0;

    f32 sp34;
    f32 sp38;
    (*(s32 *)((char *)&(sp30) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x30));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x34));
    (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    sp2F = (*(s32 *)((char *)(arg0) + 0x2D)) & 1;
    if (((s32 (*)())((char *)(&D_8008FCA0 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 4))))(arg0, arg0) == 0) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
        return;
    }
    temp_v0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(temp_v0) + 0x5)) & 1) {
        if (sp2F != 0) {
            sp20 = (*(s32 *)((char *)(temp_v0) + 0x8)) - sp30;
            sp24 = (*(s32 *)((char *)(temp_v0) + 0xC)) - sp34;
            sp1C = temp_v0;
            sp28 = (*(s32 *)((char *)(temp_v0) + 0x10)) - sp38;
            if (func_15143E64(&sp20, arg0) < (*(s32 *)((char *)(sp1C) + 0x14))) {
                if ((*(s32 *)((char *)(sp1C) + 0x0)) == 0) {
                    func_151D7830(arg0, arg0);
                }
            } else {
                func_151D77C8(arg0, arg0);
            }
        } else {
            func_151D77C8(arg0, arg0);
        }
    } else {
        func_151D77C8(arg0, arg0);
    }
}

void func_151D73A8(void *arg0, s32 arg2) {
    if (*(&D_8008FCA4 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 4)) != 0) {
        ((s32 (*)())((char *)(&D_8008FCA4 + ((*(s32 *)((char *)(arg0) + 0x2C)) * 4))))(arg2 & 0xFF);
    }
}

void func_151D7404(void) {
    func_151D77C8();
}

void func_151D7424(s32 arg0) {
    func_151D7404();
    func_1514933C(arg0);
}

void func_151D7450(s32 arg0) {
    func_151D7404();
    func_15149368(arg0);
}

void func_151D747C(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0(&sp18, 0x3D);
}

void func_151D74B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 sp36;
    u8 sp35;
    u8 sp34;
    void *sp30;
    s32 temp_v0;

    sp30 = arg0;
    sp35 = arg1;
    sp36 = arg2;
    sp34 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_151D71B0(0x12C, 0U, 0U, 12.0f, 8, (u8) (s32) arg3, arg4);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x40, &sp30, 8);
    }
}

void func_151D7538(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a2_2;

    temp_a2 = (char *)(arg0) + 0x40;
    if (arg2 == 0x3D) {
        temp_a2_2 = (char *)(arg0) + 0x40;
        if (((*(s32 *)((char *)(arg0) + 0x40)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_a2_2) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_a2_2);
        }
    } else {
        func_15149514(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
    }
}

s32 func_151D75C4(void *arg0) {
    void *sp20;
    void *sp1C;
    s32 temp_t1;
    s8 temp_v0;
    u8 temp_v0_3;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x40));
    temp_t0 = (char *)(arg0) + 0x40;
    if (((*(s32 *)((char *)(temp_v0_2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_t0) + 0x4)) != (*(s32 *)((char *)(temp_v0_2) + 0x3B)))) {
        return 0;
    }
    temp_t1 = (*(s32 *)((char *)(temp_v0_2) + 0x1D4));
    temp_v1 = (char *)(arg0) + 0x28;
    if (temp_t1 == 0) {
        (*(u8 *)((char *)(temp_v1) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x5)) & 0xFFFE);
        return 1;
    }
    temp_v1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x31C));
    if ((temp_v1_2 != NULL) && ((*(s32 *)((char *)(temp_v1_2) + 0x197)) != 0)) {
        temp_v1_3 = (char *)(arg0) + 0x28;
        if ((*(s32 *)((char *)(temp_v0_2) + 0x318)) != 0) {
            (*(u8 *)((char *)(temp_v1_3) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v1_3) + 0x5)) & 0xFFFE);
            return 1;
        }
    }
    if ((*(s32 *)((char *)(temp_v0_2) + 0x7)) != 0xFF) {
        temp_v1_4 = (char *)(arg0) + 0x28;
        (*(u8 *)((char *)(temp_v1_4) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v1_4) + 0x5)) & 0xFFFE);
        return 1;
    }
    temp_v0_3 = (*(s32 *)((char *)(temp_t0) + 0x5));
    temp_v1_5 = (char *)(arg0) + 0x28;
    sp20 = temp_v1_5;
    sp1C = temp_t0;
    func_15143134((temp_v0_3 * 0xC) + &D_800AB280, (char *)(temp_v1_5) + 8, (*(&D_800AB2D4 + temp_v0_3) << 6) + temp_t1, arg0);
    (*(u8 *)((char *)(temp_v1_5) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v1_5) + 0x5)) | 1);
    temp_v0 = (*(s32 *)((char *)(temp_t0) + 0x6));
    if (temp_v0 != -1) {
        return ((s32 (*)())((char *)(&D_8008FCA8 + (temp_v0 * 4))))(arg0);
    }
    return 1;
}

s32 func_151D7724(void *arg0) {
    u16 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x40));
    if (((*(s32 *)((char *)(temp_v0) + 0x94)) & 2) || (temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x84)), (temp_v1 == 4)) || (temp_v1 == 0xA) || (temp_v1 == 0xC)) {
        temp_v0_2 = (char *)(arg0) + 0x28;
        (*(u8 *)((char *)(temp_v0_2) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v0_2) + 0x5)) & 0xFFFE);
    }
    return 1;
}

s32 func_151D7770(void *arg0) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + 0x84)) == 0) {
        (*(u8 *)((char *)(temp_v0) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x5)) & 0xFFFE);
    }
    return 1;
}

s32 func_151D779C(void *arg0) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x40))) + 0xAD)) != 0) {
        (*(u8 *)((char *)(temp_v0) + 0x5)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x5)) & 0xFFFE);
    }
    return 1;
}

void func_151D77C8(void *arg0) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;

    if ((*(s32 *)((char *)(arg0) + 0x28)) != NULL) {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)(temp_a1) + 0x30)) = 0;
        temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x28));
        (*(u16 *)((char *)(temp_a1_2) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_2) + 0x1E)) & 0xFFFD);
        temp_a1_3 = (*(s32 *)((char *)(arg0) + 0x28));
        (*(u16 *)((char *)(temp_a1_3) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_3) + 0x1E)) | 8);
        temp_a1_4 = (*(s32 *)((char *)(arg0) + 0x28));
        (*(u16 *)((char *)(temp_a1_4) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_4) + 0x1E)) | 1);
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1C)) = 0x14;
        (*(s32 *)((*(s32 *)((char *)(temp_a1) + 0x98)))) = 0;
        (*(s32 *)((char *)(arg0) + 0x28)) = NULL;
    }
}

void func_151D7830(void *arg0) {
    void *sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void * sp6C;
    void *sp68;
    s32 sp64;
    s8 sp61;
    s8 sp60;
    s32 sp5C;
    s16 sp5A;
    s16 sp58;
    void * sp4C;
    void *temp_v0;
    void *temp_v0_2;

    sp68 = arg0;
    temp_v0 = (char *)(arg0) + 0x30;
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x30));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp80 = 0.0f;
    sp61 = 0x19;
    (*(s32 *)((char *)&(sp4C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x30));
    (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
    (*(s32 *)((char *)&(sp4C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
    sp58 = 0x12C;
    sp5A = 0x76;
    sp5C = 0x12;
    sp60 = 4;
    sp64 = 0;
    temp_v0_2 = func_15147A80(&sp4C, 0x20, 0x1C, 0xD, 0x10, 0x10, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    if (temp_v0_2 != NULL) {
        sp84 = temp_v0_2;
        memcpy((*(s32 *)((char *)(temp_v0_2) + 0x98)), &sp68, 0x1C);
        (*(s32 *)((char *)(arg0) + 0x28)) = sp84;
    }
}

s32 func_151D792C(void *arg0) {
    s32 temp_s4;
    s8 var_s0;
    void *temp_a0;
    void *temp_t0;

    temp_s4 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    var_s0 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_s0 -= 1;
            if (var_s0 < 0) {
                var_s0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a0 = (var_s0 * 0x1C) + temp_s4;
            func_151D8718(temp_a0, (char *)(temp_a0) + 0xC, D_800BE9A4);
        } while (var_s0 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t0 = temp_s4 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x1C);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return 1;
}

s32 func_151D7A38(void *arg0) {
    f32 spB4;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    void *sp70;
    f32 sp64;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 var_f22;
    f32 var_f2;
    s32 temp_s3;
    s8 temp_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    f32 spB8;
    f32 spBC;
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_v0 = (*(s32 *)((char *)(temp_s1) + 0x0));
    if (!((*(s32 *)((char *)(temp_v0) + 0x2D)) & 1)) {
        return 0;
    }
    (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x30));
    (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x34));
    (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x38));
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)&(spB4) + 0x0));
    (*(s32 *)((char *)(arg0) + 0x14)) = (s32) (*(s32 *)((char *)&(spB4) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)&(spB4) + 0x8));
    (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x14)) + (0.25f * D_800BE9A4));
    temp_f18 = (*(s32 *)((char *)(temp_s1) + 0x14));
    if (temp_f18 > 1.0f) {
        temp_f0 = 1.0f / temp_f18;
        temp_v0_2 = (char *)(temp_s1) + 4;
        (*(s32 *)((char *)&(sp88) + 0x0)) = (*(s32 *)((char *)(temp_s1) + 0x4));
        var_f22 = (*(s32 *)((char *)(temp_s1) + 0x10)) + D_800BE9A4;
        (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
        (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
        temp_f26 = var_f22 * temp_f0;
        temp_f28 = (spB4 - (*(s32 *)((char *)(temp_s1) + 0x4))) * temp_f0;
        sp70 = temp_v0_2;
        temp_f30 = (spB8 - (*(s32 *)((char *)(temp_s1) + 0x8))) * temp_f0;
        var_f2 = (spBC - (*(s32 *)((char *)(temp_s1) + 0xC))) * temp_f0;
        do {
            temp_a0 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x1C) + temp_s3;
            (*(f32 *)((char *)(temp_a0) + 0x0)) = (f32) (*(f32 *)((char *)&(sp88) + 0x0));
            (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (*(s32 *)((char *)&(sp88) + 0x4));
            (*(s32 *)((char *)(temp_a0) + 0xC)) = 0.0f;
            (*(s32 *)((char *)(temp_a0) + 0x10)) = 0.0f;
            (*(s32 *)((char *)(temp_a0) + 0x14)) = 0;
            (*(s32 *)((char *)(temp_a0) + 0x18)) = 0.0f;
            (*(s32 *)((char *)(temp_a0) + 0x8)) = (s32) (*(s32 *)((char *)&(sp88) + 0x8));
            sp64 = var_f2;
            func_151D8718(temp_a0, (char *)(temp_a0) + 0xC, var_f22);
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            var_f22 -= temp_f26;
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v1 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            sp88 += temp_f28;
            sp8C += temp_f30;
            sp90 += var_f2;
            (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x14)) > 1.0f);
        (*(f32 *)((char *)(sp70) + 0x0)) = (f32) (*(f32 *)((char *)&(sp88) + 0x0));
        (*(s32 *)((char *)(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(sp88) + 0x4));
        (*(s32 *)((char *)(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(sp88) + 0x8));
        (*(s32 *)((char *)(temp_s1) + 0x10)) = var_f22;
    }
    return 1;
}

s32 func_151D7CD0(void *arg0) {
    f32 spAC;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 var_f12;
    f32 var_f20;
    f32 var_f22;
    f32 var_f2;
    s32 temp_s3;
    s8 var_s1;
    s8 var_s2;
    s8 var_v0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s5;
    void *temp_v1;
    void *var_v0;

    temp_s5 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f22 = 0.0f;
        var_s2 = (*(s32 *)((char *)(arg0) + 0x2E));
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
            var_v0 = (char *)(arg0) + 0x10;
        } else {
            var_s2 -= 1;
            if (var_s2 < 0) {
                var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_v0 = (var_s2 * 0x1C) + temp_s3;
        }
        do {
            var_s2 -= 1;
            if (var_s2 < 0) {
                var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s1 = (var_s2 * 0x1C) + temp_s3;
            sp98 = (*(s32 *)((char *)(temp_s1) + 0x0)) - (*(s32 *)((char *)(var_v0) + 0x0));
            sp9C = (*(s32 *)((char *)(temp_s1) + 0x4)) - (*(s32 *)((char *)(var_v0) + 0x4));
            spA0 = (*(s32 *)((char *)(temp_s1) + 0x8)) - (*(s32 *)((char *)(var_v0) + 0x8));
            temp_f0 = func_15143E64(&sp98);
            var_f22 += temp_f0;
            (*(s32 *)((char *)(temp_s1) + 0x10)) = temp_f0;
            if (var_f22 > 80.0f) {
                temp_f12 = (*(s32 *)((char *)(temp_s1) + 0x10));
                if (temp_f12 != 0.0f) {
                    temp_f0_2 = (var_f22 - 80.0f) * (1.0f / temp_f12);
                    (*(f32 *)((char *)(temp_s1) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x0)) - (sp98 * temp_f0_2));
                    (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x4)) - (sp9C * temp_f0_2));
                    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - (spA0 * temp_f0_2));
                    (*(f32 *)((char *)(temp_s1) + 0x10)) = (f32) (temp_f12 * (1.0f - temp_f0_2));
                }
                var_f22 = 80.0f;
                if (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
            }
            var_v0 = temp_s1;
        } while (var_s2 != (*(s32 *)((char *)(arg0) + 0x2D)));
        spAC = var_f22;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        (*(f32 *)((char *)(temp_s5) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s5) + 0x18)) + (-41.0f * D_800BE9A4));
        (*(s32 *)((char *)(temp_s5) + 0x18)) = func_15144528((*(s32 *)((char *)(temp_s5) + 0x18)), D_800AB2DC, 0xC6800000);
        var_f20 = 0.0f;
        var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s2 = (var_s1 * 0x1C) + temp_s3;
            var_f20 += (*(s32 *)((char *)(temp_s2) + 0x10));
            (*(s32 *)((char *)(temp_s2) + 0x18)) = func_15144528((*(s32 *)((char *)(temp_s5) + 0x18)) + (var_f20 * D_800AB2E0), D_800AB2E4, 0xC6800000);
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f12 = 0.0f;
        temp_f16 = spAC * D_800AB2E8;
        var_v0_2 = (*(s32 *)((char *)(arg0) + 0x2E));
        temp_f14 = spAC - temp_f16;
        do {
            var_v0_2 -= 1;
            if (var_v0_2 < 0) {
                var_v0_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_v0_2 * 0x1C) + temp_s3;
            if (temp_f16 < var_f12) {
                var_f2 = var_f12 - temp_f16;
                if (temp_f14 < var_f2) {
                    var_f2 = temp_f14;
                }
                (*(s8 *)((char *)(temp_v1) + 0x14)) = (s8) (u32) ((temp_f14 - var_f2) * (1.0f / temp_f14) * 60.0f);
            } else {
                (*(s32 *)((char *)(temp_v1) + 0x14)) = 0x3C;
            }
            var_f12 += (*(s32 *)((char *)(temp_v1) + 0x10));
        } while (var_v0_2 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    return 1;
}

void *func_151D80C4(void *arg0, void *arg1, s32 arg2) {
    f32 spC0;
    f32 spB4;
    s32 spA8;
    s8 spA7;
    void *sp8C;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f0;
    f32 var_f2;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_t0;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_a0;
    u8 var_v0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_t3;
    void *temp_t6;
    void *temp_t6_2;
    void *temp_v0;
    void *var_s1;
    void *var_s2;

    f32 spB8;
    f32 spBC;
    f32 spC4;
    f32 spC8;
    var_s2 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
        spA8 = (*(s32 *)((char *)(arg0) + 0x94));
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp8C, 0);
        if (sp8C == NULL) {

        } else {
            spA7 = 1;
            var_t0 = spA8;
            var_s2 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142E24(var_s2, &D_80090CD4, 0, 0, 0, 0, 0x1F, 0, 0, &spA7, 0x3E), 0x200005, 0x1F0600), 0x4C, &spA7), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0xC)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x8)), &spA7);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_s3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_a0 = 0;
                (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                var_f2 = (*(s32 *)((char *)(temp_s1) + 0x18));
            } else {
                var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v1 < 0) {
                    var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_s3 = var_v1 - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0 = var_t0 + (var_v1 * 0x1C);
                (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x0));
                (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
                (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
                var_a0 = (*(s32 *)((char *)(temp_v0) + 0x14));
                var_f2 = (*(s32 *)((char *)(temp_v0) + 0x18));
            }
            var_s1 = var_t0 + (var_s3 * 0x1C);
            temp_v1 = arg2 * 4;
            (*(s32 *)((char *)&(spC0) + 0x0)) = (*(s32 *)((char *)(var_s1) + 0x0));
            (*(s32 *)((char *)&(spC0) + 0x4)) = (s32) (*(s32 *)((char *)(var_s1) + 0x4));
            (*(s32 *)((char *)&(spC0) + 0x8)) = (s32) (*(s32 *)((char *)(var_s1) + 0x8));
            temp_f20 = (*(s32 *)((char *)(D_800DD1E8) + temp_v1)) * 5.5f;
            var_v0 = (*(s32 *)((char *)(var_s1) + 0x14));
            temp_f22 = (*(s32 *)((char *)(D_800DD1D8) + temp_v1)) * 5.5f;
            var_f0 = (*(s32 *)((char *)(var_s1) + 0x18));
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 8) {
                var_v1_2 = ((*(s32 *)((char *)(arg0) + 0x1C)) * 0xC) & 0xFF;
            } else {
                var_v1_2 = 0xFF;
            }
            temp_f16 = (s32) var_f2;
            (*(s16 *)((char *)(sp8C) + 0x0)) = (s16) (s32) (spB4 + temp_f20);
            temp_t2 = (s32) (var_a0 * var_v1_2) >> 8;
            (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) spB8;
            (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (spBC - temp_f22);
            (*(s16 *)((char *)(sp8C) + 0x8)) = (s16) temp_f16;
            (*(s32 *)((char *)(sp8C) + 0xA)) = 0x800;
            (*(s32 *)((char *)(sp8C) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp8C) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp8C) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(sp8C) + 0xF)) = (s8) temp_t2;
            (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
            temp_t6 = (char *)(sp8C) + 0x10;
            sp8C = temp_t6;
            (*(s16 *)((char *)(sp8C) + 0x10)) = (s16) (s32) (spB4 - temp_f20);
            (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) spB8;
            (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (spBC + temp_f22);
            (*(s16 *)((char *)(sp8C) + 0x8)) = (s16) temp_f16;
            (*(s32 *)((char *)(sp8C) + 0xA)) = 0;
            (*(s32 *)((char *)(temp_t6) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp8C) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp8C) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(sp8C) + 0xF)) = (s8) temp_t2;
            (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
            sp8C = (char *)(sp8C) + 0x10;
            do {
                temp_t4 = (s32) (var_v0 * var_v1_2) >> 8;
                (*(s16 *)((char *)(sp8C) + 0x0)) = (s16) (s32) (spC0 + temp_f20);
                temp_f10 = (s32) var_f0;
                (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) spC4;
                (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (spC8 - temp_f22);
                (*(s16 *)((char *)(sp8C) + 0x8)) = (s16) temp_f10;
                (*(s32 *)((char *)(sp8C) + 0xA)) = 0x800;
                (*(s32 *)((char *)(sp8C) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp8C) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp8C) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(sp8C) + 0xF)) = (s8) temp_t4;
                (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
                temp_t6_2 = (char *)(sp8C) + 0x10;
                sp8C = temp_t6_2;
                (*(s16 *)((char *)(sp8C) + 0x10)) = (s16) (s32) (spC0 - temp_f20);
                (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) spC4;
                (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (spC8 + temp_f22);
                (*(s16 *)((char *)(sp8C) + 0x8)) = (s16) temp_f10;
                (*(s32 *)((char *)(sp8C) + 0xA)) = 0;
                (*(s32 *)((char *)(temp_t6_2) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp8C) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp8C) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(sp8C) + 0xF)) = (s8) temp_t4;
                (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
                sp8C = (char *)(sp8C) + 0x10;
                (*(s32 *)((char *)(var_s2) + 0x0)) = 0x01004008;
                temp_s2 = (char *)(var_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x4)) = (void *) ((char *)(sp8C) - 0x40);
                temp_s2_2 = (char *)(temp_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s2) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s2) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s2_2) + 0x4)) = 0;
                var_s2 = (char *)(temp_s2_2) + 8;
                if (var_f0 < var_f2) {
                    spA8 = var_t0;
                    memcpy(sp8C, (char *)(sp8C) - 0x20, 0x20);
                    (*(s16 *)((char *)(sp8C) - 0x18)) = (s16) ((*(s16 *)((char *)(sp8C) - 0x18)) - 0x8000);
                    temp_t3 = (char *)(sp8C) + 0x10;
                    sp8C = temp_t3;
                    (*(s16 *)((char *)(temp_t3) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t3) - 0x18)) - 0x8000);
                    sp8C = (char *)(sp8C) + 0x10;
                }
                temp_v1_2 = var_s3;
                var_s3 -= 1;
                var_s1 = (char *)(var_s1) - 0x1C;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_s1 = var_t0 + (var_s3 * 0x1C);
                }
                (*(s32 *)((char *)&(spC0) + 0x0)) = (*(s32 *)((char *)(var_s1) + 0x0));
                (*(s32 *)((char *)&(spC0) + 0x4)) = (s32) (*(s32 *)((char *)(var_s1) + 0x4));
                (*(s32 *)((char *)&(spC0) + 0x8)) = (s32) (*(s32 *)((char *)(var_s1) + 0x8));
                var_v0 = (*(s32 *)((char *)(var_s1) + 0x14));
                var_f2 = (*(s32 *)((char *)((var_t0 + (temp_v1_2 * 0x1C))) + 0x18));
                var_f0 = (*(s32 *)((char *)(var_s1) + 0x18));
            } while (temp_v1_2 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s2;
}

void func_151D8718(void *arg0, f32 *arg1, f32 arg2) {
    f32 temp_f2;

    temp_f2 = *arg1;
    *arg1 = temp_f2 + (D_800AB2EC * arg2);
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((temp_f2 * arg2) + (D_800AB2F0 * (arg2 * arg2))));
}

void func_151D8764(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    if (temp_v1 != NULL) {
        (*(s32 *)((char *)(temp_v1) + 0x28)) = 0;
    }
}

void func_151D8780(void *arg0) {
    func_151D8764(arg0);
    func_151478F4(arg0);
}

void func_151D87AC(void *arg0) {
    func_151D8764(arg0);
    func_15147928(arg0);
}
