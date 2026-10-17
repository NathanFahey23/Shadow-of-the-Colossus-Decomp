#include "common.h"

extern u8 D_0015F480[];

s32 func_00120748(s32, void *, s32, s32);

s32 func_00120788(s32 arg0) {
    s32 ret = 1;
    s32 offset = arg0 * 0x2010;
    s32 *p_f0 = (s32 *)(D_0015F480 + offset);
    s32 val0 = *p_f0;

    if (val0 != -1) {
        s32 *p_fC = (s32 *)((u8 *)D_0015F480 + 0xC);
        u8 *data = (u8 *)D_0015F480 + 0x10;
        p_fC = (s32 *)((u8 *)p_fC + offset);
        data += offset;
        ret = func_00120748(arg0, data, val0, *p_fC);
        *p_f0 = -1;
        *p_fC = 0;
    }
    return ret;
}
