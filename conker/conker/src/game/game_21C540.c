/**
 * Auto-decompiled from asm/21C540.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 __ll_mul();                       /* extern */
void * __osContGetInitData();                    /* extern */
void * __osPackRequestData();                           /* extern */
void * __osSiCreateAccessQueue();                        /* extern */
s32 __osSiRawStartDma();                      /* extern */
u64 __ull_div();                      /* extern */
extern s32 D_80042A4C;
extern s32 D_80042A90;
extern s32 __osContInitialized;
extern s8 __osContLastCmd;
extern s32 __osContPifRam;
extern s32 __osEepromTimerQ;
extern u8 __osMaxControllers;

s32 osContInit2(void * *arg0, s32 arg1, s32 arg2) {
    void * sp7C;
    s32 sp78;
    u32 sp74;
    u32 sp70;
    void * sp50;
    void * sp38;
    u32 sp34;
    s32 sp30;
    u32 sp2C;
    s32 sp28;
    s32 temp_ret_2;
    s32 temp_ret_4;
    u32 temp_ret;
    u64 temp_ret_3;
    u64 temp_ret_5;
    u64 temp_v0;

    sp78 = 0;
    if (__osContInitialized != 0) {
        return 0;
    }
    __osContInitialized = 1;
    temp_ret = osGetTime();
    sp70 = temp_ret;
    sp74 = (u32) (u64) temp_ret;
    temp_ret_2 = __ll_mul(0, 0x7A120, D_8002BD10, D_8002BD14);
    sp30 = temp_ret_2;
    sp34 = (u32) (u64) temp_ret_2;
    temp_ret_3 = __ull_div(sp30, sp34, 0, 0xF4240);
    temp_v0 = temp_ret_3;
    if ((temp_v0 >= sp70) && ((sp70 < temp_v0) || (sp74 < (u32) temp_ret_3))) {
        osCreateMesgQueue(&sp38, &sp7C, 1);
        temp_ret_4 = __ll_mul(0, 0x7A120, D_8002BD10, D_8002BD14);
        sp28 = temp_ret_4;
        sp2C = (u32) (u64) temp_ret_4;
        temp_ret_5 = __ull_div(sp28, sp2C, 0, 0xF4240);
        sp30 = temp_ret_5;
        sp34 = (u32) temp_ret_5;
        osSetTimer(&sp50, 0, 0, &sp38, &sp7C);
        osRecvMesg(&sp38, &sp7C, 1);
    }
    __osMaxControllers = 4;
    __osPackRequestData(0);
    sp78 = __osSiRawStartDma(1, &__osContPifRam);
    osRecvMesg(arg0, &sp7C, 1);
    sp78 = __osSiRawStartDma(0, &__osContPifRam);
    osRecvMesg(arg0, &sp7C, 1);
    __osContGetInitData(arg1, arg2);
    __osContLastCmd = 0;
    __osSiCreateAccessQueue();
    osCreateMesgQueue(&__osEepromTimerQ, &D_80042A90, 1);
    return sp78;
}

void func_151EF288(u8 *arg0, void *arg1) {
    void * *sp14;
    void * spC;
    s32 sp8;
    u8 sp7;
    s32 temp_t7;
    void *var_a1;

    s32 spE;
    s32 sp10;
    s32 sp11;
    f32 sp12;
    var_a1 = arg1;
    sp7 = 0;
    sp14 = &__osContPifRam;
    sp8 = 0;
    if ((s32) __osMaxControllers > 0) {
        do {
            (*(s32 *)((char *)&(spC) + 0x0)) = (s32) (s32) (*(s32 *)((char *)(sp14) + 0x0));
            (*(s32 *)((char *)&(spC) + 0x4)) = (s32) (s32) (*(s32 *)((char *)(sp14) + 0x4));
            (*(u8 *)((char *)(var_a1) + 0x3)) = (u8) ((s32) (spE & 0xC0) >> 4);
            if ((*(s32 *)((char *)(var_a1) + 0x3)) == 0) {
                (*(s16 *)((char *)(var_a1) + 0x0)) = (s16) ((sp11 << 8) | sp10);
                (*(s32 *)((char *)(var_a1) + 0x2)) = sp12;
                sp7 |= 1 << sp8;
            }
            temp_t7 = sp8 + 1;
            sp14 = (char *)(sp14) + 8;
            sp8 = temp_t7;
            var_a1 = (char *)(var_a1) + 4;
        } while (temp_t7 < (s32) __osMaxControllers);
    }
    *arg0 = sp7;
}

void func_151EF358(s32 arg0) {
    void * *spC;
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s8 sp7;
    s8 sp6;
    s8 sp5;
    s8 sp4;
    s32 sp0;
    s32 temp_t7;
    s32 temp_t9;

    sp0 = 0;
    do {
        *(&__osContPifRam + (sp0 * 4)) = 0;
        temp_t9 = sp0 + 1;
        sp0 = temp_t9;
    } while (temp_t9 < 0x10);
    D_80042A4C = 1;
    spC = &__osContPifRam;
    sp4 = 0xFF;
    sp5 = 1;
    sp6 = 3;
    sp7 = arg0 & 0xFF;
    sp8 = 0xFF;
    sp9 = 0xFF;
    spA = 0xFF;
    spB = 0xFF;
    sp0 = 0;
    if ((s32) __osMaxControllers > 0) {
        do {
            (*(s32 *)((char *)(spC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp4) + 0x0));
            (*(s32 *)((char *)(spC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp4) + 0x4));
            temp_t7 = sp0 + 1;
            sp0 = temp_t7;
            spC = (char *)(spC) + 8;
        } while (temp_t7 < (s32) __osMaxControllers);
    }
    (*(s32 *)((char *)(spC) + 0x0)) = 0xFE;
}
