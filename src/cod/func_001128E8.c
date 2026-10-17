#include "common.h"

// TARGET: 0x001128E8

extern s32 D_0014B500[];
s32 func_001128E8(s32 arg0, s32 arg1) {
    D_0014B500[arg0] = arg1;
    return arg1;
}
