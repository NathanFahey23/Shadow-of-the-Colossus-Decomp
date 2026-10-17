#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_0013232C[];
extern s32 D_001471C0[], D_00147200[], D_00147240[];

s32 func_0010DE60(s32 arg0) {
    if (D_0013232C[0] < 0) return 0;
    D_00147240[0] = arg0;
    if (func_00109980(D_001471C0, 2, 0, D_00147240, 4, D_00147200, 4, 0, 0) < 0)
        return -1;
    return D_00147200[0];
}
