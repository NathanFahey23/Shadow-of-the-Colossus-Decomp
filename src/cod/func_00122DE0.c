#include "common.h"

extern u8 D_00167EC0[];
extern u8 D_00167F00[];

void func_001221D0(void);
s32 func_00123260(void *, void *, s32);

s32 func_00122DE0(void) {
    func_001221D0();
    return func_00123260(D_00167EC0, D_00167F00, 0x66);
}
