#include "common.h"

void func_0012821C(void *, void *, s32);

struct Struct_00118438 {
    u8 pad[0x30];
    s32 max_size;
};

s32 func_00118438(struct Struct_00118438 *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4) {
    u8 *dst = (u8 *)(arg2 << 2);
    s32 rem = arg0->max_size - (s32)dst;

    if (arg3 != NULL) {
        if (arg4 < 0 || rem < arg4) {
            return -0x21F;
        }
        func_0012821C(dst + (u32)arg1, arg3, arg4);
    }
    return 0;
}
