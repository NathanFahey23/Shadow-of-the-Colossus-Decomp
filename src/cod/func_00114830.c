#include "common.h"

extern char D_001384F0[];
void func_00108EF8(const char *, ...);
u32 func_00114F58(volatile u32 *);

void func_00114830(volatile u32 *chcr, u32 addr, s32 timeout) {
    s32 t = 0x1000000;
    if (timeout != 0) {
        t = timeout;
    }
    while (chcr[4] < addr) {
        if (--t < 0) {
            func_00108EF8(D_001384F0);
            func_00114F58(chcr);
        }
    }
}
