#include "common.h"

void func_00113368(s32 **arg0, s64 arg1) {
    s32 *cur = *arg0;
    cur[0] = (s32)arg1;
    cur++;
    *arg0 = cur + 1;
    cur[0] = (s32)(arg1 >> 32);
}
