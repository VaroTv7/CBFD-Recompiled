/**
 * Auto-decompiled from asm/129EE0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98();    /* extern */
s32 func_15046C80();              /* extern */
void func_1504715C();                     /* extern */
void * func_1505D024();                 /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                             /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();                /* extern */
void * func_15107B78();         /* extern */
void * func_15143874();            /* extern */
void * func_1514FCE8();                       /* extern */
void * func_151541B8(); /* extern */
s32 func_1516284C(); /* extern */
void * func_15164F0C();                 /* extern */
f32 func_15165BB0();                /* extern */
void * func_151D5334();    /* extern */
void * func_151D8868();                     /* extern */
void * memcpy();                       /* extern */
void func_150FCBC0();                       /* static */
extern s32 D_800A1EE0;
extern s32 D_800A1EEC;
extern f32 D_800A1F14;
extern f32 D_800A1F18;
extern f32 D_800A1F1C;
extern f32 D_800A1F20;
extern f32 D_800A1F24;
extern f32 D_800A1F28;
extern f32 D_800A1F2C;
extern f32 D_800A1F30;
extern f32 D_800A1F34;
extern f32 D_800A1F38;
extern f32 D_800A1F3C;
extern f32 D_800A1F40;
extern f32 D_800A1F44;
extern f32 D_800A1F48;
extern f32 D_800A1F4C;
extern f32 D_800A1F50;
extern f32 D_800A1F54;
extern f32 D_800A1F58;
extern f32 D_800A1F5C;
extern f32 D_800A1F60;
extern f32 D_800A1F64;
extern f32 D_800A1F68;
extern s32 func_1000EC24;

void func_150FCA30(void) {
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s16 sp46;
    s8 sp44;
    s32 var_s0;

    func_150FCBC0(0);
    func_150FCBC0(1);
    func_150FCBC0(2);
    func_1000FA64(0x2B8, -0x7F6, 0x618, -0xA47, 0x6D60, 0x2328, 0x1B58, &func_1000EC24, 0x2D, 0, 0, 0);
    func_1000FA64(0x2B7, -0x13F, -0x111, -0xD5B, 0x6D60, 0x2328, 0x1B58, &func_1000EC24, 0, 0, 0, 0);
    func_1000FA64(0x2B6, 0x5EF, 0x3B3, -0xA49, 0x6D60, 0x2328, 0x1B58, &func_1000EC24, 0x5A, 0, 0, 0);
    var_s0 = 0;
    if ((D_80082FA0 + 1) > 0) {
        do {
            func_15164F0C(4, var_s0 & 0xFF, 0, 0xFF, 1);
            var_s0 += 1;
        } while (D_80082FA0 >= var_s0);
    }
    sp44 = 1;
    sp46 = 0x64;
    sp49 = 0xF;
    sp48 = 8;
    sp4A = -1;
    func_151D8868(&sp44, 0, 0xFF, 0);
}

void func_150FCBC0(s32 arg0) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s8 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    s32 sp90;
    s32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s32 sp64;
    s32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp4C;
    f32 temp_f12;
    f32 temp_f14;
    f32 var_f16;
    s16 temp_t1;
    s16 temp_v1;
    s16 var_s1;
    s32 temp_t3;
    s32 temp_t6;
    void *temp_s0;
    void *temp_s2;

    temp_t6 = arg0 & 0xFF;
    if (temp_t6 < 3) {
        temp_s0 = (&D_800D9AA0)[temp_t6];
        if (temp_s0 != NULL) {
            spB8 = (f32) (*(f32 *)((char *)(temp_s0) + 0x0));
            spBC = (f32) (*(f32 *)((char *)(temp_s0) + 0x2)) + ((f32) (*(f32 *)((char *)(temp_s0) + 0x8)) * 0.5f);
            spC0 = (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
            sp4C = random_float(temp_t6);
            temp_f14 = sp4C * 4.0f;
            temp_f12 = temp_f14 + 12.0f;
            temp_t3 = (random_u32() % 56U) + 0xC8;
            var_f16 = (f32) temp_t3;
            if (temp_t3 < 0) {
                var_f16 += 4294967296.0f;
            }
            func_151541B8(temp_f12, temp_f14, &spB8, temp_f12, 0x40D637C9, var_f16, D_800A1F14, 0xFF, 1);
            temp_v1 = (random_u32() & 1) + 3;
            var_s1 = temp_v1;
            if (temp_v1 > 0) {
                sp74 = 249.0f;
                sp78 = D_800A1F18;
                sp7C = 506.0f;
                sp8C = 3;
                sp80 = 100.0f;
                sp5A = 0x50;
                sp5C = -0x20;
                sp5E = 0x2B;
                sp60 = 1;
                sp64 = 8;
                temp_s2 = (temp_t6 * 4) + &D_800A1EE0;
                sp90 = 2;
                spA4 = 0xC;
                spA6 = 0x32;
                spA8 = 0x64;
                spAA = 0x64;
                spAC = 0xC;
                spAE = 0xC;
                spB0 = -1;
                sp84 = D_800A1F1C;
                sp88 = D_800A1F20;
                sp94 = 90.0f;
                sp98 = D_800A1F24;
                sp9C = -2.0f;
                spA0 = D_800A1F28;
                do {
                    temp_t1 = ((random_u32() % (u32) ((*(u32 *)((char *)(temp_s2) + 0x2)) + 1)) + (*(u32 *)((char *)(temp_s2) + 0x0))) & 0xFF;
                    sp58 = temp_t1 - 0x28;
                    func_15143874(temp_t1, (f32) (*(f32 *)((char *)(temp_s0) + 0x6)), &sp68, &sp70);
                    sp68 += (f32) (*(f32 *)((char *)(temp_s0) + 0x0));
                    sp70 += (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
                    sp6C = (random_float() * (f32) (*(f32 *)((char *)(temp_s0) + 0x8))) + (f32) (*(f32 *)((char *)(temp_s0) + 0x2));
                    func_1514FCE8(&sp58, 0xFF, 1);
                    var_s1 -= 1;
                } while (var_s1 > 0);
            }
        }
    }
}

f32 func_150FCF1C(void) {
    f32 sp28;
    f32 sp24;
    f32 sp20;

    if (D_800D9AA0 == NULL) {
        return 1.0f;
    }
    sp20 = (f32) D_800D9AA0[0]->unk0;
    sp24 = (f32) D_800D9AA0[0]->unk2;
    sp28 = (f32) D_800D9AA0[0]->unk4;
    return func_15165BB0(&sp20, 0x44FAE000, 0x460CB400, D_800A1F2C);
}

void func_150FCFB0(s32 arg0) {
    func_15103828();
}

void func_150FCFD4(void *arg0, s32 arg1, s32 arg2) {
    void * sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    f32 sp198;
    u8 sp197;
    f32 sp190;
    f32 sp18C;
    f32 sp188;
    s16 sp186;
    s16 sp184;
    s32 sp180;
    s8 sp17C;
    s32 sp178;
    s8 sp177;
    s8 sp176;
    s8 sp175;
    s8 sp174;
    s32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    void * sp158;
    void * sp14C;
    f32 sp148;
    f32 sp144;
    s8 sp143;
    s8 sp142;
    s8 sp141;
    s8 sp140;
    s32 sp13C;
    s32 sp138;
    s16 sp134;
    s16 sp132;
    s8 sp131;
    s8 sp130;
    s8 sp12D;
    s8 sp12C;
    s16 sp128;
    void * sp104;
    f32 sp100;
    s32 spFC;
    s32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    u8 spD8;
    void *spD4;
    s8 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s16 spB6;
    s16 spB4;
    s32 spB0;
    s8 spAC;
    s32 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s16 sp64;
    s16 sp62;
    s8 sp61;
    s8 sp60;
    f32 temp_f0;
    f32 temp_f16;
    s32 temp_v0;
    s8 var_v0;
    void *temp_s0;

    if ((s32) (*(s32 *)((char *)(arg0) + 0x7)) >= 0xFF) {
        sp198 = (*(s32 *)((char *)(arg0) + 0x14));
        sp188 = sp198;
        sp18C = (*(s32 *)((char *)(arg0) + 0x18)) + 100.0f;
        sp1A0 = (*(s32 *)((char *)(arg0) + 0x1C));
        sp190 = sp1A0;
        func_1504715C(&sp1A4, arg0);
        if (func_15046C80(&sp188, 0, 0xC61C4000, &sp1A4) != 0) {
            sp197 = 1;
            sp19C = sp1A4;
        } else {
            sp197 = 0;
            sp19C = (*(s32 *)((char *)(arg0) + 0x18));
        }
        func_1505D024(arg0, 0x39, (*(s32 *)((char *)(arg0) + 0x7A)), -1);
        spD4 = arg0;
        spDC = 60.0f;
        spD8 = (*(s32 *)((char *)(arg0) + 0x3B));
        spE0 = 50.0f;
        temp_f0 = random_float();
        sp12C = 0;
        spE8 = -2048.0f;
        spEC = -2048.0f;
        spE4 = temp_f0 * D_800A1F30;
        spF0 = random_float() * D_800A1F34;
        temp_f16 = random_float() * D_800A1F38;
        spF8 = 0;
        spFC = 0;
        sp100 = 0.0f;
        spF4 = temp_f16;
        M2C_MEMCPY_ALIGNED(&sp104, &sp1A4, 0x24);
        sp128 = func_1000FA64(0x69E, (s16) (s32) sp198, (s16) (s32) sp19C, (s16) (s32) sp1A0, 0x7D00, 0xBB8, 0x1F4, NULL, 0, 0, 0, 0);
        if (sp197 != 0) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        sp12D = var_v0;
        sp130 = 0x59;
        sp131 = 0xB;
        sp132 = 0x5B1A;
        sp134 = 0x12C;
        sp138 = 0;
        sp13C = 0;
        sp140 = 0xFF;
        sp141 = 0;
        sp142 = 0;
        sp143 = 0xFF;
        sp174 = 0xFF;
        sp144 = 0.0f;
        sp148 = D_800A1F3C;
        (*(f32 *)((char *)&(sp14C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp198) + 0x0));
        (*(s32 *)((char *)&(sp14C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp198) + 0x4));
        (*(s32 *)((char *)&(sp14C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp198) + 0x8));
        (*(s32 *)((char *)&(sp158) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp158) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp158) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp168 = 0.0f;
        sp170 = 0x24EC0008;
        sp175 = 0xFF;
        sp176 = 0;
        sp177 = 6;
        sp178 = 0;
        sp17C = 0xFF;
        sp180 = 0;
        sp184 = 1;
        sp186 = 0xFF;
        sp164 = 1.0f;
        sp16C = 1.0f;
        temp_v0 = func_1513D2F0(&sp130, &D_800A1EEC, 0, 0x2B, 0, 0x24, 0, 0, 0, 0x5C, (s32) arg1, arg2);
        temp_s0 = temp_v0 + 0x110;
        if (temp_v0 != 0) {
            memcpy(temp_s0, &spD4, 0x5C);
            spC6 = 0x12C;
            spC8 = 6;
            spC4 = 2;
            spC5 = 2;
            spB8 = (s32) sp198;
            spBC = (s32) sp19C;
            spC0 = (s32) sp1A0;
            (*(s32 *)((char *)(temp_s0) + 0x24)) = func_1516284C(&spC4, &spB8, 0xFF, 0, 0, 0xFF, 0, 0, 0x17, (s32) arg1, arg2);
            if (sp197 != 0) {
                sp60 = 3;
                sp61 = 0;
                sp62 = 0x3103;
                sp64 = 0x12C;
                sp68 = 0;
                sp6C = 0;
                sp70 = 0xFF;
                sp71 = 0;
                sp72 = 0;
                sp73 = 0xFF;
                spA4 = 0xFF;
                sp74 = 1.0f;
                sp78 = 1.0f;
                sp80 = sp19C + 5.0f;
                sp7C = sp198;
                sp84 = sp1A0;
                (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
                (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
                (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
                sp94 = 1.0f;
                sp98 = 1.0f;
                sp9C = 1.0f;
                spA0 = 0x04EC0008;
                spA5 = 0xFF;
                spA6 = 0;
                spA7 = 6;
                spA8 = 0;
                spAC = 0xFF;
                spB0 = 0;
                spB4 = 1;
                spB6 = 0xFF;
                (*(s32 *)((char *)(temp_s0) + 0x28)) = func_1513D594(&sp60, &D_800A4AA0, 0, 0, 0, 0, 0, 50.0f, 50.0f, 0, &sp1A8, 0, 0, 0, 0, (s32) arg1, arg2);
            }
        }
    }
}

s32 func_150FD514(void *arg0) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 var_v0;
    u32 temp_s0;
    u32 temp_s0_3;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s1;
    void *var_s3;

    var_s3 = (*(s32 *)((char *)(arg0) + 0x110));
    if (var_s3 != NULL) {
        var_s1 = (char *)(arg0) + 0x110;
        if (((*(s32 *)((char *)(var_s3) + 0x0)) == 0) || ((*(s32 *)((char *)(var_s1) + 0x4)) != (*(s32 *)((char *)(var_s3) + 0x3B)))) {
            var_s1 = (char *)(arg0) + 0x110;
            (*(s32 *)((char *)(arg0) + 0x110)) = NULL;
            var_s3 = NULL;
        }
        sp70 = (*(s32 *)((char *)(var_s3) + 0x14));
        sp74 = (*(s32 *)((char *)(var_s3) + 0x1C));
    } else {
        var_s1 = (char *)(arg0) + 0x110;
        sp70 = (*(s32 *)((char *)(arg0) + 0x34));
        sp74 = (*(s32 *)((char *)(arg0) + 0x3C));
    }
    if (var_s3 != NULL) {
        func_1502EA98(var_s3, 0xFF, 0, 0, 0xFF, 0, 4);
        (*(f32 *)((char *)(var_s1) + 0x2C)) = (f32) ((*(f32 *)((char *)(var_s1) + 0x2C)) + ((D_800A1F40 + (random_float() * D_800A1F44)) * D_800BE9A4));
        if ((*(s32 *)((char *)(var_s1) + 0x2C)) > 1.0f) {
            do {
                temp_s0 = random_u32();
                func_15107B78(var_s3, (s16) (temp_s0 & 0xFF), (s16) ((random_u32() % 101U) - 0x3F), (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(var_s1) + 0x2C)) = (f32) ((*(f32 *)((char *)(var_s1) + 0x2C)) - 1.0f);
            } while ((*(s32 *)((char *)(var_s1) + 0x2C)) > 1.0f);
        }
    }
    temp_f0 = (*(s32 *)((char *)(var_s1) + 0xC));
    if (temp_f0 > 20.0f) {
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((50.0f - temp_f0) * D_800A1F48 * (*(f32 *)((char *)(var_s1) + 0x8)));
    } else if (temp_f0 > 10.0f) {
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)(var_s1) + 0x8));
    } else {
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 * D_800A1F4C * (*(f32 *)((char *)(var_s1) + 0x8)));
        if ((*(s32 *)((char *)(var_s1) + 0x58)) == 0) {
            if (var_s3 != NULL) {
                func_1505D024(var_s3, 0x16, (*(s32 *)((char *)(var_s3) + 0x7A)), -1);
                func_10010F88(0x69D, 0x7D00, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0x34)), (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), 0x1F4, 0xBB8);
            }
            (*(s32 *)((char *)(var_s1) + 0x58)) = 1U;
            temp_s0_2 = (char *)(arg0) + 0x34;
            func_151D5404(temp_s0_2, 506.0f, 1013.0f, 0.0009871668311944718f, 0xF, 0x14, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            func_151D5334(temp_s0_2, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if ((*(s32 *)((char *)(var_s1) + 0x59)) & 1) {
                sp64 = (*(s32 *)((char *)(arg0) + 0x34));
                sp68 = (*(s32 *)((char *)(var_s1) + 0x30));
                sp6C = (*(s32 *)((char *)(arg0) + 0x3C));
                temp_f20 = random_float();
                temp_s0_3 = random_u32();
                func_150E7FEC((temp_f20 * 78.0f) + 125.0f, ((temp_s0_3 % 76U) + 0xB4) & 0xFF, (char *)(var_s1) + 0x34, &sp64, (random_u32() % 207U) + 0x12E, 0, 1, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), 0);
                func_150E83AC(&sp64, (s16) ((random_u32() % 80U) + 0xF3), (*(s16 *)((char *)(arg0) + 0xC)), (*(s16 *)((char *)(arg0) + 0x1)));
            }
        }
    }
    (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) (u32) ((sinf((*(u8 *)((char *)(var_s1) + 0x10))) * 57.0f) + 198.0f);
    (*(f32 *)((char *)(var_s1) + 0x10)) = (f32) ((*(f32 *)((char *)(var_s1) + 0x10)) + (D_800A1F50 * D_800BE9A4));
    (*(s32 *)((char *)(var_s1) + 0x10)) = func_15144B68((*(s32 *)((char *)(var_s1) + 0x10)));
    (*(f32 *)((char *)(var_s1) + 0x1C)) = (f32) ((*(f32 *)((char *)(var_s1) + 0x1C)) + (D_800A1F54 * D_800BE9A4));
    (*(f32 *)((char *)(var_s1) + 0x20)) = (f32) ((*(f32 *)((char *)(var_s1) + 0x20)) + (D_800A1F58 * D_800BE9A4));
    (*(s32 *)((char *)(var_s1) + 0x1C)) = func_15144B68((*(s32 *)((char *)(var_s1) + 0x1C)));
    (*(s32 *)((char *)(var_s1) + 0x20)) = func_15144B68((*(s32 *)((char *)(var_s1) + 0x20)));
    (*(f32 *)((char *)(var_s1) + 0x14)) = (f32) ((func_150AD78C((*(f32 *)((char *)(var_s1) + 0x1C))) * D_800A1F5C) + D_800A1F60);
    temp_v0 = (*(s32 *)((char *)(var_s1) + 0x28));
    (*(f32 *)((char *)(var_s1) + 0x18)) = (f32) ((func_150AD78C((*(f32 *)((char *)(var_s1) + 0x20))) * 1192.0f) + D_800A1F64);
    if (temp_v0 != NULL) {
        temp_f20_2 = (*(s32 *)((char *)(arg0) + 0x2C)) * D_800A1F68;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = temp_f20_2;
        (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x28))) + 0x2C)) = temp_f20_2;
        (*(u8 *)((char *)((*(u8 *)((char *)(var_s1) + 0x28))) + 0x5C)) = (u8) (*(u8 *)((char *)(arg0) + 0x5C));
        (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x28))) + 0x34)) = sp70;
        (*(s32 *)((char *)((*(s32 *)((char *)(var_s1) + 0x28))) + 0x3C)) = sp74;
    }
    var_v0 = 1;
    (*(s32 *)((char *)(arg0) + 0x34)) = sp70;
    (*(s32 *)((char *)(arg0) + 0x3C)) = sp74;
    (*(f32 *)((char *)(var_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(var_s1) + 0xC)) - D_800BE9A4);
    if ((*(s32 *)((char *)(var_s1) + 0xC)) < 0.0f) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_150FDB0C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x110;
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x110));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x110)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x110)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x110))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x110)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        (*(s32 *)((char *)(arg0) + 0x110)) = 0;
    }
}

void *func_150FDBA0(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_1513EDE4(arg1, 0);
    if (temp_v0 != NULL) {
        (*(s16 *)((char *)(temp_v0) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x124));
        (*(s16 *)((char *)(temp_v0) + 0x18)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x128));
        (*(s16 *)((char *)(temp_v0) + 0x28)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x128));
        (*(s16 *)((char *)(temp_v0) + 0x38)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x124));
    }
    return temp_v0;
}

void func_150FDC2C(void *arg0) {
    void *sp18;
    s32 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    void *var_v0;

    if ((*(s32 *)((char *)(arg0) + 0x134)) != 0) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x134)), arg0);
    }
    var_v0 = (char *)(arg0) + 0x110;
    temp_a0 = (*(s32 *)((char *)(var_v0) + 0x28));
    if (temp_a0 != 0) {
        sp18 = var_v0;
        func_1516972C(temp_a0, arg0);
    }
    temp_a0_2 = (*(s32 *)((char *)(var_v0) + 0x54));
    if (temp_a0_2 != 0) {
        sp18 = var_v0;
        func_100111C8(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(var_v0) + 0x56));
    if (temp_a0_3 != 0) {
        func_100111C8(temp_a0_3);
    }
}

void func_150FDCAC(void *arg0) {
    func_150FDC2C(arg0);
    func_1513CA6C(arg0);
}

void func_150FDCD8(void *arg0) {
    func_150FDC2C(arg0);
    func_1513CAA0(arg0);
}
