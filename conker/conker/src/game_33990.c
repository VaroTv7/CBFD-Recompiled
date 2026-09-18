#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_150064E0(void) {
    s32 i = 0;
    func_15017790();

    do {
        D_800C3A60[i++] = 0;
    } while (i < 69);

    D_800BE3DF = 24;
    D_800BE3E8 = 0;
    D_800D2E45 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15006590.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15006BEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_1500707C.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15007168.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_1500727C.s")
// NON-MATCHING: full semantics recovered and verified via isolated
// harness - a checksum/hash routine. Seeds an accumulator from two
// global bytes (D_800BE2F2<<2 + 0xCC + D_800BE2F3<<3), then walks a
// 100-byte table 4 bytes at a time, each byte left-shifted by its
// position mod 4 (0,1,2,3) and folded into the running 16-bit-masked
// sum, writes the result to D_800BE2F0, and conditionally calls
// func_151DCEF0(&D_800BE900, 0x44, 0x70) (an OSMesgQueue global) if a
// flag byte (D_8002AC5C) is zero.
// Key finding: this loop's trip count is a compile-time-KNOWN
// constant (25 iterations, both bounds are literals) and IDO -O2
// fully unrolls ANY plain for/while/do-while form of it by 4x
// (yielding ~130 instructions instead of target's clean single-body
// loop) - this is a DIFFERENT unroll trigger than the
// early-return-inside-loop case documented elsewhere in this project
// (the do-while-guard fix for THAT case does nothing here). Marking
// the loop counter itself `volatile` blocks the unroll but forces
// extra spill/reload traffic for every reference to it inside the
// loop body. The much better fix: make ONLY the loop's UPPER BOUND
// volatile (a separate local set to the literal once before the
// loop), leaving the counter itself a normal register variable -
// this defeats IDO's "known trip count" full-unroll analysis (since
// the bound is no longer provably constant) while keeping the counter
// register-resident like target's, getting down to 59 vs target's 56
// instructions (the remaining gap is just the volatile bound's own
// spill/reload, which target's plain immediate compare doesn't need
// at all).
// void func_15007360(void) {
//     s32 v0;
//     s32 v1;
//     volatile s32 bound;
//     u8 *a0;
//
//     v0 = (D_800BE2F2 * 4 + 0xCC + D_800BE2F3 * 8) & 0xFFFF;
//     a0 = D_800BE2F4;
//     bound = 0x68;
//     v1 = 4;
//     while (v1 != bound) {
//         v0 = (v0 + (a0[0] << (v1 & 3)) + (a0[1] << ((v1 + 1) & 3)) + (a0[2] << ((v1 + 2) & 3)) + (a0[3] << ((v1 + 3) & 3))) & 0xFFFF;
//         a0 += 4;
//         v1 += 4;
//     }
//     D_800BE2F0 = (s16) v0;
//
//     if (D_8002AC5C == 0) {
//         func_151DCEF0(&D_800BE900, 0x44, 0x70);
//     }
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15007360.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15007440.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15007558.s")

void func_15007644(void) {
}

void func_1500764C(void) {
    D_80082BB4 = (u8)6;
    D_800BE3EC = (u8)0;
}

void func_15007668(void) {
    D_80082BB4 = (u8)7;
    D_800BE3EC = (u8)0;
}

void func_15007684(void) {
    D_80082BB4 = (u8)4;
    D_800BE3EC = (u8)0;
}

void func_150076A0(void) {
    D_80082BB4 = (u8)5;
    D_800BE3EC = (u8)0;
}

void func_150076BC(s32 arg0) {
    if (arg0 < 0) {
        func_150064E0();
    }
    if ((arg0 >= 0) && (arg0 < 4) && (D_800BE616 == 0)) {
        D_80082BB4 = (u8)1;
        D_800BE3EC = arg0;
    }
}

void func_15007718(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 3) && (D_800BE616 == 0)) {
        D_80082BB4 = (u8)2;
        D_800BE3EC = arg0;
    }
}

void func_15007750(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 3)) {
        D_80082BB4 = (u8)3;
        D_800BE3EC = arg0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_33990/func_15007778.s")
// NON-MATCHING: should probably start over..
// void func_15007778(void) {
//     s32 phi_v0;
//
//     D_800BE3F8->unk8 = -1;
//     D_800BE3F8->unk18 = -1;
//     D_800BE3F8->unk28 = -1;
//     D_800BE3F8->unkE = -1;
//     D_800BE3F8->unk1E = -1;
//     D_800BE3F8->unk2E = -1;
//     D_800BE3DC = -1;
//     D_80082BC0 = 1;
//     D_800BE3DE = 0;
//
//     phi_v0 = 0;
//     do {
//         ((u8*)D_800D2E4C)[phi_v0++] = 0;
//     } while (phi_v0 < 27);
//
//     for (phi_v0 = 0; phi_v0 < 9; phi_v0++) {
//         D_800D2E60[phi_v0] = 0;
//     }
//
//     D_800BE3DB = -1;
//     D_800BE3DA = -1;
//     D_800BE3D9 = -1;
//     D_800BE3D8 = -1;
// }
