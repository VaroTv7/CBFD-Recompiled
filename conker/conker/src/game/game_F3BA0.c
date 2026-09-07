/**
 * Auto-decompiled from asm/F3BA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15045800();           /* extern */
u32 random_u32();                      /* extern */
f32 random_float();                                /* extern */
s32 func_151303BC();                     /* extern */
s32 func_1513418C();                  /* extern */
void * func_151346EC();                                  /* extern */
void * func_1513470C();                                  /* extern */
void * func_1513F6C0();                              /* extern */
void * func_15143134();                   /* extern */
u8 func_151D8E20();                                 /* extern */
void * memcpy();                          /* extern */
s32 func_150C68C4();  /* static */
s32 func_150C6D90();                      /* static */
extern s32 D_800887E0;
extern f32 D_800A0450;
extern f32 D_800A0454;
extern f32 D_800A0458;
extern f32 D_800A045C;
extern f32 D_800A0460;
extern f32 D_800A0464;
extern f32 D_800A0468;
extern f32 D_800A046C;
extern f32 D_800A0470;
extern f32 D_800A0474;
extern f32 D_800A0478;
extern f32 D_800A047C;
extern f32 D_800A0480;
extern s32 D_800AB414;

void func_150C66F0(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x6C)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x6C)) + 0xB0)) + 0x4)) = 1;
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x6C)) = func_150C6D90();
}

s8 func_150C673C(void *arg0) {
    s8 sp27;
    void *sp1C;
    s32 temp_a0;
    s8 var_a2;
    void *temp_v1;

    var_a2 = 1;
    temp_v1 = (char *)(arg0) + 0xB0;
    if ((*(s32 *)((char *)(arg0) + 0xB4)) == 0) {
        var_a2 = 0;
    }
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0;
    (*(s16 *)((char *)(temp_v1) + 0x14)) = (s16) ((*(s16 *)((char *)(temp_v1) + 0x14)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_v1) + 0x14)) < 0) {
        sp1C = temp_v1;
        sp27 = var_a2;
        (*(s16 *)((char *)(temp_v1) + 0x14)) = (s16) ((random_u32(arg0, var_a2) % (u32) ((*(s16 *)((char *)(temp_v1) + 0x18)) + 1)) + (*(s16 *)((char *)(temp_v1) + 0x16)));
        (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_v1) + 0xC))) + (*(f32 *)((char *)(temp_v1) + 0x8)));
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x24)) = (s32) (temp_a0 + (s32) (((*(s32 *)((char *)(temp_v1) + 0x10)) - (f32) temp_a0) * (*(s32 *)((char *)(temp_v1) + 0x1C))));
    return var_a2;
}

s32 func_150C682C(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0xB0))) + 0x6C)) = 0;
    (*(s32 *)((char *)(arg0) + 0xB0)) = NULL;
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) ((*(s32 *)((char *)(arg0) + 0x18)) | 2);
    func_1513F6C0(0, 0);
    return 0;
}

void func_150C6870(void *arg0) {
    void *temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((*(s32 *)((char *)(arg0) + 0x70)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x70)) + 0x58)) + 0x4)) = 1;
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x70)) = func_150C68C4(temp_a2, arg0, temp_a2);
}

s32 func_150C68C4(void *arg0, void *arg1) {
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s8 sp50;
    void *sp4C;
    u8 sp48;
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    s8 sp38;
    void *sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 temp_v0;

    sp38 = 1;
    sp34 = arg1;
    sp24 = (*(s32 *)((char *)(arg0) + 0x14));
    sp28 = (*(s32 *)((char *)(arg0) + 0x18)) + D_800A0450;
    sp2C = (*(s32 *)((char *)(arg0) + 0x1C));
    if (func_15045800(&sp24, 0, (*(s32 *)((char *)(arg0) + 0x18)) - 100.0f, (char *)(arg1) + 0x34) != 0) {
        sp3C = (*(s32 *)((char *)(arg1) + 0x34));
    } else {
        sp3C = (*(s32 *)((char *)(arg0) + 0x18)) + D_800A0454;
    }
    sp40 = 0;
    sp44 = 0;
    sp4C = arg0;
    sp50 = 0;
    sp54 = 0.0f;
    sp58 = 0.0f;
    sp5C = 0.0f;
    sp68 = 0x12C;
    sp6A = 0xA;
    sp6B = 5;
    sp6C = 2;
    sp6D = 3;
    sp48 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp60 = 80.0f;
    sp64 = D_800A0458;
    temp_v0 = func_1513418C(&sp40, 0xC, 0xFF, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x58, &sp34, 0xC);
    }
    return temp_v0;
}

void func_150C6A08(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg5, void *arg6) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
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

    sp50 = 0xC01;
    sp65 = 0x2F;
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
    sp78 = arg0;
    sp7C = arg1;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp66 = 0x1E;
    sp68 = 8;
    sp80 = arg2;
    sp40 = (*(s32 *)((char *)(arg6) + 0x60));
    sp2C = 4.0f;
    sp30 = 0.25f;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp90 = -arg3 * D_800A045C;
    sp94 = 0.0f;
    sp98 = -arg5 * D_800A045C;
    if (random_u32() & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 51U) + 0x6A;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 62.0f) + 41.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A0460) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A0464) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A0468) + D_800A046C) * sp1C;
    sp3C = ((random_float() * D_800A0470) + D_800A0474) * sp1C;
    sp9C = ((random_float() * 60.0f) + 21.0f) * D_800A0478;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, (void **) &sp1C, 0x28);
    }
}

s32 func_150C6D1C(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((*(s32 *)((char *)(arg0) + 0x5C)) == 0) {
        var_v1 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x5C)) = 0U;
    return var_v1;
}

void func_150C6D40(void *arg0) {
    (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x58)) + 0x58)) + 0x18)) = 0;
    func_151346EC();
}

void func_150C6D68(void *arg0) {
    (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x58)) + 0x58)) + 0x18)) = 0;
    func_1513470C();
}

s32 func_150C6D90(void *arg0) {
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    void * spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    u8 sp98;
    u8 sp97;
    u8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s32 sp8C;
    s8 sp8A;
    s16 sp88;
    s32 sp84;
    f32 sp80;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s8 sp68;
    void *sp64;
    f32 sp60;
    u8 sp5F;
    u32 sp54;
    u32 sp50;
    f32 temp_f10;
    f32 temp_f6;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    spD4 = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0) {
        (*(s32 *)((char *)&(spB8) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800887E0) + 0x0));
        (*(s32 *)((char *)&(spB8) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800887E0) + 0x4));
        (*(s32 *)((char *)&(spB8) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800887E0) + 0x8));
        func_15143134(&spB8, &spC8, (*(s32 *)((char *)(temp_v0) + 0x1D4)));
    } else {
        spC8 = (*(s32 *)((char *)(temp_v0) + 0x14));
        spCC = (*(s32 *)((char *)(temp_v0) + 0x18));
        spD0 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    }
    spB0 = spCC + 200.0f;
    spAC = spC8;
    spB4 = spD0;
    if (func_15045800(&spAC, 0, spCC - 200.0f, (char *)(arg0) + 0x34) != 0) {
        sp5F = func_151D8E20();
        temp_f6 = (*(s32 *)((char *)(arg0) + 0x34));
        spB0 = temp_f6;
        temp_f10 = random_float() * 100.0f;
        sp68 = 1;
        sp60 = temp_f10 + 200.0f;
        sp7A = 0xA;
        sp7C = 0xA;
        temp_v0_2 = (sp5F * 3) + &D_800AB414;
        sp8A = 0x38;
        sp88 = 0x12C;
        sp90 = (s32) ((32768.0f * 0.5f) + D_800A047C);
        sp84 = 0x20300;
        sp94 = 0x96;
        sp64 = arg0;
        sp78 = 0;
        sp8C = 0;
        sp95 = 0xFF;
        sp99 = 0xFF;
        sp9C = 0x440001;
        sp9A = 0;
        sp9B = 6;
        sp6C = D_800A047C;
        sp70 = 32768.0f;
        sp80 = D_800A0480;
        sp74 = 0.0f;
        sp96 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
        sp97 = (*(s32 *)((char *)(temp_v0_2) + 0x1));
        sp98 = (*(s32 *)((char *)(temp_v0_2) + 0x2));
        sp50 = random_u32(0x47000000);
        sp54 = random_u32();
        temp_v0_3 = func_1513C73C(&sp84, 9, 3, (char *)(arg0) + 0x38, spAC, temp_f6, spB4, sp60, sp60, sp50 & 0xFF, ((random_u32() & 1) * 2) + (sp54 & 1), 0x20, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        spD4 = temp_v0_3;
        if (temp_v0_3 != 0) {
            memcpy(temp_v0_3 + 0xB0, &sp64, 0x20);
        }
    }
    return spD4;
}
