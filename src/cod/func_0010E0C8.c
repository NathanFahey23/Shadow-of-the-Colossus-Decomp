#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_0013232C[];
extern s32 D_001471C0[], D_00147200[];

u32 func_0010E0C8(void) {
    if (D_0013232C[0] < 0) return 0;
    if (func_00109980(D_001471C0, 7, 0, 0, 0, D_00147200, 4, 0, 0) < 0)
        return 0xFFFFFFFF;
    return D_00147200[0];
}
