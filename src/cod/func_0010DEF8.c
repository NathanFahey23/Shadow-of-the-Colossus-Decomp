#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_0013232C[];
extern s32 D_001471C0[], D_00147200[];

struct Something {
    s32 val;
    char str[252];
};
extern struct Something D_00147280;

s32 func_0010DEF8(u8 *arg0, s32 arg1) {
    s32 i;

    if (D_0013232C[0] < 0) {
        return 0;
    }

    for (i = 0; i < 252; i++) {
        if ((D_00147280.str[i] = arg0[i]) == 0) {
            break;
        }
    }

    if (i == 252) {
        D_00147280.str[251] = 0;
        i = 251;
    }
    D_00147280.val = arg1;
    D_00147280.str[251] = 0;

    if (func_00109980(D_001471C0, 3, 0, &D_00147280, i + 5, D_00147200, 4, 0, 0) < 0) {
        return -1;
    }
    return D_00147200[0];
}
