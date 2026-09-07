/**
 * Auto-decompiled from asm/176A00.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();              /* extern */
u32 random_u32();                     /* extern */
f32 random_float();                             /* extern */
void * func_1510F800();                            /* extern */
void * func_1513F680();           /* extern */
void * func_151429E0();                  /* extern */
void * func_15143874();            /* extern */
s32 func_15145128(); /* extern */
void * func_15152B38();                    /* extern */
void * func_15152F70();                            /* extern */
void * func_1518CA80();                            /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                            /* extern */
extern s32 D_8008AA00;
extern f32 D_800A5780;
extern f32 D_800A5784;
extern f32 D_800A5788;
extern f32 D_800A578C;
extern f32 D_800A5790;
extern f32 D_800A5794;
extern f32 D_800A5798;
extern f32 D_800A579C;
extern f32 D_800A57A0;
extern f32 D_800A57A4;
extern f32 D_800A57A8;
extern f32 D_800A57AC;
extern f32 D_800A57B0;
extern f32 D_800A57B4;
extern f32 D_800A57B8;
extern f32 D_800A57BC;
extern f32 D_800A57C0;
extern f32 D_800A57C4;
extern f32 D_800A57C8;
extern f32 D_800A57CC;
extern f32 D_800A57D0;
extern f32 D_800A57D4;
extern f32 D_800A57D8;
extern f32 D_800A57DC;
extern f32 D_800A57E0;
extern f32 D_800A57E4;
extern f32 D_800A57E8;
extern f32 D_800A57EC;
extern f32 D_800A57F0;
extern f32 D_800A57F4;
extern f32 D_800A57F8;
extern f32 D_800A57FC;
extern f32 D_800A5800;
extern f32 D_800A5804;
extern f32 D_800A5808;
extern f32 D_800A580C;
extern f32 D_800A5810;
extern f32 D_800A5814;
extern f32 D_800A5818;
extern f32 D_800A581C;
extern f32 D_800A5820;
extern f32 D_800A5824;
extern f32 D_800A5828;
extern f32 D_800A582C;
extern f32 D_800A5830;
extern f32 D_800A5834;
extern f32 D_800A5838;
extern f32 D_800A583C;
extern f32 D_800A5840;
extern f32 D_800A5844;
extern f32 D_800A5848;
extern f32 D_800A584C;
extern f32 D_800A5850;
extern f32 D_800A5854;
extern f32 D_800A5858;
extern f32 D_800A585C;
extern f32 D_800A5860;
extern f32 D_800A5864;
extern f32 D_800A5868;
extern f32 D_800A586C;
extern f32 D_800A5870;
extern f32 D_800A5874;
extern f32 D_800A5878;
extern f32 D_800A587C;
extern f32 D_800A5880;
extern f32 D_800A5884;
extern f32 D_800A5888;
extern f32 D_800A588C;
extern f32 D_800A5890;
s32 func_1514BC08();

s32 func_15149550(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 spDC;
    u8 spD9;
    u8 spD8;
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    u8 spA7;
    u8 spA6;
    u8 spA5;
    u8 spA4;
    s32 spA0;
    s32 sp9C;
    s16 sp98;
    s16 sp96;
    s8 sp94;
    f32 sp90;
    u8 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s16 sp52;
    s16 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 temp_t4;
    s16 temp_t5;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_v0;

    f32 spB8;
    temp_t6 = arg2 & 0xFF;
    spD4 = (*(s32 *)((char *)(arg0) + 0x2A)) | 0x40000000;
    (*(s32 *)((char *)&(spB0) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    if (temp_t6 != 0) {
        spD4 |= 0x01000000;
        func_1510F800(0, temp_t6);
        spDC = func_1510FD20((s32) spB0, (s32) spB8);
    } else {
        spD4 &= 0xFEFFFFFF;
        spDC = 0;
    }
    switch (arg3) {                                 /* irregular */
    case 1:
        sp94 = 0x13;
        break;
    case 2:
        sp94 = 0x71;
        break;
    default:
    case 0:
        if (random_u32() & 1) {
            sp94 = 0x13;
        } else {
            sp94 = 0x14;
        }
        break;
    }
    sp96 = 0x301;
    sp98 = (*(s32 *)((char *)(arg0) + 0x24));
    spA4 = (*(s32 *)((char *)(arg0) + 0x26));
    spA5 = (*(s32 *)((char *)(arg0) + 0x27));
    spA6 = (*(s32 *)((char *)(arg0) + 0x28));
    spA7 = (*(s32 *)((char *)(arg0) + 0x29));
    spD8 = (*(s32 *)((char *)(arg0) + 0x2C));
    spBC = 0.0f;
    spC0 = 0.0f;
    spC4 = 0.0f;
    spD9 = (*(s32 *)((char *)(arg0) + 0x2D));
    spCC = 0.0f;
    spD0 = 1.0f;
    spC8 = (*(s32 *)((char *)(arg0) + 0x38));
    sp44 = (*(s32 *)((char *)(arg0) + 0xC));
    sp48 = (*(s32 *)((char *)(arg0) + 0x14));
    sp50 = 0;
    sp52 = 6;
    sp54 = D_800A5780;
    sp4C = (sp44 + sp48) * 0.5f;
    sp58 = (*(s32 *)((char *)(arg0) + 0x10));
    sp5C = (*(s32 *)((char *)(arg0) + 0x18));
    sp68 = 0;
    sp6A = 0x11;
    sp60 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp6C = D_800A5784;
    sp64 = (sp58 + sp5C) * 0.5f;
    temp_t4 = (*(s32 *)((char *)(arg0) + 0x20));
    sp70 = (s32) temp_t4;
    temp_t5 = (*(s32 *)((char *)(arg0) + 0x22));
    sp78 = 0;
    sp7C = 0;
    sp7E = 0xF;
    sp80 = D_800A5788;
    sp74 = (s32) temp_t5;
    sp84 = (*(s32 *)((char *)(arg0) + 0x40));
    sp9C = 0;
    spA0 = (s32) (temp_t4 + temp_t5) >> 1;
    spA8 = 0.0f;
    spAC = 0.0f;
    sp88 = (*(s32 *)((char *)(arg0) + 0x44));
    sp8C = (*(s32 *)((char *)(arg0) + 0x34));
    sp90 = (*(s32 *)((char *)(arg0) + 0x3C));
    if (random_u32() & 1) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1513D524(&sp94, (*(s32 *)((char *)(arg0) + 0x2E)), 0xE, (*(s32 *)((char *)(arg0) + 0x2F)), (s32) arg1, var_v0 | 2, (*(s32 *)((char *)(arg0) + 0x30)) + 0x50, (s32) arg4, arg5);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x110, &sp44, 0x50);
    }
    return temp_v0;
}

s32 func_15149838(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;

    (*(s16 *)((char *)(arg0) + 0x11C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x11C)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x11C)) < 0) {
        temp_s0 = (char *)(arg0) + 0x110;
        (*(s16 *)((char *)(temp_s0) + 0xC)) = (s16) (random_u32() % (u32) (*(s16 *)((char *)(temp_s0) + 0xE)));
        temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x4));
        (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((random_float() * ((*(f32 *)((char *)(arg0) + 0x110)) - temp_f2)) + temp_f2);
    }
    temp_s0_2 = (char *)(arg0) + 0x110;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_s0_2) + 0x8)) - temp_f0) * (*(f32 *)((char *)(temp_s0_2) + 0x10))));
    (*(s16 *)((char *)(temp_s0_2) + 0x24)) = (s16) ((*(s16 *)((char *)(temp_s0_2) + 0x24)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x24)) < 0) {
        (*(s16 *)((char *)(temp_s0_2) + 0x24)) = (s16) (random_u32() % (u32) (*(s16 *)((char *)(temp_s0_2) + 0x26)));
        if (random_u32() & 3) {
            temp_f2_2 = (*(s32 *)((char *)(temp_s0_2) + 0x18));
            (*(f32 *)((char *)(temp_s0_2) + 0x20)) = (f32) ((random_float() * ((*(f32 *)((char *)(temp_s0_2) + 0x14)) - temp_f2_2)) + temp_f2_2);
        } else {
            temp_f2_3 = (*(s32 *)((char *)(temp_s0_2) + 0x14));
            (*(f32 *)((char *)(temp_s0_2) + 0x20)) = (f32) ((random_float() * ((*(f32 *)((char *)(temp_s0_2) + 0x1C)) - temp_f2_3)) + temp_f2_3);
        }
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_s0_2) + 0x20)) - temp_f0_2) * (*(f32 *)((char *)(temp_s0_2) + 0x28))));
    (*(s16 *)((char *)(temp_s0_2) + 0x38)) = (s16) ((*(s16 *)((char *)(temp_s0_2) + 0x38)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x38)) < 0) {
        (*(s16 *)((char *)(temp_s0_2) + 0x38)) = (s16) (random_u32() % (u32) (*(s16 *)((char *)(temp_s0_2) + 0x3A)));
        temp_v1 = (*(s32 *)((char *)(temp_s0_2) + 0x30));
        (*(s32 *)((char *)(temp_s0_2) + 0x34)) = (s32) ((random_u32() % (u32) (((*(s32 *)((char *)(temp_s0_2) + 0x2C)) - temp_v1) + 1)) + temp_v1);
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (temp_v0 + (s32) (((f32) (*(s32 *)((char *)(temp_s0_2) + 0x34)) - (f32) temp_v0) * (*(s32 *)((char *)(temp_s0_2) + 0x3C))));
    if ((*(s32 *)((char *)(arg0) + 0x1C)) < 5) {
        func_1513F680(arg0, (*(s32 *)((char *)(arg0) + 0x70)), (*(s32 *)((char *)(temp_s0_2) + 0x48)), (*(s32 *)((char *)(arg0) + 0x72)), (s32) (*(s32 *)((char *)(arg0) + 0x73)));
        (*(s32 *)((char *)(arg0) + 0x1C)) = 0x12C;
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~1);
    }
    return 1;
}

s32 func_15149A94(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    s32 var_v1;
    u8 temp_t8;
    u8 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x74));
    var_v1 = 1;
    if (!(var_v0 & 2)) {
        temp_v0 = (char *)(arg0) + 0x110;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_v0) + 0x8)) - temp_f0) * (*(f32 *)((char *)(temp_v0) + 0x44))));
        if (((*(s32 *)((char *)(temp_v0) + 0x8)) * D_800A578C) < (*(s32 *)((char *)(arg0) + 0x2C))) {
            temp_t8 = (*(s32 *)((char *)(arg0) + 0x74)) | 2;
            (*(s32 *)((char *)(arg0) + 0x74)) = temp_t8;
            var_v0 = temp_t8 & 0xFF;
        } else {
            var_v1 = 0;
            var_v0 = (*(s32 *)((char *)(arg0) + 0x74));
        }
    }
    temp_v0_2 = (char *)(arg0) + 0x110;
    if (!(var_v0 & 8)) {
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x30));
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_v0_2) + 0x20)) - temp_f0_2) * (*(f32 *)((char *)(temp_v0_2) + 0x44))));
        if (((*(s32 *)((char *)(temp_v0_2) + 0x20)) * D_800A5790) < (*(s32 *)((char *)(arg0) + 0x30))) {
            (*(u8 *)((char *)(arg0) + 0x74)) = (u8) ((*(u8 *)((char *)(arg0) + 0x74)) | 8);
        } else {
            var_v1 = 0;
        }
    }
    if (var_v1 != 0) {
        func_1513F680((void *) (*(u8 *)((char *)(arg0) + 0x70)), 0xDU, (*(u8 *)((char *)(arg0) + 0x72)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x73)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x1C)) < 5) {
        func_1513F680(arg0, (*(s32 *)((char *)(arg0) + 0x70)), (*(s32 *)((char *)(arg0) + 0x158)), (*(s32 *)((char *)(arg0) + 0x72)), (s32) (*(s32 *)((char *)(arg0) + 0x73)));
        (*(s32 *)((char *)(arg0) + 0x1C)) = 0x64;
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~1);
    }
    return 1;
}

s32 func_15149BF4(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x150));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 - (temp_f0 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f12 - (temp_f12 * temp_f2));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2.0f) || ((*(s32 *)((char *)(arg0) + 0x30)) < 2.0f)) {
        return 0;
    }
    return 1;
}

s32 func_15149C58(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x150));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 - (temp_f0 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f12 - (temp_f12 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x15C)) < (*(s32 *)((char *)(arg0) + 0x38))) {
        return 0;
    }
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 4.0f) || ((*(s32 *)((char *)(arg0) + 0x30)) < 4.0f)) {
        return 0;
    }
    return 1;
}

void *func_15149D18(void *arg0, s32 arg1) {
    void *sp44;
    void *sp40;
    u8 sp37;
    void *sp30;
    f32 *sp2C;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f6;
    s32 temp_t0;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp44, &sp37);
    sp40 = sp44;
    if (sp44 != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_t0 = arg1 * 4;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
        temp_f2 = (*(s32 *)((char *)(D_800DD1D8) + temp_t0)) * temp_f0;
        temp_f12 = (*(s32 *)((char *)(D_800DD1E8) + temp_t0)) * temp_f0;
        temp_f16 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) + temp_f12);
        (*(s16 *)((char *)(sp44) + 0x30)) = (s16) temp_f16;
        (*(s16 *)((char *)(sp44) + 0x0)) = (s16) temp_f16;
        temp_f4 = (s32) (*(s32 *)((char *)(arg0) + 0x38));
        (*(s16 *)((char *)(sp44) + 0x12)) = (s16) temp_f4;
        (*(s16 *)((char *)(sp44) + 0x2)) = (s16) temp_f4;
        temp_f10 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) - temp_f2);
        (*(s16 *)((char *)(sp44) + 0x34)) = (s16) temp_f10;
        (*(s16 *)((char *)(sp44) + 0x4)) = (s16) temp_f10;
        temp_f4_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) - temp_f12);
        (*(s16 *)((char *)(sp44) + 0x20)) = (s16) temp_f4_2;
        (*(s16 *)((char *)(sp44) + 0x10)) = (s16) temp_f4_2;
        temp_f16_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x32)) = (s16) temp_f16_2;
        (*(s16 *)((char *)(sp44) + 0x22)) = (s16) temp_f16_2;
        temp_f6 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) + temp_f2);
        (*(s16 *)((char *)(sp44) + 0x24)) = (s16) temp_f6;
        (*(s16 *)((char *)(sp44) + 0x14)) = (s16) temp_f6;
        return sp40;
    }
    return NULL;
}

s32 func_15149EC4(void *arg0) {
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    void * sp49;
    void * sp48;
    void * sp47;
    void * sp46;
    void * sp45;
    void * sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    s16 sp34;
    s16 sp32;
    void * sp1C;
    s16 temp_t1;

    (*(s32 *)((char *)&(sp1C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x34));
    (*(s32 *)((char *)&(sp1C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(sp1C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    sp32 = 0;
    sp34 = 0;
    temp_t1 = (random_u32() % 6U) + 8;
    sp36 = temp_t1;
    sp3A = 0;
    sp3C = 0;
    sp38 = temp_t1;
    sp3E = (random_u32() % 201U) + 0x64;
    sp40 = (random_u32() % 5U) + 3;
    sp42 = 0x258;
    func_151429E0(3, &sp44, &sp45, &sp46);
    func_151429E0(4, &sp47, &sp48, &sp49);
    sp4A = 0xFF;
    sp4B = (random_u32() % 65U) + 0x5C;
    sp4C = (random_u32() % 3U) + 1;
    sp4D = 0;
    func_1518CA80(&sp1C, 1);
    return 0;
}

void *func_15149FD0(void *arg0, s32 arg1) {
    void *sp44;
    void *sp40;
    u8 sp37;
    void *sp30;
    f32 *sp2C;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f6;
    s32 temp_t0;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp44, &sp37);
    sp40 = sp44;
    if (sp44 != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_t0 = arg1 * 4;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
        (*(s32 *)((char *)(sp44) + 0x6)) = 0;
        temp_f2 = (*(s32 *)((char *)(D_800DD1D8) + temp_t0)) * temp_f0;
        (*(s32 *)((char *)(sp44) + 0x16)) = 0;
        temp_f12 = (*(s32 *)((char *)(D_800DD1E8) + temp_t0)) * temp_f0;
        (*(s32 *)((char *)(sp44) + 0x26)) = 0;
        (*(s32 *)((char *)(sp44) + 0x36)) = 0;
        temp_f16 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) + temp_f12);
        (*(s16 *)((char *)(sp44) + 0x30)) = (s16) temp_f16;
        (*(s16 *)((char *)(sp44) + 0x0)) = (s16) temp_f16;
        temp_f4 = (s32) (*(s32 *)((char *)(arg0) + 0x38));
        (*(s16 *)((char *)(sp44) + 0x12)) = (s16) temp_f4;
        (*(s16 *)((char *)(sp44) + 0x2)) = (s16) temp_f4;
        temp_f10 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) - temp_f2);
        (*(s16 *)((char *)(sp44) + 0x34)) = (s16) temp_f10;
        (*(s16 *)((char *)(sp44) + 0x4)) = (s16) temp_f10;
        temp_f4_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) - temp_f12);
        (*(s16 *)((char *)(sp44) + 0x20)) = (s16) temp_f4_2;
        (*(s16 *)((char *)(sp44) + 0x10)) = (s16) temp_f4_2;
        temp_f16_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x38)) + (*(s32 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x32)) = (s16) temp_f16_2;
        (*(s16 *)((char *)(sp44) + 0x22)) = (s16) temp_f16_2;
        temp_f6 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) + temp_f2);
        (*(s16 *)((char *)(sp44) + 0x24)) = (s16) temp_f6;
        (*(s16 *)((char *)(sp44) + 0x14)) = (s16) temp_f6;
        return sp40;
    }
    return NULL;
}

s32 func_1514A19C(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;

    (*(s16 *)((char *)(arg0) + 0x12E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12E)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x12E)) < 0) {
        temp_s0 = (char *)(arg0) + 0x110;
        (*(s16 *)((char *)(temp_s0) + 0x1E)) = (s16) (random_u32() % 6U);
        if (random_u32() & 3) {
            temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x10));
            (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((random_float() * ((*(f32 *)((char *)(temp_s0) + 0xC)) - temp_f2)) + temp_f2);
        } else {
            temp_f2_2 = (*(s32 *)((char *)(temp_s0) + 0xC));
            (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((random_float() * ((*(f32 *)((char *)(temp_s0) + 0x14)) - temp_f2_2)) + temp_f2_2);
        }
    }
    temp_s0_2 = (char *)(arg0) + 0x110;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_s0_2) + 0x18)) - temp_f0) * D_800A5794));
    (*(s16 *)((char *)(temp_s0_2) + 0x1C)) = (s16) ((*(s16 *)((char *)(temp_s0_2) + 0x1C)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x1C)) < 0) {
        (*(s16 *)((char *)(temp_s0_2) + 0x1C)) = (s16) (random_u32() % 17U);
        temp_f2_3 = (*(s32 *)((char *)(temp_s0_2) + 0x4));
        (*(f32 *)((char *)(temp_s0_2) + 0x8)) = (f32) ((random_float() * ((*(f32 *)((char *)(arg0) + 0x110)) - temp_f2_3)) + temp_f2_3);
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_s0_2) + 0x8)) - temp_f0_2) * D_800A5798));
    (*(s16 *)((char *)(temp_s0_2) + 0x44)) = (s16) ((*(s16 *)((char *)(temp_s0_2) + 0x44)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x44)) < 0) {
        (*(s16 *)((char *)(temp_s0_2) + 0x44)) = (s16) (random_u32() % 15U);
        temp_f2_4 = (*(s32 *)((char *)(temp_s0_2) + 0x3C));
        (*(f32 *)((char *)(temp_s0_2) + 0x40)) = (f32) ((random_float() * ((*(f32 *)((char *)(temp_s0_2) + 0x38)) - temp_f2_4)) + temp_f2_4);
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (temp_v1 + (s32) (((*(s32 *)((char *)(temp_s0_2) + 0x40)) - (f32) temp_v1) * D_800A579C));
    return 1;
}

s32 func_1514A380(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    s32 var_v1;
    u8 temp_t8;
    u8 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x74));
    var_v1 = 1;
    if (!(var_v0 & 2)) {
        temp_v0 = (char *)(arg0) + 0x110;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_v0) + 0x8)) - temp_f0) * D_800A57A0));
        if (((*(s32 *)((char *)(temp_v0) + 0x8)) * D_800A57A4) < (*(s32 *)((char *)(arg0) + 0x2C))) {
            temp_t8 = (*(s32 *)((char *)(arg0) + 0x74)) | 2;
            (*(s32 *)((char *)(arg0) + 0x74)) = temp_t8;
            var_v0 = temp_t8 & 0xFF;
        } else {
            var_v1 = 0;
            var_v0 = (*(s32 *)((char *)(arg0) + 0x74));
        }
    }
    temp_v0_2 = (char *)(arg0) + 0x110;
    if (!(var_v0 & 8)) {
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x30));
        (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_v0_2) + 0x18)) - temp_f0_2) * D_800A57A8));
        if (((*(s32 *)((char *)(temp_v0_2) + 0x18)) * D_800A57AC) < (*(s32 *)((char *)(arg0) + 0x30))) {
            (*(u8 *)((char *)(arg0) + 0x74)) = (u8) ((*(u8 *)((char *)(arg0) + 0x74)) | 8);
        } else {
            var_v1 = 0;
        }
    }
    if (var_v1 != 0) {
        func_1513F680((void *) (*(u8 *)((char *)(arg0) + 0x70)), 4U, (*(u8 *)((char *)(arg0) + 0x72)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0x73)));
    }
    return 1;
}

s32 func_1514A498(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x144));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0 - (temp_f0 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f12 - (temp_f12 * temp_f2));
    if (temp_v0 < (*(s32 *)((char *)(arg0) + 0x156))) {
        (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (temp_v0 * (*(s8 *)((char *)(arg0) + 0x158)));
    }
    return 1;
}

s32 func_1514A4EC(void *arg0) {
    f32 temp_f0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x140));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(arg0) + 0x34));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x130)) = (f32) ((*(f32 *)((char *)(arg0) + 0x130)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x138)) = (f32) ((*(f32 *)((char *)(arg0) + 0x138)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x134)) = (f32) ((*(f32 *)((char *)(arg0) + 0x134)) + ((*(f32 *)((char *)(arg0) + 0x13C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x130)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x134)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x138)) * D_800BE9A4));
    return 1;
}

s32 func_1514A594(void *arg0) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x140));
    (*(f32 *)((char *)(arg0) + 0x130)) = (f32) ((*(f32 *)((char *)(arg0) + 0x130)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x134)) = (f32) ((*(f32 *)((char *)(arg0) + 0x134)) + ((*(f32 *)((char *)(arg0) + 0x13C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x138)) = (f32) ((*(f32 *)((char *)(arg0) + 0x138)) * temp_f0);
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x130)) * D_800BE9A4;
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x134)) * D_800BE9A4;
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x138)) * D_800BE9A4;
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + temp_f12);
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + temp_f14);
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + temp_f16);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + temp_f12);
    temp_f6 = (*(s32 *)((char *)(arg0) + 0x54));
    temp_f18 = (*(s32 *)((char *)(arg0) + 0x34));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + temp_f14);
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + temp_f16);
    sp4 = temp_f6;
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (temp_f18 + (((*(f32 *)((char *)(arg0) + 0x40)) - temp_f18) * sp4));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(arg0) + 0x44)) - temp_f0_2) * temp_f6));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f2 + (((*(f32 *)((char *)(arg0) + 0x48)) - temp_f2) * sp4));
    return 1;
}

void *func_1514A6A0(void *arg0, s32 arg1) {
    void *spC4;
    void *spC0;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 sp88;
    u8 sp7F;
    f32 sp74;
    void *sp6C;
    f32 sp68;                                      /* compiler-managed */
    f32 sp64;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 var_f12;
    f32 var_f14;
    f32 var_f22;
    f32 var_f22_2;
    f32 var_f24;
    f32 var_f24_2;
    f32 var_f26;
    f32 var_f26_2;
    f32 var_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &spC4, &sp7F);
    spC0 = spC4;
    if (spC4 != NULL) {
        if (sp7F != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp68 = (*(f32 *)&(temp_a1));
            sp6C = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_f30 = (*(s32 *)((char *)(arg0) + 0x34));
        temp_f20 = (*(s32 *)((char *)(arg0) + 0x38));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f22 = (*(s32 *)((char *)(arg0) + 0x3C));
        temp_f26 = temp_f30 + (((*(s32 *)((char *)(arg0) + 0x40)) - temp_f30) * temp_f0);
        temp_f28 = temp_f20 + (((*(s32 *)((char *)(arg0) + 0x44)) - temp_f20) * temp_f0);
        var_f2 = temp_f26 - temp_f30;
        spB8 = temp_f22 + (((*(s32 *)((char *)(arg0) + 0x48)) - temp_f22) * temp_f0);
        var_f12 = temp_f28 - temp_f20;
        temp_f18 = (*(s32 *)((char *)(arg0) + 0x4C));
        var_f14 = spB8 - temp_f22;
        temp_v0_2 = (arg1 * 0x9A0) + D_800DBFF0;
        temp_v0_3 = (char *)(temp_v0_2) + 0x2F8;
        spB4 = temp_f28;
        spB0 = temp_f26;
        sp68 = temp_f20;
        sp64 = temp_f22;
        temp_f0_2 = (var_f2 * var_f2) + (var_f12 * var_f12) + (var_f14 * var_f14);
        if (temp_f0_2 < (temp_f18 * temp_f18)) {
            temp_f16 = 1.0f - (sqrtf(temp_f0_2) / temp_f18);
            var_f2 += var_f2 * temp_f16;
            var_f12 += var_f12 * temp_f16;
            var_f14 += var_f14 * temp_f16;
            sp68 = temp_f20;
            sp64 = temp_f22;
        }
        temp_f0_3 = temp_f30 - (*(s32 *)((char *)(temp_v0_2) + 0x2F8));
        temp_f24 = sp64 - (*(s32 *)((char *)(temp_v0_3) + 0x8));
        temp_f22_2 = sp68 - (*(s32 *)((char *)(temp_v0_3) + 0x4));
        temp_f16_2 = (var_f12 * temp_f24) - (temp_f22_2 * var_f14);
        temp_f18_2 = (var_f14 * temp_f0_3) - (temp_f24 * var_f2);
        temp_f20_2 = (var_f2 * temp_f22_2) - (temp_f0_3 * var_f12);
        temp_f26_2 = (temp_f16_2 * temp_f16_2) + (temp_f18_2 * temp_f18_2) + (temp_f20_2 * temp_f20_2);
        sp88 = temp_f26_2;
        if (temp_f26_2 == 0.0f) {
            var_f22 = 0.0f;
            var_f24 = 0.0f;
            var_f26 = 0.0f;
        } else {
            sp74 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp88);
            var_f22 = temp_f16_2 * sp74;
            var_f24 = temp_f18_2 * sp74;
            var_f26 = temp_f20_2 * sp74;
        }
        temp_f12 = -var_f12;
        temp_f14 = -var_f14;
        temp_f2 = -var_f2;
        (*(s16 *)((char *)(spC4) + 0x0)) = (s16) (s32) (temp_f30 + var_f22);
        (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + var_f24);
        (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + var_f26);
        (*(s32 *)((char *)(spC4) + 0x6)) = 0;
        spC4 = (char *)(spC4) + 0x10;
        (*(s16 *)((char *)(spC4) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - var_f22);
        (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - var_f24);
        (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - var_f26);
        (*(s32 *)((char *)(spC4) + 0x6)) = 0;
        spC4 = (char *)(spC4) + 0x10;
        temp_f0_4 = spB0 - (*(s32 *)((char *)(temp_v0_2) + 0x2F8));
        temp_f22_3 = spB4 - (*(s32 *)((char *)(temp_v0_3) + 0x4));
        temp_f24_2 = spB8 - (*(s32 *)((char *)(temp_v0_3) + 0x8));
        temp_f16_3 = (temp_f12 * temp_f24_2) - (temp_f22_3 * temp_f14);
        temp_f18_3 = (temp_f14 * temp_f0_4) - (temp_f24_2 * temp_f2);
        temp_f20_3 = (temp_f2 * temp_f22_3) - (temp_f0_4 * temp_f12);
        temp_f26_3 = (temp_f16_3 * temp_f16_3) + (temp_f18_3 * temp_f18_3) + (temp_f20_3 * temp_f20_3);
        sp88 = temp_f26_3;
        if (temp_f26_3 == 0.0f) {
            var_f22_2 = 0.0f;
            var_f24_2 = 0.0f;
            var_f26_2 = 0.0f;
        } else {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp88);
            var_f22_2 = temp_f16_3 * temp_f2_2;
            var_f24_2 = temp_f18_3 * temp_f2_2;
            var_f26_2 = temp_f20_3 * temp_f2_2;
        }
        (*(s16 *)((char *)(spC4) + 0x0)) = (s16) (s32) (spB0 + var_f22_2);
        (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) (spB4 + var_f24_2);
        (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spB8 + var_f26_2);
        (*(s32 *)((char *)(spC4) + 0x6)) = 0;
        spC4 = (char *)(spC4) + 0x10;
        (*(s16 *)((char *)(spC4) + 0x10)) = (s16) (s32) (spB0 - var_f22_2);
        (*(s16 *)((char *)(spC4) + 0x2)) = (s16) (s32) (spB4 - var_f24_2);
        (*(s16 *)((char *)(spC4) + 0x4)) = (s16) (s32) (spB8 - var_f26_2);
        (*(s32 *)((char *)(spC4) + 0x6)) = 0;
        return spC0;
    }
    return NULL;
}

void func_1514AB5C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s16 arg9, s16 arg10, u8 arg11) {
    f32 spCC;
    f32 spC8;
    f32 spC0;
    s8 spBC;
    s32 spB8;
    u8 spB7;
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
    f32 sp8C;
    f32 sp88;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s16 var_s1;
    u32 temp_v0;

    var_s1 = arg4;
    if (var_s1 > 0) {
        spAA = 0x1A4D;
        spA8 = 0x6231;
        spAE = 0;
        spAF = 0;
        spB0 = 0;
        spB1 = 0xFF;
        spB2 = 1;
        spB4 = 0xFF;
        spB5 = 0xFF;
        spB8 = 0;
        spB6 = 0;
        spBC = 0xF;
        sp8C = arg1;
        spC8 = D_800A57B0;
        spB7 = arg11;
        spC0 = 0.0f;
        spCC = D_800A57B4;
        do {
            temp_v0 = random_u32();
            temp_f24 = func_151423D8((temp_v0 - 0x40) & 0xFF);
            temp_f26 = func_151423D8(temp_v0 & 0xFF & 0xFF);
            temp_f20 = random_float() * arg3;
            temp_f22 = (random_float() * arg6) + arg5;
            temp_f0 = random_float();
            sp88 = (temp_f20 * temp_f24) + arg0;
            sp90 = (temp_f20 * temp_f26) + arg2;
            sp94 = D_800A57B8 * temp_f22;
            sp9C = D_800A57BC * temp_f22;
            temp_f2 = (temp_f0 * arg8) + arg7;
            sp98 = D_800A57C0 * temp_f2;
            spA0 = D_800A57C4 * temp_f2;
            spA4 = D_800A57C8 * temp_f2;
            spAC = (random_u32() % (u32) (arg10 + 1)) + arg9;
            func_15149550(&sp88, 0xAU, 0, 0U, 0xFFU, 1);
            var_s1 -= 1;
        } while (var_s1 != 0);
    }
}

void func_1514AD9C(void *arg0, s32 arg1, s32 arg2) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s8 sp64;
    s32 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s16 sp54;
    s16 sp52;
    s16 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp30;
    f32 sp2C;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f6;

    sp52 = 0x1A4D;
    sp50 = 0x6231;
    (*(s32 *)((char *)&(sp30) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp56 = 0;
    sp57 = 0;
    sp58 = 0;
    sp59 = 0xFF;
    sp5D = 0xFF;
    sp5E = 0;
    sp5F = 1;
    sp60 = 0;
    sp5A = 1;
    sp64 = 0x1C;
    sp6C = 0.0f;
    sp70 = D_800A57CC;
    sp74 = D_800A57D0;
    temp_f12 = ((random_float() * D_800A57D4) + D_800A57D8) * D_800A57DC;
    sp2C = temp_f12;
    temp_f6 = random_float(temp_f12) * D_800A57E8;
    sp3C = D_800A57E0 * temp_f12;
    sp44 = D_800A57E4 * temp_f12;
    temp_f2 = (temp_f6 + D_800A57EC) * D_800A57F0;
    sp40 = D_800A57F4 * temp_f2;
    sp48 = D_800A57F8 * temp_f2;
    sp4C = D_800A57FC * temp_f2;
    sp54 = (random_u32(temp_f12) % 17U) + 0x10;
    sp68 = ((random_float() * D_800A5800) + 50.0f) * D_800A5804;
    sp5C = (random_u32() % 156U) + 0x64;
    func_15149550(&sp30, 0xAU, 0, 0U, (u8) (s32) arg1, arg2);
}

s32 func_1514AF74(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x150));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x50));
    temp_f18 = (*(s32 *)((char *)(arg0) + 0x4C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 - (temp_f0 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f12 - (temp_f12 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((temp_f14 * D_800BE9A4) + (0.5f * temp_f18 * D_800BE9A4 * D_800BE9A4)));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) (temp_f14 + (temp_f18 * D_800BE9A4));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 10.0f) || ((*(s32 *)((char *)(arg0) + 0x30)) < 10.0f)) {
        return 0;
    }
    return 1;
}

void func_1514B034(f32 *arg0, s32 arg1, s32 arg2) {
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s8 spB8;
    s32 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s16 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f24;
    u32 temp_s0;

    var_f24 = ((random_float() * 20.0f) + 29.0f) * D_800A5808 * D_800A580C;
    if (var_f24 > 1.0f) {
        spA4 = 0x6231;
        spA6 = 0x1A4D;
        spAA = 0;
        spAB = 0;
        spAC = 0;
        spAD = 0xFF;
        spB1 = 0xFF;
        spB2 = 0;
        spB3 = 1;
        spB4 = 0;
        spAE = 1;
        spB8 = 0x1C;
        temp_f22 = D_800A5810;
        sp88 = (*(s32 *)((char *)(arg0) + 0x4));
        spC0 = 0.0f;
        do {
            temp_s0 = random_u32();
            func_15143874((s16) (temp_s0 & 0xFF), random_float() * 42.0f, &sp84, &sp8C);
            sp84 += (*(s32 *)((char *)(arg0) + 0x0));
            sp8C += (*(s32 *)((char *)(arg0) + 0x8));
            spC4 = ((random_float() * 16.0f) + 29.0f) * temp_f22;
            spC8 = ((random_float() * 600.0f) + 400.0f) * temp_f22;
            temp_f20 = ((random_float() * D_800A5814) + 304.0f) * temp_f22;
            temp_f16 = random_float() * D_800A5820;
            sp90 = D_800A5818 * temp_f20;
            sp98 = D_800A581C * temp_f20;
            temp_f2 = (temp_f16 + 504.0f) * temp_f22;
            sp94 = D_800A5824 * temp_f2;
            sp9C = D_800A5828 * temp_f2;
            spA0 = D_800A582C * temp_f2;
            spA8 = (random_u32() % 31U) + 0x14;
            spBC = random_float() * D_800A5830 * temp_f22;
            spB0 = (random_u32() % 156U) + 0x64;
            func_15149550(&sp84, 0xAU, 0, 0U, (u8) (arg1 & 0xFF), arg2);
            var_f24 -= 1.0f;
        } while (var_f24 > 1.0f);
    }
}

void func_1514B364(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp194;
    s32 sp190;
    f32 sp18C;
    f32 sp188;
    s8 sp187;
    s8 sp186;
    s8 sp185;
    s8 sp184;
    f32 sp180;
    s8 sp17E;
    s16 sp17C;
    s16 sp17A;
    s16 sp178;
    s32 sp174;
    s32 sp170;
    s8 sp16C;
    s8 sp16B;
    s8 sp16A;
    s8 sp169;
    s8 sp168;
    s8 sp167;
    s8 sp166;
    s8 sp165;
    s8 sp164;
    s8 sp163;
    s8 sp162;
    s8 sp161;
    s8 sp160;
    s8 sp15F;
    s8 sp15E;
    s8 sp15D;
    s8 sp15C;
    s8 sp15B;
    s8 sp15A;
    s8 sp159;
    s8 sp158;
    s8 sp157;
    s8 sp156;
    s16 sp154;
    s16 sp152;
    s16 sp150;
    s32 sp14C;
    s32 sp148;
    s16 sp146;
    s16 sp144;
    s16 sp142;
    s16 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    void * sp11C;
    s32 sp118;
    s32 sp114;
    s8 sp111;
    s8 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    s32 sp100;
    s32 spFC;
    s32 spF8;
    s8 spF5;
    s8 spF4;
    s16 spF2;
    s16 spF0;
    s16 spEE;
    s16 spEC;
    s16 spEA;
    s16 spE8;
    s16 spE6;
    s16 spE4;
    s16 spE2;
    s16 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    void * spBC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
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
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s32 sp70;
    s32 sp6C;
    s16 sp68;
    s16 sp66;
    s8 sp64;
    u32 sp58;
    u32 temp_s0;

    f32 sp198;
    f32 sp19C;
    (*(s32 *)((char *)&(sp194) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp194) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp194) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp188 = (*(s32 *)((char *)(arg0) + 0x0));
    sp18C = (*(s32 *)((char *)(arg0) + 0x4)) + 200.0f;
    sp190 = (*(s32 *)((char *)(arg0) + 0x8));
    if (func_15046C80(&sp188, 0, (*(s32 *)((char *)(arg0) + 0x4)) - 200.0f, arg1) != 0) {
        sp114 = 0xA;
        sp142 = 0xFF;
        sp148 = 4;
        sp14C = 5;
        sp144 = -0x3F;
        sp146 = 0x2B;
        sp150 = 0x1E;
        sp152 = 0x1E;
        sp154 = 1;
        sp156 = 0xC;
        sp157 = 2;
        sp158 = 3;
        sp128 = D_800A5834;
        sp15D = 0x32;
        sp15E = 0x64;
        sp159 = 0xB4;
        sp15C = 0x9B;
        sp160 = 0x64;
        sp161 = 0xFF;
        sp162 = 0xFF;
        sp163 = 0xFF;
        sp164 = 0xFF;
        sp169 = 0xFF;
        sp118 = 0;
        sp140 = 0;
        sp15A = 0;
        sp15B = 0;
        sp15F = 0;
        sp165 = 0;
        sp166 = 0;
        sp167 = 0;
        sp168 = 0;
        sp16A = 0;
        sp16B = 1;
        sp16C = 0x24;
        sp170 = 0x200005;
        sp174 = 0x60600;
        sp178 = 0x14;
        sp17A = 0xC;
        sp17C = 1;
        sp17E = 0;
        sp184 = -1;
        sp185 = 0;
        sp186 = -1;
        sp187 = -1;
        sp12C = 21.0f;
        sp130 = D_800A5838;
        sp134 = D_800A583C;
        sp138 = 30.0f;
        sp13C = D_800A5840;
        sp180 = 1.0f;
        (*(f32 *)((char *)&(sp11C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp194) + 0x0));
        (*(f32 *)((char *)&(sp11C) + 0x4)) = (f32) (*(f32 *)((char *)&(sp194) + 0x4));
        (*(s32 *)((char *)&(sp11C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp194) + 0x8));
        func_15152B38(&sp114, arg2, arg3);
        (*(f32 *)((char *)&(spBC) + 0x0)) = (f32) (*(f32 *)((char *)&(sp194) + 0x0));
        (*(f32 *)((char *)&(spBC) + 0x4)) = (f32) (*(f32 *)((char *)&(sp194) + 0x4));
        (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp194) + 0x8));
        spE0 = 8;
        spE2 = 8;
        spE6 = 0xFF;
        spE8 = -0x40;
        spE4 = 0;
        spEA = 0x2C;
        spEC = 5;
        spEE = 4;
        spF0 = 0x42;
        spF2 = 0x1E;
        spF4 = 0xA;
        spF5 = 0x21;
        spF8 = 1;
        spFC = 0xC;
        sp100 = 0;
        sp104 = 0;
        sp108 = 0;
        sp10C = 0;
        sp110 = 0xFF;
        spC8 = D_800A5844;
        spCC = D_800A5848;
        spD0 = D_800A584C;
        spD4 = D_800A5850;
        spD8 = D_800A5854;
        spDC = D_800A5858;
        sp111 = (random_u32() % 101U) + 0x9B;
        func_15152F70(&spBC, 0xFF);
        func_1514B034(&sp194, arg2, arg3);
        sp64 = 0x38;
        sp66 = 1;
        sp68 = 0x32;
        sp6C = 0;
        sp70 = 0x6666;
        sp77 = 0xFF;
        sp78 = 1.0f;
        sp7C = 1.0f;
        sp84 = sp198 + 10.0f;
        sp8C = 0.0f;
        sp90 = 0.0f;
        sp94 = 0.0f;
        sp9C = 1.0f;
        spA0 = 1.0f;
        spA4 = 0x400C0001;
        sp80 = sp194;
        sp88 = sp19C;
        sp98 = D_800A585C;
        spA8 = (random_u32() % 101U) + 0x64;
        spA9 = 0xFF;
        spAA = 0;
        spAB = 6;
        sp74 = (random_u32() % 51U) + 0xB4;
        sp75 = (s8) (random_u32() % 101U);
        random_u32();
        sp76 = 0;
        temp_s0 = random_u32();
        sp58 = random_u32();
        func_1513D668(&sp64, 0, 0x12, 0x1D, 0, (sp58 & 1) + (temp_s0 & 1), random_u32() & 0xFF, 100.0f, 100.0f, 0, arg1 + 4, 0, 0, (s32) arg2, arg3);
    }
}

s32 func_1514B844(void *arg0) {
    s16 temp_v1;
    s32 temp_a0;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    if (temp_v1 < 0x10) {
        temp_a0 = temp_v1 * 0x10;
        if (temp_a0 < (s32) (*(s32 *)((char *)(temp_v0) + 0x1B))) {
            (*(u8 *)((char *)(temp_v0) + 0x1B)) = (u8) temp_a0;
        }
    }
    return 1;
}

s32 func_1514B87C(void *arg0) {
    f32 temp_f0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f0);
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f0);
    return 1;
}

s32 func_1514B8B0(void *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x10) {
        temp_v1 = temp_v0 * 0x10;
        if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
            (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v1;
        }
    }
    return 1;
}

s32 func_1514B8E4(void *arg0, void *arg1, s16 arg2, u8 arg3, void *arg4, f32 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9, u8 arg10, s32 arg11, u8 arg12, s16 arg13, s16 arg14, s32 arg15, u8 arg16, s32 arg17) {
    s32 spF4;
    s16 spF2;
    s16 spF0;
    s32 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    u8 spE0;
    s32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    s32 spCC;
    f32 spC8;
    s32 spC4;
    void * spB8;
    f32 spB4;
    f32 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    s32 spA4;
    s16 spA0;
    s16 sp9E;
    s8 sp9D;
    s8 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    if (arg4 != NULL) {
        (*(s32 *)((char *)&(sp84) + 0x0)) = (*(s32 *)((char *)(arg4) + 0x0));
        (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
        (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(arg4) + 0x8));
    } else {
        sp84 = 0;
        sp88 = 0.0f;
        sp8C = 0.0f;
    }
    sp90 = arg5;
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp7C = 0.0f;
    spA8 = 0x3E3F;
    sp80 = D_800A5860;
    sp78 = D_800A5860;
    sp70 = D_800A5864;
    sp94 = arg6;
    sp98 = arg7;
    sp74 = D_800A5868;
    sp4C = (*(s32 *)((char *)(arg1) + 0x0)) * D_800A586C;
    sp54 = (*(s32 *)((char *)(arg1) + 0x0)) * D_800A5870;
    spB0 = 0.0f;
    sp5C = (*(s32 *)((char *)(arg1) + 0x0)) * D_800A5874;
    sp50 = (*(s32 *)((char *)(arg1) + 0x4)) * D_800A5878;
    sp58 = (*(s32 *)((char *)(arg1) + 0x4)) * D_800A587C;
    sp64 = (*(s32 *)((char *)(arg1) + 0x4)) * D_800A5880;
    spB4 = 0.0f;
    sp9D = 0;
    sp9E = 0x2203;
    sp9C = (s8) arg11;
    sp60 = (*(s32 *)((char *)(arg1) + 0x4)) * D_800A5884;
    if (arg2 == -1) {
        spA0 = 0x12C;
    } else {
        spA0 = arg2;
    }
    spA4 = 0;
    spAC = 0xFF;
    spAD = 0xFF;
    spAE = 0xFF;
    spAF = 0xFF;
    var_v1_2 = 0;
    (*(s32 *)((char *)&(spB8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(spB8) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spB8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spC4 = (*(s32 *)((char *)(arg0) + 0x0));
    spC8 = (*(s32 *)((char *)(arg0) + 0x4)) + 100.0f;
    spD0 = 1.0f;
    spD4 = 1.0f;
    spD8 = 1.0f;
    spCC = (*(s32 *)((char *)(arg0) + 0x8));
    if (arg12 & 1) {
        var_v1_2 = 0x800000;
    }
    if (arg2 == -1) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    var_v0 = 0;
    if (arg12 & 2) {
        var_v0 = 0x02000000;
    }
    spDC = var_v0 | var_a0 | 0x40000 | 0x80000 | 0x200000 | 0x400000 | var_v1_2 | 0x40000000;
    spE1 = 0xFF;
    spE2 = 0;
    spE3 = 7;
    spE4 = 0;
    spE0 = arg3;
    spF0 = arg13;
    spF2 = arg14;
    if (random_u32((f32) var_a0, arg2, -1) & 1) {
        var_v0_2 = 1;
    } else {
        var_v0_2 = 0;
    }
    temp_v0 = func_1513D2F0(&sp9C, &D_800A4AA0, arg8, arg9, (s32) arg10, 0x1C, var_v0_2 | 2, 0, 0, arg15 + 0x50, (s32) arg16, arg17);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spF4 = temp_v0;
        memcpy(temp_v0 + 0x110, &sp4C, 0x50);
        var_v1 = spF4;
    }
    return var_v1;
}

s32 func_1514BC08(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;

    (*(f32 *)((char *)(arg1) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg1) + 0x1C)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg1) + 0x1C)) < 0.0f) {
        (*(f32 *)((char *)(arg1) + 0x1C)) = (f32) (random_float() * 4.0f);
        (*(f32 *)((char *)(arg1) + 0x10)) = (f32) ((random_float() * (*(f32 *)((char *)(arg1) + 0x8))) + (*(f32 *)((char *)(arg1) + 0x0)));
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 + (((*(f32 *)((char *)(arg1) + 0x10)) - temp_f0) * D_800A5888));
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) ((*(f32 *)((char *)(arg1) + 0x20)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg1) + 0x20)) < 0.0f) {
        (*(f32 *)((char *)(arg1) + 0x20)) = (f32) (random_float() * 9.0f);
        if (random_u32() & 1) {
            (*(f32 *)((char *)(arg1) + 0x14)) = (f32) ((random_float() * (*(f32 *)((char *)(arg1) + 0xC))) + (*(f32 *)((char *)(arg1) + 0x4)));
        } else {
            (*(f32 *)((char *)(arg1) + 0x14)) = (f32) ((random_float() * (*(f32 *)((char *)(arg1) + 0x18))) + (*(f32 *)((char *)(arg1) + 0x4)));
        }
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(arg1) + 0x14)) - temp_f0_2) * D_800A588C));
    (*(f32 *)((char *)(arg1) + 0x30)) = (f32) ((*(f32 *)((char *)(arg1) + 0x30)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg1) + 0x30)) < 0.0f) {
        (*(f32 *)((char *)(arg1) + 0x30)) = (f32) (random_float() * 7.0f);
        (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) ((random_float() * (*(f32 *)((char *)(arg1) + 0x28))) + (*(f32 *)((char *)(arg1) + 0x24)));
    }
    temp_f0_3 = (*(s32 *)((char *)(arg1) + 0x34));
    (*(f32 *)((char *)(arg1) + 0x34)) = (f32) (temp_f0_3 + (((*(f32 *)((char *)(arg1) + 0x2C)) - temp_f0_3) * D_800A5890));
    (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (*(s32 *)((char *)(arg1) + 0x34));
    return 1;
}

void func_1514BE00(s32 arg0) {
    func_1514BC08(arg0 + 0x110, 0);
}

void func_1514BE20(void *arg0) {
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    void * sp34;
    void * sp30;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x34));
    sp58 = (*(s32 *)((char *)(arg0) + 0x38)) + 100.0f;
    temp_f10 = (*(s32 *)((char *)(arg0) + 0x3C));
    sp5C = temp_f10;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x40));
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x15C));
    sp48 = temp_f12 + ((temp_f2 - temp_f12) * temp_f0);
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x44));
    sp4C = temp_f14 + ((sp58 - temp_f14) * temp_f0);
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x48));
    sp50 = temp_f16 + ((temp_f10 - temp_f16) * temp_f0);
    sp38 = sp48 - temp_f2;
    sp3C = sp4C - (*(s32 *)((char *)(arg0) + 0x38));
    sp40 = sp50 - (*(s32 *)((char *)(arg0) + 0x3C));
    if (func_15145128(temp_f12, temp_f14, &sp38, &sp38, &sp34, &sp30) != 0) {
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + (sp38 * 100.0f));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + (sp3C * 100.0f));
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + (sp40 * 100.0f));
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(arg0) + 0x34));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
}

void func_1514BF50(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(arg0) + 0x34));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + 100.0f);
}

void func_1514BF7C(s32 arg0) {
    func_1514BC08(arg0 + 0x110, 0);
}

void func_1514BF9C(void *arg0) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f16;
    f32 var_f18;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    f32 sp24;
    f32 sp28;
    (*(s32 *)((char *)&(sp20) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x148));
    (*(s32 *)((char *)&(sp20) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14C));
    (*(s32 *)((char *)&(sp20) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x150));
    var_v1 = D_800BE9E4;
    if (var_v1 != 0) {
        temp_a2 = -(var_v1 & 3);
        temp_a1 = temp_a2 + var_v1;
        if (temp_a2 != 0) {
            temp_v0 = (char *)(arg0) + 0x110;
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x48));
            var_v1 -= 1;
            var_f18 = (*(s32 *)((char *)(temp_v0) + 0x38)) * temp_f0;
            if (temp_a1 != var_v1) {
                do {
                    (*(s32 *)((char *)(temp_v0) + 0x38)) = var_f18;
                    var_v1 -= 1;
                    var_f18 = (*(s32 *)((char *)(temp_v0) + 0x38)) * temp_f0;
                    (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x3C)) * temp_f0);
                    (*(f32 *)((char *)(temp_v0) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x40)) * temp_f0);
                } while (temp_a1 != var_v1);
            }
            (*(s32 *)((char *)(temp_v0) + 0x38)) = var_f18;
            (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x3C)) * temp_f0);
            (*(f32 *)((char *)(temp_v0) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x40)) * temp_f0);
            if (var_v1 != 0) {
                goto block_5;
            }
        } else {
block_5:
            temp_v0_2 = (char *)(arg0) + 0x110;
            temp_f0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x48));
            var_v1_2 = var_v1 - 4;
            var_f16 = (*(s32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2;
            if (var_v1_2 != 0) {
                do {
                    (*(s32 *)((char *)(temp_v0_2) + 0x38)) = var_f16;
                    var_v1_2 -= 4;
                    (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
                    var_f16 = (*(s32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2;
                    (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
                } while (var_v1_2 != 0);
            }
            (*(s32 *)((char *)(temp_v0_2) + 0x38)) = var_f16;
            (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x38)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x3C)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v0_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x40)) * temp_f0_2);
        }
    }
    temp_v0_3 = (char *)(arg0) + 0x110;
    (*(f32 *)((char *)(temp_v0_3) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_v0_3) + 0x3C)) + ((*(f32 *)((char *)(temp_v0_3) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((sp20 + (0.5f * (((*(f32 *)((char *)(temp_v0_3) + 0x38)) - sp20) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((sp24 + (0.5f * (((*(f32 *)((char *)(temp_v0_3) + 0x3C)) - sp24) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((sp28 + (0.5f * (((*(f32 *)((char *)(temp_v0_3) + 0x40)) - sp28) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
}

s32 func_1514C258(void *arg0) {
    func_1514BF9C(arg0);
    func_1514BE20(arg0);
    return 1;
}

s32 func_1514C288(void *arg0) {
    func_1514BF9C(arg0);
    func_1514BF50(arg0);
    return 1;
}

s32 func_1514C2B8(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x72)) = 0;
    (*(s32 *)((char *)(arg0) + 0x71)) = 0x24;
    (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 0x08000000);
    (*(s16 *)((char *)(arg0) + 0x1C)) = (s16) (*(s16 *)((char *)(arg0) + 0x164));
    (*(f32 *)((char *)(arg0) + 0x154)) = (f32) (*(f32 *)((char *)(arg0) + 0x160));
    return 1;
}

void func_1514C2F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, s8 arg5, s16 arg6, u8 arg7, s32 arg8, f32 arg9, s32 arg10, u8 arg11) {
    f32 temp_f20;
    f32 temp_f2;
    s16 var_s1;
    s32 (*temp_v0)(void *, s16, f32, f32, f32, f32, f32, f32, s32, s32, f32, s32, f32, s32, s32);
    s32 var_s0;

    var_s0 = arg4 & 0xFF;
    var_s1 = 0;
    if (arg6 > 0) {
loop_2:
        temp_f20 = func_151423D8((var_s0 - 0x40) & 0xFF);
        temp_v0 = (*(s32 *)((arg7 * 4) + (char *)(D_8008AA00)));
        temp_f2 = (arg3 * func_151423D8(var_s0 & 0xFF)) + arg2;
        if ((temp_v0 == NULL) || (temp_v0(1, var_s1, (arg3 * temp_f20) + arg0, arg1, temp_f2, arg0, arg1, arg2, var_s0, (s32) arg4, arg3, arg8, arg9, arg10, (s32) arg11) != 0)) {
            var_s1 += 1;
            var_s0 = (var_s0 + arg5) & 0xFF;
            if (var_s1 < arg6) {
                goto loop_2;
            }
        }
    }
}

void func_1514C470(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, s32 arg8, f32 arg9, s32 arg10, u8 arg11) {
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    f32 var_f26;
    f32 var_f2;
    s16 var_s0;
    s32 (*temp_v0)(f32, f32, void *, s16, f32, f32, f32, f32, f32, f32, s32, s32, f32, s32, f32, s32, s32);
    s32 temp_v0_2;

    var_f26 = arg6;
    var_s0 = 0;
    if (!(var_f26 < 2.0f)) {
        var_f22 = arg1;
        if ((s32) var_f26 & 1) {
            temp_f0 = 1.0f / (var_f26 - 1.0f);
            var_f2 = (arg3 - arg0) * temp_f0;
            var_f12 = (arg4 - arg1) * temp_f0;
            var_f14 = (arg5 - arg2) * temp_f0;
        } else {
            temp_f0_2 = 1.0f / (var_f26 - 1.0f);
            var_f2 = (arg3 - arg0) * temp_f0_2;
            var_f12 = (arg4 - arg1) * temp_f0_2;
            var_f14 = (arg5 - arg2) * temp_f0_2;
        }
        var_f20 = arg0;
        var_f24 = arg2;
loop_5:
        temp_v0 = (*(s32 *)((arg7 * 4) + (char *)(D_8008AA00)));
        if ((temp_v0 == NULL) || (sp90 = var_f2, sp94 = var_f12, sp98 = var_f14, temp_v0_2 = temp_v0(var_f12, var_f14, 0, var_s0, var_f20, var_f22, var_f24, arg0, arg1, arg2, 0, 0, 0.0f, arg8, arg9, arg10, (s32) arg11), (temp_v0_2 != 0))) {
            var_f26 -= 1.0f;
            var_f20 += var_f2;
            var_s0 += 1;
            var_f22 += var_f12;
            var_f24 += var_f14;
            if (var_f26 > 0.0f) {
                goto loop_5;
            }
        }
    }
}

void func_1514C678(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7, s32 arg8, f32 arg9, s32 arg10, u8 arg11) {
    f32 temp_f20;
    f32 temp_f2;
    s16 var_s1;
    s16 var_v0;
    s16 var_v1;
    s32 (*temp_v0)(void *, s16, f32, f32, f32, f32, f32, f32, s32, s32, f32, s32, f32, s32, s32);
    s32 temp_a0;
    s32 temp_s0;

    if (arg5 < arg4) {
        var_v0 = (arg4 - arg5) + 1;
        var_v1 = arg5;
    } else {
        var_v0 = (arg5 - arg4) + 1;
        var_v1 = arg4;
    }
    var_s1 = 0;
    if (arg6 > 0) {
loop_5:
        temp_a0 = (random_u32() % (u32) var_v0) + var_v1;
        temp_s0 = temp_a0 & 0xFF;
        temp_f20 = func_151423D8((temp_a0 - 0x40) & 0xFF);
        temp_v0 = (*(s32 *)((arg7 * 4) + (char *)(D_8008AA00)));
        temp_f2 = (arg3 * func_151423D8(temp_s0 & 0xFF)) + arg2;
        if (temp_v0 != NULL) {
            if (temp_v0(2, var_s1, (arg3 * temp_f20) + arg0, arg1, temp_f2, arg0, arg1, arg2, temp_s0, (s32) arg4, arg3, arg8, arg9, arg10, (s32) arg11) != 0) {
                goto block_9;
            }
            return;
        }
block_9:
        var_s1 += 1;
        if (var_s1 >= arg6) {

        } else {
            goto loop_5;
        }
    }
}

void func_1514C858(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u8 arg8, s32 arg9, f32 arg10, s32 arg11, u8 arg12) {
    f32 spA4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 var_a0;
    s16 var_a1;
    s16 var_s1;
    s32 (*temp_v0)(f32, void *, s16, f32, f32, f32, f32, f32, f32, s32, s32, f32, s32, f32, s32, s32);
    s32 temp_a0;
    s32 temp_s0;

    temp_f20 = func_151423D8((arg4 - 0x40) & 0xFF);
    temp_f2 = func_151423D8((u8) arg4);
    if (arg6 < arg5) {
        var_a0 = (arg5 - arg6) + 1;
        var_a1 = arg6;
    } else {
        var_a0 = (arg6 - arg5) + 1;
        var_a1 = arg5;
    }
    var_s1 = 0;
    if (arg7 > 0) {
        spA4 = arg3 * temp_f2;
loop_5:
        temp_a0 = (random_u32() % (u32) var_a0) + var_a1;
        temp_s0 = temp_a0 & 0xFF;
        temp_f20_2 = func_151423D8((temp_a0 - 0x40) & 0xFF);
        temp_f0 = func_151423D8(temp_s0 & 0xFF);
        temp_v0 = (*(s32 *)((arg8 * 4) + (char *)(D_8008AA00)));
        temp_f2_2 = (arg3 * temp_f20 * temp_f0) + arg0;
        temp_f12 = (spA4 * temp_f0) + arg2;
        if (temp_v0 != NULL) {
            if (temp_v0(temp_f12, 3, var_s1, temp_f2_2, arg1 - (arg3 * temp_f20_2), temp_f12, arg0, arg1, arg2, temp_s0, (s32) arg4, arg3, arg9, arg10, arg11, (s32) arg12) != 0) {
                goto block_9;
            }
            return;
        }
block_9:
        var_s1 += 1;
        if (var_s1 >= arg7) {

        } else {
            goto loop_5;
        }
    }
}
