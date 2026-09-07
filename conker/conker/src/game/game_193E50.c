/**
 * Auto-decompiled from asm/193E50.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15094F70(); /* extern */
void * func_150A7960(); /* extern */
s32 random_u32();                                /* extern */
void *func_15167A68();        /* extern */
void * func_15167D84();          /* extern */
void * func_1517E05C();                     /* extern */
extern s32 D_80089470;
extern s32 D_8008B3E0;
extern s32 D_8008CA4C;
extern s32 D_8009054C;
extern s32 D_800DD220;
extern s32 D_800DD224;
extern void *D_800DD228;
extern s32 D_800DD230;

void func_151669A0(s32 arg0, s32 arg1, s32 arg2, f32 arg3, u8 arg4, s32 arg5) {
    void *sp74;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    s32 var_s0;
    s32 var_s2;
    void *temp_v0;
    void *var_s1;

    temp_v0 = func_15167A68(0xD, arg5, 0xE0, 1, (s32) arg4, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0xD0)) = 0xA;
        (*(s16 *)((char *)(temp_v0) + 0xD2)) = (s16) arg0;
        (*(s16 *)((char *)(temp_v0) + 0xD4)) = (s16) arg1;
        (*(s32 *)((char *)(temp_v0) + 0xD8)) = arg3;
        (*(s16 *)((char *)(temp_v0) + 0xD6)) = (s16) arg2;
        sp74 = temp_v0;
        var_s0 = random_u32() & 0x7F;
        var_s2 = 0;
        var_s1 = (char *)(sp74) + 0x10;
        temp_f24 = (f32) arg0;
        temp_f26 = (f32) arg1;
        temp_f28 = (f32) arg2;
        do {
            if (arg3 != 1.0f) {
                func_15043D90(var_s1, 0, (f32) var_s0, 0, arg3, arg3, arg3, temp_f24, temp_f26, temp_f28);
            } else {
                func_15043E68(var_s1, 0, (f32) var_s0, 0, temp_f24, temp_f26, temp_f28);
            }
            var_s2 += 0x40;
            var_s1 = (char *)(var_s1) + 0x40;
            var_s0 = var_s0 + (random_u32() & 0x3F) + 0x5A;
        } while (var_s2 != 0xC0);
        func_1517E05C(arg0, arg1, arg2);
    }
}

void func_15166B50(void *arg0) {
    void * spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s16 spA4;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp92;
    s16 sp90;
    s8 sp8F;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 temp_v0;
    s32 var_s1;
    u8 temp_t7;
    void *var_s2;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0xD0)) - 1;
    temp_v0 = temp_t7 & 0xFF;
    (*(s32 *)((char *)(arg0) + 0xD0)) = temp_t7;
    if (temp_v0 == 5) {
        sp74 = 0;
        sp78 = 4;
        sp7C = 0;
        sp86 = 0;
        sp88 = 0;
        sp8A = 0;
        sp8F = 5;
        sp90 = 0;
        sp92 = 0;
        sp70 = D_8008CA4C;
        var_s1 = 0;
        var_s2 = (char *)(arg0) + 0x10;
        sp94 = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0xD8)) * 4000.0f);
        sp98 = 0x200;
        sp9A = 0;
        sp9B = 0;
        sp9C = 0xFF;
        sp9D = 0xFF;
        sp9E = 0xFF;
        sp9F = 0xFF;
        spA4 = 0;
        sp96 = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0xD8)) * 4000.0f);
        do {
            guMtxL2F(&spC0, var_s2);
            func_150A7960(&spC0, 0xC3C80000, 0x41200000, 0, &spBC, &spB8, &spB4);
            sp7E = (random_u32() & 0x7F) + 0x55;
            sp80 = (s16) (s32) spBC;
            sp82 = (s16) (s32) spB8;
            sp84 = (s16) (s32) spB4;
            func_15167D84(&sp70, 0, 0, -1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            var_s1 += 0x40;
            var_s2 = (char *)(var_s2) + 0x40;
        } while (var_s1 != 0xC0);
        return;
    }
    if (temp_v0 == 0) {
        func_1516972C(arg0);
    }
}

void *func_15166D68(void *arg0, void *arg1, void * arg2) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t6;
    s32 var_t1;
    s32 var_t2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *var_a0;

    var_a0 = arg0;
    var_t1 = 0;
    var_t2 = (char *)(arg1) + 0x10;
    do {
        (*(s32 *)((char *)(var_a0) + 0x0)) = 0xDA380003;
        (*(s32 *)((char *)(var_a0) + 0x4)) = var_t2;
        temp_a0 = (char *)(var_a0) + 8;
        (*(s32 *)((char *)(var_a0) + 0x8)) = 0x0100600C;
        (*(s32 *)((char *)(temp_a0) + 0x4)) = &D_8008B3E0;
        temp_a0_2 = (char *)(temp_a0) + 8;
        temp_a0_3 = (char *)(temp_a0_2) + 8;
        temp_t3 = 0x2800 - ((s32) ((*(s32 *)((char *)(arg1) + 0xD0)) << 0xC) / 10);
        temp_t4 = temp_t3 << 0x10;
        temp_a2 = temp_t4 + 0x2000;
        (*(s32 *)((char *)(temp_a0_2) + 0x4)) = temp_a2;
        (*(s32 *)((char *)(temp_a0) + 0x8)) = 0x02140000;
        (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0x02140002;
        (*(s32 *)((char *)(temp_a0_3) + 0x4)) = temp_a2;
        temp_a0_4 = (char *)(temp_a0_3) + 8;
        (*(s32 *)((char *)(temp_a0_4) + 0x4)) = (s32) (temp_t4 + 0x2400);
        (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0x02140004;
        temp_a0_5 = (char *)(temp_a0_4) + 8;
        temp_t6 = (temp_t3 + 0x800) << 0x10;
        temp_a2_2 = temp_t6 + 0x2000;
        (*(s32 *)((char *)(temp_a0_5) + 0x4)) = temp_a2_2;
        (*(s32 *)((char *)(temp_a0_4) + 0x8)) = 0x02140006;
        temp_a0_6 = (char *)(temp_a0_5) + 8;
        (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0x02140008;
        (*(s32 *)((char *)(temp_a0_6) + 0x4)) = temp_a2_2;
        temp_a0_7 = (char *)(temp_a0_6) + 8;
        (*(s32 *)((char *)(temp_a0_7) + 0x4)) = (s32) (temp_t6 + 0x2400);
        (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0x0214000A;
        temp_a0_8 = (char *)(temp_a0_7) + 8;
        (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0x050A0600;
        (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0;
        temp_a0_9 = (char *)(temp_a0_8) + 8;
        (*(s32 *)((char *)(temp_a0_8) + 0x8)) = 0x05040A00;
        (*(s32 *)((char *)(temp_a0_9) + 0x4)) = 0;
        temp_a0_10 = (char *)(temp_a0_9) + 8;
        (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0x0502080A;
        (*(s32 *)((char *)(temp_a0_10) + 0x4)) = 0;
        temp_a0_11 = (char *)(temp_a0_10) + 8;
        (*(s32 *)((char *)(temp_a0_10) + 0x8)) = 0x05020A04;
        (*(s32 *)((char *)(temp_a0_11) + 0x4)) = 0;
        var_a0 = (char *)(temp_a0_11) + 8;
        var_t1 += 0x40;
        var_t2 += 0x40;
    } while (var_t1 != 0xC0);
    return var_a0;
}

void func_15166F6C(void * arg1, void * arg2, void * arg3) {
    D_800DD228 = &D_8009054C;
    func_15094F70(&D_8009054C, D_800DD220, &D_800DD230, 0, 0, 0, D_800DD224, 3);
}

void *func_15166FD8(void *arg0, void * arg1, void * arg2) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80089470;
    return (char *)(arg0) + 8;
}
