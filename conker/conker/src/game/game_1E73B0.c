/**
 * Auto-decompiled from asm/1E73B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1000F568();                            /* extern */
void * func_1503F404(); /* extern */
s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
void * func_15055A2C();             /* extern */
void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                           /* extern */
f32 random_float();                          /* extern */
void * func_150E7FEC(); /* extern */
void func_1510F800();                                 /* extern */
s32 func_15130374();            /* extern */
void * func_1513170C();                                  /* extern */
void * func_1513264C(); /* extern */
s32 func_15132A4C(); /* extern */
void * func_15133760();                          /* extern */
s32 func_15134908();               /* extern */
s32 func_15134DAC();                 /* extern */
void *func_1513B5E0();          /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_1513FAB4();                   /* extern */
s32 func_151407D0(); /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();                   /* extern */
void * func_151436B4();              /* extern */
void * func_15143794();              /* extern */
f32 func_15143E64();           /* extern */
void *func_15144B34();                           /* extern */
s32 func_15144E80();              /* extern */
s32 func_15145C90();                             /* extern */
void * func_15145EA4();                /* extern */
void *func_15147A80(); /* extern */
void * func_1514FBFC();              /* extern */
void * func_1514FCE8();                    /* extern */
void * func_15150F90();                    /* extern */
void * func_15151D6C(); /* extern */
void * func_15152190(); /* extern */
void * func_15153634();                    /* extern */
s32 func_1515548C(); /* extern */
s32 func_15157010(); /* extern */
void * func_1515C1A0();            /* extern */
void * func_151602C0(); /* extern */
void * func_15160CDC(); /* extern */
s32 func_15163414(); /* extern */
s32 func_1517EF00();                       /* extern */
s32 func_15181CC8();                       /* extern */
void * func_151A26EC(); /* extern */
void * func_151C04F8();                    /* extern */
void * func_151C05A4();                    /* extern */
void * func_151C05F0();                    /* extern */
void * func_151C0644();                    /* extern */
void * func_151D5D60();    /* extern */
void * memcpy();                     /* extern */
s32 func_151BB0E0();
void func_151BBEE4();
void func_151BBFBC();
s32 func_151BEE94();                         /* static */
s32 func_151BEEE0(f32 arg0, void *arg1, void *arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, u8 arg7, s32 arg8);
void func_151BF0C8();                     /* static */
void func_151BF340();
extern s32 D_8008FBA0;
extern s32 D_8008FBAC;
extern s32 D_8008FBC0;
extern s32 D_80090CD4;
extern s32 D_800A4AC8;
extern s32 D_800AA590;
extern s32 D_800AA59C;
extern s32 D_800AA5A8;
extern s32 D_800AA5B4;
extern s32 D_800AA5CC;
extern s32 D_800AA5FC;
extern s32 D_800AA62C;
extern s32 D_800AA63C;
extern s32 D_800AA648;
extern s32 D_800AA660;
extern s32 D_800AA678;
extern s32 D_800AA6A8;
extern s32 D_800AA6D8;
extern s32 D_800AA708;
extern s32 D_800AA718;
extern s32 D_800AA73C;
extern s32 D_800AA760;
extern s32 D_800AA76C;
extern s32 D_800AA778;
extern s32 D_800AA784;
extern s32 D_800AA790;
extern s32 D_800AA79C;
extern s32 D_800AA7A8;
extern f32 D_800AA7B8;
extern f32 D_800AA7BC;
extern f32 D_800AA7C0;
extern f32 D_800AA7C4;
extern f32 D_800AA7C8;
extern f32 D_800AA7CC;
extern f32 D_800AA7D0;
extern f32 D_800AA7D4;
extern f32 D_800AA7D8;
extern f32 D_800AA7DC;
extern f32 D_800AA7E0;
extern f32 D_800AA7E4;
extern f32 D_800AA7E8;
extern f32 D_800AA7EC;
extern f32 D_800AA7F0;
extern f32 D_800AA7F4;
extern f32 D_800AA7F8;
extern f32 D_800AA7FC;
extern f32 D_800AA800;
extern f32 D_800AA804;
extern f32 D_800AA808;
extern f32 D_800AA80C;
extern f32 D_800AA810;
extern f32 D_800AA814;
extern f32 D_800AA818;
extern f32 D_800AA81C;
extern f32 D_800AA820;
extern f32 D_800AA824;
extern f32 D_800AA828;
extern f32 D_800AA82C;
extern f32 D_800AA830;
extern f32 D_800AA834;
extern f32 D_800AA838;
extern f32 D_800AA83C;
extern f32 D_800AA840;
extern f32 D_800AA844;
extern f32 D_800AA848;
extern f32 D_800AA84C;
extern f32 D_800AA850;
extern f32 D_800AA854;
extern void *D_800AA858;
extern f32 D_800AA85C;
extern f32 D_800AA860;
extern f32 D_800AA864;
extern f32 D_800AA868;
extern f32 D_800AA86C;
extern f32 D_800AA870;
extern f32 D_800AA874;
extern f32 D_800AA878;
extern f32 D_800AA87C;
extern f32 D_800AA880;
extern f32 D_800AA884;
extern f32 D_800AA888;
extern f32 D_800AA88C;
extern f32 D_800AA890;
extern f32 D_800AA894;
extern f32 D_800AA898;
extern f32 D_800AA89C;
extern f32 D_800AA8A0;
extern f32 D_800AA8A4;
extern f32 D_800AA8A8;
extern f32 D_800AA8AC;
extern s32 D_800AA8B0;
extern s32 D_800AA8B4;
extern f32 D_800AA8DC;
extern f32 D_800AA8E0;
extern f32 D_800AA8E4;
extern f32 D_800AA8E8;
extern f32 D_800AA8EC;
extern f32 D_800AA8F0;
extern f32 D_800AA8F4;
extern f32 D_800AA8F8;
extern f32 D_800AA8FC;
extern f32 D_800AA900;
extern f32 D_800AA904;
extern f32 D_800AA908;
extern f32 D_800AA90C;
extern f32 D_800AA910;
extern f32 D_800AA914;
extern f32 D_800AA918;
extern f32 D_800AA91C;
extern f32 D_800AA920;
extern f32 D_800AA924;
extern f32 D_800AA928;
extern f32 D_800AA92C;
extern u8 D_800C3E90;
extern void *D_800CC5E8;
extern void *D_800CC5EC;
extern s32 D_800D2C9C;
extern f32 D_800DCA24;
extern s32 D_800E0BCE;

void *func_151B9F00(void *arg0, s32 arg1, s32 arg2) {
    void *sp74;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3C;
    s8 sp3A;
    s8 sp39;
    s8 sp38;
    u8 sp34;
    void *sp30;
    s32 temp_lo;
    void *temp_v0;
    void *var_v1;

    if (arg0 == NULL) {
        return NULL;
    }
    sp30 = arg0;
    sp38 = 2;
    sp39 = -1;
    sp3A = 3;
    sp3C = 0x12C;
    sp68 = 9;
    sp6C = 0x1AD;
    sp71 = 0xFF;
    sp34 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_lo = (s32) ((char *)(arg0) - (char *)(&gObjects)) / 812;
    if ((temp_lo < 2) && (*(&D_800E0BCE + temp_lo) != 0)) {
        if (D_8008FD90 == 2) {
            sp71 = 0xFD;
        } else if (D_8008FD90 == 4) {
            if (temp_lo == 0) {
                sp71 = 0xFB;
            } else {
                sp71 = 0xF7;
            }
        }
    }
    sp40 = 1;
    sp44 = 0x200205;
    sp48 = 0x60600;
    sp5C = 0;
    sp5D = 0;
    sp4C = 1;
    sp50 = 0x36;
    sp54 = 0x80;
    sp58 = 0x20;
    sp70 = 2;
    temp_v0 = func_1513B5E0(&sp38, 1, 8, arg1 & 0xFF, arg2);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp74 = temp_v0;
        memcpy((char *)(temp_v0) + (*(s32 *)((char *)(temp_v0) + 0x50)) + 0xF8, &sp30, 8);
        var_v1 = sp74;
    }
    return var_v1;
}

s32 func_151BA084(void *arg0, s32 arg1) {
    f32 sp140;
    f32 sp130;
    f32 sp120;
    f32 sp110;
    void * sp104;
    f32 spFC;
    f32 spEC;
    f32 spDC;
    f32 spCC;
    void * spC0;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_a3;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_s0 = (*(s32 *)((char *)(temp_v0) + 0xF8));
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(((char *)(temp_v0) + 0xF8)) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        func_1516972C(arg0);
    }
    temp_a3 = (*(s32 *)((char *)(temp_s0) + 0x1D4));
    if (temp_a3 == 0) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_s0) + 0x74)) & 0xF) == 0xF) {
        return 0;
    }
    if (D_800BE616 != 0) {
        temp_v0_2 = (*(s32 *)((char *)(temp_s0) + 0x318));
        if (temp_v0_2 != NULL) {
            temp_v1 = (*(s32 *)((char *)(temp_s0) + 0x31C));
            if ((temp_v1 != NULL) && ((*(s32 *)((char *)(temp_v1) + 0x197)) != 0) && (arg1 == (*(s32 *)((char *)(temp_v0_2) + 0x23D)))) {
                return 0;
            }
        }
        goto block_18;
    }
    if ((D_800CC5E8 != NULL) && (D_800CC5EC != NULL) && ((*(s32 *)((char *)(D_800CC5EC) + 0x197)) != 0) && (arg1 == (*(s32 *)((char *)(D_800CC5E8) + 0x23D)))) {
        return 0;
    }
block_18:
    if (D_800C3E90 != 0) {
        guMtxL2F(&sp104, temp_a3 + 0x40);
    } else {
        memcpy(&sp104, temp_a3 + 0x40, 0x40, temp_a3);
    }
    sp110 = 0.0f;
    sp120 = 0.0f;
    sp130 = 0.0f;
    sp140 = 1.0f;
    guMtxF2L(&sp104, (char *)(arg0) + (D_800BE9C0 << 6) + 0x78);
    memcpy(&spC0, (arg1 << 6) + D_800D9D10, 0x40);
    spCC = 0.0f;
    spDC = 0.0f;
    spEC = 0.0f;
    spFC = 1.0f;
    func_150A7960(&sp104, 0.0f, 67.0f, 159.0f, &spA0, &spA4, &spA8);
    func_150A7960(&spC0, spA0, spA4, spA8, &spAC, &spB0, &spB4);
    temp_f20 = D_800AA7B8;
    temp_f0 = spAC * temp_f20;
    var_s1 = 0;
    temp_f2 = spB0 * temp_f20;
    spAC = temp_f0;
    spB0 = temp_f2;
    do {
        temp_s0_2 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 0x10) + (arg1 * 4))) + 0x58)) + (var_s1 * 0x10);
        temp_f12 = (f32) (*(f32 *)((char *)(temp_s0_2) + 0x4));
        func_150A7960((*(void **)&temp_f12), (f32)(s32)&sp104, (f32) (*(f32 *)((char *)(temp_s0_2) + 0x0)), (f32) (*(f32 *)((char *)(temp_s0_2) + 0x2)), (*(f32 * *)&temp_f12), &sp84, &sp88, &sp8C);
        func_150A7960(&spC0, sp84, sp88, sp8C, &sp78, &sp7C, &sp80);
        var_s1 += 1;
        temp_f4 = sp78 * temp_f20;
        sp78 = temp_f4;
        sp7C *= temp_f20;
        (*(s16 *)((char *)(temp_s0_2) + 0x8)) = (s16) (s32) (temp_f4 - ((f32) (s32) (temp_f0 * 0.0009765625f) * 1024.0f));
        (*(s16 *)((char *)(temp_s0_2) + 0xA)) = (s16) (s32) (sp7C - ((f32) (s32) (temp_f2 * 0.0009765625f) * 1024.0f));
    } while (var_s1 != 0x14);
    return 1;
}

void func_151BA468(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (char *)(arg0) + (*(s32 *)((char *)(arg0) + 0x50));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0xF8));
    temp_v0_2 = (char *)(temp_v0) + 0xF8;
    if (temp_t6 == 0) {
        if (((char *)(temp_v1) == (char *)(*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v1) + 0x3B)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C((void *) temp_t6, temp_v1);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_a0 == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0xF8)) = (void *) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0_2) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((char *)(s32) (*(s32 *)((char *)(arg1) + 0x4)) == (char *)(temp_v1)) {
            (*(s32 *)((char *)(temp_v0) + 0xF8)) = temp_a0;
            (*(u8 *)((char *)(temp_v0_2) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_151BA518(void *arg0, s32 arg1, s32 arg2) {
    s8 sp1E4;
    s16 sp1E2;
    s16 sp1E0;
    s16 sp1DE;
    s16 sp1DC;
    s16 sp1DA;
    s16 sp1D8;
    f32 sp1D4;
    f32 sp1D0;
    f32 sp1CC;
    f32 sp1C8;
    s32 sp1C4;
    s32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    s32 sp198;
    s32 sp194;
    s16 sp192;
    s16 sp190;
    s16 sp18E;
    s16 sp18C;
    f32 sp168;
    void * sp164;
    void * sp160;
    void * sp15C;
    s16 sp150;
    s16 sp14E;
    u8 sp14C;
    void *sp148;
    s8 sp146;
    s8 sp144;
    s8 sp143;
    s8 sp142;
    s8 sp141;
    s8 sp140;
    s8 sp13F;
    s8 sp13E;
    s8 sp13D;
    s8 sp13C;
    s32 sp138;
    s8 sp134;
    s16 sp132;
    s16 sp130;
    s32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    void * spD8;
    void * spD4;
    void * spD0;
    void * spCC;
    void * spC8;
    void * spC4;
    void * *sp94;
    void * *sp90;
    void * *sp8C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;
    void *temp_s0_2;

    f32 sp108;
    f32 sp10C;
    sp18C = 0;
    sp18E = 0xFF;
    sp190 = -0x3F;
    sp192 = 0x34;
    sp194 = 6;
    if (D_80082FA0 >= 2) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    sp198 = 5 >> var_v0;
    sp19C = (*(s32 *)((char *)(arg0) + 0x14));
    sp1A0 = (*(s32 *)((char *)(arg0) + 0x18)) + 25.0f;
    sp1A4 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp1C0 = 6;
    sp1A8 = 50.0f;
    sp1AC = 42.0f;
    sp1B0 = 98.0f;
    sp1B4 = 68.0f;
    sp1B8 = D_800AA7BC;
    sp1BC = D_800AA7C0;
    if ((D_80082FA0 >= 2) || (var_v0_2 = 0, ((D_8008FD8C < 8) == 0))) {
        var_v0_2 = 1;
    }
    sp1C4 = 3 >> var_v0_2;
    sp1D8 = 0x19;
    sp1DA = 0xF;
    sp1DC = 0x64;
    sp1DE = 0x64;
    sp1E0 = 0xC;
    sp1E2 = 0x14;
    sp1C8 = 18.0f;
    sp1CC = D_800AA7C4;
    sp1D0 = D_800AA7C8;
    sp1D4 = 0.0f;
    if ((D_80082FA0 >= 2) || (D_8008FD8C >= 8)) {
        sp1E4 = -1;
    } else {
        sp1E4 = 0;
    }
    func_1514FCE8(&sp18C, arg1, arg2);
    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        func_1504715C(&sp168, arg0);
        temp_s3 = (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x40;
        func_1503F404(temp_s3, &spD0, &spD4, &spD8, &sp15C, &sp160, &sp164, &spC4, &spC8, &spCC);
        spDC = 1.0f;
        spF8 = 1.0f;
        spFC = 1.0f;
        sp100 = 1.0f;
        sp12C = 0x39E9;
        sp134 = 0;
        sp138 = 0;
        sp13C = 0xFF;
        sp13D = 0xD;
        sp13E = 0;
        sp13F = 0xC;
        sp140 = 0;
        sp141 = 0;
        sp142 = 0;
        sp143 = 0;
        sp144 = 2;
        sp146 = 0;
        sp148 = arg0;
        spE0 = D_800AA7CC;
        sp120 = 0.0f;
        sp14E = 0xC;
        sp150 = 0x15;
        sp14C = (*(s32 *)((char *)(arg0) + 0x3B));
        temp_f22 = D_800AA7D0;
        temp_f20 = ((random_float() * 200.0f) + 83.0f) * temp_f22;
        sp130 = (random_u32() % 36U) + 0x1E;
        sp132 = 0x27;
        spE8 = 0.75f;
        spE4 = 0.75f;
        random_float();
        temp_f28 = -488.0f * temp_f22;
        sp128 = temp_f28;
        func_15143134(&D_800AA590, &sp104, temp_s3);
        func_15143134(&D_800AA59C, &sp110, temp_s3);
        temp_f18 = sp110 - sp104;
        temp_f8 = sp114 - sp108;
        sp110 = temp_f18;
        temp_f4 = sp118 - sp10C;
        sp114 = temp_f8;
        sp118 = temp_f4;
        sp110 = temp_f18 * temp_f20;
        sp114 = temp_f8 * temp_f20;
        sp118 = temp_f4 * temp_f20;
        (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
        spEC += 109.0f;
        temp_f24 = D_800AA7D4;
        temp_f26 = D_800AA7D8;
        sp11C = ((random_float() * temp_f24) + temp_f26) * temp_f22;
        sp124 = ((random_float() * temp_f24) + temp_f26) * temp_f22;
        func_1513264C(&spDC, 3, 0xFF, &sp168, 0, (s32) arg1, arg2);
        temp_f20_2 = ((random_float() * 200.0f) + 83.0f) * temp_f22;
        sp130 = (random_u32() % 36U) + 0x1E;
        sp132 = 0x28;
        spE8 = 0.5f;
        spE4 = 0.5f;
        random_float();
        sp128 = temp_f28;
        func_15143134(&D_800AA5A8, &sp104, temp_s3);
        func_15143134(((random_u32() & 1) * 0xC) + &D_800AA5B4, &sp110, temp_s3);
        temp_f8_2 = sp110 - sp104;
        temp_f16 = sp114 - sp108;
        sp110 = temp_f8_2;
        temp_f10 = sp118 - sp10C;
        sp114 = temp_f16;
        sp118 = temp_f10;
        sp110 = temp_f8_2 * temp_f20_2;
        sp114 = temp_f16 * temp_f20_2;
        sp118 = temp_f10 * temp_f20_2;
        (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
        sp11C = ((random_float() * temp_f24) + temp_f26) * temp_f22;
        sp124 = ((random_float() * temp_f24) + temp_f26) * temp_f22;
        func_1513264C(&spDC, 3, 0xFF, &sp168, 0, (s32) arg1, arg2);
        sp132 = 0x29;
        var_s0 = 0;
        do {
            if (random_u32() & 1) {
                temp_v0 = var_s0 * 0xC;
                sp8C = temp_v0 + &D_800AA5FC;
                sp90 = temp_v0 + &D_800AA5CC;
                temp_f20_3 = ((random_float() * 200.0f) + 83.0f) * temp_f22;
                temp_f0 = (*(s32 *)((var_s0 * 4) + (char *)(D_800AA62C)));
                sp130 = (random_u32() % 36U) + 0x1E;
                spE4 = temp_f0;
                spE8 = temp_f0;
                random_float();
                sp128 = temp_f28;
                func_15143134(sp90, &sp104, temp_s3);
                func_15143134(sp8C, &sp110, temp_s3);
                temp_f6 = sp110 - sp104;
                temp_f16_2 = sp114 - sp108;
                sp110 = temp_f6;
                temp_f8_3 = sp118 - sp10C;
                sp114 = temp_f16_2;
                sp118 = temp_f8_3;
                sp110 = temp_f6 * temp_f20_3;
                sp114 = temp_f16_2 * temp_f20_3;
                sp118 = temp_f8_3 * temp_f20_3;
                (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
                (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
                (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
                sp11C = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                sp124 = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                func_1513264C(&spDC, 3, 0xFF, &sp168, 0, (s32) arg1, arg2);
            }
            var_s0 += 1;
        } while (var_s0 != 4);
        sp132 = 0x2B;
        func_15143134(&D_800AA63C, &sp104, temp_s3);
        var_s1 = 0;
        spE4 = D_800AA7DC;
        spE8 = D_800AA7DC;
        do {
            if (random_u32() & 1) {
                temp_v0_2 = var_s1 * 0xC;
                sp94 = temp_v0_2 + &D_800AA648;
                temp_s0 = temp_v0_2 + &D_800AA660;
                temp_f20_4 = ((random_float() * 200.0f) + 83.0f) * temp_f22;
                sp130 = (random_u32() % 36U) + 0x1E;
                random_float();
                sp128 = temp_f28;
                func_15143134(sp94, &sp110, temp_s3);
                temp_f10_2 = sp110 - sp104;
                temp_f16_3 = sp114 - sp108;
                sp110 = temp_f10_2;
                temp_f6_2 = sp118 - sp10C;
                sp114 = temp_f16_3;
                sp118 = temp_f6_2;
                sp110 = temp_f10_2 * temp_f20_4;
                sp114 = temp_f16_3 * temp_f20_4;
                sp118 = temp_f6_2 * temp_f20_4;
                (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
                (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
                (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
                spEC += (*(s32 *)((char *)(temp_s0) + 0x0));
                spF0 += (*(s32 *)((char *)(temp_s0) + 0x4));
                spF4 += (*(s32 *)((char *)(temp_s0) + 0x8));
                sp11C = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                sp124 = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                func_1513264C(&spDC, 3, 0xFF, &sp168, 0, (s32) arg1, arg2);
            }
            var_s1 += 1;
        } while (var_s1 != 2);
        sp132 = 0x2C;
        var_s1_2 = 0;
        do {
            if (random_u32() & 1) {
                temp_v0_3 = var_s1_2 * 0xC;
                sp8C = temp_v0_3 + &D_800AA6A8;
                sp90 = temp_v0_3 + &D_800AA678;
                temp_s0_2 = temp_v0_3 + &D_800AA6D8;
                temp_f20_5 = ((random_float() * 200.0f) + 83.0f) * temp_f22;
                temp_f0_2 = (*(s32 *)((var_s1_2 * 4) + (char *)(D_800AA708)));
                sp130 = (random_u32() % 36U) + 0x1E;
                spE4 = temp_f0_2;
                spE8 = temp_f0_2;
                random_float();
                sp128 = temp_f28;
                func_15143134(sp90, &sp104, temp_s3);
                func_15143134(sp8C, &sp110, temp_s3);
                temp_f16_4 = sp110 - sp104;
                temp_f8_4 = sp114 - sp108;
                sp110 = temp_f16_4;
                temp_f18_2 = sp118 - sp10C;
                sp114 = temp_f8_4;
                sp118 = temp_f18_2;
                sp110 = temp_f16_4 * temp_f20_5;
                sp114 = temp_f8_4 * temp_f20_5;
                sp118 = temp_f18_2 * temp_f20_5;
                (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
                (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
                (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
                spEC += (*(s32 *)((char *)(temp_s0_2) + 0x0));
                spF0 += (*(s32 *)((char *)(temp_s0_2) + 0x4));
                spF4 += (*(s32 *)((char *)(temp_s0_2) + 0x8));
                sp11C = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                sp124 = ((random_float() * temp_f24) + temp_f26) * temp_f22;
                func_1513264C(&spDC, 3, 0xFF, &sp168, 0, (s32) arg1, arg2);
            }
            var_s1_2 += 1;
        } while (var_s1_2 != 4);
    }
}

void func_151BB044(void *arg0) {
    func_1000FA64(0x4A7, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C)), 0x2000, 0x320, 0xC8, func_151BB0E0, arg0, 0, 8, 0);
}

s32 func_151BB0E0(void *arg0, void * arg1, u32 *arg2, void * arg3, s32 *arg4, u16 *arg6) {
    s32 sp58;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    f32 temp_f0;
    s32 temp_t5;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u32 temp_v0;
    void *temp_s0;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((temp_s0 != NULL) && ((*(s32 *)((char *)(temp_s0) + 0x1CA)) != 0)) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
        var_v1 = 0;
        sp40 = (temp_v0 >> 7) & 1;
        var_t2 = (temp_v0 >> 0x10) & 0xFFF;
        var_t0 = 0;
        (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x14));
        var_t1 = (temp_v0 >> 8) & 0xFF;
        (*(s16 *)((char *)(arg0) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x18));
        (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x1C));
        temp_f0 = (*(s32 *)((char *)(temp_s0) + 0x3C));
        if (((temp_f0 > 1.0f) && ((*(s32 *)((char *)(temp_s0) + 0x44)) > 0.0f)) || ((temp_f0 < -1.0f) && ((*(s32 *)((char *)(temp_s0) + 0x44)) < 0.0f))) {
            var_v1 = 1;
        } else if (((temp_f0 > 5.0f) && ((*(s32 *)((char *)(temp_s0) + 0x44)) <= 0.0f)) || ((temp_f0 < -5.0f) && ((*(s32 *)((char *)(temp_s0) + 0x44)) >= 0.0f))) {
            var_v1 = 2;
        }
        temp_t5 = (var_v1 ^ (temp_v0 & 0x7F)) & 0x7F;
        if (temp_t5 != 0) {
            if ((temp_t5 & 2) && (var_v1 & 2)) {
                var_t0_2 = 0x4A5;
            } else {
                sp58 = var_v1;
                sp48 = var_t1;
                sp44 = var_t2;
                var_t0_2 = func_1000F568(0x4A3, 4);
            }
            sp58 = var_v1;
            sp50 = var_t0_2;
            sp48 = var_t1;
            sp44 = var_t2;
            if (func_10010894(temp_s0) == 0) {
                sp58 = var_v1;
                sp48 = var_t1;
                sp44 = var_t2;
                func_10010154(var_t0_2 & 0xFFFF, temp_s0, 0x6D60, 0x12C, 0x708);
            }
            var_t0 = 0;
        }
        if ((var_v1 != 0) && (*arg6 == 0x4A7)) {
            var_t0 = 0x4A8;
            sp4C = 0x2EE0;
            goto block_29;
        }
        if ((var_v1 == 0) && ((temp_v0_2 = *arg6, (temp_v0_2 == 0x4A9)) || (temp_v0_2 == 0x4A8))) {
            var_t0 = 0x4A7;
            if (temp_v0_2 == 0x4A9) {
                goto block_48;
            }
            sp4C = 0x2000;
            goto block_29;
        }
block_29:
        if (var_t0 != 0) {
            func_1000FA64(var_t0 & 0xFFFF, (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x18)), (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x1C)), sp4C, 0x320, 0xC8, func_151BB0E0, temp_s0, var_v1 | 0x012CFF00, 8, 0);
            goto block_48;
        }
        temp_v0_3 = *arg6;
        if (temp_v0_3 != 0x4A7) {
            if (var_t2 == 0) {
                *arg2 = (u32) (*arg2 * var_t1) >> 8;
                if (sp40 != 0) {
                    var_t1 += 8;
                    if (var_t1 >= 0x100) {
                        sp48 = 0xFF;
                        sp58 = var_v1;
                        var_t2 = (random_u32() & 0x200) + 0x12C;
                        var_t1 = 0xFF;
                        sp40 = 0;
                    }
                    goto block_41;
                }
                var_t1 -= 8;
                if (var_t1 <= 0) {
                    goto block_48;
                }
                goto block_41;
            }
            var_t2 -= D_800BE9E4;
            if (var_t2 <= 0) {
                var_t2 = 0;
                if (temp_v0_3 == 0x4A8) {
                    sp48 = var_t1;
                    sp58 = var_v1;
                    func_1000FA64(0x4A9, (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x14)), (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x18)), (s16) (s32) (*(s16 *)((char *)(temp_s0) + 0x1C)), 0x2EE0, 0x320, 0xC8, func_151BB0E0, temp_s0, var_v1 | 0x880, 8, 0);
                    var_t2 = (random_u32() & 0x200) + 0x384;
                }
            }
block_41:
            *arg4 = (s32) (fabsf((*(s32 *)((char *)(temp_s0) + 0x3C))) * (*(s32 *)((char *)(temp_s0) + 0xB8)) * 0.5f);
            goto block_42;
        }
block_42:
        (*(u32 *)((char *)(arg0) + 0x1C)) = (u32) ((sp40 << 7) | var_v1 | (var_t1 << 8) | (var_t2 << 0x10));
        if ((*arg2 == 0) || ((*(s32 *)((char *)(arg0) + 0x10)) & 0x80)) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x24));
            if (temp_a0 != 0) {
                func_100111C8(temp_a0);
                (*(s32 *)((char *)(arg0) + 0x24)) = 0U;
            }
            *arg6 = 0;
            (*(s32 *)((char *)(arg0) + 0x10)) = (s32) ((*(s32 *)((char *)(arg0) + 0x10)) & ~0x80);
            *arg2 = 0;
        }
        return 0;
    }
block_48:
    return 1;
}

void func_151BB61C(s32 arg0, f32 *arg1, void *arg2, s32 arg3, s32 arg4) {
    void * sp1BC;
    void * sp1B8;
    void * sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    s32 sp1A0;
    void * sp194;
    void * sp188;
    void * sp17C;
    s8 sp178;
    s16 sp176;
    s16 sp174;
    s16 sp172;
    s16 sp170;
    s16 sp16E;
    s16 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    s32 sp158;
    s32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    void * sp130;
    s32 sp12C;
    s32 sp128;
    f32 sp124;
    void * sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    void * spE0;
    void * spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s16 spAE;
    s16 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void * sp6C;
    s32 sp68;
    s32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_s2;

    f32 sp180;
    temp_s2 = arg3 & 0xFF;
    if (arg0 != 0) {
        func_15055A2C(0, (*(s32 *)((char *)(arg1) + 0x0)), (*(s32 *)((char *)(arg1) + 0x4)), (*(s32 *)((char *)(arg1) + 0x8)), 0);
        sp1A4 = (*(s32 *)((char *)(arg2) + 0x0)) - (*(s32 *)((char *)(arg1) + 0x0));
        sp1A8 = (*(s32 *)((char *)(arg2) + 0x4)) - (*(s32 *)((char *)(arg1) + 0x4));
        sp1AC = (*(s32 *)((char *)(arg2) + 0x8)) - (*(s32 *)((char *)(arg1) + 0x8));
        func_151C05A4(arg1, temp_s2 & 0xFF, arg4);
        func_151C05F0(arg1, temp_s2 & 0xFF, arg4);
        func_151C04F8(arg1, temp_s2 & 0xFF, arg4);
        func_151BBEE4(arg1, temp_s2 & 0xFF, arg4);
        if (func_150AC9C0((*(s32 *)((char *)(arg1) + 0x0)), (*(s32 *)((char *)(arg1) + 0x4)), (*(s32 *)((char *)(arg1) + 0x8)), sp1A4, sp1A8, sp1AC, 0, &sp1BC, &sp1B0, &sp1B4, &sp1B8, 0, &sp1A0, 0, 0.0f) != 0) {
            if (func_15145C90(sp1A0) != 0) {
                func_151BBFBC(&sp1BC, &sp1B0, temp_s2 & 0xFF, arg4);
            }
            if ((func_15144E80(&sp1BC, &sp194, &sp188, &sp17C) != 0) && (sp180 < 0.0f)) {
                func_151C0644(&sp1B0, temp_s2 & 0xFF, arg4);
            }
            temp_f0 = -sp1A4;
            temp_f2 = -sp1A8;
            temp_f12 = -sp1AC;
            sp104 = temp_f0;
            sp108 = temp_f2;
            sp10C = temp_f12;
            (*(s32 *)((char *)&(sp110) + 0x0)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x0));
            (*(s32 *)((char *)&(sp110) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x4));
            (*(s32 *)((char *)&(sp110) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x8));
            (*(s32 *)((char *)&(sp110) + 0xC)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0xC));
            (*(u16 *)((char *)&(sp110) + 0x10)) = (u16) (*(u16 *)((char *)&(sp1BC) + 0x10));
            sp124 = 494.0f;
            (*(f32 *)((char *)&(sp130) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1B0) + 0x0));
            (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x4));
            (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x8));
            sp13C = D_800AA7E0;
            sp140 = D_800AA7E4;
            sp144 = 45.0f;
            sp148 = 53.0f;
            sp128 = 3;
            sp12C = 4;
            sp154 = 7;
            sp158 = 3;
            sp16C = 0x19;
            sp16E = 0xF;
            sp170 = 0x64;
            sp172 = 0x64;
            sp174 = 0xC;
            sp176 = 0x14;
            sp178 = 0;
            sp58 = temp_f12;
            sp5C = temp_f2;
            sp60 = temp_f0;
            sp14C = 203.0f;
            sp150 = 414.0f;
            sp15C = 15.0f;
            sp160 = D_800AA7E8;
            sp164 = D_800AA7EC;
            sp168 = D_800AA7F0;
            func_1514FBFC(temp_f12, &sp104, temp_s2 & 0xFF, arg4);
            M2C_MEMCPY_ALIGNED(&spE0, &D_800AA718, 0x24);
            M2C_MEMCPY_ALIGNED(&spBC, &D_800AA73C, 0x24);
            sp64 = 6;
            sp68 = 6;
            (*(f32 *)((char *)&(sp6C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1B0) + 0x0));
            (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x4));
            (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1B0) + 0x8));
            sp78 = sp60;
            sp7C = sp5C;
            sp80 = sp58;
            (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x0));
            (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x4));
            (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0x8));
            (*(s32 *)((char *)&(sp84) + 0xC)) = (s32) (*(s32 *)((char *)&(sp1BC) + 0xC));
            (*(u16 *)((char *)&(sp84) + 0x10)) = (u16) (*(u16 *)((char *)&(sp1BC) + 0x10));
            sp9C = D_800AA7F4;
            spA0 = D_800AA7F4;
            spAC = 0x32;
            spAE = 0x14;
            sp98 = 456.0f;
            spA4 = D_800AA7F8;
            spA8 = D_800AA7FC;
            spB0 = D_800AA800;
            spB4 = D_800AA804;
            spB8 = D_800AA808;
            func_15151D6C(sp58, D_800AA7F4, &sp64, &spE0, &spBC, 9, temp_s2, arg4);
        }
    }
}

void func_151BBA9C(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    s8 sp140;
    s16 sp13E;
    s16 sp13C;
    s16 sp13A;
    s16 sp138;
    s16 sp136;
    s16 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    s32 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    void * spF8;
    s32 spF4;
    s32 spF0;
    s16 spEE;
    s16 spEC;
    s16 spEA;
    s16 spE8;
    void * spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void * spA0;
    void * sp94;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    void * sp54;
    s32 sp50;
    s32 sp4C;
    void * sp40;
    void * sp34;
    s32 var_v0;
    s32 var_v0_2;

    f32 sp8C;
    if (arg0 != NULL) {
        sp144 = ((*(s32 *)((char *)(arg1) + 0x0)) + (*(s32 *)((char *)(arg2) + 0x0))) * 0.5f;
        sp148 = ((*(s32 *)((char *)(arg1) + 0x4)) + (*(s32 *)((char *)(arg2) + 0x4))) * 0.5f;
        sp14C = ((*(s32 *)((char *)(arg1) + 0x8)) + (*(s32 *)((char *)(arg2) + 0x8))) * 0.5f;
        func_151C04F8(&sp144, arg3, arg4);
        func_151C05A4(&sp144, arg3, arg4);
        func_151C05F0(&sp144, arg3, arg4);
        func_15055A2C(1, sp144, sp148, sp14C, 0);
        func_151BBEE4(&sp144, arg3, arg4);
        spE8 = 0;
        spEA = 0xFF;
        spEC = -0x40;
        spEE = 0x47;
        spF0 = 6;
        if (D_80082FA0 >= 2) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        spF4 = 4 >> var_v0;
        (*(f32 *)((char *)&(spF8) + 0x0)) = (f32) (*(f32 *)((char *)&(sp144) + 0x0));
        (*(s32 *)((char *)&(spF8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp144) + 0x4));
        (*(s32 *)((char *)&(spF8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp144) + 0x8));
        sp11C = 7;
        sp104 = 23.0f;
        sp108 = 30.0f;
        sp10C = 45.0f;
        sp110 = 53.0f;
        sp114 = 203.0f;
        sp118 = 414.0f;
        if ((D_80082FA0 >= 2) || (var_v0_2 = 0, ((D_8008FD8C < 8) == 0))) {
            var_v0_2 = 1;
        }
        sp120 = 3 >> var_v0_2;
        sp134 = 0x19;
        sp136 = 0xF;
        sp138 = 0x64;
        sp13A = 0x64;
        sp13C = 0xC;
        sp13E = 0x14;
        sp124 = 15.0f;
        sp128 = D_800AA80C;
        sp12C = D_800AA810;
        sp130 = D_800AA814;
        if ((D_80082FA0 >= 2) || (D_8008FD8C >= 8)) {
            sp140 = -1;
        } else {
            sp140 = 0;
        }
        func_1514FCE8(&spE8, arg3, arg4);
        func_1504715C(&spC4, arg0);
        spBC = sp148 + 100.0f;
        spB8 = sp144;
        spC0 = sp14C;
        if (func_15046C80(&spB8, 0, sp148 - 1000.0f, &spC4) != 0) {
            spAC = spB8;
            spB0 = spC4;
            spB4 = spC0;
            func_151BBFBC(&spC8, &spAC, arg3, arg4);
            if ((func_15144E80(&spC8, &spA0, &sp94, &sp88) != 0) && (sp8C < 0.0f)) {
                func_151C0644(&spAC, arg3, arg4);
            }
        }
        (*(s32 *)((char *)&(sp40) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008FBA0) + 0x0));
        (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008FBA0) + 0x4));
        (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008FBA0) + 0x8));
        (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008FBAC) + 0x0));
        (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008FBAC) + 0x4));
        (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008FBAC) + 0x8));
        sp4C = 4;
        sp50 = 8;
        (*(f32 *)((char *)&(sp54) + 0x0)) = (f32) (*(f32 *)((char *)&(sp144) + 0x0));
        (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)&(sp144) + 0x4));
        (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)&(sp144) + 0x8));
        sp68 = 12.0f;
        sp6C = 6.0f;
        sp60 = 0;
        sp62 = 0xFF;
        sp64 = -0x3F;
        sp66 = 0x57;
        sp78 = 0x32;
        sp7A = 0xA;
        sp70 = D_800AA818;
        sp74 = D_800AA81C;
        sp7C = D_800AA820;
        sp80 = D_800AA824;
        sp84 = D_800AA828;
        func_15152190(&sp4C, &sp40, &sp34, 3, 0.0f, 1, (s32) arg3, arg4);
    }
}

void func_151BBEE4(f32 *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;

    sp48 = 3;
    sp49 = -1;
    sp4A = (random_u32() & 0xF) + 5;
    sp4C = 0;
    sp3C = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp44 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp48, &sp3C, (random_u32(arg0) % 21U) + 0x1E, 0xFF, 0x61, 0x36, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151BBFBC(void * *arg0, f32 *arg1, s32 arg2, s32 arg3) {
    u32 sp40;
    f32 sp3C;

    sp3C = random_float();
    sp40 = random_u32();
    func_150E7FEC((sp3C * 75.0f) + 75.0f, ((sp40 % 56U) + 0xC8) & 0xFF, arg0, arg1, (random_u32() % 205U) + 0x12B, 1, 1, 0, 0, 0, (s32) arg2, 0);
}

void func_151BC074(s32 arg0) {
    if (arg0 != 0) {
        func_15160CDC(1, &D_800AA760, &D_800AA76C, D_800AA82C, 2, 0x12C, 0xFF, 0xFF, 0xFF, 0xFF, 1, 0, 0, 0xFF, 1);
    }
}

void func_151BC104(void *arg0, s32 arg1, s32 arg2) {
    s8 spD9;
    s8 spD8;
    s8 spD7;
    s8 spD6;
    s16 spD4;
    f32 spD0;
    f32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    u8 spBC;
    void *spB8;
    s8 spB1;
    s32 spAC;
    s16 spAA;
    s16 spA8;
    f32 spA4;
    f32 spA0;
    s32 sp9C;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    void * sp7C;
    u8 sp78;
    void *sp74;
    u8 sp70;
    void *sp6C;
    s8 sp64;
    s16 sp62;
    s8 sp61;
    s8 sp60;
    void *sp5C;
    void *sp58;
    void *sp54;
    s32 temp_v0;
    s32 temp_v0_3;
    void *temp_v0_2;

    if ((D_80082FA0 < 2) && (D_8008FD8C < 5)) {
        spC0 = (char *)(arg0) + 0x14;
        spC4 = (char *)(arg0) + 0x18;
        spC8 = (char *)(arg0) + 0x1C;
        spD4 = 0x12C;
        spD0 = D_800AA830 * D_800DCA24;
        spD6 = 4;
        spD7 = 4;
        spD8 = 1;
        spD9 = 0;
        spB8 = arg0;
        spCC = 15.0f;
        spBC = (*(s32 *)((char *)(arg0) + 0x3B));
        temp_v0 = func_15134908(&spC0, 8, arg1, arg2);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x40, &spB8, 8);
        }
    }
    spB1 = 0x28;
    sp9C = (*(s32 *)((char *)(arg0) + 0x14));
    spA0 = (*(s32 *)((char *)(arg0) + 0x18));
    spA8 = 0x12C;
    spAA = 6;
    spAC = 0xC;
    sp74 = arg0;
    spA4 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp78 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp7C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x0));
    (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x4));
    (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x8));
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp94 = -16384.0f;
    sp90 = -16384.0f;
    sp54 = (char *)(arg0) + 0x1C;
    sp58 = (char *)(arg0) + 0x18;
    sp5C = (char *)(arg0) + 0x14;
    temp_v0_2 = func_15147A80(&sp9C, 0x28, 0x14, 0xA, 0xA, 0xA, 0, 0, 0, (s32) arg1, arg2);
    if (temp_v0_2 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0_2) + 0x98)), &sp74, 0x24);
    }
    sp6C = arg0;
    sp60 = 2;
    sp61 = 0xE;
    sp70 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp62 = 0x12C;
    sp64 = 0x1F;
    temp_v0_3 = func_15163414(&sp60, sp5C, sp58, sp54, 0, 0, 0x28, 0xFF, 0xFF, 0xFF, 0xFF, 0, 8, (s32) arg1, arg2);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x28, &sp6C, 8);
    }
}

void func_151BC370(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    u32 sp60;
    u32 sp5C;
    f32 sp58;
    f32 temp_f2;
    f32 temp_f8;

    sp84 = arg0;
    sp88 = arg1;
    sp8C = arg2;
    sp5C = random_u32();
    sp60 = random_u32();
    func_15143794((s16) (sp5C & 0xFF), (s16) ((sp60 % 65U) - 0x20), random_float() * 1680.0f * D_800AA834, &sp78);
    temp_f8 = (random_float() * 202.0f) + 208.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    temp_f2 = temp_f8 * D_800AA838;
    sp74 = 0.0f;
    sp78 += -arg3 * D_800BE9A8 * temp_f2;
    sp7C += -arg4 * D_800BE9A8 * temp_f2;
    sp80 += -arg5 * D_800BE9A8 * temp_f2;
    sp58 = random_float(D_800BE9A8, 0);
    sp64 = random_float();
    sp5C = random_u32();
    func_151A26EC(&sp84, &sp6C, &sp78, 0x3F800000, ((sp58 * D_800AA83C) + D_800AA840) * D_800AA844, (sp64 * 124.0f) + 202.0f, (sp5C & 0xF) + 0x14, (random_u32() % 201U) + 0x37, 0xF, 0xF, 0, -1, 0xCB, 0, 0, (s32) (*(s32 *)((char *)(arg6) + 0xC)), (s32) (*(s32 *)((char *)(arg6) + 0x1)));
}

s32 func_151BC580(void *arg0) {
    if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x40)))) == 0) {
        return 0;
    }
    return 1;
}

void func_151BC5A4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0x40)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(arg0) + 0x44)))) {
            func_1516972C(arg0, (void *) temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x40;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x40));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x40)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x40)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

s32 func_151BC64C(void *arg0) {
    s16 temp_a2;
    s32 temp_lo;
    s32 temp_v0;
    s8 var_a1;
    void *temp_t4;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_a1 * 0x14) + temp_v0;
            (*(s16 *)((char *)(temp_v1) + 0xC)) = (s16) ((*(s16 *)((char *)(temp_v1) + 0xC)) - D_800BE9E4);
            temp_a2 = (*(s32 *)((char *)(temp_v1) + 0xC));
            if (temp_a2 < 0) {
                if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
            } else if (temp_a2 < 0xA) {
                temp_lo = temp_a2 * 0x19;
                if (temp_lo < (s32) (*(s32 *)((char *)(temp_v1) + 0xE))) {
                    (*(u8 *)((char *)(temp_v1) + 0xE)) = (u8) temp_lo;
                }
            }
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t4 = temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    return 1;
}

s32 func_151BC794(void *arg0) {
    void *sp9C;
    s32 sp98;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f14;
    f32 var_f16;
    s8 temp_v1;
    void *temp_a2;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v0 = (*(s32 *)((char *)(temp_a2) + 0x0));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_a2) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 8);
        return 1;
    }
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    sp88 = (*(s32 *)((char *)(arg0) + 0x10)) - (*(s32 *)((char *)(temp_a2) + 0x8));
    sp8C = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_a2) + 0xC));
    sp98 = (*(s32 *)((char *)(arg0) + 0x94));
    sp9C = temp_a2;
    sp90 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_a2) + 0x10));
    temp_f0 = func_15143E64(&sp88, arg0, temp_a2);
    (*(f32 *)((char *)(sp9C) + 0x14)) = (f32) ((*(f32 *)((char *)(sp9C) + 0x14)) + (temp_f0 * D_800AA848 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(sp9C) + 0x14));
    (*(f32 *)((char *)(sp9C) + 0x1C)) = (f32) ((*(f32 *)((char *)(sp9C) + 0x1C)) + (temp_f0 * D_800AA84C));
    sp4C = temp_f2;
    if (temp_f2 > 1.0f) {
        temp_t3 = (char *)(sp9C) + 8;
        temp_f0_2 = 1.0f / sp4C;
        (*(s32 *)((char *)&(sp6C) + 0x0)) = (*(s32 *)((char *)(sp9C) + 0x8));
        (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t3) + 0x4));
        var_f16 = (*(s32 *)((char *)(sp9C) + 0x18)) + D_800BE9A4;
        (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t3) + 0x8));
        temp_f2_2 = (*(s32 *)((char *)(sp9C) + 0x20));
        var_f14 = temp_f2_2;
        temp_f20 = -(var_f16 * temp_f0_2);
        do {
            temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x14) + sp98;
            (*(f32 *)((char *)(temp_v0_2) + 0x0)) = (f32) (*(f32 *)((char *)&(sp6C) + 0x0));
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x4));
            (*(s32 *)((char *)(temp_v0_2) + 0xC)) = 0xC;
            (*(s32 *)((char *)(temp_v0_2) + 0xE)) = 0x64;
            (*(s32 *)((char *)(temp_v0_2) + 0x10)) = var_f14;
            (*(s32 *)((char *)(temp_v0_2) + 0x8)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x8));
            if (var_f14 > 16384.0f) {
                do {
                    (*(f32 *)((char *)(temp_v0_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x10)) - 32768.0f);
                } while ((*(s32 *)((char *)(temp_v0_2) + 0x10)) > 16384.0f);
            }
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
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
            var_f14 += ((*(s32 *)((char *)(sp9C) + 0x1C)) - temp_f2_2) * temp_f0_2;
            sp6C += sp88 * temp_f0_2;
            sp70 += sp8C * temp_f0_2;
            var_f16 += temp_f20;
            sp74 += sp90 * temp_f0_2;
            (*(f32 *)((char *)(sp9C) + 0x14)) = (f32) ((*(f32 *)((char *)(sp9C) + 0x14)) - 1.0f);
        } while ((*(s32 *)((char *)(sp9C) + 0x14)) > 1.0f);
        (*(f32 *)((char *)(sp9C) + 0x8)) = (f32) (*(f32 *)((char *)&(sp6C) + 0x0));
        (*(s32 *)((char *)(temp_t3) + 0x4)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x4));
        (*(s32 *)((char *)(temp_t3) + 0x8)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x8));
        (*(s32 *)((char *)(sp9C) + 0x20)) = var_f14;
        (*(s32 *)((char *)(sp9C) + 0x18)) = var_f16;
    }
    return 1;
}

void *func_151BCA90(void *arg0, void *arg1, s32 arg2) {
    void *spFC;
    void *spF4;
    s8 spF3;
    f32 spE4;
    f32 spD8;
    f32 spA8;
    f32 spA0;
    f32 sp9C;
    f32 sp80;
    f32 sp78;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f8;
    f32 temp_f8_3;
    f32 var_f28;
    f32 var_f28_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f30;
    f32 var_f30_2;
    s32 temp_a2;
    s32 temp_f4;
    s32 temp_f8_2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a2;
    u8 var_a3;
    u8 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t7;
    void *temp_t9;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;

    f32 spDC;
    f32 spE0;
    f32 spE8;
    f32 spEC;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spFC, 0);
        if (spFC != NULL) {
            temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_v0 = func_15144B34(arg2);
            spF3 = 1;
            spF4 = temp_v0;
            var_s0 = func_15142FBC(func_15142B7C(func_1513F4E4(func_15142C10(func_15142E24(var_s0, &D_80090CD4, 0, 0, 0, 0, 0x1F, 0, 0, &spF3, 3), 0xFF, 0xFF, 0xFF, 0xFF, &spF3), 0x4E, &spF3), 0x200005, 0x1F0600), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spF3);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                var_v1 = 0x80;
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                sp9C = 0.0f;
            } else {
                var_a2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_a2 < 0) {
                    var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_a1 = var_a2 - 1;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0_2 = temp_s3 + (var_a2 * 0x14);
                (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                var_v1 = (*(s32 *)((char *)(temp_v0_2) + 0xE));
                sp9C = (*(s32 *)((char *)(temp_v0_2) + 0x10));
            }
            temp_v0_3 = temp_s3 + (var_a1 * 0x14);
            (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(temp_v0_3) + 0x0));
            (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x4));
            (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x8));
            var_a3 = (*(s32 *)((char *)(temp_v0_3) + 0xE));
            spA0 = (*(s32 *)((char *)(temp_v0_3) + 0x10));
            temp_f22 = spD8 - (*(s32 *)((char *)(spF4) + 0x0));
            temp_f24 = spDC - (*(s32 *)((char *)(spF4) + 0x4));
            temp_f26 = spE0 - (*(s32 *)((char *)(spF4) + 0x8));
            temp_f18 = spDC - spE8;
            temp_f20 = spE0 - spEC;
            temp_f16 = spD8 - spE4;
            temp_f2 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f28 = (temp_f20 * temp_f22) - (temp_f26 * temp_f16);
            temp_f30 = (temp_f16 * temp_f24) - (temp_f22 * temp_f18);
            temp_f8 = (temp_f2 * temp_f2) + (temp_f28 * temp_f28) + (temp_f30 * temp_f30);
            spA8 = temp_f8;
            sp78 = temp_f8;
            if (temp_f8 == 0.0f) {
                var_f30 = 0.0f;
                var_f2 = 0.0f;
                var_f28 = 0.0f;
            } else {
                temp_f12 = 35.0f / sqrtf(spA8);
                var_f2 = temp_f2 * temp_f12;
                var_f28 = temp_f28 * temp_f12;
                var_f30 = temp_f30 * temp_f12;
            }
            (*(s16 *)((char *)(spFC) + 0x0)) = (s16) (s32) (spD8 + var_f2);
            (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spDC + var_f28);
            (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spE0 + var_f30);
            temp_f8_2 = (s32) sp9C;
            (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(spFC) + 0xA)) = 0;
            (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xF)) = var_v1;
            (*(s32 *)((char *)(spFC) + 0x6)) = 0;
            temp_t7 = (char *)(spFC) + 0x10;
            spFC = temp_t7;
            (*(s16 *)((char *)(spFC) + 0x10)) = (s16) (s32) (spD8 - var_f2);
            (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spDC - var_f28);
            (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spE0 - var_f30);
            (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(temp_t7) + 0xA)) = 0x7FF;
            (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(temp_t7) + 0xF)) = var_v1;
            (*(s32 *)((char *)(spFC) + 0x6)) = 0;
            spFC = (char *)(spFC) + 0x10;
            do {
                temp_f22_2 = spE4 - (*(s32 *)((char *)(spF4) + 0x0));
                temp_a2 = var_a1;
                temp_f24_2 = spE8 - (*(s32 *)((char *)(spF4) + 0x4));
                var_a1 -= 1;
                temp_f26_2 = spEC - (*(s32 *)((char *)(spF4) + 0x8));
                temp_f18_2 = spDC - spE8;
                temp_f20_2 = spE0 - spEC;
                temp_f16_2 = spD8 - spE4;
                temp_f2_2 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f28_2 = (temp_f20_2 * temp_f22_2) - (temp_f26_2 * temp_f16_2);
                temp_f30_2 = (temp_f16_2 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f8_3 = (temp_f2_2 * temp_f2_2) + (temp_f28_2 * temp_f28_2) + (temp_f30_2 * temp_f30_2);
                temp_f4 = (s32) spA0;
                spA8 = temp_f8_3;
                sp80 = temp_f8_3;
                if (temp_f8_3 == 0.0f) {
                    var_f30_2 = 0.0f;
                    var_f2_2 = 0.0f;
                    var_f28_2 = 0.0f;
                } else {
                    temp_f12_2 = 35.0f / sqrtf(spA8);
                    var_f2_2 = temp_f2_2 * temp_f12_2;
                    var_f28_2 = temp_f28_2 * temp_f12_2;
                    var_f30_2 = temp_f30_2 * temp_f12_2;
                }
                (*(s16 *)((char *)(spFC) + 0x0)) = (s16) (s32) (spE4 + var_f2_2);
                (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spE8 + var_f28_2);
                (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spEC + var_f30_2);
                (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f4;
                (*(s32 *)((char *)(spFC) + 0xA)) = 0;
                (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xF)) = var_a3;
                (*(s32 *)((char *)(spFC) + 0x6)) = 0;
                temp_t9 = (char *)(spFC) + 0x10;
                spFC = temp_t9;
                (*(s16 *)((char *)(spFC) + 0x10)) = (s16) (s32) (spE4 - var_f2_2);
                (*(s16 *)((char *)(spFC) + 0x2)) = (s16) (s32) (spE8 - var_f28_2);
                (*(s16 *)((char *)(spFC) + 0x4)) = (s16) (s32) (spEC - var_f30_2);
                (*(s16 *)((char *)(spFC) + 0x8)) = (s16) temp_f4;
                (*(s32 *)((char *)(temp_t9) + 0xA)) = 0x7FF;
                (*(s32 *)((char *)(spFC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spFC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(temp_t9) + 0xF)) = var_a3;
                (*(s32 *)((char *)(spFC) + 0x6)) = 0;
                spFC = (char *)(spFC) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spFC) - 0x40);
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_2) + 8;
                if (var_a1 < 0) {
                    var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)&(spE4) + 0x0));
                    (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
                    (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
                    temp_v0_4 = temp_s3 + (var_a1 * 0x14);
                    (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)(temp_v0_4) + 0x0));
                    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x4));
                    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x8));
                    var_a3 = (*(s32 *)((char *)(temp_v0_4) + 0xE));
                    spA0 = (*(s32 *)((char *)(temp_v0_4) + 0x10));
                }
            } while (temp_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151BD21C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_a3 = (*(s32 *)((char *)(temp_v0) + 0x0));
    if (temp_t6 == 0) {
        if ((temp_a3 == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            (*(s32 *)((char *)(arg0) + 0x30)) = 0;
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 8);
        }
    } else if (temp_t6 == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a3) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a3) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

s32 func_151BD2BC(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    if ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        return 0;
    }
    return 1;
}

void func_151BD2F8(void *arg0, void * arg1, void * arg2) {
    s8 sp5D;
    s8 sp5C;
    f32 sp58;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s8 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s8 sp2C;
    void *sp28;
    u8 sp24;
    s16 sp20;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        sp30 = 31.0f;
        sp28 = arg0;
        sp2C = 1;
        sp48 = 0;
        sp4A = 0x32;
        sp4C = 0x64;
        sp4E = 0x12C;
        sp52 = 4;
        sp53 = 4;
        sp54 = 3;
        sp5C = 5;
        sp5D = -1;
        sp20 = 0;
        sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp34 = -34.0f;
        sp38 = -117.0f;
        sp3C = 35.0f;
        sp40 = -24.0f;
        sp44 = -182.0f;
        sp58 = D_800AA850;
        temp_v0 = func_15134DAC(&sp24, 2, arg0);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x80, (void **) &sp20, 2);
        }
        sp30 = -sp30;
        sp3C = -sp3C;
        temp_v0_2 = func_15134DAC(&sp24, 2);
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0x80, (void **) &sp20, 2);
        }
    }
}

s32 func_151BD42C(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x80)) = 0;
    return 1;
}

void func_151BD43C(void *arg0, void *arg1, void * arg2, void * arg3, f32 arg4, void *arg5) {
    s8 spAD;
    s8 spAC;
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
    void *sp44;
    u8 sp3C;
    void *sp38;
    s32 sp2C;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x74)) & 0xF) != 0xF) {
        sp65 = 0x29;
        sp50 = 0xE03;
        sp48 = 0x200005;
        sp4C = 0;
        sp54 = 0;
        sp58 = 0;
        temp_f6 = random_float() * 251.0f;
        sp66 = 0x14;
        sp68 = 0xC;
        sp9C = (temp_f6 + 44.0f) * D_800AA854;
        var_v1 = 0;
        if (random_u32() & 1) {
            var_v1 = 0x40;
        }
        sp2C = var_v1;
        if (random_u32() & 1) {
            var_v0 = 0x80;
        } else {
            var_v0 = 0;
        }
        spA0 = var_v0 | 7 | var_v1 | 0xDE00;
        spA8 = 3;
        spA9 = 3;
        spAB = -1;
        spAC = -1;
        spAD = 7;
        sp6A = 0x22;
        sp5C = 0xDD;
        sp5D = 0xD3;
        sp5E = 0xCD;
        sp5F = 0xFF;
        sp60 = 0x57;
        sp61 = 0x55;
        sp62 = 0x5A;
        sp44 = D_800AA858;
        sp6C = D_800AA85C;
        sp63 = (random_u32() % 156U) + 0x64;
        sp64 = 0xFF;
        sp52 = (random_u32() % 18U) + 0x19;
        temp_f18 = (random_float() * 53.0f) + 49.0f;
        sp74 = temp_f18;
        sp70 = temp_f18;
        temp_f16 = ((*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0))) * (*(s32 *)((char *)(arg5) + 0x74));
        sp90 = temp_f16;
        temp_f10 = ((*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4))) * (*(s32 *)((char *)(arg5) + 0x74));
        sp94 = temp_f10;
        temp_f18_2 = ((*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8))) * (*(s32 *)((char *)(arg5) + 0x74));
        sp98 = temp_f18_2;
        sp78 = (*(s32 *)((char *)(arg0) + 0x0)) - (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x14));
        sp7C = (*(s32 *)((char *)(arg0) + 0x4)) - (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x18));
        sp80 = (*(s32 *)((char *)(arg0) + 0x8)) - (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x1C));
        sp78 += temp_f16 * arg4;
        sp7C += temp_f10 * arg4;
        sp80 += temp_f18_2 * arg4;
        sp38 = (*(s32 *)((char *)(arg5) + 0x1C));
        spAA = 0x13;
        sp3C = (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x3B));
        sp84 = (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x14));
        sp88 = (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x18));
        sp8C = (*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x1C))) + 0x1C));
        temp_v0 = func_15130374(&sp48, 1, 0x10, (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0xA8, &sp44, 4);
            memcpy(temp_v0 + 0xB0, &sp38, 8);
        }
    }
}

f32 func_151BD750(void *arg0) {
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x80));
    (*(s16 *)((char *)(arg0) + 0x80)) = (s16) (temp_v0 + D_800BE9E4);
    return ((f32) temp_v0 * 2.0f * D_800AA860) + D_800AA864;
}

void func_151BD79C(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0xB0));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) != 0) && ((*(s32 *)((char *)(temp_v0) + 0x4)) != 0xFF)) {
        (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x50)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    }
    func_1513170C();
}

void func_151BD7F4(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0(&sp18, 0x3B);
}

void func_151BD828(void *arg0, s32 arg1, s32 arg2) {
    void *sp20C;
    s32 sp208;
    s32 sp204;
    s32 sp200;
    s32 sp1FC;
    u8 sp1F8;
    void *sp1F4;
    s8 sp1EC;
    f32 sp1E8;
    void *sp1E4;
    f32 sp1E0;
    f32 sp1DC;
    f32 sp1D8;
    f32 sp1D4;
    f32 sp1D0;
    f32 sp1CC;
    f32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    u8 sp199;                                       /* compiler-managed */
    u8 sp198;
    void *sp194;
    s32 sp184;
    s8 sp183;
    s8 sp182;
    s8 sp181;
    s8 sp180;
    s32 sp17C;
    f32 sp178;
    f32 sp174;
    f32 sp170;
    void * sp164;
    void * sp158;
    f32 sp154;
    f32 sp150;
    s8 sp14F;
    s8 sp14E;
    s8 sp14D;
    s8 sp14C;
    s32 sp148;
    s32 sp144;
    s16 sp140;
    s16 sp13E;
    s8 sp13D;
    s8 sp13C;
    s8 sp139;
    s8 sp138;
    s8 sp137;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s16 sp132;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    f32 sp128;
    s32 sp124;
    s32 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s8 spD4;
    s32 spD0;
    s8 spCF;
    s8 spCE;
    s8 spCD;
    s8 spCC;
    s32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    void * spB0;
    void * spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s32 sp94;
    s32 sp90;
    s16 sp8C;
    s16 sp8A;
    s8 sp89;
    s8 sp88;
    u8 sp84;
    void *sp80;
    u8 sp7C;                                        /* compiler-managed */
    void *sp78;
    f32 sp74;
    s16 sp70;
    void * *temp_s0;
    s32 temp_s4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s8 temp_t0;
    s8 temp_t1;
    void *temp_v0;

    temp_s4 = arg1 & 0xFF;
    sp1F4 = arg0;
    sp1FC = 0;
    sp200 = 0;
    sp204 = 0;
    sp208 = 0;
    sp1F8 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x12C, -1, 0x40, -1, 0, 0x33, 0x18, temp_s4, arg2);
    temp_s0 = (char *)(temp_v0) + 0x28;
    if (temp_v0 != NULL) {
        sp20C = temp_v0;
        memcpy(temp_s0, &sp1F4, 0x18);
        sp1EC = 0;
        sp194 = arg0;
        sp1E8 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        sp19C = D_800AA868;
        sp1A4 = D_800AA86C;
        sp1AC = D_800AA870;
        sp1A0 = D_800AA874;
        sp198 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp1B8 = 0.0f;
        sp1BC = 0.0f;
        sp1CC = 0.0f;
        sp150 = 0.0f;
        sp154 = 0.0f;
        sp1D0 = 0.0f;
        sp1DC = 1.0f;
        sp1D4 = 1.0f;
        sp1E0 = 1.0f;
        sp1D8 = 1.0f;
        sp13C = 0x5F;
        sp13D = 8;
        sp13E = 0x2203;
        sp140 = 0x12C;
        sp144 = 0;
        sp148 = 0;
        sp14C = 0xFF;
        sp14D = 0xFF;
        sp14E = 0xFF;
        sp14F = 0xFF;
        sp1A8 = D_800AA878;
        sp1B4 = D_800AA87C;
        sp1B0 = D_800AA880;
        sp1C0 = 160.0f;
        sp1C4 = 95.0f;
        sp1C8 = D_800AA884;
        sp1E4 = sp20C;
        (*(s32 *)((char *)&(sp158) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp158) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp158) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp164) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp164) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp164) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp170 = 1.0f;
        sp174 = 1.0f;
        sp178 = 1.0f;
        sp17C = 0x40EC0000;
        sp180 = 0;
        sp181 = 0xFF;
        sp182 = 0;
        sp183 = 7;
        sp184 = 0;
        sp199 = 0;
        do {
            if (random_u32() & 1) {
                var_v0 = 2;
            } else {
                var_v0 = 0;
            }
            (*(s32 *)((char *)(((char *)(temp_s0) + (sp199 * 4))) + 0x8)) = func_1513D2F0(&sp13C, &D_800A4AA0, 0, 0x25, 0, 0x1D, var_v0 + 1, 0, 0, 0x5C, temp_s4, arg2);
            temp_v1 = (*(s32 *)((char *)(((char *)(temp_s0) + (sp199 * 4))) + 0x8));
            if (temp_v1 != 0) {
                memcpy(temp_v1 + 0x110, &sp194, 0x5C);
            }
            temp_t1 = (sp199 + 1) & 0xFF;
            sp199 = temp_t1;
        } while (temp_t1 < 2);
        sp70 = 0;
        sp74 = 1.0f;
        sp80 = arg0;
        sp78 = sp20C;
        sp84 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp104 = -1;
        sp114 = -1;
        sp108 = -1;
        sp118 = -1;
        sp10C = -1;
        sp11C = -1;
        sp110 = -1;
        sp120 = -1;
        sp139 = -1;
        spE0 = D_800AA888;
        spE4 = D_800AA888;
        spE8 = D_800AA88C;
        spEC = D_800AA88C;
        spF0 = D_800AA890;
        spF4 = D_800AA890;
        spF8 = 1.0f;
        sp124 = 0;
        sp128 = 1.0f;
        sp12C = 0;
        sp12E = 0;
        sp130 = 0;
        sp132 = 0;
        sp134 = 0;
        sp135 = 0;
        sp136 = 0;
        sp137 = 0;
        sp138 = 0xF;
        sp88 = 0x60;
        sp89 = 3;
        sp8A = 0x2203;
        sp8C = 0x12C;
        sp90 = 0;
        sp94 = 0;
        sp98 = 0xFF;
        sp99 = 0xFF;
        sp9A = 0xFF;
        sp9B = 0xFF;
        sp9C = 100.0f;
        spA0 = 100.0f;
        spFC = D_800AA894;
        sp100 = D_800AA898;
        (*(s32 *)((char *)&(spA4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(spB0) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        spBC = 1.0f;
        spC0 = 1.0f;
        spC4 = 1.0f;
        spC8 = 0xCD2002;
        spCC = 0xFF;
        spCD = 0xFF;
        spCE = 0;
        spCF = 7;
        spD0 = 0;
        spD4 = 0xFF;
        sp7C = 0;
        do {
            (*(s32 *)((char *)(((char *)(temp_s0) + (sp7C * 4))) + 0x10)) = func_151407D0(&spE0, 0x78, &sp88, 0, 0x2A, 0, 0, -1, temp_s4, arg2);
            temp_v1_2 = (*(s32 *)((char *)(((char *)(temp_s0) + (sp7C * 4))) + 0x10));
            if (temp_v1_2 != 0) {
                memcpy(temp_v1_2 + 0x170, (void **) &sp70, 0x18);
            }
            temp_t0 = (sp7C + 1) & 0xFF;
            sp7C = temp_t0;
        } while (temp_t0 < 2);
    }
}

void func_151BDD8C(void *arg0) {
    void *spA0;
    void * sp94;
    void * sp88;
    void * sp7C;
    void * sp70;
    void * *sp68;
    void * *sp64;
    void * *sp60;
    void * *sp5C;
    void * *sp58;
    void * *sp54;
    void * *sp50;
    void * *sp4C;
    void *sp28;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_t5;
    void *temp_t6;
    void *temp_t7;
    void *temp_t8_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_t3;
    void *var_t4;

    var_t4 = (*(s32 *)((char *)(arg0) + 0x28));
    var_t3 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(var_t4) + 0x0)) == 0) || ((*(s32 *)((char *)(var_t3) + 0x4)) != (*(s32 *)((char *)(var_t4) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    var_a1 = 0;
    if (((*(s32 *)((char *)(var_t4) + 0x1D4)) != 0) && (((*(s32 *)((char *)(var_t4) + 0x74)) & 0xF) != 0xF)) {
        sp5C = &D_800AA778;
        sp60 = &D_800AA784;
        sp64 = &D_800AA790;
        sp68 = &D_800AA79C;
        sp4C = &sp88;
        sp50 = &sp94;
        sp54 = &sp70;
        sp58 = &sp7C;
        spA0 = var_t4;
        sp28 = var_t3;
        func_15145EA4(&sp5C, &sp4C, (*(s32 *)((char *)(var_t4) + 0x1D4)) + 0x40, 4);
        var_t3 = sp28;
        var_t4 = spA0;
        var_a0 = 0;
        do {
            temp_a1 = (char *)(var_t3) + (var_a0 * 4);
            temp_a2 = (*(s32 *)((char *)(temp_a1) + 0x8));
            if (temp_a2 != NULL) {
                temp_lo = var_a0 * 0xC;
                (*(u8 *)((char *)(temp_a2) + 0x168)) = (u8) ((*(u8 *)((char *)(temp_a2) + 0x168)) | 1);
                temp_t7 = &sp88 + temp_lo;
                temp_t5 = &sp70 + temp_lo;
                (*(s32 *)((char *)(temp_a2) + 0x34)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x0));
                (*(s32 *)((char *)(temp_a2) + 0x38)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x4));
                (*(s32 *)((char *)(temp_a2) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x8));
                (*(s32 *)((char *)(temp_a2) + 0x40)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x0));
                (*(s32 *)((char *)(temp_a2) + 0x44)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x4));
                (*(s32 *)((char *)(temp_a2) + 0x48)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x8));
            }
            temp_a2_2 = (*(s32 *)((char *)(temp_a1) + 0x10));
            if (temp_a2_2 != NULL) {
                temp_lo_2 = var_a0 * 0xC;
                temp_t9 = (*(s32 *)((char *)(temp_a2_2) + 0x58)) | 2;
                (*(s32 *)((char *)(temp_a2_2) + 0x58)) = temp_t9;
                (*(s32 *)((char *)(temp_a2_2) + 0x58)) = (s32) (temp_t9 & ~4);
                temp_t8_2 = &sp88 + temp_lo_2;
                temp_t6 = &sp70 + temp_lo_2;
                (*(s32 *)((char *)(temp_a2_2) + 0x34)) = (s32) (*(s32 *)((char *)(temp_t8_2) + 0x0));
                (*(s32 *)((char *)(temp_a2_2) + 0x38)) = (s32) (*(s32 *)((char *)(temp_t8_2) + 0x4));
                (*(s32 *)((char *)(temp_a2_2) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_t8_2) + 0x8));
                (*(s32 *)((char *)(temp_a2_2) + 0x40)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x0));
                (*(s32 *)((char *)(temp_a2_2) + 0x44)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x4));
                (*(s32 *)((char *)(temp_a2_2) + 0x48)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x8));
            }
            temp_t8 = (var_a0 + 1) & 0xFF;
            var_a0 = temp_t8;
        } while (temp_t8 < 2);
    } else {
        do {
            temp_v1 = (char *)(var_t3) + (var_a1 * 4);
            temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x8));
            temp_t9_2 = (var_a1 + 1) & 0xFF;
            if (temp_a0 != 0) {
                temp_v0 = temp_a0 + 0x110;
                (*(u8 *)((char *)(temp_v0) + 0x58)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x58)) & ~1);
            }
            temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x10));
            if (temp_v0_2 != NULL) {
                (*(s32 *)((char *)(temp_v0_2) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x58)) & ~2);
            }
            var_a1 = temp_t9_2;
        } while (temp_t9_2 < 2);
    }
    temp_lo_3 = (s32) ((char *)(var_t4) - (char *)(&gObjects)) / 812;
    var_a0_2 = 0;
    if (temp_lo_3 < 4) {
        do {
            temp_a1_2 = (char *)(var_t3) + (var_a0_2 * 4);
            temp_v1_2 = (*(s32 *)((char *)(temp_a1_2) + 0x8));
            if (temp_v1_2 != 0) {
                temp_v0_3 = temp_v1_2 + 0x110;
                if ((*(s32 *)((*(s32 *)((char *)(D_800BE728) + ((temp_lo_3 & 0xFF) * 4))))) & 0x8000) {
                    (*(s32 *)((char *)(temp_v0_3) + 0x48)) = 6.0f;
                    (*(s32 *)((char *)(temp_v0_3) + 0x4C)) = 21.0f;
                } else {
                    (*(s32 *)((char *)(temp_v0_3) + 0x48)) = 3.0f;
                    (*(s32 *)((char *)(temp_v0_3) + 0x4C)) = 8.0f;
                }
            }
            temp_v1_3 = (*(s32 *)((char *)(temp_a1_2) + 0x10));
            if (temp_v1_3 != 0) {
                temp_v0_4 = temp_v1_3 + 0x170;
                if ((*(s32 *)((*(s32 *)((char *)(D_800BE728) + ((temp_lo_3 & 0xFF) * 4))))) & 0x8000) {
                    (*(s32 *)((char *)(temp_v0_4) + 0x4)) = 1.5f;
                } else {
                    (*(s32 *)((char *)(temp_v0_4) + 0x4)) = 1.0f;
                }
            }
            temp_t7_2 = (var_a0_2 + 1) & 0xFF;
            var_a0_2 = temp_t7_2;
        } while (temp_t7_2 < 2);
    }
}

void func_151BE0AC(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a2_2;

    temp_a2 = (char *)(arg0) + 0x28;
    if (arg2 == 0x3B) {
        temp_a2_2 = (char *)(arg0) + 0x28;
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_a2_2) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_a2_2);
        }
    } else {
        func_15169850(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
    }
}

void func_151BE138(void *arg0) {
    void *sp18;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_v0;

    if ((*(s32 *)((char *)(arg0) + 0x30)) != NULL) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x30)), arg0);
    }
    var_v0 = (char *)(arg0) + 0x28;
    temp_a0 = (*(s32 *)((char *)(var_v0) + 0xC));
    if (temp_a0 != NULL) {
        sp18 = var_v0;
        func_1516972C(temp_a0, arg0);
    }
    temp_a0_2 = (*(s32 *)((char *)(var_v0) + 0x10));
    if (temp_a0_2 != NULL) {
        sp18 = var_v0;
        func_1516972C(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(var_v0) + 0x14));
    if (temp_a0_3 != NULL) {
        func_1516972C(temp_a0_3);
    }
}

void func_151BE1B8(void *arg0) {
    func_151BE138(arg0);
    func_1514933C(arg0);
}

void func_151BE1E4(void *arg0) {
    func_151BE138(arg0);
    func_15149368(arg0);
}

s32 func_151BE210(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_s0;
    void *temp_s0_2;

    (*(f32 *)((char *)(arg0) + 0x134)) = (f32) ((*(f32 *)((char *)(arg0) + 0x134)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x134)) < 0.0f) {
        temp_s0 = (char *)(arg0) + 0x110;
        (*(f32 *)((char *)(temp_s0) + 0x24)) = (f32) (random_float() * 4.0f);
        (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_s0) + 0x10))) + (*(f32 *)((char *)(temp_s0) + 0x8)));
    }
    temp_s0_2 = (char *)(arg0) + 0x110;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 + (((*(f32 *)((char *)(temp_s0_2) + 0x18)) - temp_f0) * D_800AA89C));
    (*(f32 *)((char *)(temp_s0_2) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x28)) - D_800BE9A4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x28)) < 0.0f) {
        (*(f32 *)((char *)(temp_s0_2) + 0x28)) = (f32) (random_float() * 9.0f);
        if (random_u32() & 1) {
            (*(f32 *)((char *)(temp_s0_2) + 0x1C)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_s0_2) + 0x14))) + (*(f32 *)((char *)(temp_s0_2) + 0xC)));
        } else {
            (*(f32 *)((char *)(temp_s0_2) + 0x1C)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_s0_2) + 0x20))) + (*(f32 *)((char *)(temp_s0_2) + 0xC)));
        }
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_s0_2) + 0x1C)) - temp_f0_2) * D_800AA8A0));
    (*(f32 *)((char *)(temp_s0_2) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x38)) - D_800BE9A4);
    if ((*(s32 *)((char *)(temp_s0_2) + 0x38)) < 0.0f) {
        (*(f32 *)((char *)(temp_s0_2) + 0x38)) = (f32) (random_float() * 10.0f);
        (*(f32 *)((char *)(temp_s0_2) + 0x34)) = (f32) ((random_float() * (*(f32 *)((char *)(temp_s0_2) + 0x30))) + (*(f32 *)((char *)(temp_s0_2) + 0x2C)));
    }
    temp_f0_3 = (*(s32 *)((char *)(temp_s0_2) + 0x3C));
    (*(f32 *)((char *)(temp_s0_2) + 0x3C)) = (f32) (temp_f0_3 + (((*(f32 *)((char *)(temp_s0_2) + 0x34)) - temp_f0_3) * D_800AA8A8));
    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) (*(s8 *)((char *)(temp_s0_2) + 0x3C));
    temp_f2 = (*(s32 *)((char *)(temp_s0_2) + 0x40));
    temp_f12 = (*(s32 *)((char *)(temp_s0_2) + 0x44));
    (*(f32 *)((char *)(temp_s0_2) + 0x40)) = (f32) (temp_f2 + (((*(f32 *)((char *)(temp_s0_2) + 0x48)) - temp_f2) * D_800AA8A4));
    (*(f32 *)((char *)(temp_s0_2) + 0x44)) = (f32) (temp_f12 + (((*(f32 *)((char *)(temp_s0_2) + 0x4C)) - temp_f12) * D_800AA8A4));
    return 1;
}

s32 func_151BE4B8(void *arg0, s32 arg1) {
    f32 sp24;
    f32 sp20;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x110));
    if (((*(s32 *)((char *)(arg0) + 0x114)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) || (temp_v0_2 = (char *)(arg0) + 0x110, ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0))) {
        func_1516972C((void *) arg1);
        return 0;
    }
    if (!((*(s32 *)((char *)(temp_v0_2) + 0x58)) & 1)) {
        return 0;
    }
    sp20 = (*(s32 *)((char *)(temp_v0_2) + 0x40)) * (*(s32 *)((char *)(temp_v0_2) + 0x54));
    sp24 = (*(s32 *)((char *)(temp_v0_2) + 0x44)) * (*(s32 *)((char *)(temp_v0_2) + 0x54));
    return func_1513FAB4(0, &sp20, arg1);
}

void func_151BE558(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0xB0;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0xB0));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xB0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xB0)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0xB0))) || ((*(u8 *)((char *)(((char *)(arg0) + 0xB0)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, (void *) temp_t6, arg0);
    }
}

void func_151BE604(void *arg0, void *arg1, s32 arg2) {
    func_15169850(arg1, arg2, (char *)(arg0) + 0x110, (char *)(arg0) + 0x114, arg0);
}

void func_151BE644(void *arg0) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x160)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x50)) + 0x28 + ((*(s32 *)((char *)(temp_v0) + 0x5)) * 4))) + 0x8)) = 0;
    }
}

void func_151BE674(void *arg0) {
    func_151BE644(arg0);
    func_1513CA6C(arg0);
}

void func_151BE6A0(void *arg0) {
    func_151BE644(arg0);
    func_1513CAA0(arg0);
}

s32 func_151BE6CC(f32 *arg0) {
    void *sp;
    void * sp24;
    f32 *temp_v1;
    f32 temp_f0;

    (*(s32 *)((char *)&(sp24) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA7A8) + 0x0));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA7A8) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AA7A8) + 0xC));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA7A8) + 0x8));
    (*(s16 *)((char *)(arg0) + 0x170)) = (s16) ((*(s16 *)((char *)(arg0) + 0x170)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x170)) < 0) {
        (*(s8 *)((char *)(arg0) + 0x18)) = (s8) (*(s8 *)((char *)((char *)(sp) + ((random_u32() & 3) * 4)) + 0x24));
        (*(s16 *)((char *)(arg0) + 0x170)) = (s16) ((random_u32(arg0) & 7) + 3);
    }
    temp_v1 = arg0 + 0x110;
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x48));
    (*(f32 *)((char *)(temp_v1) + 0x48)) = (f32) (temp_f0 + (((*(f32 *)((char *)(arg0) + 0x174)) - temp_f0) * D_800AA8AC));
    return 1;
}

void func_151BE788(void *arg0, void *arg1, s32 arg2) {
    func_15169850(arg1, arg2, (char *)(arg0) + 0x180, (char *)(arg0) + 0x184, arg0);
}

void func_151BE7C8(void *arg0) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x178)) != 0) {
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x8)) + 0x28 + ((*(s32 *)((char *)(temp_v0) + 0xC)) * 4))) + 0x10)) = 0;
    }
}

void func_151BE7F8(void *arg0) {
    func_151BE7C8(arg0);
    func_151411A4(arg0);
}

void func_151BE824(void *arg0) {
    func_151BE7C8(arg0);
    func_151411C4(arg0);
}

s32 func_151BE850(void *arg0, f32 arg1, u8 arg2, u8 arg3, u8 arg4) {
    void *sp;
    s32 spC0;
    s32 spB8;
    void * spAC;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    u8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s16 sp6E;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    u8 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    void * sp50;
    f32 sp44;
    s32 temp_t0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    f32 sp48;
    f32 sp4C;
    func_1510F800(0);
    temp_t0 = func_1510FD20((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    if ((s32) arg4 >= 3) {
        return 0;
    }
    if ((D_800D2E4C->unk19 & 4) || (arg4 == 2)) {
        sp50 = D_800AA8B0;
        sp54 = arg1;
        spA4 = 0;
        spA8 = 0;
        spA9 = 0;
        (*(f32 *)((char *)&(spAC) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        (*(f32 *)((char *)&(spAC) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        (*(f32 *)((char *)&(spAC) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
        sp64 = arg2;
        spC0 = temp_t0;
        func_151436B4(arg1 * D_800AA8DC, 0, arg4, 0x421C0000, &sp44);
        sp58 = (*(s32 *)((char *)(arg0) + 0x0)) + sp44;
        var_v0 = 0;
        sp5C = ((*(s32 *)((char *)(arg0) + 0x4)) + sp48) - 40.0f;
        sp60 = (*(s32 *)((char *)(arg0) + 0x8)) + sp4C;
        spA0 = (*(s32 *)((char *)((char *)(sp) + arg4) + 0x50));
        if (arg3 != 0) {
            var_v0 = 0x10;
        }
        sp68 = var_v0 | 0xE;
        sp69 = 1;
        if (D_800BE9F0 == 7) {
            sp6A = 6;
        } else {
            sp6A = 2;
        }
        sp6C = -1;
        sp6E = 0x12C;
        sp70 = 0xA2;
        sp7C = 0x620405;
        sp74 = 8;
        sp80 = 0x40200;
        sp84 = 0x14;
        sp88 = 0x37;
        sp8C = 0x80;
        sp90 = 0x20;
        sp95 = 8;
        sp98 = 0xFF;
        sp9A = 0xFF;
        sp6B = 0;
        sp78 = 0;
        sp94 = 0;
        sp99 = 0xFF;
        sp9B = 0xFF;
        sp9C = 0xFF;
        sp9D = 0xFF;
        sp9E = 0xFF;
        sp9F = 0xFF;
        spB8 = spC0;
        temp_v0 = func_15157010(&sp68, 0, 0x3F800000, 3, 0xFF, 0x18, 0xFF, 1);
        var_s0 = temp_v0;
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x120, (void **) &sp54, 0x18);
        }
    } else {
        var_s0 = func_151BEEE0(arg1, arg4, arg0, 3U, 0xFF, (s32) arg4, (s32) arg3, temp_t0, 0xFF);
    }
    return var_s0;
}

s32 func_151BEB20(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    func_150A8050((char *)(arg0) + (D_800BE9C0 << 6) + 0x7C, 0.0f, (*(f32 *)((char *)(arg0) + 0x120)), 0.0f);
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xAC)) = (f32) (*(f32 *)((char *)(arg0) + 0x54));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB0)) = (f32) (*(f32 *)((char *)(arg0) + 0x58));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB4)) = (f32) (*(f32 *)((char *)(arg0) + 0x5C));
    temp_v1 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x7C)) * D_800AA8E0);
    temp_v1_2 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_2) + 0x80)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x80)) * D_800AA8E0);
    temp_v1_3 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_3) + 0x84)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x84)) * D_800AA8E0);
    temp_v1_4 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_4) + 0x8C)) = (f32) ((*(f32 *)((char *)(temp_v1_4) + 0x8C)) * D_800AA8E0);
    temp_v1_5 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_5) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_v1_5) + 0x90)) * D_800AA8E0);
    temp_v1_6 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_6) + 0x94)) = (f32) ((*(f32 *)((char *)(temp_v1_6) + 0x94)) * D_800AA8E0);
    temp_v1_7 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_7) + 0x9C)) = (f32) ((*(f32 *)((char *)(temp_v1_7) + 0x9C)) * D_800AA8E0);
    temp_v1_8 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_8) + 0xA0)) = (f32) ((*(f32 *)((char *)(temp_v1_8) + 0xA0)) * D_800AA8E0);
    temp_v1_9 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_9) + 0xA4)) = (f32) ((*(f32 *)((char *)(temp_v1_9) + 0xA4)) * D_800AA8E0);
    return 1;
}

s32 func_151BEC94(s32 arg0, void * arg1, void * arg2, void * arg3, s8 *arg4) {
    *arg4 = 1;
    return arg0;
}

s32 func_151BECB8(void *arg0) {
    f32 sp9C;
    void * sp98;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    void * *var_s3;
    s32 var_s5;
    s32 var_v1;
    u8 temp_v0;
    void *temp_s1;

    f32 sp90;
    f32 sp94;
    var_s5 = 1;
    var_s3 = &gObjects;
    do {
        if (func_151BEE94(var_s3) != 0) {
            temp_s1 = (char *)(arg0) + 0x120;
            func_1515C1A0(var_s3, &sp8C, &sp9C, &sp98);
            sp80 = sp8C - (*(s32 *)((char *)(temp_s1) + 0x4));
            sp84 = sp90 - (*(s32 *)((char *)(temp_s1) + 0x8));
            sp88 = sp94 - (*(s32 *)((char *)(temp_s1) + 0xC));
            if ((func_15143E64(&sp80) - sp9C) < 43.0f) {
                var_s5 = 0;
                func_15085710((*(s32 *)((char *)(var_s3) + 0x127)), 3, (*(s32 *)((char *)(temp_s1) + 0x10)));
                func_10010F30(0x511, 0x7D00, 0x40, 0, 0);
                func_151BF340((*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
                func_151BF0C8((char *)(temp_s1) + 4);
                temp_v0 = (*(s32 *)((char *)(arg0) + 0x48));
                var_v1 = 0;
                switch (temp_v0) {                  /* irregular */
                case 0:
                    break;
                default:
                    var_v1 = 0;
                    if (temp_v0 != 3) {

                    }
                    break;
                case 1:
                    var_v1 = 1;
                    break;
                case 2:
                    var_v1 = 2;
                    break;
                }
                func_151BEEE0((*(s32 *)((char *)(arg0) + 0x120)), (char *)(arg0) + 0x54, (*(s32 *)((char *)(arg0) + 0xFC)), (*(s32 *)((char *)(arg0) + 0x11B)), var_v1, (*(s32 *)((char *)(arg0) + 0x10)) & 0x10, (*(s32 *)((char *)(arg0) + 0x60)), (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
        var_s3 = (char *)(var_s3) + 0x32C;
    } while ((char *)(var_s3) != (char *)(&D_800D1548));
    return var_s5;
}

s32 func_151BEE94(void * *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x127)) == 0xFF) {
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

s32 func_151BEEE0(f32 arg0, void *arg1, void *arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, u8 arg7, s32 arg8) {
    void * spC0;
    s16 spB8;
    s16 spB6;
    s8 spB4;
    s32 spB0;
    s8 spAE;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    u8 sp9C;
    s16 sp9A;
    s16 sp98;
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void * sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    spC0 = D_8008FBC0;
    if ((s32) arg4 >= 3) {
        return 0;
    }
    sp44 = 1.0f;
    sp48 = 1.0f;
    sp50 = D_800AA8E4;
    sp4C = D_800AA8E4;
    sp54 = 0.0f;
    sp58 = arg0;
    sp5C = 0.0f;
    sp60 = 1.0f;
    sp64 = 1.0f;
    sp68 = 1.0f;
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp80 = 0.0f;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp90 = 0.0f;
    if (arg5 != 0) {
        var_v0 = 0x4000;
    } else {
        var_v0 = 0;
    }
    sp94 = var_v0 | 0x1D00 | 0x80000 | 0x40000;
    sp98 = 0x12C;
    sp9A = 0x26;
    spA4 = 0xFF;
    sp9C = *(&spC0 + arg4);
    spA0 = arg6;
    if (D_800BE9F0 == 7) {
        spA5 = 0x18;
    } else {
        spA5 = 0;
    }
    spA6 = 0;
    spA7 = 0;
    spA8 = 0;
    spA9 = 0;
    spAA = 0;
    spAB = 0;
    spAC = 2;
    spAE = 0;
    spB0 = 0;
    spB4 = 0;
    spB6 = 1;
    spB8 = 0xFF;
    temp_v0 = func_15132A4C(D_800AA8E4, arg0, &sp44, arg2, arg3 & 0xFF, 0, (s32) arg7, arg8);
    if (temp_v0 != 0) {
        var_s0 = 0;
        var_s1 = temp_v0 + 0x90;
        do {
            func_15133760(var_s1, temp_v0);
            var_s0 += 0x40;
            var_s1 += 0x40;
        } while (var_s0 != 0x80);
    }
    return temp_v0;
}

void func_151BF0C8(void *arg0) {
    s16 spC4;
    s16 spC2;
    s8 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp8C;
    s32 sp88;
    s32 sp84;
    f32 sp80;
    s8 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s16 sp5C;
    void * sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;
    s8 sp3D;
    s8 sp3C;
    s8 sp3B;
    s8 sp3A;
    s8 sp39;
    s8 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    s32 sp30;
    s32 sp2C;
    s16 sp2A;
    s16 sp28;
    s32 sp24;
    s32 sp20;
    s16 sp1E;
    s8 sp1C;
    s16 sp1A;
    s16 sp18;

    sp84 = 0x18;
    sp88 = 0xA;
    (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    spA0 = 0;
    spA2 = 0xFF;
    spA4 = -0x32;
    spA6 = 0x3C;
    spA8 = 13.0f;
    spAC = 13.0f;
    spC0 = 3;
    spC2 = 0x41;
    spC4 = 0x1E;
    sp98 = D_800AA8E8;
    sp9C = D_800AA8EC;
    spB0 = D_800AA8F0;
    spB4 = D_800AA8F4;
    spB8 = D_800AA8F8;
    spBC = D_800AA8FC;
    func_15150F90(&sp84, 1, 0xFF, 1);
    sp18 = 0x14;
    sp36 = 6;
    sp1A = 8;
    sp1C = 0x6C;
    sp1E = 0x5103;
    sp20 = 0x200005;
    sp28 = 0x28;
    sp2A = 0x28;
    sp37 = 0xFF;
    sp34 = 0xFF;
    sp24 = 0;
    sp2C = 0;
    sp30 = 0;
    sp35 = 0x91;
    sp38 = 0xFF;
    sp39 = 0xFF;
    sp3A = 0;
    sp3B = 0x14;
    sp3C = 0xC8;
    sp3D = 0xFF;
    sp3E = 0x32;
    sp40 = 5;
    sp42 = 0x32;
    sp44 = D_800AA900;
    sp48 = 175.0f;
    sp4C = 160.0f;
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp5C = 0;
    sp5E = -0x33;
    sp60 = 0xFF;
    sp62 = 0x50;
    sp74 = 0x840E07;
    sp78 = 0x10;
    sp79 = -1;
    sp7A = 8;
    sp7B = 6;
    sp7C = 1;
    sp64 = 4.0f;
    sp68 = 13.0f;
    sp6C = D_800AA904;
    sp70 = D_800AA908;
    sp80 = D_800AA90C;
    func_15153634(&sp18, 0xFF, 0xFF, 1);
}

void func_151BF340( s32 arg0, s32 arg1) {
    s32 sp5C[64];
    s8 sp174;
    f32 sp170;
    f32 sp16C;
    void * sp164;
    void *sp160;
    s32 sp154;
    s32 sp150;
    s16 sp14A;
    s16 sp148;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    s8 sp135;
    s8 sp134;
    s32 sp130;
    s8 sp12C;
    s8 sp12B;
    s8 sp12A;
    s8 sp129;
    s8 sp128;
    s8 sp127;
    s8 sp126;
    s8 sp125;
    s8 sp124;
    s8 sp121;
    s8 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    s32 sp100;
    s32 spFC;
    s16 spFA;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    f32 spF0;
    f32 spEC;
    void *spE0;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC8;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s16 sp9C;
    s16 sp9A;
    s16 sp98;
    s16 sp96;
    s8 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * *temp_s5;
    s32 temp_at;
    s32 temp_s6;
    s32 temp_t5;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v1;
    void *temp_t4;
    void *temp_v0_2;

    temp_s6 = arg0 & 0xFF;
    func_151494E0(NULL, 0x57);
    temp_v0 = func_150859AC(0, 3);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        var_v1 = temp_v0 - 1;
    }
    if (var_v1 >= 0x64) {
        var_v1 = 0x63;
    }
    sp150 = var_v1 / 10;
    sp154 = var_v1 % 10;
    sp160 = NULL;
    bzero(&sp164, 8);
    sp16C = 110.0f;
    sp170 = sinf(D_800AA910);
    sp174 = 0;
    temp_v0_2 = func_15149130(0x12C, -1, 0x60, -1, 0, 0x49, 0x18, temp_s6, arg1);
    temp_s5 = (char *)(temp_v0_2) + 0x28;
    if (temp_v0_2 != NULL) {
        memcpy(temp_s5, &sp160, 0x18);
        spFC = 0xA3;
        spF4 = 0xC0;
        spF5 = -1;
        spF6 = 5;
        spF7 = 3;
        sp125 = 0xFF;
        spFA = 0x12C;
        sp100 = 8;
        sp104 = 0x100000;
        sp10C = 0x60601;
        sp121 = 8;
        sp110 = 1;
        sp114 = 0x38;
        sp118 = 0x80;
        sp11C = 0x20;
        sp12C = 0;
        spF8 = 0;
        sp108 = 0x200004;
        sp120 = 0;
        sp124 = 0xFF;
        sp126 = 0xFF;
        sp127 = 0xFF;
        sp128 = 0xFF;
        sp129 = 0xFF;
        sp12A = 0xFF;
        sp12B = 0xFF;
        sp130 = 0;
        sp134 = 0;
        sp135 = 1;
        sp148 = 1;
        sp14A = 0xFF;
        sp138 = 300.0f;
        if (D_800D2458 != 0) {
            sp13C = 32.0f;
        } else {
            sp13C = 79.0f;
        }
        sp140 = 0.0f;
        (*(s32 *)((char *)&(spE0) + 0x0)) = (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spE0) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spE0) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        spEC = D_800AA914;
        spF0 = D_800AA914;
        temp_v0_3 = func_15157010(&spF4, 0, 0x3F800000, 0, 0, 0x14, temp_s6, arg1);
        (*(s32 *)((char *)(temp_v0_2) + 0x28)) = temp_v0_3;
        if (temp_v0_3 != 0) {
            memcpy(temp_v0_3 + 0x120, &spE0, 0x14);
        }
        M2C_MEMCPY_ALIGNED(&sp5C[0], &D_800AA8B4, 0x24);
        sp5C[9] = (s32) (*(s32 *)((char *)&(D_800AA8B4) + 0x24));
        sp84 = -500.0f;
        if (D_800D2458 != 0) {
            sp88 = -15.0f;
        } else {
            sp88 = -62.0f;
        }
        spA3 = 0xFF;
        sp9C = 0xFF;
        sp96 = 0x12C;
        sp98 = 0x20;
        sp9A = 1;
        sp9F = 0xFF;
        spA0 = 0xFF;
        spA1 = 0xFF;
        spA2 = 0xFF;
        sp9E = 0;
        spA4 = 0xFF;
        spA5 = 0xFF;
        spA6 = 0xFF;
        spA7 = 0xFF;
        spA8 = 0;
        spAC = 0x200004;
        spB0 = 0x9F0601;
        spC4 = 0;
        spC5 = 0;
        spB4 = 0x19;
        spB8 = 0x13;
        spBC = 0x80;
        spC0 = 0x20;
        spC8 = 0;
        spD4 = 0.0f;
        spD8 = 0.0f;
        sp90 = 16.0f;
        sp8C = 16.0f;
        spCC = 1.0f;
        spD0 = 1.0f;
        if (sp150 == 0) {
            sp94 = (s8) (&sp5C[0])[sp154];
            (*(s32 *)((char *)(temp_s5) + 0x4)) = func_1515548C(NULL, &sp84, 0, 0, 0, 0, temp_s6, arg1);
            (*(s32 *)((char *)(temp_s5) + 0x8)) = 0;
            return;
        }
        var_s0 = 0;
        do {
            sp94 = (s8) (&sp5C[0])[(&sp150)[var_s0]];
            temp_t5 = (var_s0 + 1) & 0xFF;
            temp_at = temp_t5 < 2;
            temp_t4 = (char *)(temp_s5) + (var_s0 * 4);
            var_s0 = temp_t5;
            (*(s32 *)((char *)(temp_t4) + 0x4)) = func_1515548C(&sp84, NULL, 0, 0, 0, temp_s6, arg1);
        } while (temp_at != 0);
    }
}

void func_151BF81C(void *arg0) {
    void *sp1C;
    f32 temp_f0;
    f32 var_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_v1;

    if ((D_800BEAC1 != 0) || (var_v1 = (char *)(arg0) + 0x28, (D_800BEAC0 != 0))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
        return;
    }
    if (!((*(s32 *)((char *)(var_v1) + 0x14)) & 1)) {
        if (D_800C35EA != 1) {
            sp1C = var_v1;
            if (func_15181CC8(0, arg0) != 0) {
                sp1C = var_v1;
                if ((func_1517EF00(0, arg0) == 0) && (D_800BE9B4 == 0)) {
                    (*(u8 *)((char *)(var_v1) + 0x14)) = (u8) ((*(u8 *)((char *)(var_v1) + 0x14)) | 1);
                    goto block_9;
                }
            }
        }
    } else {
block_9:
        temp_f0 = (*(s32 *)((char *)(var_v1) + 0xC));
        if (temp_f0 < D_800AA918) {
            sp1C = var_v1;
            var_f2 = sinf(temp_f0 * D_800AA91C * D_800AA920);
        } else if (D_800AA924 < temp_f0) {
            sp1C = var_v1;
            var_f2 = sinf((110.0f - temp_f0) * D_800AA928 * D_800AA92C);
        } else {
            var_f2 = (*(s32 *)((char *)(var_v1) + 0x10));
        }
        temp_v0 = (*(s32 *)((char *)(var_v1) + 0x0));
        if (temp_v0 != NULL) {
            (*(f32 *)((char *)(temp_v0) + 0x54)) = (f32) ((var_f2 * -85.0f) + 150.0f);
            if (D_800D2458 != 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x0))) + 0x58)) = 32.0f;
            } else {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x0))) + 0x58)) = 79.0f;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(var_v1) + 0x4));
        if (temp_v0_2 != NULL) {
            (*(f32 *)((char *)(temp_v0_2) + 0x10)) = (f32) (((((var_f2 * -85.0f) + 150.0f) * 1.0f) + 48.0f) - 12.0f);
            if (D_800D2458 != 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x4))) + 0x14)) = -15.0f;
            } else {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x4))) + 0x14)) = -62.0f;
            }
        }
        temp_v0_3 = (*(s32 *)((char *)(var_v1) + 0x8));
        if (temp_v0_3 != NULL) {
            (*(f32 *)((char *)(temp_v0_3) + 0x10)) = (f32) ((((var_f2 * -85.0f) + 150.0f) * 1.0f) + 48.0f + 12.0f);
            if (D_800D2458 != 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x8))) + 0x14)) = -15.0f;
            } else {
                (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x8))) + 0x14)) = -62.0f;
            }
        }
        (*(f32 *)((char *)(var_v1) + 0xC)) = (f32) ((*(f32 *)((char *)(var_v1) + 0xC)) - D_800BE9A4);
        if ((*(s32 *)((char *)(var_v1) + 0xC)) < 0.0f) {
            (*(s32 *)((char *)(arg0) + 0xE)) = -1;
            (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
        }
    }
}

void func_151BFB2C(void *arg0) {
    s32 temp_t9;
    s32 var_s0;
    void *temp_a0;
    void *temp_t6;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x28));
    if (temp_t6 != NULL) {
        func_1516972C(temp_t6, arg0);
    }
    var_s0 = 0;
    do {
        temp_a0 = (*(s32 *)((char *)(((char *)(arg0) + 0x28 + (var_s0 * 4))) + 0x4));
        if (temp_a0 != NULL) {
            func_1516972C(temp_a0);
        }
        temp_t9 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t9;
    } while (temp_t9 < 2);
}

void func_151BFBA4(void *arg0) {
    func_151BFB2C(arg0);
    func_1514933C(arg0);
}

void func_151BFBD0(void *arg0) {
    func_151BFB2C(arg0);
    func_15149368(arg0);
}

void func_151BFBFC(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x57) {
        func_1516972C((void *) temp_t6);
    }
}
