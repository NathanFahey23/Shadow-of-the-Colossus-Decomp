#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_0013232C[];
extern s32 D_001471C0[], D_00147200[], D_00147240[];

u32 func_0010DDE0(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0013232C[0] < 0) return 0;
    D_00147240[0] = arg1;
    D_00147240[1] = arg0;
    D_00147240[2] = arg2;
    if (func_00109980(D_001471C0, 4, 0, D_00147240, 12, D_00147200, 4, 0, 0) < 0)
        return 0;
    return D_00147200[0];
}
