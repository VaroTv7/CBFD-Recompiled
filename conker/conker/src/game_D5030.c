#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_D5030/func_150A7B80.s")
// NON-MATCHING: a prior draft (below, struct names de-collided from this
// codebase's existing global `struct WORD`/`struct SHORTS` - same names,
// different incompatible layouts, which is what caused the "cfe: l Error"
// macro-expansion-limit corruption when first tried verbatim). Even with
// non-colliding names, IDO -O2 doesn't reproduce target's 8x `sd` (64-bit
// store) zeroing - it splits each union element into two 32-bit stores
// with individually materialized zero constants instead. Didn't find a
// source form that recovers the sd codegen this round.
// struct WORD8 {
//     s64 unk0;
// };
//
// struct SHORTS4 {
//     s16 unk0;
//     s16 unk2;
//     s16 unk4;
//     s16 unk6;
// };
//
// typedef struct {
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u0;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u1;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u2;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u3;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u4;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u5;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u6;
//     union {
//         struct SHORTS4 s;
//         struct WORD8 w;
//     } u7;
// } baz;
//
// void func_150A7B80(baz *arg0) {
//     arg0->u0.w.unk0 = 0;
//     arg0->u1.w.unk0 = 0;
//     arg0->u2.w.unk0 = 0;
//     arg0->u3.w.unk0 = 0;
//     arg0->u4.w.unk0 = 0;
//     arg0->u5.w.unk0 = 0;
//     arg0->u6.w.unk0 = 0;
//     arg0->u7.w.unk0 = 0;
//     arg0->u0.s.unk0 = 1;
//     arg0->u1.s.unk2 = 1;
//     arg0->u2.s.unk4 = 1;
//     arg0->u3.s.unk6 = 1;
// }
