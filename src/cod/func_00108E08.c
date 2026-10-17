#include "common.h"

void func_00108D10(void);
s32 func_00107FF8(void (*callback)(void), void *data, s32 a, s32 b, s32 c);
s32 func_00108E08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) { s32 data = arg0; return func_00107FF8(func_00108D10, &data, arg1, arg2, arg3); }
