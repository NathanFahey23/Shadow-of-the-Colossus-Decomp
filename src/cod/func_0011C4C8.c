#include "common.h"

// TARGET: 0x0011C4C8

s32 func_0011C3B0(s32, s32);

s32 func_0011C4C8(s32 a0, s32 a1, s32 *a2) {
    s32 ret = func_0011C3B0(a0, a1);
    if (ret == 0x7FFFFFFF) {
        *a2 = 0x81019002;
    }
    return ret;
}
