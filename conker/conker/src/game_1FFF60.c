#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_151D3354();
void func_151D3308();

void func_151D2AB0(s32 arg0) {
    u32 tmp;

    (&D_800E0950)[arg0] = (&D_800E0950)[arg0] + 1;

    if ((&D_800E0950)[arg0] < 2) {
        D_800E0990[arg0] = func_1502B5C8(&tmp, 2, 9, D_800AB140[arg0]);
        D_800E0968[arg0] = tmp >> 4;
    }
}

void func_151D2B4C(s32 arg0) {
    if ((&D_800E0950)[arg0] != 0) {
        (&D_800E0950)[arg0] = (&D_800E0950)[arg0] - 1;
        if ((&D_800E0950)[arg0] == 0) {
            func_100043B4(D_800E0990[arg0], 4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2BA4.s")
// s32 func_15167A68(s32, s32, s32, s32, s32, s32);
// NON-MATCHING: JUSTREG
// struct224 *func_151D2BA4(s32 arg0, struct00 *arg1, s32 arg2, u8 arg3, s32 arg4) {
//     struct224 *tmp = func_15167A68(0x3D, arg4, arg2 + 0x48, 1, arg3, 1);
//
//     if (tmp == 0) {
//         return NULL;
//     }
//
//     memcpy(&tmp->unk10, arg0, 36);
//     tmp->unk34 = arg1->unk0;
//     tmp->unk38 = arg1->unk4;
//     tmp->unk3C = arg1->unk8;
//
//     func_151D3308(tmp);
//     return tmp;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2C40.s")

void func_151D2DAC(struct102 *arg0) {
    func_151D3354(arg0);
}

void func_151D2DCC(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516972C(tmp->unk2C);
    }
    func_15169804(tmp);
}

void func_151D2E14(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516979C(tmp->unk2C);
    }
    func_15169824(tmp);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2E5C.s")
// NON-MATCHING: JUSTREG (mostly)
// s32 func_151D2E5C(struct16 *arg0, struct223 *arg1, u8 arg2) {
//     s32 temp_v0;
//     u8 temp_a2;
//     u8 temp_a3;
//
//     if (arg2 == 0) {
//         temp_v0 = arg0->unk10;
//         temp_a2 = arg0->unk14;
//         temp_a3 = arg1->unk4.ub;
//         if ((temp_v0 == arg1->unk0) || (temp_a3 == temp_a2)) {
//             func_1516972C(temp_a2);
//         }
//     } else if (arg2 == 0x2D) {
//         temp_v0 = arg1->unk0;
//         if (temp_v0 == arg0->unk10) {
//             arg0->unk10 = arg1->unk4.w;
//             arg0->unk14 = arg1->unk9;
//         } else if (arg1->unk4.w == arg0->unk10) {
//             arg0->unk10 = temp_v0;
//             arg0->unk14 = arg1->unk8;
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2F90.s")

// NON-MATCHING: full semantics recovered and verified via isolated
// harness (46/49 words match, including every branch's structure) -
// dispatches through D_8008FC5C[arg0->unk1D] once if non-null, then
// walks the linked list at arg0->unk24 (next pointer at unk40),
// dispatching each node through D_8008FC48[node->unk2A] (skipping
// nodes whose type byte is -1) with args (node, node+0x34), zeroing
// node->unk2C and calling func_1516972C(node) on every node
// regardless, before finally calling func_1514EDF0(arg0, arg0->unk10).
//
// Two remaining gaps. First, a genuine software-pipelining choice:
// target loads the FIRST node's type byte once before the loop, then
// on every subsequent iteration re-loads it in the back-edge branch's
// own delay slot (`bnel $s1,$zero,LOOP / [delay] lb $v0,0x2a($s0)`) -
// i.e. it prefetches the NEXT node's type one iteration ahead, rather
// than reading it fresh at the top of each loop body as this
// reconstruction does (both statement orders - type-then-next and
// next-then-type - produce the reconstruction's shape, not target's
// prefetch). Second, one `beq` has its two operands in the opposite
// order from target ($v0,$s2 here vs target's $s2,$v0) - same
// immune-to-source-order operand-swap class documented elsewhere.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D3130.s")
// void func_151D3130(void *arg0) {
//     void (*fn)(void *);
//     void *node;
//     void *next;
//     s8 type;
//
//     fn = D_8008FC5C[*(u8 *) ((char *) arg0 + 0x1D)];
//     if (fn != 0) {
//         fn(arg0);
//     }
//     node = *(void **) ((char *) arg0 + 0x24);
//     if (node != NULL) {
//         do {
//             next = *(void **) ((char *) node + 0x40);
//             type = *(s8 *) ((char *) node + 0x2A);
//             if (-1 != type) {
//                 D_8008FC48[type](node, (char *) node + 0x34);
//             }
//             *(s32 *) ((char *) node + 0x2C) = 0;
//             func_1516972C(node);
//             node = next;
//         } while (node != NULL);
//     }
//     func_1514EDF0(arg0, *(s32 *) ((char *) arg0 + 0x10));
// }

void func_151D31F4(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169804(arg0);
}

void func_151D3220(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169824(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D324C.s")

void func_151D3308(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;

    temp_v0 = arg0->unk30;
    if (temp_v0 != 0) {
        arg0->unk40 = temp_v0->unk24;
        temp_v1 = temp_v0->unk24;
        if (temp_v1 != 0) {
            temp_v1->unk44 = arg0;
        } else {
            temp_v0->unk28 = arg0;
        }
        arg0->unk44 = 0;
        temp_v0->unk24 = arg0;
        temp_v0->unk20 += 1;
        arg0->unk30 = temp_v0;
    }
}

void func_151D3354(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;
    struct224 *temp_v2;

    if (arg0->unk30) {
        temp_v0 = arg0->unk30;
        if (temp_v1 = arg0->unk44) {
            temp_v1->unk40 = arg0->unk40;
        } else {
            temp_v0->unk24 = arg0->unk40;
        }

        if (temp_v2 = arg0->unk40) {
            temp_v2->unk44 = arg0->unk44;
        } else {
            temp_v0->unk28 = arg0->unk44;
        }

        temp_v0->unk20 -= 1;
    }
}

void func_151D33B8(struct224 *arg0) {
    while (arg0->unk20 > 0) {
        func_1516972C(arg0->unk24);
    };
}

void func_151D33FC(struct224 *arg0, struct223 *arg1) {
    s32 tmp0;
    s32 tmp1;
    s32 tmp2;
    s32 tmp3;

    tmp0 = arg0->unk10;
    tmp1 = arg0->unk14;
    tmp2 = arg1->unk4.ub;
    tmp3 = arg1->unk0;
    if ((tmp0 == tmp3) || (tmp2 == tmp1)) {
        func_1516972C(arg0);
    }
}

// NON-MATCHING: ops in wrong order. Confirmed this round: target masks
// arg1 to a byte (andi a3,a1,0xff) eagerly, right after the entry
// spill/move, before the D_800AB168 lookup; every source form here
// (including D_800AB168[0] to fix the array-vs-value read) defers the
// mask to a lbu reload right before the call instead - same
// "eager vs. deferred u8 arg masking" category as func_15169040.
#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D343C.s")
// void func_151D343C(s32 arg0, u8 arg1) {
//     s32 sp1C[1] = D_800AB168;
//     func_15169260(sp1C, 1, arg0, arg1);
// }
