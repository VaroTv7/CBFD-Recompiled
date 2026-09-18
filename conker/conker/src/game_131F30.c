#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15104FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_151050B0.s")

void func_1510550C(struct102 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x4B) {
        func_1516972C(arg0);
    }
}

void func_15105548(struct207 *arg0, s32 *arg1, u8 arg2) {
    struct206 *temp_v0 = &arg0->unk28;
    if ((arg2 == 0x38) && (temp_v0->unk0->unk14 == 1)) {
        temp_v0->unk70 = *arg1;
        temp_v0->unk4 = 300;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_1510558C.s")

void func_15105848(struct207 *arg0, s32 arg1, u8 arg2) {
    struct206 *temp_v0;

    if (arg2 == 0x38) {
        temp_v0 = &arg0->unk28;
        func_151058B4(arg0);
        temp_v0->unkC |= 1;
    } else {
        temp_v0 = &arg0->unk28;
        if (arg2 == 0x39) {
            temp_v0->unkC &= 0xFFFE;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_151058B4.s")
// void func_151058B4(void *arg0) {
//     s8 spE1;
//     s8 spE0;
//     s32 spDC;
//     s16 spDA;
//     s16 spD8;
//     ? spD4;
//     f32 spD0;
//     ? spCC;
//     s8 spC9;
//     s8 spC8;
//     f32 spC4;
//     s8 spC2;
//     s16 spC0;
//     s16 spBE;
//     s16 spBC;
//     s32 spB8;
//     s32 spB4;
//     s8 spB1;
//     s8 spB0;
//     s8 spAF;
//     s8 spAE;
//     s8 spAD;
//     s8 spAC;
//     s8 spAB;
//     s8 spAA;
//     s8 spA9;
//     s8 spA8;
//     s8 spA7;
//     s8 spA6;
//     s8 spA5;
//     s8 spA4;
//     f32 spA0;
//     ? sp94;
//     f32 sp90;
//     ? sp8C;
//     ? sp88;
//     f32 temp_f20;
//     f32 temp_f20_2;
//     f32 temp_f24;
//     f32 temp_f26;
//     s32 temp_s0;
//     u32 temp_s1;
//     void *temp_s4;
//     f32 phi_f20;
//
//     if (func_151464B8(arg0->unk30) == 0) {
//         temp_s4 = arg0 + 0x28;
//         temp_f20 = ((random_float() * *(void *)0x800A23EC) + *(void *)0x800A23F0) * temp_s4->unk4;
//         if (temp_f20 > 1.0f) {
//             spDA = 0x15;
//             spDC = 0xA;
//             spA7 = 0x61;
//             spA8 = 0xF2;
//             spE0 = -1;
//             spA4 = 4;
//             spA5 = 2;
//             spA6 = 3;
//             spA9 = 0xFF;
//             spAB = 0xFF;
//             spAC = 0xFF;
//             spAD = 0xFF;
//             spAE = 0xFF;
//             spAF = 0xFF;
//             spB0 = 3;
//             spB1 = 0x24;
//             spB4 = 0x200005;
//             spB8 = 0x60600;
//             spBC = 0x14;
//             spBE = 0xC;
//             spC0 = 1;
//             spC2 = 0;
//             spC4 = 1.0f;
//             spC8 = -1;
//             spC9 = 0;
//             temp_f26 = *(void *)0x800A23F4;
//             temp_f24 = *(void *)0x800A23F8;
//             spD0 = (f32) temp_s4->unk0->unk2;
//             phi_f20 = temp_f20;
// loop_3:
//             spAA = (random_u32() % 0x65U) + 0x9B;
//             spE1 = (random_u32() & 3) + 3;
//             func_151432BC(temp_s4->unk0, &spCC, &spD4, &sp8C, &sp88);
//             spD8 = (random_u32() % 0x1FU) + 0x1E;
//             sp90 = (random_float() * temp_f24) + temp_f26;
//             temp_s0 = random_u32();
//             temp_s1 = random_u32();
//             func_15143794((s16) (temp_s0 & 0xFF), (s16) ((temp_s1 % 0x16U) - 0x36), (random_float() * 20.0f) + 30.0f, &sp94);
//             spA0 = (random_float() * *(void *)0x800A23FC) + *(void *)0x800A2400;
//             func_1515C2F0(&spCC, 0, &sp90, 0, (s32) arg0->unkC, (s32) arg0->unk1);
//             temp_f20_2 = phi_f20 - 1.0f;
//             phi_f20 = temp_f20_2;
//             if (temp_f20_2 > 1.0f) {
//                 goto loop_3;
//             }
//         }
//     }
// }

void func_15105BC8(struct204 *arg0) {
    if ((arg0->unk34 & 1) != 0) {
        func_1508B20C(arg0->unk28->unk0, arg0->unk28->unk2, arg0->unk28->unk4, 500.0f);
    }
}

// NON-MATCHING: replaces an earlier unverified auto-mips_to_c dump
// (goto-style, never confirmed against a real compile) with a hand-
// verified reconstruction. Searches the same D_800DCE50 bucket-list
// table used by func_15168A4C/func_15168A9C (game_1944C0.c) - for
// bucket row v1 (0,1) and column D_800A5770[v0] (v0 also 0,1), walks
// the ->unk8 chain looking for a node with unk13==0x2E and
// unk28==arg0, returning it. Declaring the loop counters as bare
// `s32` with an explicit `& 0xFF` in each loop condition (matching
// target's literal `andi/slti` pair) reproduces that shape exactly;
// declaring them `u8` also gets the mask/slti right but makes IDO
// switch the row-stride multiply from target's shift-decomposition
// (sll/subu/sll/addu/sll) to a hardware `multu`. Even with `s32`
// counters, IDO recognizes `v1 * 0x1A0` as an induction variable and
// strength-reduces the whole inner loop into a running pointer
// (`+= 0x1A0` each pass) instead of target's fresh recompute every
// iteration - forcing it with `volatile` does restore the fresh
// recompute, but also adds an unwanted stack frame (target has none
// at all) and still uses `multu` rather than the shift chain, so it's
// not applied. Net: correct control flow and chain-walk semantics,
// but 10 fewer instructions than target (37 vs 47) from this stride-
// computation strategy gap.
#pragma GLOBAL_ASM("asm/nonmatchings/game_131F30/func_15105C24.s")
// void *func_15105C24(s32 arg0) {
//     s32 v0;
//     s32 v1;
//     void *node;
//
//     v0 = 0;
//     do {
//         v1 = 0;
//         do {
//             node = *(void **) (D_800DCE50 + v1 * 0x1A0 + D_800A5770[v0] * 4);
//             if (node != NULL) {
//                 do {
//                     if (*(u8 *) ((char *) node + 0x13) == 0x2E && *(s32 *) ((char *) node + 0x28) == arg0) {
//                         return node;
//                     }
//                     node = *(void **) ((char *) node + 8);
//                 } while (node != NULL);
//             }
//             v1 += 1;
//         } while ((v1 & 0xFF) < 2);
//         v0 += 1;
//     } while ((v0 & 0xFF) < 2);
//     return NULL;
// }
