#include "common.h"

extern u8 D_0014AE88[];
s32 func_00107410(s32, void *);

s32 func_00112120(u16 arg0, s32 arg1, s32 arg2) {
    s32 args[4];
    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = (s32)D_0014AE88 | 0x20000000;
    return func_00107410(1, args);
}
