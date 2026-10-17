#include "common.h"

extern char D_001384F0[];
void func_00108EF8(const char *, ...);
void func_00114F58(volatile u32 *);

void func_001147C0(volatile u32 *chcr) {
    s32 timeout = 0x1000000;
    while (*chcr & 0x100) {
        if (--timeout < 0) {
            func_00108EF8(D_001384F0);
            func_00114F58(chcr);
        }
    }
}
