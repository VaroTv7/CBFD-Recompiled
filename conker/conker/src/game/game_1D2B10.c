/**
 * Auto-decompiled from asm/1D2B10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000FD38();            /* extern */
s32 func_15046C80();           /* extern */
void * func_1505D024();               /* extern */
u32 random_u32();                          /* extern */
f32 random_float();                                /* extern */
void * func_15130280();          /* extern */
void * func_15143794();                /* extern */
void * func_15143874();            /* extern */
f32 func_15144528();                       /* extern */
s32 func_151464B8();                             /* extern */
void * func_15149550();          /* extern */
void * func_151541B8(); /* extern */
s32 func_1516284C(); /* extern */
void * func_151A6F00();                /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D5334();     /* extern */
void * func_151D5514();                   /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                       /* extern */
void func_151A5D2C();
void func_151A6068();
void *func_151A6BD8();                      /* static */
extern f32 D_800A8D80;
extern f32 D_800A8D84;
extern f32 D_800A8D88;
extern f32 D_800A8D8C;
extern f32 D_800A8D90;
extern f32 D_800A8D94;
extern f32 D_800A8D98;
extern f32 D_800A8D9C;
extern f32 D_800A8DA0;
extern f32 D_800A8DA4;
extern f32 D_800A8DA8;
extern f32 D_800A8DAC;
extern f32 D_800A8DB0;
extern s32 D_800DCE50;

void func_151A5660(void *arg0) {
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    s8 spF0;
    s32 spEC;
    s8 spEB;
    s8 spEA;
    s8 spE9;
    s8 spE8;
    s16 spE6;
    s8 spE5;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s16 spE0;
    s16 spDE;
    s16 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f14;
    f32 var_f20;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a1;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_t3;
    s32 temp_t6;
    u32 temp_v0_6;
    u32 temp_v0_9;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_7;
    void *temp_v0_8;

    temp_s0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x28)) == NULL) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14)) != 1) && ((temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x6C)), (temp_a0 == 0)) || (func_151464B8(temp_a0) == 0))) {
        (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) + ((*(f32 *)((char *)(temp_s0) + 0x8)) * (*(f32 *)((char *)(temp_s0) + 0x4)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s0) + 0xC)) > 1.0f) {
            spDC = 0x6231;
            spDE = 0x1A4D;
            spE2 = 0;
            spE3 = 0;
            spE4 = 0;
            spE5 = 0xFF;
            spE6 = 1;
            spE9 = 0xFF;
            spEC = 0;
            spEA = 0;
            spEB = 0;
            spF0 = 0x10;
            spF8 = (*(s32 *)((char *)(temp_s0) + 0x10));
            do {
                temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
                temp_t6 = (*(s32 *)((char *)(temp_v0) + 0x15)) & 3;
                switch (temp_t6) {                  /* irregular */
                default:
                    spBC = (f32) (*(f32 *)((char *)(temp_v0) + 0x0));
                    spC4 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4));
                    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_v1 = (*(s32 *)((char *)(temp_v0_2) + 0x2));
                    temp_a0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    var_f20 = (f32) (temp_v1 - temp_a0_2);
                    var_f14 = (f32) (temp_v1 + temp_a0_2);
                    break;
                case 2:
                    temp_t3 = (u32) ((*(u32 *)((char *)(temp_v0) + 0x10)) * D_800A8D80) & 0xFF;
                    temp_f22 = func_151423D8((temp_t3 - 0x40) & 0xFF);
                    temp_f24 = func_151423D8(temp_t3 & 0xFF);
                    temp_v0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x6));
                    temp_f26 = (random_float() * (2.0f * (f32) temp_v0_3)) + (f32) -temp_v0_3;
                    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_a1 = (*(s32 *)((char *)(temp_v0_4) + 0xA));
                    temp_f2 = (random_float() * (2.0f * (f32) temp_a1)) + (f32) -temp_a1;
                    spBC = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x0)) + ((temp_f26 * temp_f24) + (temp_f2 * temp_f22));
                    spC4 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4)) + ((temp_f2 * temp_f24) - (temp_f26 * temp_f22));
                    temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_v1_2 = (*(s32 *)((char *)(temp_v0_5) + 0x2));
                    temp_a0_3 = (*(s32 *)((char *)(temp_v0_5) + 0x8));
                    var_f14 = (f32) (temp_v1_2 + temp_a0_3);
                    var_f20 = (f32) (temp_v1_2 - temp_a0_3);
                    break;
                case 0:
                    temp_v0_6 = random_u32();
                    temp_f22_2 = func_151423D8((temp_v0_6 - 0x40) & 0xFF);
                    temp_f24_2 = func_151423D8(temp_v0_6 & 0xFF & 0xFF);
                    temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_f2_2 = random_float() * (f32) (*(f32 *)((char *)(temp_v0_7) + 0x6));
                    spBC = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x0)) + (temp_f2_2 * temp_f24_2);
                    spC4 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4)) - (temp_f2_2 * temp_f22_2);
                    temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_v1_3 = (*(s32 *)((char *)(temp_v0_8) + 0x2));
                    var_f20 = (f32) temp_v1_3;
                    var_f14 = (f32) (temp_v1_3 + (*(f32 *)((char *)(temp_v0_8) + 0x8)));
                    break;
                case 1:
                    temp_v0_9 = random_u32();
                    temp_f22_3 = func_151423D8((temp_v0_9 - 0x40) & 0xFF);
                    temp_f24_3 = func_151423D8(temp_v0_9 & 0xFF & 0xFF);
                    temp_v0_10 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_f2_3 = random_float() * (f32) (*(f32 *)((char *)(temp_v0_10) + 0x6));
                    spBC = (f32) (*(f32 *)((char *)(temp_v0_10) + 0x0)) + (temp_f2_3 * temp_f24_3);
                    spC4 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4)) - (temp_f2_3 * temp_f22_3);
                    temp_v0_11 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_v1_4 = (*(s32 *)((char *)(temp_v0_11) + 0x2));
                    temp_a0_4 = (*(s32 *)((char *)(temp_v0_11) + 0x8));
                    var_f14 = (f32) (temp_v1_4 + temp_a0_4);
                    var_f20 = (f32) (temp_v1_4 - temp_a0_4);
                    break;
                }
                if ((*(s32 *)((char *)(temp_s0) + 0x40)) != 0) {
                    sp6C = spBC;
                    sp70 = var_f14;
                    sp74 = spC4;
                    if (func_15046C80(&sp6C, 0, var_f20, (char *)(temp_s0) + 0x48) != 0) {
                        spC0 = (*(s32 *)((char *)(temp_s0) + 0x48));
                    } else {
                        spC0 = var_f20;
                    }
                } else {
                    spC0 = var_f20;
                }
                temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x18))) + (*(s32 *)((char *)(temp_s0) + 0x14));
                temp_f2_4 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x20))) + (*(s32 *)((char *)(temp_s0) + 0x1C));
                temp_f18 = D_800A8D8C * temp_f2_4;
                spC8 = D_800A8D84 * temp_f20;
                spD0 = D_800A8D88 * temp_f20;
                spCC = temp_f18;
                spD4 = D_800A8D90 * temp_f2_4;
                spD8 = D_800A8D94 * temp_f2_4;
                spE0 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x26)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x24));
                spF4 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x2C))) + (*(s32 *)((char *)(temp_s0) + 0x28));
                spFC = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x34))) + (*(s32 *)((char *)(temp_s0) + 0x30));
                sp100 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x3C))) + (*(s32 *)((char *)(temp_s0) + 0x38));
                spE8 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x42)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x41));
                func_15149550(&spBC, 0xA, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0xC)) > 1.0f);
        }
    }
}

void func_151A5CAC(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x6C)) != 0) {
        func_151A5D2C((*(s32 *)((char *)(arg0) + 0x6C)), arg0);
    }
    func_1514933C(arg0, arg0);
}

void func_151A5CEC(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x6C)) != 0) {
        func_151A5D2C((*(s32 *)((char *)(arg0) + 0x6C)), arg0);
    }
    func_15149368(arg0, arg0);
}

void func_151A5D2C( s32 arg0) {
    func_100111C8(arg0 & 0xFFFF);
}

s32 func_151A5D58(f32 arg0, u8 arg1, s32 arg2, void *arg3, s16 arg4, u8 arg5, u8 arg6, u8 arg7, s32 arg8) {
    s16 sp80;
    s16 sp7E;
    s8 sp7C;
    s32 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    u8 sp6C;
    s32 sp68;
    s32 sp64;
    s8 sp63;
    s8 sp62;
    s16 sp60;
    s32 sp5C;
    u32 sp4C;
    u32 sp48;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_t0;

    if (arg4 <= 0) {
        return 0;
    }
    sp7E = 0x14;
    sp80 = 0xC;
    sp62 = 0x38;
    sp63 = 0;
    if (arg4 == -1) {
        var_v1_2 = 0;
    } else {
        var_v1_2 = 1;
    }
    var_v0_2 = 0;
    if (arg5 != 0) {
        var_v0_2 = 0x400;
    }
    sp5C = var_v0_2 | var_v1_2 | 0x1300 | 0x2000 | 0x8000 | 0x20000;
    if (arg4 == -1) {
        sp60 = 0x12C;
    } else {
        sp60 = arg4 + 0x14;
    }
    sp64 = 0;
    if (arg4 == -1) {
        sp68 = 0;
    } else {
        sp68 = 0x140000 / (s32) (arg4 + 0x14);
    }
    sp6D = 0xFF;
    sp6E = 0xFF;
    sp6F = 0x83;
    sp70 = 0x1E;
    sp71 = 0xFF;
    sp6C = arg1;
    if (arg6 != 0) {
        var_v0_3 = 2;
    } else {
        var_v0_3 = 3;
    }
    sp74 = var_v0_3 + 0x440000;
    sp72 = 0;
    sp73 = 6;
    sp7C = 0xFF;
    sp48 = random_u32(arg4, -1);
    sp4C = random_u32();
    temp_t0 = random_u32();
    if (arg5 != 0) {
        var_v1 = 3;
    } else {
        var_v1 = 0;
    }
    if (arg5 != 0) {
        var_v0 = 0xFF;
    } else {
        var_v0 = 0;
    }
    return func_1513C650(&sp5C, 0, 0, arg2, (*(s32 *)((char *)(arg3) + 0x0)), (*(s32 *)((char *)(arg3) + 0x4)), (*(s32 *)((char *)(arg3) + 0x8)), arg0, arg0, sp48 & 0xFF, ((temp_t0 & 1) * 2) + (sp4C & 1), var_v1, var_v0, 0, (s32) arg7, arg8);
}

void func_151A5F70(void *arg0, void *arg1, s32 arg2) {
    void *sp2C;
    s32 temp_a1;
    s32 var_a0;
    s32 var_v0;
    u8 *var_v1;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    if ((arg2 & 0xFF) == 0x35) {
        temp_a1 = (*(s32 *)((char *)(arg1) + 0x0));
        var_v0 = 0;
        var_a0 = 0;
        if (temp_a1 > 0) {
            var_v1 = (*(s32 *)((char *)(arg1) + 0x4));
loop_3:
            if ((*(s32 *)((char *)(arg0) + 0x2C)) == *var_v1) {
                var_a0 = 1;
            } else {
                var_v0 += 1;
                var_v1 += 1;
            }
            if ((var_v0 < temp_a1) && (var_a0 == 0)) {
                goto loop_3;
            }
        }
        if (var_a0 != 0) {
            temp_v0 = (char *)(arg0) + 0x28;
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            if ((*(s32 *)((char *)(temp_a0) + 0x14)) == 1) {
                temp_v1 = (*(s32 *)((char *)(temp_v0) + 0xC));
                sp2C = temp_v0;
                func_151A6068(temp_a0, (*(s32 *)((char *)(temp_v0) + 0x8)), temp_v1 & 1, temp_v1 & 2, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14)) = 0U;
                (*(s32 *)((char *)(temp_v0) + 0x10)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_151A6068(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s8 spCC;
    s32 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    s32 sp8C;
    s32 sp88;
    s16 sp84;
    s16 sp82;
    s8 sp81;
    s8 sp80;
    f32 sp7C;
    u8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void *sp64;
    s8 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    void *sp40;
    f32 temp_f4;
    s32 temp_v0;
    void *temp_a0;

    sp64 = arg0;
    sp68 = 0.0f;
    sp6C = (random_float() * 80.0f) + -380.0f;
    temp_f4 = random_float() * D_800A8D98;
    sp74 = 0;
    sp70 = temp_f4 + D_800A8D9C;
    sp78 = random_u32();
    sp79 = (random_u32() & 3) + 4;
    sp7A = 0xFF;
    sp80 = 0x6B;
    sp81 = 0xA;
    sp82 = 0x4C03;
    sp84 = 0xF0;
    sp88 = 0;
    sp8C = 0;
    sp90 = 0xFF;
    sp91 = 0xFF;
    sp92 = 0xFF;
    sp93 = 0xFF;
    sp7C = 0.0f;
    sp7B = arg3;
    sp94 = (f32) (*(f32 *)((char *)(arg0) + 0x6));
    sp98 = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    sp9C = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    spA0 = (f32) (*(f32 *)((char *)(arg0) + 0x2));
    spC0 = 0x01EC0009;
    spC4 = 0xFF;
    spC5 = 0xFF;
    spC6 = 0;
    spC7 = 0;
    spCC = 0xFF;
    spA4 = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    spA8 = 0.0f;
    spAC = 0.0f;
    spB0 = 0.0f;
    spB4 = 1.0f;
    spB8 = 1.0f;
    spBC = 1.0f;
    spC8 = arg1;
    temp_v0 = func_1513D2F0(&sp80, &D_800A4AA0, 0, 0x28, 0, 0x20, 0, 0, 0, 0x1C, (s32) arg4, arg5);
    temp_a0 = temp_v0 + 0x110;
    if (temp_v0 != 0) {
        sp40 = temp_a0;
        memcpy(temp_a0, &sp64, 0x1C);
        if (arg2 != 0) {
            sp48 = (s32) (*(s32 *)((char *)(arg0) + 0x0));
            sp4C = (*(s16 *)((char *)(arg0) + 0x2)) + ((s16) (*(s16 *)((char *)(arg0) + 0x8)) >> 1);
            sp54 = 2;
            sp55 = 2;
            sp56 = 0x12C;
            sp58 = 6;
            sp50 = (s32) (*(s32 *)((char *)(arg0) + 0x4));
            (*(s32 *)((char *)(sp40) + 0x10)) = func_1516284C(&sp54, &sp48, 0xFF, 0x79, 0, 0xFF, 0, 0, 0xE, (s32) arg4, arg5);
        }
    }
    if (arg2 != 0) {
        func_1000FA64(0x1AA, (*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x4)), 0x4000, 0x3E8, 0x2EE, &func_1000EF40, arg0, 0, 8, random_u32() & 0x300);
    }
}

void *func_151A6350(void *arg0, s32 arg1) {
    void *sp4C;
    void *sp48;
    u8 sp37;
    void *sp30;
    void **sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_f10;
    s32 temp_f4;
    s32 temp_t0;
    void **temp_a1;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_t5;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp4C, &sp37);
    sp48 = sp4C;
    if (sp4C != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_t0 = arg1 * 4;
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x2C));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x114));
        temp_f12 = (*(s32 *)((char *)(D_800DD1D8) + temp_t0)) * temp_f2;
        temp_f14 = (*(s32 *)((char *)(D_800DD1E8) + temp_t0)) * temp_f2;
        temp_f4 = (s32) temp_f0;
        temp_f10 = (s32) (temp_f0 + (*(s32 *)((char *)(arg0) + 0x11C)));
        (*(s16 *)((char *)(sp4C) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_f14);
        (*(s16 *)((char *)(sp4C) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38));
        (*(s16 *)((char *)(sp4C) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - temp_f12);
        (*(s16 *)((char *)(sp4C) + 0x8)) = (s16) temp_f4;
        (*(s32 *)((char *)(sp4C) + 0xA)) = 0x7C0;
        (*(u8 *)((char *)(sp4C) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x126));
        (*(s32 *)((char *)(sp4C) + 0x6)) = 0;
        temp_t2 = (char *)(sp4C) + 0x10;
        sp4C = temp_t2;
        temp_t0_2 = (char *)(temp_t2) + 0x10;
        (*(s16 *)((char *)(sp4C) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - temp_f14);
        (*(s16 *)((char *)(temp_t2) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38));
        (*(s32 *)((char *)(temp_t2) + 0xA)) = 0;
        (*(s16 *)((char *)(temp_t2) + 0x8)) = (s16) temp_f4;
        (*(s16 *)((char *)(temp_t2) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + temp_f12);
        (*(s32 *)((char *)(temp_t2) + 0x6)) = 0;
        (*(u8 *)((char *)(temp_t2) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x126));
        sp4C = temp_t0_2;
        (*(s16 *)((char *)(temp_t2) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - temp_f14);
        (*(s16 *)((char *)(sp4C) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp4C) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + temp_f12);
        (*(s16 *)((char *)(sp4C) + 0x8)) = (s16) temp_f10;
        (*(s32 *)((char *)(sp4C) + 0xA)) = 0;
        (*(s32 *)((char *)(sp4C) + 0xF)) = 0U;
        (*(s32 *)((char *)(temp_t0_2) + 0x6)) = 0;
        temp_t5 = (char *)(sp4C) + 0x10;
        sp4C = temp_t5;
        (*(s16 *)((char *)(sp4C) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_f14);
        (*(s16 *)((char *)(temp_t5) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s32 *)((char *)(temp_t5) + 0xA)) = 0x7C0;
        (*(s32 *)((char *)(temp_t5) + 0xF)) = 0;
        (*(s32 *)((char *)(temp_t5) + 0x6)) = 0;
        (*(s16 *)((char *)(temp_t5) + 0x8)) = (s16) temp_f10;
        (*(s16 *)((char *)(temp_t5) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - temp_f12);
        return sp48;
    }
    return NULL;
}

s32 func_151A6600(void *arg0) {
    s8 spF1;
    s8 spF0;
    s8 spEF;
    s8 spEE;
    s8 spED;
    s8 spEC;
    s32 spE4;
    f32 spE0;
    void * spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s8 spA9;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s32 sp98;
    s16 sp96;
    s16 sp94;
    s32 sp90;
    s32 sp8C;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s2;
    u8 temp_a0;
    void *temp_s1;

    if ((*(s32 *)((char *)(arg0) + 0x127)) != 0) {
        func_1508B20C((*(s32 *)((char *)(arg0) + 0x34)), (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x3C)), 0x43FA0000);
    }
    temp_s1 = (char *)(arg0) + 0x110;
    (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x4)) + ((*(f32 *)((char *)(temp_s1) + 0x8)) * D_800BE9A4));
    (*(s32 *)((char *)(temp_s1) + 0x4)) = func_15144528((*(s32 *)((char *)(temp_s1) + 0x4)), 0x45000000, 0);
    temp_a0 = (*(s32 *)((char *)(temp_s1) + 0x14)) + ((*(s32 *)((char *)(temp_s1) + 0x15)) * D_800BE9E4);
    (*(s32 *)((char *)(temp_s1) + 0x14)) = temp_a0;
    (*(s8 *)((char *)(temp_s1) + 0x16)) = (s8) (u32) ((func_151423D8((temp_a0 - 0x40) & 0xFF) * 63.0f) + 192.0f);
    if (func_151464B8((*(s32 *)((char *)(arg0) + 0x60))) == 0) {
        (*(f32 *)((char *)(temp_s1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x18)) + ((D_800A8DA0 + (random_float() * D_800A8DA4)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1) + 0x18)) > 1.0f) {
            temp_f30 = D_800A8DA8;
            temp_f28 = D_800A8DAC;
            spA9 = 0x28;
            sp94 = 0x2203;
            sp8C = 0x200005;
            sp90 = 0x1F0600;
            spA0 = 0xFF;
            spA1 = 0xFF;
            spA2 = 0xFF;
            spA3 = 0xFF;
            spA4 = 0xFF;
            spA5 = 0xFF;
            spC8 = 0.0f;
            spCC = 0.0f;
            spD0 = 0.0f;
            sp98 = 0;
            sp9C = 0;
            spA6 = 0xFF;
            spAA = 0xC;
            spAC = 0x15;
            spAE = 1;
            spB0 = 1.0f;
            spE4 = 0xC207;
            spEC = 6;
            spED = 8;
            spEE = -1;
            spEF = -1;
            spF0 = -1;
            spF1 = 0;
            do {
                temp_s0 = random_u32();
                func_15143874((s16) (temp_s0 & 0xFF), random_float() * (f32) (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x6)), &spBC, &spC4);
                spBC += (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x110))) + 0x0));
                spC0 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x110))) + 0x2));
                spC4 += (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x110))) + 0x4));
                sp96 = (random_u32() & 0xF) + 0x19;
                spA7 = (random_u32() % 101U) + 0x64;
                temp_f2 = (random_float() * 205.0f) + 98.0f;
                spB4 = temp_f2;
                spB8 = temp_f2;
                temp_s2 = random_u32();
                temp_s0_2 = random_u32();
                func_15143794((s16) (temp_s2 & 0xFF), (s16) ((temp_s0_2 % 35U) - 0x40), (random_float() * 10.0f) + 10.0f, &spD4);
                spE0 = (random_float() * temp_f28) + temp_f30;
                func_15130280(&sp8C, 1, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x18)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x18)) > 1.0f);
        }
    }
    return 1;
}

void func_151A6AB8(void *arg0) {
    s32 temp_a0;

    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x110))) + 0x14)) = 1;
    func_1000FD38(&func_1000EF40, (*(s32 *)((char *)(arg0) + 0x110)), 0, arg0);
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x120));
    if (temp_a0 != 0) {
        func_1516972C(temp_a0);
    }
}

void func_151A6B10(void *arg0) {
    func_151A6AB8(arg0);
    func_1513CA6C(arg0);
}

void func_151A6B3C(void *arg0) {
    func_151A6AB8(arg0);
    func_1513CAA0(arg0);
}

void func_151A6B68(void *arg0, s32 arg1) {
    s32 sp18;
    s32 var_a3;
    s32 var_v1;
    void *temp_v0;

    sp18 = 0;
    temp_v0 = func_151A6BD8(arg1);
    var_v1 = sp18;
    if (temp_v0 != NULL) {
        var_v1 = (*(s32 *)((char *)(temp_v0) + 0x38));
    }
    if (var_v1 != 0) {
        var_a3 = (s32) ((char *)(var_v1) - (char *)(&gObjects)) / 812;
    } else {
        var_a3 = -1;
    }
    func_1505D024(arg0, 0x60034, (*(s32 *)((char *)(arg0) + 0x7A)), var_a3);
}

void *func_151A6BD8(s32 arg0) {
    s32 temp_t4;
    s32 temp_t5;
    s32 var_v0;
    s32 var_v1;
    void *var_a0;

    var_v0 = 0;
loop_1:
    var_v1 = 0;
loop_2:
    var_a0 = *(&D_800DCE50 + (var_v1 * 0x1A0) + (*(&D_800A5770 + (var_v0 * 4)) * 4));
    if (var_a0 != NULL) {
loop_3:
        if (((*(s32 *)((char *)(var_a0) + 0x13)) == 0x2C) && (arg0 == (*(s32 *)((char *)(var_a0) + 0x28)))) {
            return var_a0;
        }
        var_a0 = (*(s32 *)((char *)(var_a0) + 0x8));
        if (var_a0 == NULL) {
            goto block_7;
        }
        goto loop_3;
    }
block_7:
    temp_t4 = (var_v1 + 1) & 0xFF;
    var_v1 = temp_t4;
    if (temp_t4 >= 2) {
        temp_t5 = (var_v0 + 1) & 0xFF;
        var_v0 = temp_t5;
        if (temp_t5 >= 2) {
            return NULL;
        }
        goto loop_1;
    }
    goto loop_2;
}

void func_151A6C90(void *arg0, s32 arg1, s32 arg2) {
    f32 spA4;
    f32 spA0;
    s32 sp9C;
    s16 sp98;
    s16 sp96;
    s8 sp95;
    s8 sp94;
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
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    f32 sp54;
    s16 sp50;
    void * sp44;
    s16 sp40;
    f32 sp38;
    f32 temp_f12;
    f32 temp_f14;
    f32 var_f18;
    s32 temp_s0;
    s32 temp_t8;

    temp_s0 = arg1 & 0xFF;
    sp9C = (*(s32 *)((char *)(arg0) + 0x14));
    spA0 = (*(s32 *)((char *)(arg0) + 0x18));
    spA4 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (arg0 != NULL) {
        sp40 = (random_u32() & 3) + 6;
        (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x0));
        (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x4));
        (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x8));
        sp54 = 60.0f;
        sp60 = 0.0f;
        sp64 = 35.0f;
        sp50 = 0x50;
        sp58 = 0;
        sp5A = 0xFF;
        sp5C = -0x3F;
        sp5E = 0x50;
        sp94 = 0;
        sp95 = 0;
        sp96 = 0x32;
        sp98 = 0x19;
        sp84 = -1.0f;
        sp88 = -1.0f;
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp78 = 0.0f;
        sp68 = 10.0f;
        sp6C = 40.0f;
        sp7C = D_800A8DB0;
        sp80 = 0.5f;
        sp8C = -2.0f;
        sp90 = 4.0f;
        func_151A6F00(&sp40, 0, temp_s0 & 0xFF, arg2);
        func_151D5334(&sp9C, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, temp_s0, arg2);
        func_151D3FF4(&sp9C, temp_s0 & 0xFF, arg2);
        func_151D5514(&sp9C, temp_s0 & 0xFF, arg2);
        sp38 = random_float();
        temp_f14 = sp38 * 4.0f;
        temp_f12 = temp_f14 + 12.0f;
        temp_t8 = (random_u32() % 56U) + 0xC8;
        var_f18 = (f32) temp_t8;
        if (temp_t8 < 0) {
            var_f18 += 4294967296.0f;
        }
        func_151541B8(temp_f12, temp_f14, &sp9C, temp_f12, 0x3FD20C49, var_f18, 0.0f, temp_s0, arg2);
        func_151D5404(&sp9C, 0x44BBC000, 0x453B8000, 0x39AEC33E, 0xC, 0xF, 0xFF, 0);
    }
}
