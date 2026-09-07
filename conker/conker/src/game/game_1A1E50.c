/**
 * Auto-decompiled from asm/1A1E50.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1510C8A8();                                  /* extern */
void * func_1517DE5C();                                  /* extern */
void * func_151880C0();                                  /* extern */
void * func_15195FF0();                          /* extern */
extern s32 D_80089470;
extern s32 D_8008CD04;
extern s32 D_8008CD74;
extern s32 D_8008CD7C;
extern u16 D_800CBD4E;

void func_151749A0(s32 arg0, s32 arg1) {
    u8 temp_t1;
    u8 temp_t8;

    temp_t8 = D_800DD406 + D_800BE9E4;
    D_800DD406 = temp_t8;
    if (arg0 < (temp_t8 & 0xFF)) {
        temp_t1 = D_800DD405 + 1;
        D_800DD405 = temp_t1;
        if ((temp_t1 & 0xFF) >= arg1) {
            D_800DD405 = 0;
        }
        D_800DD406 = 0;
    }
}

void func_151749F8(s32 arg0, s32 arg1) {
    u8 temp_v0;

    func_15165F70();
    func_15195FF0((*(s32 *)((char *)&(D_800B0E00) + 0x0)), (*(s32 *)((char *)&(D_800B0E00) + 0x4)));
    func_1510C8A8();
    temp_v0 = D_800B0DF0->unkB;
    if (temp_v0 != 0) {
        ((s32 (*)())((char *)(&D_8008CD04 + (temp_v0 * 4))))(arg1);
    }
    if (D_800BE616 == 0) {
        func_1517DE5C();
        func_151880C0();
    }
    D_800CBD4E += D_800BE9E4 << 6;
}

void *func_15174AA4(void *arg0, void * arg1, void * arg2) {
    void * *sp18;
    u8 temp_t0;
    void *temp_a0;
    void *var_a0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDA380003;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = &D_80089470;
    var_a0 = (char *)(temp_a0) + 8;
    temp_t0 = D_800B0DF0->unkC;
    if (temp_t0 != 0) {
        sp18 = &D_80089470;
        var_a0 = ((s32 (*)())((char *)(&D_8008CD74 + (temp_t0 * 4))))(var_a0, arg2, &D_80089470);
    }
    (*(s32 *)((char *)(var_a0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(var_a0) + 0x4)) = &D_80089470;
    return (char *)(var_a0) + 8;
}

void *func_15174B48(void *arg0, void * arg1, void * arg2) {
    void * *sp18;
    u8 temp_t0;
    void *temp_a0;
    void *var_a0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDA380003;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = &D_80089470;
    var_a0 = (char *)(temp_a0) + 8;
    temp_t0 = D_800B0DF0->unkD;
    if (temp_t0 != 0) {
        sp18 = &D_80089470;
        var_a0 = ((s32 (*)())((char *)(&D_8008CD7C + (temp_t0 * 4))))(var_a0, arg2, &D_80089470);
    }
    (*(s32 *)((char *)(var_a0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(var_a0) + 0x4)) = &D_80089470;
    return (char *)(var_a0) + 8;
}
