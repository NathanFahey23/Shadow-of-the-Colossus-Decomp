#include "common.h"

int func_00108D10(char **buf, int *remain, int ch) {
    if (*remain == 0) {
        return 1;
    }
    if (ch < 0x100) {
        if (*remain == 1) {
            ch = 0;
        }
        *(*buf)++ = ch;
        (*remain)--;
        return 1;
    }
    **buf = 0;
    return 0;
}
