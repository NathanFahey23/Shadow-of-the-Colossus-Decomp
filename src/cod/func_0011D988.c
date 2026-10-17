#include "common.h"

// TARGET: 0x0011D988

s32 func_0011BB48(s32);
s32 func_0011BBB8(s32);
s32 func_0011BFB0(s32, s32);

s32 func_0011D988(s32 a0, s32 a1, s32 a2) {
    if (func_0011BFB0(a0, a1) == 0 || func_0011BBB8(a2) == 0) {
        return 0x81010016;
    }
    if (func_0011BB48(a2) != 0) {
        return 0;
    }
    return 0x8101005B;
}
