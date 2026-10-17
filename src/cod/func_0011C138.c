#include "common.h"

extern char D_00138D08[];
extern char D_0015DF48[];

s32 func_0011C138(void) {
    char *base = D_0015DF48;
    signed char new_var2 = -1;
    s32 one = 1;
    char *p = base + 0x808;
    int i;

    for (i = 0; i < 2; i++) {
        *(s32 *)(p - 8) = new_var2;
        *(s32 *)(p - 4) = new_var2;
        *(s32 *)(p + 0x8C) = 0;
        *(s32 *)(p + 0x80) = one;
        *(s32 *)(p + 0x84) = 0;
        *(s32 *)(p + 0x88) = 0;
        __builtin_memcpy(p, D_00138D08, 2);
        p += 0x898;
    }
    return 1;
}
