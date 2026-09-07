/**
 * Auto-decompiled from asm/AB760.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150302F0();                         /* extern */
u8 func_150849A0();                                 /* extern */
u32 random_u32();                            /* extern */
void func_1507E5C8();            /* static */
void *func_1507E908();                 /* static */
s32 func_1507E968();                   /* static */
void * *func_1507E9F8();                     /* static */
void func_1507EA44();   /* static */
void func_1507EABC();                     /* static */
void func_1507EB4C();
extern f32 D_8009B8A0;
extern s32 D_8009D910;
s32 func_1507E6B8();
void func_1507E7E4();

void func_1507E2B0(void *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    if (((*(s32 *)((char *)(arg0) + 0x4)) != 0x2B) && (D_800C35EA != 1)) {
        if (((*(s32 *)((char *)(arg0) + 0x127)) != 0xFF) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x120)) != 0)) {
            (*(s32 *)((char *)(arg0) + 0x6A)) = 1U;
            (*(s32 *)((char *)(arg0) + 0x6B)) = 1U;
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg0) + 0x6A)) >= 3) {
            (*(s32 *)((char *)(arg0) + 0x6A)) = 0U;
        }
        if ((s32) (*(s32 *)((char *)(arg0) + 0x6B)) >= 3) {
            (*(s32 *)((char *)(arg0) + 0x6B)) = 0U;
        }
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x6E));
        if ((s32) temp_v0 >= D_800BE9E4) {
            (*(u8 *)((char *)(arg0) + 0x6E)) = (u8) (temp_v0 - D_800BE9E4);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x6E)) = 0U;
        if ((*(s32 *)((char *)(arg0) + 0x6C)) != 1) {
            temp_t6 = (*(s32 *)((char *)(arg0) + 0x6A)) ^ 1;
            (*(s32 *)((char *)(arg0) + 0x6A)) = temp_t6;
            (*(u8 *)((char *)(arg0) + 0x6B)) = (u8) ((*(u8 *)((char *)(arg0) + 0x6B)) ^ 1);
            if (!(temp_t6 & 0xFF)) {
                (*(u8 *)((char *)(arg0) + 0x6E)) = (u8) ((random_u32(1, 1) % 140U) + 0xA);
                return;
            }
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1U;
        }
    }
}

void func_1507E3C0(void *arg0) {
    void * sp1C;
    s32 sp14;
    s32 *var_v1;
    s32 temp_t2;
    s32 temp_v0_2;
    u8 temp_t6;
    u8 temp_v0;
    void *var_a1;

    f32 sp18;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    var_v1 = &sp14;
    var_a1 = arg0;
    if ((temp_v0 == 0xF) || (temp_v0 == 0x46) || (temp_v0 == 0x4C)) {
        do {
            temp_t6 = (*(s32 *)((char *)(var_a1) + 0x6C));
            *var_v1 = (s32) temp_t6;
            if ((s32) temp_t6 >= 0xA) {
                temp_v0_2 = temp_t6 - 0xA;
                *var_v1 = temp_v0_2;
                if (temp_v0_2 == 5) {
                    *var_v1 = 0;
                } else if (temp_v0_2 == 1) {
                    *var_v1 = 1;
                } else {
                    *var_v1 = 2;
                }
            } else if ((s32) temp_t6 < 2) {
                *var_v1 = temp_t6 + 1;
            }
            var_v1 += 4;
            var_a1 = (char *)(var_a1) + 1;
        } while ((char *)(var_v1) != (char *)(&sp1C));
        temp_t2 = (*(s32 *)((char *)(arg0) + 0x94)) | 0x7E;
        (*(s32 *)((char *)(arg0) + 0x94)) = temp_t2;
        if (sp14 == 0) {
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) (temp_t2 & ~8);
        } else if (sp14 == 1) {
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) ((*(s32 *)((char *)(arg0) + 0x94)) & ~0x10);
        } else {
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) ((*(s32 *)((char *)(arg0) + 0x94)) & ~4);
        }
        if (sp18 == 0) {
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) ((*(s32 *)((char *)(arg0) + 0x94)) & ~0x20);
            return;
        }
        if (sp18 == 1) {
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) ((*(s32 *)((char *)(arg0) + 0x94)) & ~0x40);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x94)) = (s32) ((*(s32 *)((char *)(arg0) + 0x94)) & ~2);
    }
}

void func_1507E500(s32 *arg0, s32 arg1, s32 arg2) {
    void *sp24;
    void * *temp_v0_2;
    void *temp_v0;

    if (arg1 < func_1507E968(arg0)) {
        temp_v0 = func_1507E908(arg0, (*(s32 *)((char *)(arg0) + 0x6F)));
        if ((*(s32 *)((char *)(temp_v0) + 0x4)) != 0) {
            sp24 = temp_v0;
            temp_v0_2 = func_1507E9F8(arg0, 0);
            if (temp_v0_2 != NULL) {
                func_150302F0(arg0, (*(s32 *)((char *)(((*(s32 *)((char *)(sp24) + 0x4)) + (char *)(temp_v0_2))) - 0x1)));
            }
        }
        (*(u8 *)((char *)(arg0) + 0x6F)) = (u8) arg1;
        func_1507E5C8(arg0, arg2);
        if (arg2 != 0) {
            (*(u8 *)((char *)(arg0) + 0x135)) = (u8) arg2;
            return;
        }
        (*(u8 *)((char *)(arg0) + 0x135)) = (u8) func_1507E908(*(u8 *)((char *)((arg0, (u8) arg1)) + 0x3));
    }
}

void func_1507E5C8(s32 *arg0, s32 arg1) {
    void *sp1C;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v0;

    temp_v0 = func_1507E908((s32 *) (*(s32 *)((char *)(arg0) + 0x6F)));
    if (temp_v0 != NULL) {
        sp1C = temp_v0;
        func_1507EA44(arg0, (*(s32 *)((char *)(temp_v0) + 0x4)), (*(s32 *)((char *)(temp_v0) + 0x6)));
        temp_v0_2 = (*(s32 *)((char *)(sp1C) + 0x2));
        if (temp_v0_2 != (*(s32 *)((char *)(arg0) + 0x134))) {
            (*(s32 *)((char *)(arg0) + 0x134)) = temp_v0_2;
            if (arg1 == 0) {
                (*(u8 *)((char *)(arg0) + 0x135)) = (u8) (*(u8 *)((char *)(sp1C) + 0x3));
            } else {
                (*(u8 *)((char *)(arg0) + 0x135)) = (u8) arg1;
            }
        }
        (*(s8 *)((char *)(arg0) + 0x6C)) = (s8) ((*(s8 *)((char *)(sp1C) + 0x0)) + 0xA);
        (*(s8 *)((char *)(arg0) + 0x6D)) = (s8) ((*(s8 *)((char *)(sp1C) + 0x1)) + 0xA);
        temp_v0_3 = (*(s32 *)((char *)(sp1C) + 0x8));
        if (temp_v0_3 != 0) {
            (*(s32 *)((char *)(arg0) + 0x68)) = temp_v0_3;
        } else {
            (*(u8 *)((char *)(arg0) + 0x68)) = (u8) (*(u8 *)((char *)((*(&D_800D1C90 + ((*(u8 *)((char *)(arg0) + 0x4)) * 4)))) + 0x3B));
        }
        temp_v0_4 = (*(s32 *)((char *)(sp1C) + 0x9));
        if (temp_v0_4 != 0) {
            (*(s32 *)((char *)(arg0) + 0x69)) = temp_v0_4;
            return;
        }
        (*(u8 *)((char *)(arg0) + 0x69)) = (u8) (*(u8 *)((char *)((*(&D_800D1C90 + ((*(u8 *)((char *)(arg0) + 0x4)) * 4)))) + 0x3C));
    }
}

s32 func_1507E6B8(void *arg0) {
    u8 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x1CA)) == 0) {
        goto block_9;
    }
    if ((*(s32 *)((char *)(arg0) + 0x70)) == (*(s32 *)((char *)(arg0) + 0x6F))) {
        return 1;
    }
    temp_v0 = func_150849A0();
    if (temp_v0 == 0) {
        if ((*(s32 *)((char *)(arg0) + 0x6F)) == 0x15) {
            return 1;
        }
        goto block_9;
    }
    if (temp_v0 == 0x52) {
        return 1;
    }
block_9:
    return 0;
}

void func_1507E73C(void *arg0) {
    u16 temp_v1;

    if ((*(s32 *)((char *)(arg0) + 0x5)) != 2) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x72));
        switch (temp_v1) {                          /* irregular */
        case 0xFFFE:
            break;
        default:
            if (D_800BE9E4 < (s32) temp_v1) {
                (*(u16 *)((char *)(arg0) + 0x72)) = (u16) (temp_v1 - D_800BE9E4);
            } else {
                (*(s32 *)((char *)(arg0) + 0x72)) = 0U;
            }
            /* fallthrough */
        case 0x0:
        case 0xFFFF:
            if (func_1507E6B8(0) != 0) {
                func_1507E2B0(arg0);
            }
            if (((*(s32 *)((char *)(arg0) + 0x72)) == 0) && ((*(s32 *)((char *)(arg0) + 0x70)) != (*(s32 *)((char *)(arg0) + 0x6F)))) {
                func_1507EABC(arg0);
            }
            break;
        }
    }
}

void func_1507E7E4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp2C;
    s32 sp20;
    void * *temp_v0_2;
    s8 temp_t6;
    u8 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x6F));
    if (((temp_v1 != arg1) || ((*(s32 *)((char *)(arg0) + 0x71)) != temp_t6) || ((*(s32 *)((char *)(arg0) + 0x72)) != arg3)) && ((temp_t6 == 3) || ((*(s32 *)((char *)(arg0) + 0x70)) == temp_v1) || (arg1 == temp_v1) || ((*(s32 *)((char *)(arg0) + 0x72)) == 0) || ((s32) (*(s32 *)((char *)(arg0) + 0x71)) < temp_t6))) {
        arg2 = temp_t6;
        sp20 = (s32) arg1;
        if ((s32) arg1 < func_1507E968(arg0, temp_t6)) {
            temp_v0 = func_1507E908(arg0, (*(s32 *)((char *)(arg0) + 0x6F)));
            if ((*(s32 *)((char *)(temp_v0) + 0x4)) != 0) {
                sp2C = temp_v0;
                temp_v0_2 = func_1507E9F8(arg0, 0);
                if (temp_v0_2 != NULL) {
                    func_150302F0(arg0, (*(s32 *)((char *)(((*(s32 *)((char *)(sp2C) + 0x4)) + (char *)(temp_v0_2))) - 0x1)));
                }
            }
            (*(s32 *)((char *)(arg0) + 0x6F)) = arg1;
            (*(s32 *)((char *)(arg0) + 0x72)) = arg3;
            (*(u8 *)((char *)(arg0) + 0x71)) = (u8) arg2;
            func_1507E5C8(arg0, arg4);
        }
    }
}

void *func_1507E908(s32 arg1) {
    s32 temp_a0;
    void *temp_v1;
    void *var_v0;

    temp_v1 = *(&D_800D1C90 + (func_150849A0() * 4));
    var_v0 = NULL;
    if (temp_v1 != NULL) {
        temp_a0 = (*(s32 *)((char *)(temp_v1) - 0x8));
        if (temp_a0 != 0) {
            var_v0 = (arg1 * 0xA) + temp_a0;
        }
    }
    return var_v0;
}

s32 func_1507E968(s32 *arg0) {
    u32 var_v0;
    u8 var_v0_2;
    void *temp_v1;

    var_v0_2 = (*(s32 *)((char *)(arg0) + 0x4));
    if (var_v0_2 != 0x96) {
        var_v0_2 = func_150849A0();
    }
    if (var_v0_2 == 0xFF) {
        return 0;
    }
    temp_v1 = *(&D_800D1C90 + (var_v0_2 * 4));
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = (u32) (*(u32 *)((char *)(temp_v1) - 0x4)) / 10U;
    }
    return (s32) var_v0;
}

void func_1507E9E8(s32 arg0, void * arg1) {

}

void * *func_1507E9F8(s32 *arg1) {
    if (func_150849A0() == 0) {
        if (arg1 != NULL) {
            *arg1 = 5;
        }
        return &D_8009D910;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return NULL;
}

void func_1507EA44(s32 *arg0, s32 arg1, s32 arg2) {
    void * *temp_v0;

    if (arg1 != 0) {
        temp_v0 = func_1507E9F8(arg0);
        if (temp_v0 != NULL) {
            func_15083568(arg0, (*(f32 *)((char *)((arg1 + (char *)(temp_v0))) - 0x1)), (f32) arg2 * D_8009B8A0, 0);
        }
    }
}

void func_1507EABC(void *arg0) {
    func_1507E7E4((s32 *) (*(s32 *)((char *)(arg0) + 0x70)), 3U, 0xFFFF, 0xAU, 0);
    (*(s32 *)((char *)(arg0) + 0x71)) = 0;
    (*(s32 *)((char *)(arg0) + 0x72)) = 0;
    if ((s32) (*(s32 *)((char *)(arg0) + 0x6C)) >= 0xA) {
        (*(s32 *)((char *)(arg0) + 0x6C)) = 0U;
        (*(s32 *)((char *)(arg0) + 0x6A)) = 0;
    }
    if ((s32) (*(s32 *)((char *)(arg0) + 0x6D)) >= 0xA) {
        (*(s32 *)((char *)(arg0) + 0x6D)) = 0U;
        (*(s32 *)((char *)(arg0) + 0x6B)) = 0;
    }
}

void func_1507EB2C(void) {
    func_1507EB4C(NULL);
}

void func_1507EB4C(void *arg0, s32 arg1) {
    if (arg1 != (*(s32 *)((char *)(arg0) + 0x70))) {
        (*(s32 *)((char *)(arg0) + 0x70)) = arg1;
        func_1507EABC(0);
    }
}
