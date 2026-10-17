#include "common.h"

void func_0012821C(void *, void *, s32);

struct Struct_00118490 {
    u8 pad[0x30];
    s32 max_size;
};

s32 func_00118490(struct Struct_00118490 *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    u8 *src = (u8 *)(arg3 << 2);
    s32 rem = arg0->max_size - (s32)src;

    if (arg1 != NULL) {
        if (arg4 < 0 || rem < arg4) {
            return -0x21F;
        }
        func_0012821C(arg1, src + (u32)arg2, arg4);
    }
    return 0;
}
