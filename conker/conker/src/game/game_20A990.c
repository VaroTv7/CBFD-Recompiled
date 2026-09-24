/**
 * Auto-decompiled from asm/20A990.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * __osSiGetAccess();                                /* extern */
s32 __osSiRawStartDma();                /* extern */
void * __osSiRelAccess();                                /* extern */
void __osPackEepReadData();
s32 __osEepStatus();
extern s8 D_800E0A30;
extern s32 D_800E0A31;
extern s32 D_800E0A34;
extern s32 D_800E0A70;
extern s32 D_800E0A74;
extern s8 D_800E0BD2;
extern s8 __osContLastCmd;

s32 osEepromRead(OSMesgQueue *arg0, u8 arg1, u8 *arg2) {
    s32 sp44;
    void * sp30;
    u16 sp2C;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_v1;

    s32 sp2E;
    s32 sp31;
    __osSiGetAccess();
    temp_v0 = __osEepStatus(arg0, &sp2C);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        temp_t7 = sp2C & 0xC000;
        if (temp_t7 != 0x8000) {
            if (temp_t7 != 0xC000) {
                var_v1 = 8;
            } else if ((s32) arg1 >= 0x100) {
                var_v1 = -1;
            }
        } else if ((s32) arg1 >= 0x40) {
            var_v1 = -1;
        }
    }
    if (var_v1 != 0) {
        sp44 = var_v1;
        __osSiRelAccess();
    } else {
        if (sp2E & 0x80) {
            do {
                __osEepStatus(arg0, &sp2C);
            } while (sp2E & 0x80);
        }
        __osPackEepReadData(arg1, arg2);
        __osSiRawStartDma(1, &D_800E0A30);
        osRecvMesg(arg0, 0, 1);
        __osSiRawStartDma(0, &D_800E0A30);
        __osContLastCmd = 5;
        osRecvMesg(arg0, 0, 1);
        (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (s32) (*(s32 *)((char *)&(D_800E0A34) + 0x0));
        (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (s32) (*(s32 *)((char *)&(D_800E0A34) + 0x4));
        (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (s32) (*(s32 *)((char *)&(D_800E0A34) + 0x8));
        sp44 = (s32) (sp31 & 0xC0) >> 4;
        __osSiRelAccess();
    }
    return sp44;
}

void __osPackEepReadData( s32 arg0, u8 *arg1) {
    void * sp10;
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s8 *var_a2;
    u8 *var_a1;
    u8 temp_t1;
    void *temp_v0;

    var_a1 = arg1;
    (*(s32 *)((char *)&(D_800E0A30) + 0x3C)) = 1;
    sp8 = 0xA;
    sp9 = 1;
    spA = 5;
    spB = arg0 & 0xFF;
    var_a2 = &sp8;
    do {
        temp_t1 = *var_a1;
        var_a2 += 1;
        var_a1 += 1;
        (*(s32 *)((char *)(var_a2) + 0x3)) = temp_t1;
    } while ((u32) var_a2 < (u32) &sp10);
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

s32 __osEepStatus(s32 arg0, u16 *arg1) {
    s32 sp2C;
    s8 sp23;
    u8 sp22;
    u8 sp21;
    u8 sp20;
    s8 sp1F;
    u8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s32 temp_t5;
    s32 var_a2;
    s8 *temp_v1;
    s8 *var_v0;
    s8 *var_v1;

    var_v0 = &D_800E0A30;
    do {
        var_v0 += 4;
        (*(s32 *)((char *)(var_v0) - 0x4)) = 0;
    } while ((u32) var_v0 < (u32) &D_800E0A70);
    (*(s32 *)((char *)&(D_800E0A30) + 0x3C)) = 1;
    var_v1 = &D_800E0A30;
    var_a2 = 0;
    do {
        var_a2 += 1;
        *var_v1 = 0;
        var_v1 += 1;
    } while (var_a2 < 4);
    sp1C = 0xFF;
    sp1D = 1;
    sp1E = 3;
    sp1F = 0;
    sp20 = 0xFF;
    sp21 = 0xFF;
    sp22 = 0xFF;
    sp23 = 0xFF;
    temp_v1 = var_v1 + 8;
    (*(s32 *)((char *)(temp_v1) - 0x8)) = (s32) (*(s32 *)((char *)&(sp1C) + 0x0));
    (*(s32 *)((char *)(var_v1) + 0x8)) = 0xFE;
    (*(s32 *)((char *)(temp_v1) - 0x4)) = (s32) (*(s32 *)((char *)&(sp1C) + 0x4));
    sp2C = __osSiRawStartDma(1, &D_800E0A30, var_a2);
    osRecvMesg(arg0, 0, 1);
    __osContLastCmd = 0xFE;
    if (sp2C != 0) {
        return sp2C;
    }
    sp2C = __osSiRawStartDma(0, &D_800E0A30);
    osRecvMesg(arg0, 0, 1);
    if (sp2C != 0) {
        return sp2C;
    }
    (*(s32 *)((char *)&(D_800E0A30) + 0x0)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x2)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x1)) = 0;
    (*(s32 *)((char *)&(D_800E0A31) + 0x0)) = 0;
    (*(s32 *)((char *)&(sp1C) + 0x0)) = (s32) (s32) (*(s32 *)((char *)&(D_800E0A31) + 0x3));
    (*(s32 *)((char *)&(sp1C) + 0x4)) = (s32) (s32) (*(s32 *)((char *)&(D_800E0A31) + 0x7));
    temp_t5 = (s32) (sp1E & 0xC0) >> 4;
    (*(s8 *)((char *)(arg1) + 0x3)) = (s8) temp_t5;
    (*(s32 *)((char *)(arg1) + 0x0)) = (sp21 << 8) | sp20;
    (*(s32 *)((char *)(arg1) + 0x2)) = sp22;
    return temp_t5 & 0xFF;
}

void func_151DD8C0(void) {
    s32 temp_t5;
    u16 temp_v0;
    void *temp_a0;

    temp_a0 = D_800E0A70 + (D_800E0A74 * 6);
    (*(s8 *)((char *)&(D_800BE748) + 0x2)) = (s8) (*(s8 *)((char *)(temp_a0) + 0x0));
    (*(s8 *)((char *)&(D_800BE748) + 0x3)) = (s8) (*(s8 *)((char *)(temp_a0) + 0x1));
    D_800E0BD2 = 0;
    (*(u16 *)((char *)&(D_800BE748) + 0x0)) = (u16) ((*(u16 *)((char *)(temp_a0) + 0x4)) | ((*(u16 *)((char *)&(D_800BE748) + 0x0)) & 0x1000));
    if (D_800E0A74 < 0x1F3) {
        temp_v0 = (*(s32 *)((char *)(temp_a0) + 0x8));
        if (D_800BE9E4 < (s32) temp_v0) {
            D_800E0BD2 = temp_v0 - D_800BE9E4;
        }
    }
    temp_t5 = D_800E0A74 + 1;
    D_800BE9E4 = (s32) (*(s32 *)((char *)(temp_a0) + 0x2));
    D_800E0A74 = temp_t5;
    if (temp_t5 >= 0x1F3) {
        D_800E0A74 = 0x1F3;
    }
}
