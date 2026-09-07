/**
 * Auto-decompiled from asm/97AA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150E0348();                              /* extern */
void * func_15103E40();     /* extern */
void * func_15137610();        /* extern */
s32 func_151602C0(); /* extern */
void * func_151A6F00();                    /* extern */
void * func_151B6320();                         /* extern */
void * func_151B7144();                         /* extern */
void * func_151B7328();             /* extern */
void * func_151BB61C();                  /* extern */
void * func_151BBA9C();                  /* extern */
void * func_151BC104();                              /* extern */
void * func_151CEAAC();                      /* extern */
void * func_151D3480();      /* extern */
void * memcpy();                          /* extern */
extern s32 D_80086110;
extern f32 D_80099A10;
extern f32 D_80099A14;
extern f32 D_80099A18;
extern f32 D_80099A1C;
extern f32 D_80099A20;
extern f32 D_80099A24;
extern f32 D_80099A28;
extern f32 D_800CC254;
extern f32 D_800CC258;
extern f32 D_800CC25C;
extern s32 D_800CC260;
extern s32 D_800D1560;
extern s32 D_800D1570;

void func_1506A5F0(void *arg0, void * arg1) {
    s16 sp74;
    s16 sp72;
    s8 sp71;
    s8 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    s16 sp3A;
    s16 sp38;
    s16 sp36;
    s16 sp34;
    f32 sp30;
    s16 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 sp1C;

    sp1C = 3;
    sp20 = (*(s32 *)((char *)(arg0) + 0x14));
    sp24 = (*(s32 *)((char *)(arg0) + 0x18));
    sp28 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp3C = D_80099A14;
    sp30 = D_80099A10;
    sp40 = D_80099A18;
    sp2C = 0x5A;
    sp34 = 0;
    sp36 = 0xFF;
    sp38 = -0x40;
    sp3A = 0x28;
    sp4C = 0.0f;
    sp50 = 0.0f;
    sp54 = 0.0f;
    sp70 = 0;
    sp71 = 0;
    sp72 = 0x32;
    sp74 = 0x19;
    sp58 = D_80099A1C;
    sp5C = D_80099A20;
    sp60 = D_80099A24;
    sp68 = -4.0f;
    sp64 = 0.0f;
    sp6C = 8.0f;
    func_151A6F00(&sp1C, 1, 0xFF, 1);
}

void func_1506A6FC(void * arg1) {
    func_150E0348(0xFF, 1);
}

void func_1506A724(void * arg1) {
    func_151BB61C(&D_800D1560, &D_800D1570, 0xFF, 1);
}

void func_1506A760(void * arg1) {
    func_151BBA9C(&D_800D1560, &D_800D1570, 0xFF, 1);
}

void func_1506A79C(void *arg0, void * arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;

    sp2C = (*(s32 *)((char *)(arg0) + 0x14));
    sp30 = (*(s32 *)((char *)(arg0) + 0x18));
    sp20 = (*(s32 *)((char *)&(D_800D1570) + 0x0)) - (*(s32 *)((char *)&(D_800D1560) + 0x0));
    sp34 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp24 = (*(s32 *)((char *)&(D_800D1570) + 0x4)) - (*(s32 *)((char *)&(D_800D1560) + 0x4));
    sp28 = (*(s32 *)((char *)&(D_800D1570) + 0x8)) - (*(s32 *)((char *)&(D_800D1560) + 0x8));
    func_151D3480(&sp2C, &sp20, 0, 0, 0xFF, 1);
}

void func_1506A83C(void * arg1) {
    func_151BC104(0xFF, 1);
}

void func_1506A864(void *arg0, void * arg1) {
    s8 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void *sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 temp_v0;

    sp38 = (s32) (*(s32 *)((char *)(arg0) + 0x14));
    sp3C = (s32) ((*(s32 *)((char *)(arg0) + 0x18)) + 50.0f);
    sp44 = NULL;
    sp4C = 0.0f;
    sp54 = 2;
    sp55 = 0xF;
    sp56 = 0x12C;
    sp40 = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
    sp58 = 5;
    sp48 = 80.0f;
    sp50 = D_80099A28;
    temp_v0 = func_151602C0(&sp54, &sp38, 0, 0xFF, 0xFF, 0x5A, 0xFF, 0, 0x10, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x18, &sp44, 0x10);
    }
}

void func_1506A968(void *arg0, void * arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;

    sp2C = (*(s32 *)((char *)(arg0) + 0x14));
    sp30 = (*(s32 *)((char *)(arg0) + 0x18));
    sp20 = (*(s32 *)((char *)&(D_800D1570) + 0x0)) - (*(s32 *)((char *)&(D_800D1560) + 0x0));
    sp34 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp24 = (*(s32 *)((char *)&(D_800D1570) + 0x4)) - (*(s32 *)((char *)&(D_800D1560) + 0x4));
    sp28 = (*(s32 *)((char *)&(D_800D1570) + 0x8)) - (*(s32 *)((char *)&(D_800D1560) + 0x8));
    func_151D3480(&sp2C, &sp20, 0, 1, 0xFF, 1);
}

void func_1506AA08(s32 arg0, void * arg1) {
    func_151B7144(arg0, 0xFF, 1);
    func_151B6320(arg0, 0xFF, 1);
}

void func_1506AA48(void *arg0, void *arg1) {
    void * sp3C;
    u8 sp38;
    void *sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    temp_v0 = func_15149130(0xA, 7, 0x23, -1, 1, 0x21, 0x10, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0x10);
    }
}

void func_1506AAE0(s32 arg0, void * arg1) {
    void * *var_s1;
    s32 temp_t9;
    s32 var_s0;

    var_s0 = D_800CC260;
    var_s1 = &gObjects;
    if (var_s0 != 0) {
        do {
            if (var_s0 & 1) {
                func_15137610(var_s1, &D_800D1560, &D_800D1570, 0, 0xFF, 1);
            }
            temp_t9 = var_s0 >> 1;
            var_s0 = temp_t9;
            var_s1 = (char *)(var_s1) + 0x32C;
        } while (temp_t9 != 0);
    }
}

void func_1506AB7C(void *arg1) {
    func_15103E40((*(s32 *)((char *)(arg1) + 0x0)), (char *)(arg1) + 4, 1, (*(s32 *)((char *)(arg1) + 0x10)), 0xFF, 1);
}

void func_1506ABC4(void *arg1) {
    func_15103E40((*(s32 *)((char *)(arg1) + 0x0)), (char *)(arg1) + 4, 2, (*(s32 *)((char *)(arg1) + 0x10)), 0xFF, 1);
}

void func_1506AC0C(void *arg0, void * arg1) {
    u8 sp24;
    void *sp20;

    sp20 = arg0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151B7328(&sp20, 0, 8, 0xFF, 1);
}

void func_1506AC58(void * arg1) {
    func_151CEAAC(0, 1, 0xFF, 1);
}

void func_1506AC8C(void *arg0, s32 arg1, void * arg2) {
    void * (*temp_a2)(void *, void *, void *);

    if ((arg1 >= 0) && (arg1 < 0xF)) {
        (*(f32 *)((char *)&(D_800D1560) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C));
        (*(f32 *)((char *)&(D_800D1560) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x30));
        (*(f32 *)((char *)&(D_800D1560) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x34));
        (*(f32 *)((char *)&(D_800D1570) + 0x0)) = (f32) D_800CC254;
        (*(f32 *)((char *)&(D_800D1570) + 0x4)) = (f32) D_800CC258;
        (*(f32 *)((char *)&(D_800D1570) + 0x8)) = (f32) D_800CC25C;
        temp_a2 = *(&D_80086110 + (arg1 * 4));
        if (temp_a2 != NULL) {
            temp_a2(arg2, temp_a2, arg2);
        }
    }
}
