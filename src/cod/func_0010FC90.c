#include "common.h"

extern u32 *D_00132988;
void func_0010FBF8(void *dst, void *src, int size);

u32 func_0010FC90(s32 arg0) {
    u32 temp;
    func_0010FBF8(&temp, &D_00132988[arg0], 4);
    return temp;
}
