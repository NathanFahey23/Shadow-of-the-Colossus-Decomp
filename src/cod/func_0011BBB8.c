#include "common.h"

s32 func_0011BBB8(const char *str) {
    while (*str != '\0') {
        char c = *str;
        if (c == '?' || c == '*' || c < 0x20) {
            return 0;
        }
        str++;
    }
    return 1;
}
