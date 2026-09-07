/**
 * Auto-decompiled from asm/1FFB70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1510D0EC();                    /* extern */
void *func_15167A68();          /* extern */
extern void *D_800DD0E0;
extern s32 D_A48;

void func_151D26C0( s32 arg0) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x3C, 1, 0x18, 0, 0xFF, 1);
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x12)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0xE)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x16)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = arg0;
}

void func_151D2718( s32 arg0) {
    void *var_v0;

    var_v0 = D_800DD0E0;
    if (var_v0 != NULL) {
        do {
            if (arg0 == (*(s32 *)((char *)(var_v0) + 0x10))) {
                (*(s32 *)((char *)(var_v0) + 0x16)) = -2;
            }
            var_v0 = (*(s32 *)((char *)(var_v0) + 0x8));
        } while (var_v0 != NULL);
    }
}

void func_151D275C(void *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x16));
    (*(s16 *)((char *)(arg0) + 0xE)) = (s16) ((*(s16 *)((char *)(arg0) + 0xE)) + (D_800BE9E4 * temp_v0));
    if ((temp_v0 > 0) && (temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xE)), ((temp_v0_2 < 0xED) == 0))) {
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((0x128 - temp_v0_2) * 4);
        if ((*(s32 *)((char *)(arg0) + 0x14)) < 0) {
            (*(s32 *)((char *)(arg0) + 0x14)) = 0;
        }
    } else {
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0xE)) * 2);
    }
    if ((*(s32 *)((char *)(arg0) + 0x14)) >= 0x80) {
        (*(s32 *)((char *)(arg0) + 0x14)) = 0x80;
    }
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) + 1);
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x12));
    if (temp_v0_3 >= 0x100) {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_v0_3 - 0x100);
    }
    temp_v0_4 = (*(s32 *)((char *)(arg0) + 0xE));
    if ((temp_v0_4 >= 0x12D) || (temp_v0_4 < 0)) {
        func_1516972C();
    }
}

void *func_151D2830(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_15;
    void *temp_s0_16;
    void *temp_s0_17;
    void *temp_s0_18;
    void *temp_s0_19;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *var_s0;

    var_s0 = arg0;
    if ((arg2 != (*(s32 *)((char *)(arg1) + 0x10))) || ((*(s32 *)((char *)(arg1) + 0x14)) == 0)) {

    } else {
        (*(s32 *)((char *)(var_s0) + 0x4)) = -1;
        temp_s0 = (char *)(var_s0) + 8;
        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xD7000002;
        (*(s32 *)((char *)(var_s0) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
        temp_s0_2 = (char *)(temp_s0) + 8;
        (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xFC12D225;
        (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0xFFA7FFFF;
        temp_s0_3 = (char *)(temp_s0_2) + 8;
        (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xEF002C3F;
        (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0x504244;
        temp_s0_4 = (char *)(temp_s0_3) + 8;
        temp_v0 = func_1510D0EC(&D_A48, 0, 3, 0);
        (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xFD700000;
        (*(s32 *)((char *)(temp_s0_4) + 0x4)) = temp_v0;
        temp_s0_5 = (char *)(temp_s0_4) + 8;
        (*(s32 *)((char *)(temp_s0_4) + 0x8)) = 0xF5700000;
        (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0x07018060;
        temp_s0_6 = (char *)(temp_s0_5) + 8;
        (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xE6000000;
        (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0;
        temp_s0_7 = (char *)(temp_s0_6) + 8;
        (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xF3000000;
        (*(s32 *)((char *)(temp_s0_7) + 0x4)) = 0x077FF000;
        temp_s0_8 = (char *)(temp_s0_7) + 8;
        (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0;
        temp_s0_9 = (char *)(temp_s0_8) + 8;
        (*(s32 *)((char *)(temp_s0_8) + 0x8)) = 0xF5681000;
        (*(s32 *)((char *)(temp_s0_9) + 0x4)) = 0x18060;
        temp_s0_10 = (char *)(temp_s0_9) + 8;
        (*(s32 *)((char *)(temp_s0_9) + 0x8)) = 0xF2000000;
        (*(s32 *)((char *)(temp_s0_10) + 0x4)) = 0xFC0FC;
        temp_s0_11 = (char *)(temp_s0_10) + 8;
        (*(s32 *)((char *)(temp_s0_10) + 0x8)) = 0xFB000000;
        temp_s0_12 = (char *)(temp_s0_11) + 8;
        (*(s32 *)((char *)(temp_s0_11) + 0x4)) = (s32) (((*(s32 *)((char *)(arg1) + 0x14)) & 0xFF) | 0xFF0000);
        (*(s32 *)((char *)(temp_s0_11) + 0x8)) = 0xE45003C0;
        (*(s32 *)((char *)(temp_s0_12) + 0x4)) = 0;
        temp_s0_13 = (char *)(temp_s0_12) + 8;
        (*(s32 *)((char *)(temp_s0_12) + 0x8)) = 0xE1000000;
        temp_s0_14 = (char *)(temp_s0_13) + 8;
        (*(s32 *)((char *)(temp_s0_13) + 0x4)) = (s32) (((*(s32 *)((char *)(arg1) + 0x12)) << 0x13) | 0x400);
        (*(s32 *)((char *)(temp_s0_14) + 0x4)) = 0x04000400;
        (*(s32 *)((char *)(temp_s0_13) + 0x8)) = 0xF1000000;
        temp_s0_15 = (char *)(temp_s0_14) + 8;
        (*(s32 *)((char *)(temp_s0_14) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_15) + 0x4)) = 0;
        temp_s0_16 = (char *)(temp_s0_15) + 8;
        (*(s32 *)((char *)(temp_s0_15) + 0x8)) = 0xFB000000;
        temp_s0_17 = (char *)(temp_s0_16) + 8;
        (*(s32 *)((char *)(temp_s0_16) + 0x4)) = (s32) ((((s16) (*(s32 *)((char *)(arg1) + 0x14)) >> 1) & 0xFF) | 0xFF000000);
        (*(s32 *)((char *)(temp_s0_16) + 0x8)) = 0xE45003C0;
        (*(s32 *)((char *)(temp_s0_17) + 0x4)) = 0;
        temp_s0_18 = (char *)(temp_s0_17) + 8;
        (*(s32 *)((char *)(temp_s0_17) + 0x8)) = 0xE1000000;
        temp_s0_19 = (char *)(temp_s0_18) + 8;
        (*(s32 *)((char *)(temp_s0_18) + 0x4)) = (s32) ((*(s32 *)((char *)(arg1) + 0x12)) << 0x13);
        (*(s32 *)((char *)(temp_s0_19) + 0x4)) = 0x02000200;
        var_s0 = (char *)(temp_s0_19) + 8;
        (*(s32 *)((char *)(temp_s0_18) + 0x8)) = 0xF1000000;
    }
    return var_s0;
}
