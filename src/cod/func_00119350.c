#include "common.h"

s32 func_00119DD8(s32, s32);

s32 func_00119350(s32 arg0) {
    s32 ret;
    s32 i;
    while (1) {
        goto start;
    loop:
        i = 0x10000;
        do {
            i--;
        } while (i != -1);
    start:
        ret = func_00119DD8(arg0, 0);
        if (ret < 0) {
            return -0x21C;
        }
        if (ret != 1) {
            goto loop;
        }
        return 0;
    }
}
