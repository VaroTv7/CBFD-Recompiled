/**
 * Auto-decompiled from asm/203E20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15042E3C();                        /* extern */
void func_1504715C();                               /* extern */
void *func_1509B570();                             /* extern */
void *func_150CFF10(); /* extern */
void * func_150D6730();                              /* extern */
void *func_15133EEC();               /* extern */
f32 func_15144AA8();                               /* extern */
void * func_15150178();         /* extern */
void * func_15153F18();         /* extern */
void * func_15157010(); /* extern */
void * memcpy();                          /* extern */
extern s32 D_80083740;
extern s32 D_800838C0;
extern s32 D_800AB250;
extern s32 D_800AB254;
extern f32 D_800AB25C;
extern f32 D_800AB260;
extern f32 D_800AB264;
extern f32 D_800AB268;
extern f32 D_800AB26C;
extern f32 D_800AB270;
extern f32 D_800AB274;
extern f32 D_800AB278;

void func_151D6970(void * arg1) {
    if ((D_800BE9F0 == 0x32) || (D_800BE9F0 == 0x33)) {
        func_150D6730(0xFF, 1);
    }
}

void func_151D69B4(void *arg0) {
    void * spBC;
    s32 spB8;
    s16 spB6;
    s16 spB4;
    f32 spB0;
    s8 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s16 sp76;
    s16 sp74;
    s16 sp72;
    s16 sp70;
    f32 sp6C;
    s8 sp68;
    f32 sp64;
    s8 sp61;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    s8 sp55;
    s8 sp54;
    f32 sp50;
    f32 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    s16 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;
    s16 sp28;

    func_1504715C(&spBC);
    sp78 = (f32) (*(f32 *)((char *)(arg0) + 0x10));
    sp7C = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    sp84 = D_800AB25C;
    sp9C = 3;
    sp9E = 3;
    sp72 = 0xFF;
    sp74 = -0x2B;
    sp80 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    sp76 = 0x20;
    sp70 = 0;
    spA0 = 3;
    spA2 = 2;
    spA4 = 0x28;
    spA6 = 0x14;
    spA8 = 0x9B;
    spAA = 0x64;
    spB4 = 0x10;
    spB6 = 0xF;
    spB8 = 0;
    spAC = 9;
    sp88 = D_800AB260;
    sp8C = D_800AB264;
    sp90 = D_800AB268;
    sp94 = 17.0f;
    sp98 = 3.5f;
    spB0 = D_800AB26C;
    func_15153F18(&sp70, &sp78, &spBC, 0xFF, 1);
    sp30 = (f32) (*(f32 *)((char *)(arg0) + 0x10));
    sp34 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    sp3C = 0xF;
    sp3E = 6;
    sp38 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    sp28 = 0;
    sp2A = 0xFF;
    sp2C = -0x40;
    sp2E = 0xC;
    sp48 = 0x3C;
    sp4A = 0x2D;
    sp54 = 0xC8;
    sp55 = 0x37;
    sp60 = 1;
    sp61 = 9;
    sp64 = 1.0f;
    sp68 = 0;
    sp6C = 1.0f;
    sp40 = 10.0f;
    sp44 = 6.0f;
    sp4C = D_800AB270;
    sp50 = D_800AB274;
    sp58 = 44.0f;
    sp5C = 88.0f;
    func_15150178(&sp28, &sp30, &spBC, 0xFF, 1);
}

void func_151D6BFC(void *arg0, s32 arg1, s32 arg2) {
    s16 spA6;
    s16 spA4;
    void * sp94;
    s8 sp91;
    u8 sp90;
    void *sp8C;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s8 sp83;
    s8 sp82;
    s8 sp81;
    s8 sp80;
    s8 sp7D;
    s8 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s16 sp56;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s16 sp4A;
    s16 sp48;
    s32 sp44;
    u8 sp40;
    void *sp3C;
    s32 sp38;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    sp53 = 1;
    sp54 = -1;
    sp50 = 0x27;
    sp51 = -1;
    sp52 = 3;
    sp74 = 0x80;
    sp78 = 0x20;
    sp56 = 0x96;
    sp58 = 0xA5;
    sp5C = 0x17;
    sp64 = 0x220405;
    sp68 = 0x40200;
    sp7D = 8;
    sp6C = 1;
    sp70 = 0x38;
    sp88 = 0;
    sp60 = 0;
    sp7C = 0;
    sp80 = 0xFF;
    sp81 = 0xFF;
    sp82 = 0xFF;
    sp83 = 0xFF;
    sp84 = 0xFF;
    sp85 = 0xFF;
    sp86 = 0xFF;
    sp87 = 0xFF;
    sp8C = arg0;
    sp91 = 1;
    sp90 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp94) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp94) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    spA4 = 8;
    spA6 = 0x1F;
    func_15157010(&sp50, 0, 0x3F800000, 0, 0, 0, (s32) arg1, arg2);
    sp3C = arg0;
    sp38 = D_800AB250;
    sp48 = 8;
    sp4A = 0x1F;
    sp40 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp44 = func_150859AC(0, 6);
    temp_v0 = func_1509B570(0x83);
    if (temp_v0 != NULL) {
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x64)) + 1;
        if (temp_v1 == 0xFF) {
            sp44 += 0x64;
        } else {
            if (temp_v1 == 0) {
                goto block_7;
            }
            if (temp_v1 < 3) {
                sp44 = (s32) (sp44 * temp_v1) / 3;
            }
        }
    } else {
block_7:
        sp44 = 0;
    }
    temp_v0_2 = func_150CFF10(0x63, &sp38, 0x96, 0x10, 3, 1, (s32) arg1, arg2);
    if (temp_v0_2 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0_2) + 0x48)), &sp3C, 0x10);
    }
}

s32 func_151D6E60(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    func_150A8050((char *)(arg0) + (D_800BE9C0 << 6) + 0x7C, 0, func_15144AA8(0) + 25.0f, 0);
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xAC)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x4C))) + 0x14));
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB0)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x4C))) + 0x18)) + 120.0f);
    (*(f32 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6))) + 0xB4)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x4C))) + 0x1C));
    temp_v1 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x7C)) * D_800AB278);
    temp_v1_2 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_2) + 0x80)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x80)) * D_800AB278);
    temp_v1_3 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_3) + 0x84)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x84)) * D_800AB278);
    temp_v1_4 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_4) + 0x8C)) = (f32) ((*(f32 *)((char *)(temp_v1_4) + 0x8C)) * D_800AB278);
    temp_v1_5 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_5) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_v1_5) + 0x90)) * D_800AB278);
    temp_v1_6 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_6) + 0x94)) = (f32) ((*(f32 *)((char *)(temp_v1_6) + 0x94)) * D_800AB278);
    temp_v1_7 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_7) + 0x9C)) = (f32) ((*(f32 *)((char *)(temp_v1_7) + 0x9C)) * D_800AB278);
    temp_v1_8 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_8) + 0xA0)) = (f32) ((*(f32 *)((char *)(temp_v1_8) + 0xA0)) * D_800AB278);
    temp_v1_9 = (char *)(arg0) + (D_800BE9C0 << 6);
    (*(f32 *)((char *)(temp_v1_9) + 0xA4)) = (f32) ((*(f32 *)((char *)(temp_v1_9) + 0xA4)) * D_800AB278);
    return 1;
}

s32 func_151D7000(void *arg0) {
    void *sp20;
    s16 sp1A;
    s16 temp_a0;
    s16 var_v0;
    void *temp_a2;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x48));
    temp_a2 = (*(s32 *)((char *)(temp_v1) + 0x0));
    if (((*(s32 *)((char *)(temp_a2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_a2) + 0x3B)))) {
        return 0;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0xE));
    var_v0 = 0xFF;
    if (temp_a0 < (*(s32 *)((char *)(temp_v1) + 0xC))) {
        var_v0 = temp_a0 * (*(s32 *)((char *)(temp_v1) + 0xE));
        if (var_v0 < 0) {
            var_v0 = 0;
        }
    }
    sp1A = var_v0;
    sp20 = temp_v1;
    func_150432CC(temp_a2, 0x109, temp_a2);
    func_1504332C(0x32, 0x7D, 0x1C, var_v0 & 0xFF);
    func_15042D78(0x81);
    return func_15042E3C(&D_800AB254, (*(s32 *)((char *)(temp_v1) + 0x8)));
}

void func_151D70CC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x48));
    func_15169850(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
}

void func_151D710C(void *arg0, void *arg1, void * arg2, void * arg3, s8 *arg4) {
    void *var_a0;

    if ((s32) (*(s32 *)((char *)(arg1) + 0x43)) < 0xFF) {
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB060020;
        (*(s32 *)((char *)(arg0) + 0x4)) = &D_80083740;
        var_a0 = (char *)(arg0) + 8;
    } else {
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB060020;
        (*(s32 *)((char *)(arg0) + 0x4)) = &D_800838C0;
        var_a0 = (char *)(arg0) + 8;
    }
    func_15133EEC(func_15133EEC(var_a0, 0xC3, 6, 3), 0xC3, 7, 3);
    *arg4 = 1;
}
