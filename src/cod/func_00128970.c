#include "common.h"

extern u8 D_0013A180[];

s32 func_001120A8(s32, s32);

s32 func_00128970(s32 *err_out, s32 arg1, s32 arg2) {
    s32 *errno_ptr = (s32 *)(D_0013A180 + 0xC);
    s32 ret;

    *errno_ptr = 0;
    ret = func_001120A8(arg1, arg2);
    if (ret == -1) {
        if (*errno_ptr != 0) {
            *err_out = *errno_ptr;
        }
    }
    return ret;
}
