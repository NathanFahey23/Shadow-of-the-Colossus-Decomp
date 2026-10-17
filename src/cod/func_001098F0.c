#include "common.h"

void func_00107858(s32, void *, void *);

void func_001098F0(s32 *arg0) {
    s32 *temp_5 = (s32 *)arg0[0x34 / 4];
    s32 *temp_6 = (s32 *)temp_5[0x40 / 4];
    if (temp_6[0xC / 4] == 0) {
        temp_6[0xC / 4] = (s32)temp_5;
    } else {
        ((s32 *)temp_6[0x10 / 4])[0x3C / 4] = (s32)temp_5;
    }
    temp_6[0x10 / 4] = (s32)temp_5;
    *(void **)&temp_5[0x20 / 4] = *(void **)&arg0[0x14 / 4];
    temp_5[0x1C / 4] = arg0[0x1C / 4];
    temp_5[0x24 / 4] = arg0[0x20 / 4];
    temp_5[0xC / 4]  = arg0[0x24 / 4];
    temp_5[0x28 / 4] = arg0[0x28 / 4];
    temp_5[0x2C / 4] = arg0[0x2C / 4];
    temp_5[0x30 / 4] = arg0[0x30 / 4];
    temp_5[0x34 / 4] = arg0[0x10 / 4];
    if (temp_6[0] >= 0 && temp_6[1] == 0) {
        func_00107858(temp_6[0], temp_5, temp_6);
    }
}
