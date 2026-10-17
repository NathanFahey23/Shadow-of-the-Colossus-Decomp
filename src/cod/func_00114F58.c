#include "common.h"

s32 func_0010FB20(void);
void func_0010FB70(void);

u32 func_00114F58(volatile u32 *chcr) {
    u32 pcr;
    u32 old_chcr;
    s32 intr = func_0010FB20();
    pcr = *(volatile u32 *)0x1000F520;
    if (!(pcr & 0x10000)) {
        *(volatile u32 *)0x1000F590 = pcr | 0x10000;
    }
    *(volatile u32 *)0x1000E000;
    old_chcr = *chcr;
    *chcr = old_chcr & ~0x100;
    *(volatile u32 *)0x1000F590 = pcr;
    if (intr) {
        func_0010FB70();
    }
    return old_chcr;
}
