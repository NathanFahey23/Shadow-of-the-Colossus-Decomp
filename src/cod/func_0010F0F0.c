#include "common.h"

u32 func_001073F0(s32);

s32 func_0010F0F0(void) {
    u32 val = func_001073F0(4);
    val &= 0x10000;
    return val > 0;
}
