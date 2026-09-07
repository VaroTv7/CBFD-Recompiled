/**
 * Auto-decompiled from asm/126F60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1504715C();                       /* extern */
u32 random_u32();                          /* extern */
f32 random_float();                                /* extern */
void * func_150F4570(); /* extern */
void * func_150FB4C0();                       /* extern */
void * func_150FEC28(); /* extern */
void * func_15110360();           /* extern */
void *func_15110544(); /* extern */
s32 func_15130280();        /* extern */
s32 func_151407D0(); /* extern */
void * func_15143134();                  /* extern */
void * func_1514470C();                          /* extern */
void * func_15145EA4();                /* extern */
void * func_15150178();          /* extern */
void * func_15153F18();          /* extern */
s32 func_1515548C();   /* extern */
s32 func_15157010(); /* extern */
void * func_15157DEC();                             /* extern */
void * func_15157F80();           /* extern */
void * func_1515F170();                              /* extern */
void * func_15160A58(); /* extern */
void * func_151C329C();                      /* extern */
void * func_151D4408(); /* extern */
s32 func_151D710C();              /* extern */
void * func_151D8868();                 /* extern */
void * memcpy();                          /* extern */
extern u8 D_80088B2C;
extern s32 D_80088B30;
extern s32 D_80088B34;
extern s32 D_800A1CC0;
extern s32 D_800A1CCC;
extern s32 D_800A1CD8;
extern s32 D_800A1CE4;
extern s32 D_800A1CF0;
extern s32 D_800A1CFC;
extern s32 D_800A1D20;
extern s32 D_800A1D30;
extern s32 D_800A1D3C;
extern s32 D_800A1D48;
extern s32 D_800A1D54;
extern f32 D_800A1D60;
extern f32 D_800A1D64;
extern f32 D_800A1D68;
extern f32 D_800A1D6C;
extern f32 D_800A1D70;
extern f32 D_800A1D74;
extern f32 D_800A1D78;
extern f32 D_800A1D7C;
extern f32 D_800A1D80;
extern f32 D_800A1D84;
extern f32 D_800A1D88;
extern f32 D_800A1D8C;
extern f32 D_800A1D90;
extern f32 D_800A1D94;
extern f32 D_800A1D98;
extern f32 D_800A1D9C;
extern f32 D_800A1DA0;
extern f32 D_800A1DA4;
extern f32 D_800A1DA8;
extern f32 D_800A1DAC;
extern f32 D_800A1DB0;
extern f32 D_800A1DB4;
extern f32 D_800A1DB8;
extern f32 D_800A1DBC;
extern f32 D_800A1DC0;

void func_150F9AB0(s32 arg0, void * arg1, void * arg2, void * arg3, s32 arg4, s32 arg5, f32 arg6) {
    void * sp38;
    void *temp_v0;
    void *temp_v0_2;

    func_15110360(D_80082FA4, &sp38, arg4, arg5, arg6);
    temp_v0 = D_800BE628 + (D_80082FA4 * 0x180);
    temp_v0_2 = func_15110544(arg0, (s32) (*(s32 *)((char *)(temp_v0) + 0x2C)), (s32) (*(s32 *)((char *)(temp_v0) + 0x24)), (s32) ((*(s32 *)((char *)(temp_v0) + 0x30)) - 1.0f), (s32) (*(s32 *)((char *)(temp_v0) + 0x28)), 0, 0, 0);
    (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0xEF002C0F;
    (*(s32 *)((char *)(temp_v0_2) + 0xC)) = 0x0F0A4004;
    (*(s32 *)((char *)(temp_v0_2) + 0x14)) = -1;
    (*(s32 *)((char *)(temp_v0_2) + 0x10)) = 0xFC357E6A;
    func_150FB4C0((char *)(temp_v0_2) + 0x18, &sp38);
}

void func_150F9BB0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp224;
    s32 sp220;
    s32 sp21C;
    s32 sp218;
    s32 sp214;
    u8 sp210;
    void *sp20C;
    s8 sp204;
    f32 sp200;
    s32 sp1FC;
    f32 sp1F8;
    f32 sp1F4;
    f32 sp1F0;
    f32 sp1EC;
    f32 sp1E8;
    f32 sp1E4;
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
    u8 sp1B1;                                       /* compiler-managed */
    u8 sp1B0;
    void *sp1AC;
    s32 sp19C;
    s8 sp19B;
    s8 sp19A;
    s8 sp199;
    s8 sp198;
    s32 sp194;
    f32 sp190;
    f32 sp18C;
    f32 sp188;
    void * sp17C;
    void * sp170;
    f32 sp16C;
    f32 sp168;
    s8 sp167;
    s8 sp166;
    s8 sp165;
    s8 sp164;
    s32 sp160;
    s32 sp15C;
    s16 sp158;
    s16 sp156;
    s8 sp155;
    s8 sp154;
    s8 sp151;
    s8 sp150;
    s8 sp14F;
    s8 sp14E;
    s8 sp14D;
    s8 sp14C;
    s16 sp14A;
    s16 sp148;
    s16 sp146;
    s16 sp144;
    f32 sp140;
    s32 sp13C;
    s32 sp138;
    s32 sp134;
    s32 sp130;
    s32 sp12C;
    s32 sp128;
    s32 sp124;
    s32 sp120;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    s8 spEC;
    s32 spE8;
    s8 spE7;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    void * spC8;
    void * spBC;
    f32 spB8;
    f32 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA4;
    s16 spA2;
    s8 spA1;
    s8 spA0;
    u8 sp9C;
    void *sp98;
    u8 sp94;                                        /* compiler-managed */
    s32 sp90;
    f32 sp8C;
    s16 sp88;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s16 sp82;
    s8 sp80;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s8 temp_t1;
    s8 temp_t2;

    temp_s4 = arg1 & 0xFF;
    sp20C = arg0;
    sp214 = 0;
    sp218 = 0;
    sp21C = 0;
    sp220 = 0;
    sp210 = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x46, -1, 0x4D, -1, 1, 0x33, 0x18, temp_s4, arg2);
    temp_s0 = temp_v0 + 0x28;
    if (temp_v0 != 0) {
        sp224 = temp_v0;
        memcpy(temp_s0, &sp20C, 0x18);
        sp204 = 0;
        sp1AC = arg0;
        sp200 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        sp1B4 = D_800A1D60;
        sp1BC = D_800A1D64;
        sp1C4 = D_800A1D68;
        sp1B8 = D_800A1D6C;
        sp1B0 = (*(s32 *)((char *)(arg0) + 0x3B));
        sp1D0 = 0.0f;
        sp1D4 = 0.0f;
        sp1E4 = 0.0f;
        sp168 = 0.0f;
        sp16C = 0.0f;
        sp1E8 = 0.0f;
        sp1F4 = 1.0f;
        sp1EC = 1.0f;
        sp1F8 = 1.0f;
        sp1F0 = 1.0f;
        sp154 = 0x5F;
        sp155 = 8;
        sp156 = 0x2203;
        sp158 = 0x12C;
        sp15C = 0;
        sp160 = 0;
        sp164 = 0xFF;
        sp165 = 0xFF;
        sp166 = 0xFF;
        sp167 = 0xFF;
        sp1C0 = D_800A1D70;
        sp1CC = D_800A1D74;
        sp1C8 = D_800A1D78;
        sp1D8 = 160.0f;
        sp1DC = 95.0f;
        sp1E0 = D_800A1D7C;
        sp1FC = sp224;
        (*(s32 *)((char *)&(sp170) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp170) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp170) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp17C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp17C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp17C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp188 = 1.0f;
        sp18C = 1.0f;
        sp190 = 1.0f;
        sp194 = 0x40EC0000;
        sp198 = 0;
        sp199 = 0xFF;
        sp19A = 0;
        sp19B = 7;
        sp19C = 0;
        sp1B1 = 0;
        do {
            if (random_u32() & 1) {
                var_v0 = 2;
            } else {
                var_v0 = 0;
            }
            (*(s32 *)((char *)((temp_s0 + (sp1B1 * 4))) + 0x8)) = func_1513D2F0(&sp154, &D_800A4AA0, 0, 0x25, 0, 0x1D, var_v0 + 1, 0, 0, 0x5C, temp_s4, arg2);
            temp_v1 = (*(s32 *)((char *)((temp_s0 + (sp1B1 * 4))) + 0x8));
            if (temp_v1 != 0) {
                memcpy(temp_v1 + 0x110, &sp1AC, 0x5C);
            }
            temp_t2 = (sp1B1 + 1) & 0xFF;
            sp1B1 = temp_t2;
        } while (temp_t2 < 2);
        sp88 = 0;
        sp8C = 1.0f;
        sp98 = arg0;
        sp90 = sp224;
        sp9C = (*(s32 *)((char *)(arg0) + 0x3B));
        sp11C = -1;
        sp12C = -1;
        sp120 = -1;
        sp130 = -1;
        sp124 = -1;
        sp134 = -1;
        sp128 = -1;
        sp138 = -1;
        sp151 = -1;
        spF8 = D_800A1D80;
        spFC = D_800A1D80;
        sp100 = D_800A1D84;
        sp104 = D_800A1D84;
        sp108 = D_800A1D88;
        sp10C = D_800A1D88;
        sp110 = 1.0f;
        sp13C = 0;
        sp140 = 1.0f;
        sp144 = 0;
        sp146 = 0;
        sp148 = 0;
        sp14A = 0;
        sp14C = 0;
        sp14D = 0;
        sp14E = 0;
        sp14F = 0;
        sp150 = 0xF;
        spA0 = 0x60;
        spA1 = 3;
        spA2 = 0x2203;
        spA4 = 0x12C;
        spA8 = 0;
        spAC = 0;
        spB0 = 0xFF;
        spB1 = 0xFF;
        spB2 = 0xFF;
        spB3 = 0xFF;
        spB4 = 100.0f;
        spB8 = 100.0f;
        sp114 = D_800A1D8C;
        sp118 = D_800A1D90;
        (*(s32 *)((char *)&(spBC) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(spC8) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        spD4 = 1.0f;
        spD8 = 1.0f;
        spDC = 1.0f;
        spE0 = 0xCD2002;
        spE4 = 0xFF;
        spE5 = 0xFF;
        spE6 = 0;
        spE7 = 7;
        spE8 = 0;
        spEC = 0xFF;
        sp94 = 0;
        do {
            (*(s32 *)((char *)((temp_s0 + (sp94 * 4))) + 0x10)) = func_151407D0(&spF8, 0x78, &spA0, 0, 0x2A, 0, 0, -1, temp_s4, arg2);
            temp_v1_2 = (*(s32 *)((char *)((temp_s0 + (sp94 * 4))) + 0x10));
            if (temp_v1_2 != 0) {
                memcpy(temp_v1_2 + 0x170, (void **) &sp88, 0x18);
            }
            temp_t1 = (sp94 + 1) & 0xFF;
            sp94 = temp_t1;
        } while (temp_t1 < 2);
    }
    sp80 = 1;
    sp82 = 0x46;
    sp85 = 1;
    sp84 = 8;
    sp86 = -1;
    func_151D8868(&sp80, 0, temp_s4 & 0xFF, arg2);
    func_15160A58(arg0, 1, &D_800A1CC0, 3, 0x46, 0x28, 0xFF, 0xFF, 0xFF, 0xFF, 0, -1, 0, 0, temp_s4, arg2);
}

void func_150FA1B8(void *arg0) {
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
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8_2;
    s32 temp_t8_4;
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
    void *temp_t5_2;
    void *temp_t8;
    void *temp_t8_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *var_t3;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    var_t3 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(var_t3) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    var_a1 = 0;
    if ((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0) {
        sp5C = &D_800A1CCC;
        sp60 = &D_800A1CD8;
        sp64 = &D_800A1CE4;
        sp68 = &D_800A1CF0;
        sp4C = &sp88;
        sp50 = &sp94;
        sp54 = &sp70;
        sp58 = &sp7C;
        sp28 = var_t3;
        func_15145EA4(&sp5C, &sp4C, (*(s32 *)((char *)(temp_v0) + 0x1D4)) + 0x40, 4);
        var_t3 = sp28;
        var_a0 = 0;
        do {
            temp_a1 = (char *)(var_t3) + (var_a0 * 4);
            temp_a2 = (*(s32 *)((char *)(temp_a1) + 0x8));
            if (temp_a2 != NULL) {
                temp_lo = var_a0 * 0xC;
                (*(u8 *)((char *)(temp_a2) + 0x168)) = (u8) ((*(u8 *)((char *)(temp_a2) + 0x168)) | 1);
                temp_t8 = &sp88 + temp_lo;
                temp_t5 = &sp70 + temp_lo;
                (*(s32 *)((char *)(temp_a2) + 0x34)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x0));
                (*(s32 *)((char *)(temp_a2) + 0x38)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x4));
                (*(s32 *)((char *)(temp_a2) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_t8) + 0x8));
                (*(s32 *)((char *)(temp_a2) + 0x40)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x0));
                (*(s32 *)((char *)(temp_a2) + 0x44)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x4));
                (*(s32 *)((char *)(temp_a2) + 0x48)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x8));
            }
            temp_a2_2 = (*(s32 *)((char *)(temp_a1) + 0x10));
            if (temp_a2_2 != NULL) {
                temp_lo_2 = var_a0 * 0xC;
                temp_t8_2 = (*(s32 *)((char *)(temp_a2_2) + 0x58)) | 2;
                (*(s32 *)((char *)(temp_a2_2) + 0x58)) = temp_t8_2;
                (*(s32 *)((char *)(temp_a2_2) + 0x58)) = (s32) (temp_t8_2 & ~4);
                temp_t5_2 = &sp88 + temp_lo_2;
                temp_t8_3 = &sp70 + temp_lo_2;
                (*(s32 *)((char *)(temp_a2_2) + 0x34)) = (s32) (*(s32 *)((char *)(temp_t5_2) + 0x0));
                (*(s32 *)((char *)(temp_a2_2) + 0x38)) = (s32) (*(s32 *)((char *)(temp_t5_2) + 0x4));
                (*(s32 *)((char *)(temp_a2_2) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_t5_2) + 0x8));
                (*(s32 *)((char *)(temp_a2_2) + 0x40)) = (s32) (*(s32 *)((char *)(temp_t8_3) + 0x0));
                (*(s32 *)((char *)(temp_a2_2) + 0x44)) = (s32) (*(s32 *)((char *)(temp_t8_3) + 0x4));
                (*(s32 *)((char *)(temp_a2_2) + 0x48)) = (s32) (*(s32 *)((char *)(temp_t8_3) + 0x8));
            }
            temp_t7 = (var_a0 + 1) & 0xFF;
            var_a0 = temp_t7;
        } while (temp_t7 < 2);
    } else {
        do {
            temp_v1 = (char *)(var_t3) + (var_a1 * 4);
            temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x8));
            temp_t7_2 = (var_a1 + 1) & 0xFF;
            if (temp_a0 != 0) {
                temp_v0_2 = temp_a0 + 0x110;
                (*(u8 *)((char *)(temp_v0_2) + 0x58)) = (u8) ((*(u8 *)((char *)(temp_v0_2) + 0x58)) & ~1);
            }
            temp_v0_3 = (*(s32 *)((char *)(temp_v1) + 0x10));
            if (temp_v0_3 != NULL) {
                (*(s32 *)((char *)(temp_v0_3) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x58)) & ~2);
            }
            var_a1 = temp_t7_2;
        } while (temp_t7_2 < 2);
    }
    var_a0_2 = 0;
    do {
        temp_a1_2 = (char *)(var_t3) + (var_a0_2 * 4);
        temp_v1_2 = (*(s32 *)((char *)(temp_a1_2) + 0x8));
        temp_t8_4 = (var_a0_2 + 1) & 0xFF;
        if (temp_v1_2 != 0) {
            temp_v0_4 = temp_v1_2 + 0x110;
            if ((*(s32 *)((char *)(arg0) + 0xE)) < 0xA) {
                (*(s32 *)((char *)(temp_v0_4) + 0x48)) = 0.0f;
                (*(s32 *)((char *)(temp_v0_4) + 0x4C)) = 0.0f;
            } else {
                (*(s32 *)((char *)(temp_v0_4) + 0x48)) = 6.0f;
                (*(s32 *)((char *)(temp_v0_4) + 0x4C)) = 15.0f;
            }
        }
        temp_v1_3 = (*(s32 *)((char *)(temp_a1_2) + 0x10));
        if (temp_v1_3 != 0) {
            temp_v0_5 = temp_v1_3 + 0x170;
            if ((*(s32 *)((char *)(arg0) + 0xE)) < 0xA) {
                (*(s32 *)((char *)(temp_v0_5) + 0x4)) = 0.0f;
            } else {
                (*(f32 *)((char *)(temp_v0_5) + 0x4)) = (f32) D_800A1D94;
            }
        }
        var_a0_2 = temp_t8_4;
    } while (temp_t8_4 < 2);
}

void func_150FA468(void *arg0, void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x4C) {
        (*(s32 *)((char *)(arg0) + 0x11)) = -1;
        func_1515D4D4(0, 0, 0, 0xFF);
        return;
    }
    if (temp_t6 == 0x4D) {
        (*(s32 *)((char *)(arg0) + 0x11)) = 0x1E;
        return;
    }
    if (temp_t6 == 0x4E) {
        (*(s32 *)((char *)(arg0) + 0x11)) = -1;
        return;
    }
    if (temp_t6 == 0x4F) {
        (*(s32 *)((char *)(arg0) + 0x11)) = -1;
        func_1515D4D4(0xFF, 0xFF, 0xFF, 0xFF);
    }
}

void func_150FA520(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void * sp16C;
    void * sp148;
    s32 sp144;
    s16 sp142;
    s16 sp140;
    f32 sp13C;
    s8 sp138;
    s16 sp136;
    s16 sp134;
    s16 sp132;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    s16 sp12A;
    s16 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    void * sp104;
    s16 sp102;
    s16 sp100;
    s16 spFE;
    s16 spFC;
    f32 spF8;
    s8 spF4;
    f32 spF0;
    s8 spED;
    s8 spEC;
    f32 spE8;
    f32 spE4;
    s8 spE1;
    s8 spE0;
    f32 spDC;
    f32 spD8;
    s16 spD6;
    s16 spD4;
    f32 spD0;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    void * spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    void * sp8C;
    void * sp80;
    void * sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s16 sp66;
    s16 sp64;
    s16 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s32 sp48;
    s32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    void *sp30;
    s32 sp24;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v0 != 0) {
        func_15143134((arg1 * 0xC) + &D_800A1CFC, &sp16C, temp_v0 + 0x140);
        func_1504715C(&sp148, arg0);
        (*(s32 *)((char *)&(sp104) + 0x0)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x0));
        (*(s32 *)((char *)&(sp104) + 0x4)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x4));
        (*(s32 *)((char *)&(sp104) + 0x8)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x8));
        sp102 = 0x32;
        sp110 = 4.0f;
        sp128 = 9;
        sp12A = 6;
        spFE = 0xFF;
        sp100 = -0x28;
        spFC = 0;
        sp12C = 3;
        sp12E = 1;
        sp130 = 0x1E;
        sp132 = 0x32;
        sp134 = 0x64;
        sp136 = 0x64;
        sp140 = 0x10;
        sp142 = 0xF;
        sp144 = 0;
        sp138 = 1;
        sp114 = D_800A1D98;
        sp118 = D_800A1D9C;
        sp11C = D_800A1DA0;
        sp120 = 12.0f;
        sp124 = D_800A1DA4;
        sp13C = 1.0f;
        func_15153F18(&spFC, &sp104, &sp148, arg2, arg3);
        (*(s32 *)((char *)&(spBC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x0));
        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x4));
        (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x8));
        spCC = 8.0f;
        spB6 = 0xFF;
        spD0 = 10.0f;
        spC8 = 7;
        spCA = 6;
        spB4 = 0;
        spB8 = -0x3F;
        spBA = 0x18;
        spD4 = 0x23;
        spD6 = 0xB;
        spE0 = 0x64;
        spE1 = 0x64;
        spEC = 1;
        spED = 1;
        spF4 = 1;
        spD8 = D_800A1DA8;
        spDC = D_800A1DAC;
        spE4 = 123.0f;
        spE8 = 104.0f;
        spF0 = 1.0f;
        spF8 = D_800A1DB0;
        func_15150178(&spB4, &spBC, &sp148, arg2, arg3);
        sp30 = NULL;
        sp38 = D_800A1DB4;
        temp_f14 = (random_float() * 3.0f) + 10.0f;
        sp34 = temp_f14;
        temp_f2 = (random_float() * 100.0f) + 100.0f;
        sp40 = temp_f2 / (temp_f14 * temp_f14);
        sp5F = (s8) (u32) temp_f2;
        sp61 = 0x79;
        sp44 = 0x200005;
        sp4C = 0x4403;
        sp48 = 0;
        sp50 = 0;
        sp54 = 0;
        sp5C = 0xDC;
        sp5D = 0xDC;
        sp5E = 0xFF;
        sp5B = 0xFF;
        sp58 = 0xFF;
        sp59 = 0xFF;
        sp5A = 0xFF;
        sp60 = 0xFF;
        (*(s32 *)((char *)&(sp74) + 0x0)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x0));
        (*(s32 *)((char *)&(sp74) + 0x4)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x4));
        (*(s32 *)((char *)&(sp74) + 0x8)) = (s32) (*(s32 *)((char *)&(sp16C) + 0x8));
        (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp62 = 1;
        sp64 = 0xFF;
        sp66 = 1;
        sp3C = temp_f2;
        sp68 = 1.0f;
        var_v1 = 0;
        if (random_u32(0x42C80000, temp_f14) & 1) {
            var_v1 = 0x40;
        }
        sp24 = var_v1;
        if (random_u32() & 1) {
            var_v0 = 0x80;
        } else {
            var_v0 = 0;
        }
        sp9C = var_v0 | 0x4C000 | var_v1;
        spA4 = 6;
        spA5 = 6;
        spA6 = 0x27;
        spA7 = -1;
        spA8 = -1;
        spA9 = 0;
        spA0 = 0;
        spAA = 0xFF;
        (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp4E = 0x12C;
        sp6C = 0.0f;
        sp70 = 0.0f;
        sp98 = 0.0f;
        temp_v0_2 = func_15130280(&sp44, 1, 0, 0x14, (s32) arg2, arg3);
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0xA8, &sp30, 0x14);
        }
        func_151C329C(&sp16C, arg2, arg3);
    }
}

void func_150FAA40( s32 arg0, s32 arg1) {
    f32 sp44;
    s32 sp40;
    void *sp3C;
    s32 temp_v0;

    if (D_80088B60 == 0) {
        sp3C = D_800D3098 + 0x71C;
        sp40 = D_800D3098 + 0x6E8;
        sp44 = 0.0f;
        temp_v0 = func_15149130(0x12C, -1, 0x57, -1, 0, 0x46, 0xC, (s32) arg0, arg1);
        if (temp_v0 != 0) {
            D_80088B60 = 1;
        }
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp3C, 0xC);
        }
    }
}

void func_150FAAEC(void *arg0) {
    void * spA0;
    void * sp94;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_800A1DB8 + (random_float() * D_800A1DBC)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
        do {
            func_1514470C((*(s32 *)((char *)(arg0) + 0x28)), &spA0);
            func_1514470C((*(s32 *)((char *)(temp_s1) + 0x4)), &sp94);
            temp_s0 = (random_u32() % (u8) D_80088B2C) & 0xFF;
            temp_f20 = (random_float() * 25.0f) + 30.0f;
            temp_f22 = random_float();
            func_150F4570(&spA0, &sp94, (*(s32 *)((char *)((D_80088B30 + (temp_s0 * 2))) + 0x1)), temp_f20, 1.0f / temp_f20, ((temp_f22 * 1.0f) + 1.0f) * (*(s32 *)((char *)(D_80088B34) + (temp_s0 * 4))), 1, (random_u32() % 3U) + 0x2EE, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
    }
}

void func_150FACE4(void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0x4E) || (temp_t6 == 0x4F)) {
        func_1516972C(temp_t6);
    }
}

void func_150FAD28(void) {
    func_1515F170(8, 0);
    func_1515F170(0xB, 1);
    func_151494E0(D_800D3098 + 0x514, 0x30);
    func_151494E0(0, 0x4D);
}

void func_150FAD78(void) {
    func_1515F170(8, 1);
    func_1515F170(7, 0);
    func_151494E0(D_800D3098 + 0x514, 0x31);
    func_151494E0(0, 0x4C);
}

void func_150FADC8(void *arg0, void * arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x53) {
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 2);
        return;
    }
    if (temp_t6 == 0x54) {
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
    }
}

void func_150FAE18( s32 arg0, s32 arg1, s32 arg2) {
    s16 sp11C;
    s16 sp11A;
    s16 sp118;
    void * sp108;
    s32 sp54[64];
    s8 sp105;
    s8 sp104;
    s32 sp100;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
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
    s16 spCA;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s8 spAC;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s8 sp83;
    s8 sp82;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s8 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 var_f8;
    s32 temp_s4;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    temp_s4 = arg1 & 0xFF;
    sp11C = arg0;
    spC4 = 0x61;
    spC5 = 3;
    spC7 = 2;
    spC6 = 4;
    spCC = 0xA5;
    spD0 = 0x17;
    spD8 = 0x200405;
    spDC = 0x60200;
    spF1 = 8;
    spE0 = 1;
    spE4 = 0x38;
    spE8 = 0x80;
    spF4 = 0xFF;
    spFC = 0;
    spC8 = 0;
    spCA = arg0;
    spD4 = 0;
    spF0 = 0;
    spEC = 0x20;
    spF5 = 0xFF;
    spF6 = 0xFF;
    spF7 = 0xFF;
    spF8 = 0xFF;
    spF9 = 0xFF;
    spFA = 0xFF;
    spFB = 0xFF;
    sp100 = 0;
    sp104 = 0;
    sp105 = 1;
    (*(s32 *)((char *)&(sp108) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp108) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp108) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp118 = 0xA;
    sp11A = 0x19;
    temp_v0 = func_15157010(&spC4, 0, 0x3F800000, 0, 0, 2, temp_s4, arg2);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x120, (void **) &sp11C, 2);
    }
    sp54[0] = (s32) (*(s32 *)((char *)&(D_800A1D20) + 0x0));
    sp54[1] = (s32) (*(s32 *)((char *)&(D_800A1D20) + 0x4));
    sp54[2] = (s32) (*(s32 *)((char *)&(D_800A1D20) + 0x8));
    sp54[3] = (s32) (*(s32 *)((char *)&(D_800A1D20) + 0xC));
    sp80 = 0x19;
    sp83 = 0xFF;
    sp7C = 0x29;
    sp7E = 0xA;
    sp84 = 0xFF;
    sp85 = 0xFF;
    sp86 = 0xFF;
    sp87 = 0xFF;
    sp88 = 0xFF;
    sp7A = arg0;
    sp70 = 16.0f;
    sp74 = 16.0f;
    sp82 = 0;
    sp89 = 0xFF;
    sp8A = 0xFF;
    sp8B = 0xFF;
    sp8C = 0;
    sp90 = 0x200405;
    sp94 = 0x60200;
    spA8 = 0;
    spA9 = 7;
    sp98 = 0x19;
    sp9C = 0x22;
    spA0 = 0x80;
    spA4 = 0x20;
    spAC = 0;
    spB0 = 1.0f;
    spB4 = 1.0f;
    spB8 = 0.0f;
    spBC = 0.0f;
    var_s0 = 0;
    sp6C = 62.0f;
    do {
        var_f8 = (f32) var_s0;
        if (var_s0 < 0) {
            var_f8 += 4294967296.0f;
        }
        sp68 = (var_f8 * 24.75f) + -65.0f;
        sp78 = (s8) (&sp54[0])[var_s0];
        temp_v0_2 = func_1515548C(&sp68, 0xE, 0, 0, 2, temp_s4, arg2);
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0x70, (void **) &sp11C, 2);
        }
        temp_t3 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t3;
    } while (temp_t3 < 8);
}

s32 func_150FB188(void *arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    (*(s32 *)((char *)(arg0) + 0x5C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x54)) = -95.0f;
    (*(s32 *)((char *)(arg0) + 0x58)) = -80.0f;
    sp1C = 0.0f;
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = D_800A1DC0;
    sp2C = D_800A1DC0;
    func_15157DEC(&sp1C);
    return 1;
}

void func_150FB1E8(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_15157F80(func_151D710C(arg1, arg2, arg3, arg4), arg1, arg2, arg3, arg4);
}

void func_150FB240(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg2 - arg3) < arg1) {
        *arg0 = (arg2 - arg1) * arg4;
        return;
    }
    *arg0 = 0xFF;
}

s32 func_150FB29C(void *arg0) {
    func_150FB240((char *)(arg0) + 0x43, (*(s16 *)((char *)(arg0) + 0x16)), (*(s16 *)((char *)(arg0) + 0x120)), (*(s16 *)((char *)(arg0) + 0x64)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x66)));
    return 1;
}

s32 func_150FB2E0(void *arg0) {
    func_150FB240((char *)(arg0) + 0x2E, (*(s16 *)((char *)(arg0) + 0x22)), (*(s16 *)((char *)(arg0) + 0x70)), (*(s16 *)((char *)(arg0) + 0x26)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x28)));
    return 1;
}

void func_150FB324(void *arg0, s32 arg1, s32 arg2) {
    void * sp94;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s32 sp78;
    void * sp68;
    void * sp5C;
    void * sp50;
    void * sp44;
    void * *sp40;
    void * *sp3C;
    void * *sp38;
    f32 *sp34;
    f32 *sp30;
    void * *sp2C;
    s32 temp_a2;

    f32 sp8C;
    f32 sp90;
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A1D30) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A1D30) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A1D30) + 0x8));
    (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A1D3C) + 0x0));
    (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A1D3C) + 0x4));
    (*(s32 *)((char *)&(sp5C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A1D3C) + 0x8));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A1D48) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A1D48) + 0x4));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A1D48) + 0x8));
    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A1D54) + 0x0));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A1D54) + 0x4));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A1D54) + 0x8));
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp38 = &sp68;
        sp3C = &sp50;
        sp40 = &sp44;
        sp2C = &sp94;
        sp30 = &sp88;
        sp34 = &sp7C;
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x380;
        sp78 = temp_a2;
        func_15145EA4(&sp38, &sp2C, temp_a2, 3);
        sp7C -= sp88;
        sp80 -= sp8C;
        sp84 -= sp90;
        func_150FEC28(arg0, 0xE, &sp68, &sp5C, &sp94, (s32) arg1, arg2);
        func_151D4408(&sp88, &sp7C, sp78, arg0, 1.0f, (s32) arg1, arg2);
    }
}
