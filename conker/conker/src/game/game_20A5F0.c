/**
 * Auto-decompiled from asm/20A5F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * __osSiGetAccess();                                /* extern */
void * __osSiRawStartDma();                        /* extern */
void * __osSiRelAccess();                             /* extern */
s32 __osEepStatus();                      /* extern */
void __osPackEepWriteData();
extern s32 D_800E0A30;
extern s32 D_800E0A31;
extern s8 __osContLastCmd;

s32 osEepromWrite(OSMesgQueue *arg0, u8 arg1, u8 *arg2) {
    s32 sp4C;
    u16 sp3C;
    void * sp38;
    void * sp30;
    void * *var_s1;
    void * *var_v0;
    s32 temp_a0;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;
    u8 temp_t0;
    void *var_s0;

    s32 sp3E;
    s32 sp31;
    var_s0 = arg2;
    var_s1 = &D_800E0A30;
    __osSiGetAccess();
    temp_v0 = __osEepStatus(arg0, &sp3C);
    var_a0 = temp_v0;
    if (temp_v0 == 0) {
        temp_t7 = sp3C & 0xC000;
        if (temp_t7 != 0x8000) {
            if (temp_t7 != 0xC000) {
                var_a0 = 8;
            } else if ((s32) arg1 >= 0x100) {
                var_a0 = -1;
            }
        } else if ((s32) arg1 >= 0x40) {
            var_a0 = -1;
        }
    }
    if (var_a0 != 0) {
        sp4C = var_a0;
        __osSiRelAccess(var_a0);
    } else {
        if (sp3E & 0x80) {
            do {
                __osEepStatus(arg0, &sp3C);
            } while (sp3E & 0x80);
        }
        __osPackEepWriteData(arg1);
        __osSiRawStartDma(1, &D_800E0A30);
        osRecvMesg(arg0, 0, 1);
        __osSiRawStartDma(0, &D_800E0A30);
        __osContLastCmd = 4;
        osRecvMesg(arg0, 0, 1);
        var_v1 = 0;
        do {
            var_v1 += 1;
            var_s1 = (char *)(var_s1) + 1;
        } while (var_v1 < 4);
        (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (s32) (*(s32 *)((char *)(var_s1) + 0x0));
        (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (s32) (*(s32 *)((char *)(var_s1) + 0x4));
        (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (s32) (*(s32 *)((char *)(var_s1) + 0x8));
        temp_a0 = (s32) (sp31 & 0xC0) >> 4;
        var_v0 = &sp30;
        if (temp_a0 == 0) {
            do {
                temp_t0 = (*(s32 *)((char *)(var_v0) + 0x4));
                var_v0 = (char *)(var_v0) + 4;
                var_s0 = (char *)(var_s0) + 4;
                (*(s32 *)((char *)(var_s0) - 0x4)) = temp_t0;
                (*(u8 *)((char *)(var_s0) - 0x3)) = (u8) (*(u8 *)((char *)(var_v0) + 0x1));
                (*(u8 *)((char *)(var_s0) - 0x2)) = (u8) (*(u8 *)((char *)(var_v0) + 0x2));
                (*(u8 *)((char *)(var_s0) - 0x1)) = (u8) (*(u8 *)((char *)(var_v0) + 0x3));
            } while ((char *)(var_v0) != (char *)(&sp38));
        }
        sp4C = temp_a0;
        __osSiRelAccess(temp_a0);
    }
    return sp4C;
}

void __osPackEepWriteData( s32 arg0) {
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    void *temp_v0;

    (*(s32 *)((char *)&(D_800E0A30) + 0x3C)) = 1;
    sp8 = 2;
    sp9 = 8;
    spA = 4;
    spB = arg0 & 0xFF;
    (*(s32 *)((char *)&(D_800E0A30) + 0x0)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x2)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x1)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x0)) = 0;
    temp_v0 = &D_800E0A31 + 0xF;
    (*(s32 *)((char *)(temp_v0) - 0xC)) = (s32) (*(s32 *)((char *)&(sp8) + 0x0));
    (*(s32 *)((char *)(temp_v0) - 0x8)) = (s32) (*(s32 *)((char *)&(sp8) + 0x4));
    (*(s32 *)((char *)&(D_800E0A31) + 0xF)) = 0xFE;
    (*(s32 *)((char *)(temp_v0) - 0x4)) = (s32) (*(s32 *)((char *)&(sp8) + 0x8));
}
