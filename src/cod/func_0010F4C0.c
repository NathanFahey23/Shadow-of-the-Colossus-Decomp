#include "common.h"

s32 func_0010F4B0(s32);

s32 func_0010F4C0(s32 arg0) {
    if ((u32)(arg0 - 0xD) < 0x23) {
        goto call_func;
    }
    return -1;
call_func:
    return func_0010F4B0(arg0);
}
