#include "common.h"

s32 func_0011BF68(const char *str) {
    s32 count = 0;
    while (*str != '\0') {
        if (*str == '/') {
            count++;
        }
        str++;
    }
    return count;
}
