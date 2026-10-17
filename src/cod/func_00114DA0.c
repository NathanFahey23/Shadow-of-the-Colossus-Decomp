#include "common.h"

extern void func_001147C0();
void func_00114DA0(s32 *arg0) {
func_001147C0();
arg0[8] = 0;
arg0[0] = (((arg0[0] & ~0xC) | 4) & ~1) | 0x100;
}
