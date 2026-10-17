#include "common.h"

void func_001148E0(s8 *arg0, s32 arg1) {
    s32 var_2;
    s8 *var_4;

    var_4 = arg0;
    var_2 = arg1 - 1;
    if (arg1 != 0) {
        do {
            *var_4 = 0;
            var_2 -= 1;
            var_4 += 1;
        } while (var_2 != -1);
    }
}
