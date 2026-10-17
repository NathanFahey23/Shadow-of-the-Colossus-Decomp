#include "common.h"

void func_00107080(void *);
void func_00107090(void *);

s32 func_0010FE98(void) {
    u32 v1;
    u32 v2;

    func_00107090(&v1);
    v2 = (v1 & 0xFFFF1FFF) | 0x2000;
    func_00107080(&v2);
    func_00107090(&v2);
    func_00107080(&v1);
    return ((v2 >> 13) & 7) == 0;
}
