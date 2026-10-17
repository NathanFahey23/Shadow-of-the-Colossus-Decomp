#include "common.h"

char *func_00129578(const char *s, int c) {
    char *last = 0;
    char ch = c;

    while (*s != '\0') {
        if (*s == ch) {
            last = (char *)s;
        }
        s++;
    }
    if (*s == ch) {
        return (char *)s;
    }
    return last;
}
