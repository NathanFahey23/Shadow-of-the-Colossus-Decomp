#include "common.h"

void func_00114830(void *, u32, s32);

s32 func_00114F20(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        return *(u32 *)((u8 *)arg0 + 0x10) < arg1;
    }
    func_00114830(arg0, arg1, arg3);
    return 0;
}
