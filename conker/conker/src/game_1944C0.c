#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167010.s")
// NON-MATCHING: not hugely far away
// void func_15167010(void) {
//     void (*func)(void);
//     s32 i;
//
//     for (i = 0; i < 24; i++)
//     {
//         func = D_8008B4A8[i].unk18;
//         if (func != NULL) {
//             func();
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516706C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151670C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151671E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167310.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151674F8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167A68.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167AD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167B44.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167C58.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167D84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15167E0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168118.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516865C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168800.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168870.s")
void func_15168B10(s32 arg0, s32 arg1);

void func_15168A2C(s32 arg0) {
    func_15168B10(arg0, 0);
}
extern u8 D_800DCE50[];

// NON-MATCHING: mips_to_c reconstruction, hand-typed. A bucket-list
// insert: computes a slot in D_800DCE50 (stride 0x1A0, matching the
// already-documented but uncompiled func_15168A9C's comment) indexed by
// arg0->unk1 and arg1, splices arg0 onto the front of that slot's linked
// list (unk8=old head, old head->unk4=arg0), then sets arg0->unk0=arg1,
// arg0->unk4=0. Register allocation and instruction order differ
// substantially from every offset/pointer-arithmetic variation tried.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168A4C.s")
// void func_15168A4C(void *arg0, u8 arg1) {
//     u8 unk1 = *((u8 *) arg0 + 1);
//     void **slot = (void **) (D_800DCE50 + unk1 * 0x1A0 + arg1 * 4);
//     void *t0 = *slot;
//
//     if (t0 != 0) {
//         *(void **) ((char *) arg0 + 8) = t0;
//         *(void **) ((char *) t0 + 4) = arg0;
//     }
//     *((u8 *) arg0 + 0) = arg1;
//     *(s32 *) ((char *) arg0 + 4) = 0;
//     *slot = arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168A9C.s")
// void *func_15168A9C(struct12 *arg0) {
//     void *temp_a1;
//     void *temp_v0;
//     void *temp_v0_2;
//
//     temp_a1 = (arg0->unk1 * 0x1A0) + (arg0->unk0 * 4) + 0x800DCE50;
//     if (arg0 == *temp_a1) {
//         *temp_a1 = (void *) arg0->unk8;
//     }
//     temp_v0_2 = arg0->unk8;
//     if (temp_v0_2 != 0) {
//         temp_v0_2->unk4 = (void *) arg0->unk4;
//     }
//     temp_v0 = arg0->unk4;
//     if (temp_v0 != 0) {
//         temp_v0->unk8 = (void *) arg0->unk8;
//     }
//     return temp_v0;
// }


void func_15168B10(s32 arg0, s32 arg1) {
    func_15168A9C(arg0);
    func_15168A4C(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168B44.s")
extern void (*D_8008CA20[])(void *);

void func_15168BAC(void *arg0) {
    u8 idx = *(u8 *)((char *) arg0 + 0xE4);
    if (idx != 0) {
        D_8008CA20[idx](arg0);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168BE4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168C4C.s")
void func_15168E34(s32 *arg0, s32 arg1) {
    if ((*arg0 & 0xF000000) == 0) {
        *arg0 = *arg0 + arg1;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168E54.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168F08.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15168F84.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169040.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169070.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169260.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516944C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151695F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516962C.s")
extern u8 D_800D2DAB;

void *func_15169668(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_800D2DAB = 1;
    return arg0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_1516968C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_151696DC.s")

s32 func_1516972C(struct102 *arg0) {
    void (*func)(struct102 *arg0);
    func_151696DC();

    if (arg0->unk0 >= 2) {
        func = D_8008B4D0[arg0->unk0].unk0;
        if (func != NULL) {
            func(arg0);
            return 0;
        }
        func_15169804(arg0);
    }
    return 0;
}

void func_1516979C(struct102 *arg0) {
    void (*func)(struct102 *arg0);

    func_151696DC();
    func = D_8008B4D4[arg0->unk0].unk0;
    if (func != NULL) {
        func(arg0);
        return;
    }
    func_15169824(arg0);
}

void func_15169804(struct102 *arg0) {
    func_15168B10(arg0, 1);
}

void func_15169824(struct102 *arg0) {
    func_15168A9C(arg0);
    func_10004074(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1944C0/func_15169850.s")
