#include "common.h"

// TARGET: 0x00114918

extern s32 D_001339B0[];

s32 func_00114918(u32 arg0) {
    if (arg0 < 10) {
        return D_001339B0[arg0];
    }
    return 0;
}
