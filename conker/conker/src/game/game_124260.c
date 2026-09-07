/**
 * Auto-decompiled from asm/124260.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98();       /* extern */
s32 func_1506196C();                          /* extern */
void * func_15081690(); /* extern */
s32 func_15130280();        /* extern */
void * func_15145740();            /* extern */
void * func_1514EDF0();                       /* extern */
void * memcpy();                       /* extern */
extern f32 D_800A1BB0;
extern f32 D_800A1BB4;
extern f32 D_800A1BB8;

void func_150F6DB0(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0(&sp18, 0x3E);
}

void *func_150F6DE4(void *arg0) {
    s8 sp12C;
    u8 spBC;
    void *spB8;
    f32 spA8;
    s16 spA4;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    s32 sp94;
    f32 sp90;
    void * sp84;
    void * sp78;
    void * sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s32 sp4C;
    s32 sp48;
    s16 sp46;
    s16 sp44;
    s32 sp40;
    s32 sp3C;
    void *sp38;
    s32 temp_at;
    s32 temp_t9;
    s32 var_v0;
    void **temp_t8;
    void *temp_a0;
    void *temp_v0;

    spB8 = arg0;
    var_v0 = 0;
    spBC = (*(s32 *)((char *)(arg0) + 0x3B));
    do {
        temp_t9 = (var_v0 + 1) & 0xFF;
        temp_at = temp_t9 < 2;
        temp_t8 = &(&spB8)[var_v0];
        var_v0 = temp_t9;
        (*(s32 *)((char *)(temp_t8) + 0x8)) = 0;
    } while (temp_at != 0);
    sp12C = 0;
    temp_v0 = func_15149130(0x12C, -1, 0x43, -1, 0, 0x37, 0x78, 0xFF, 1);
    if (temp_v0 != NULL) {
        temp_a0 = (char *)(temp_v0) + 0x28;
        sp38 = temp_a0;
        memcpy(temp_a0, &spB8, 0x78);
        sp44 = 0x4417;
        sp3C = 0x200004;
        sp40 = 0;
        sp46 = 0x12C;
        sp48 = 0;
        sp4C = 0;
        sp50 = 0xFF;
        sp51 = 0xFF;
        sp52 = 0xFF;
        sp53 = 0xFF;
        sp58 = 0xFF;
        sp68 = D_800A1BB0;
        sp64 = D_800A1BB0;
        (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp5A = 1;
        sp5C = 0xFF;
        sp5E = 1;
        sp94 = 0x64C000;
        sp9C = 8;
        sp9D = 6;
        sp9E = -1;
        sp9F = -1;
        spA0 = 3;
        spA1 = 0;
        sp98 = 0;
        spA2 = 0xFF;
        spA4 = 0xA;
        sp59 = 0x64;
        sp54 = 0;
        sp55 = 0;
        sp56 = 0xFF;
        sp57 = 0xFF;
        sp90 = 0.0f;
        sp60 = 1.0f;
        spA8 = 20.0f;
        (*(s32 *)((char *)(sp38) + 0x8)) = func_15130280(&sp3C, 1, 0, 0, (s32) (*(s32 *)((char *)(temp_v0) + 0xC)), (s32) (*(s32 *)((char *)(temp_v0) + 0x1)));
        sp54 = 0xFF;
        sp55 = 0;
        sp56 = 0;
        sp57 = 0xFF;
        (*(s32 *)((char *)(sp38) + 0xC)) = func_15130280(&sp3C, 1, 0, 0, (s32) (*(s32 *)((char *)(temp_v0) + 0xC)), (s32) (*(s32 *)((char *)(temp_v0) + 0x1)));
    }
    return temp_v0;
}

void func_150F706C(void *arg0) {
    s32 sp74;
    f32 sp70;
    s32 sp6C;
    void * sp60;
    s8 var_t1;
    void *temp_s1;
    void *temp_s2;
    void *temp_t5;
    void *temp_t8;
    void *temp_v0;
    void *temp_v0_2;
    void *var_t2;

    temp_s2 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s2) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (D_800C35EA == 1) {
        temp_v0 = (*(s32 *)((char *)(temp_s1) + 0x8));
        if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_s1) + 0xC)) != NULL)) {
            (*(s32 *)((char *)(temp_v0) + 0x74)) = 3;
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0xC))) + 0x74)) = 3;
        }
    } else {
        sp6C = (*(s32 *)((char *)(temp_s2) + 0x14));
        sp70 = (*(s32 *)((char *)(temp_s2) + 0x18)) + 46.0f;
        sp74 = (*(s32 *)((char *)(temp_s2) + 0x1C));
        func_15145740(temp_s2, &D_800D9A50, 0, 0, 0.0f);
        (*(f32 *)((char *)&(D_800D9A50) + 0x0)) = (f32) ((*(f32 *)((char *)&(D_800D9A50) + 0x0)) * D_800A1BB4);
        (*(f32 *)((char *)&(D_800D9A50) + 0x4)) = (f32) ((*(f32 *)((char *)&(D_800D9A50) + 0x4)) * D_800A1BB4);
        (*(f32 *)((char *)&(D_800D9A50) + 0x8)) = (f32) ((*(f32 *)((char *)&(D_800D9A50) + 0x8)) * D_800A1BB4);
        func_15081690(temp_s2, sp6C, sp70, sp74, (*(s32 *)((char *)&(D_800D9A50) + 0x0)), (*(s32 *)((char *)&(D_800D9A50) + 0x4)), (*(s32 *)((char *)&(D_800D9A50) + 0x8)), (char *)(temp_s1) + 0x10, D_800A1BB8, 0, 0, 1, -1, 0, 0);
        (*(u8 *)((char *)(temp_s1) + 0x74)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0x74)) | 1);
        if (((*(s32 *)((char *)(temp_s1) + 0x8)) != NULL) && (temp_v0_2 = (*(s32 *)((char *)(temp_s1) + 0xC)), (temp_v0_2 != NULL))) {
            if ((*(s32 *)((char *)(temp_s1) + 0x69)) == 0) {
                (*(s32 *)((char *)(temp_v0_2) + 0x74)) = 3;
                var_t2 = (*(s32 *)((char *)(temp_s1) + 0x8));
                var_t1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0xC))) + 0x74));
                goto block_16;
            }
            (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x18));
            (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x1C));
            (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x20));
            temp_t5 = (*(s32 *)((char *)(temp_s1) + 0xC));
            (*(s32 *)((char *)(temp_t5) + 0x40)) = (s32) (*(s32 *)((char *)&(sp60) + 0x0));
            (*(s32 *)((char *)(temp_t5) + 0x44)) = (s32) (*(s32 *)((char *)&(sp60) + 0x4));
            (*(s32 *)((char *)(temp_t5) + 0x48)) = (s32) (*(s32 *)((char *)&(sp60) + 0x8));
            temp_t8 = (*(s32 *)((char *)(temp_s1) + 0x8));
            (*(s32 *)((char *)(temp_t8) + 0x40)) = (s32) (*(s32 *)((char *)&(sp60) + 0x0));
            (*(s32 *)((char *)(temp_t8) + 0x44)) = (s32) (*(s32 *)((char *)&(sp60) + 0x4));
            (*(s32 *)((char *)(temp_t8) + 0x48)) = (s32) (*(s32 *)((char *)&(sp60) + 0x8));
            if ((*(s32 *)((char *)(temp_s1) + 0x69)) == 1) {
                (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0x8))) + 0x74)) = -1;
                (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0xC))) + 0x74)) = 3;
                return;
            }
            if (func_1506196C((*(s32 *)((char *)(temp_s1) + 0x10)), 0) < 0xFF) {
                (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0x8))) + 0x74)) = -1;
                (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0xC))) + 0x74)) = 3;
                return;
            }
            func_1502EA98((*(s32 *)((char *)(temp_s1) + 0x10)), 0xFF, 0, 0, 0x7F, 0, 0x10);
            var_t1 = -1;
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_s1) + 0x8))) + 0x74)) = 3;
            var_t2 = (*(s32 *)((char *)(temp_s1) + 0xC));
block_16:
            (*(s32 *)((char *)(var_t2) + 0x74)) = var_t1;
        }
    }
}

void func_150F7310(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a2_2;

    temp_a2 = (char *)(arg0) + 0x28;
    if (arg2 == 0x3E) {
        temp_a2_2 = (char *)(arg0) + 0x28;
        if (((*(s32 *)((char *)(arg0) + 0x28)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_a2_2) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_a2_2);
        }
    } else {
        func_15149514(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
    }
}

void func_150F739C(void *arg0) {
    s32 temp_t8;
    s32 var_s0;
    void *temp_a0;

    var_s0 = 0;
    do {
        temp_a0 = (*(s32 *)((char *)(((char *)(arg0) + 0x28 + (var_s0 * 4))) + 0x8));
        if (temp_a0 != NULL) {
            func_1516972C(temp_a0);
        }
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 2);
    func_1514EDF0(arg0, (*(s32 *)((char *)(arg0) + 0x28)));
}

void func_150F740C(void *arg0) {
    func_150F739C(arg0);
    func_1514933C(arg0);
}

void func_150F7438(void *arg0) {
    func_150F739C(arg0);
    func_15149368(arg0);
}
