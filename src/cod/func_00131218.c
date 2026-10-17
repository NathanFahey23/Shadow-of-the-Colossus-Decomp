#include "common.h"

extern u8 D_0013A180[];
s32 func_00111F18(s32, s32, s32);

u64 func_00131218(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    *(s32 *)(D_0013A180 + 0xC) = 0;
    temp_2 = func_00111F18(arg1, arg2, arg3);
    do {
        if ((temp_2 == -1) && (*(s32 *)(D_0013A180 + 0xC) != 0)) {
            *arg0 = *(s32 *)(D_0013A180 + 0xC);
        }
    } while (0);
    return temp_2;
}
