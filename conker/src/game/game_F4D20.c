/**
 * Auto-decompiled from asm/F4D20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000D96C();                           /* extern */
void * func_1000DE1C();                              /* extern */
f32 func_150489B0();                             /* extern */
u8 random_u32();                                 /* extern */
void *func_151149AC();            /* extern */
void * func_151150BC();                                  /* extern */
void * func_15116110();                                  /* extern */
void * func_1511650C();                           /* extern */
void * func_15179FE0(); /* extern */
extern s32 D_800887F4;
extern f32 D_800A04D0;
extern f32 D_800A04D4;

void func_150C7870(void) {
    if (!(D_800D2E4C->unkA & 8)) {
        if (!(D_800DBEF4->unk73 & 4)) {
            func_1511650C(1, 0x353, 0x447A0000);
            return;
        }
        func_1511650C(1, 0x43, 0x43C80000);
    }
}

void func_150C78E0(void *arg0) {
    if (!((*(s32 *)((char *)(arg0) + 0x73)) & 4)) {
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (-((*(s32 *)((char *)(D_800DBEF4) + 0x21C)) & 0xFFFF0000) & 0xFFFF0000);
        func_151150BC();
    }
}

void func_150C7930(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) ((*(s32 *)((char *)(D_800DBEF4) + 0x21C)) & 0xFFFF0000);
    func_151150BC();
}

void **func_150C7968(void *arg0) {
    void **var_v0;
    void *temp_v1;

    func_15116110();
    var_v0 = &D_800DBEF4;
    if (!((*(s32 *)((char *)(arg0) + 0x73)) & 4)) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
        var_v0 = D_800DBEF4 + 0x1E0;
        if (temp_v1 != NULL) {
            (*(s8 *)((char *)(temp_v1) + 0x13)) = (s8) ((s16) (*(s32 *)((char *)(D_800DBEF4) + 0x21C)) >> 4);
        }
    }
    return var_v0;
}

void func_150C79BC(s32 arg0) {
    u8 sp4B;
    s32 sp44;                                       /* compiler-managed */
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_3;
    s32 temp_t6;
    s32 var_a1;
    u32 temp_s1_2;
    u8 temp_v0_2;
    void *temp_v0;

    temp_t6 = arg0 * 0x9A0;
    sp44 = temp_t6;
    temp_v0 = D_800DBFF0 + temp_t6;
    var_a1 = (s32) (*(s32 *)((char *)(temp_v0) + 0x2FC));
    temp_s0 = (s32) (*(s32 *)((char *)(temp_v0) + 0x2F8)) + 0x972;
    temp_s1 = (s32) (*(s32 *)((char *)(temp_v0) + 0x300)) - 0x6EF;
    if (((var_a1 - 0x9C4) >= -0xC7) && (((temp_s0 * temp_s0) + (temp_s1 * temp_s1)) < 0x15F900)) {
        if (D_800887F4 == 0) {
            func_1000D96C(0x5F, 0xF, 6);
            func_1000DE1C(0x10, 4);
            D_800887F4 = 1;
            var_a1 = (s32) (*(s32 *)((char *)((D_800DBFF0 + sp44)) + 0x2FC));
        }
    } else if (D_800887F4 != 0) {
        func_1000D96C(0xF, 0x5F, 4);
        func_1000D96C(0x10, 0, 3);
        D_800887F4 = 0;
        var_a1 = (s32) (*(s32 *)((char *)((D_800DBFF0 + sp44)) + 0x2FC));
    }
    if (((var_a1 - 0x62F) < 0) && (((temp_s0 * temp_s0) + (temp_s1 * temp_s1)) < 0xC5C10) && ((u32) (random_u32() & 0xFFFF) < 0x2000U)) {
        temp_s1_2 = random_u32() % 900U;
        temp_v0_2 = random_u32();
        sp4B = temp_v0_2;
        temp_f2 = (f32) temp_s1_2;
        temp_f18 = func_150489B0(temp_v0_2 & 0xFF) * temp_f2;
        sp44 = temp_f2;
        temp_s0_2 = (s32) (temp_f18 + D_800A04D0);
        temp_s1_3 = (s32) ((func_15048A40(sp4B) * temp_f2) + D_800A04D4);
        func_15179FE0((s32) ((f32) ((random_u32() & 0xFFFF) * 2) * 0.000015258789f) & 0xFF, (s16) temp_s0_2, 0x62F, (s16) temp_s1_3, 7, 0x4B0, 0x25, 0xA, 0x1E, 3, 8);
    }
}

void func_150C7C90(void *arg0) {
    s32 *sp18;
    s32 *temp_a1_2;
    s32 temp_t0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 *temp_a1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
    if (var_v1 == 0) {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0x1C));
        var_v0 = 0;
        if (*temp_a1 != -0xE) {
            do {
                var_v0 += 1;
            } while ((*(s32 *)((var_v0 * 8) + (char *)(temp_a1))) != -0xE);
        }
        (*(s32 *)((char *)(arg0) + 0x7C)) = var_v0;
        var_v1 = var_v0;
    }
    temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x1C)) + (var_v1 * 8);
    sp18 = temp_a1_2;
    var_v1_2 = -0x29D - (s32)(func_151149AC(*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x3C)) & 0xFF, temp_a1_2, arg0)) + 0x12)));
    if ((*(s32 *)((char *)(arg0) + 0x3C)) & 0x8000) {
        var_v1_2 = 0x344 - var_v1_2;
    }
    if (var_v1_2 < 0) {
        do {
            var_v1_2 += 0x400;
        } while (var_v1_2 < 0);
    }
    if (var_v1_2 >= 0x400) {
        do {
            var_v1_2 -= 0x400;
        } while (var_v1_2 >= 0x400);
    }
    temp_t0 = *temp_a1_2 & ~0xFFF;
    *temp_a1_2 = temp_t0;
    *temp_a1_2 = temp_t0 | var_v1_2;
}

void func_150C7D7C(void *arg0) {
    void *temp_v0;

    temp_v0 = func_15083E90(0xC, arg0);
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0) + 0x14)) - 30.0f);
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0) + 0x18)) + 50.0f);
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0) + 0x1C)) + 30.0f);
}
