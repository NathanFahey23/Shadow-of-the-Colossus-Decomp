#include "common.h"

s32 func_0011BAE8(const char *str, char c) {
    const char *p = str;
    while (*p != '\0' && *p != c) {
        p++;
    }
    if (*p == c) {
        return p - str;
    }
    return -1;
}
