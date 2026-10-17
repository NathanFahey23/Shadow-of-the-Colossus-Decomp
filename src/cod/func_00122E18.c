#include "common.h"

extern u8 D_00167EC0[];
extern s32 D_00167F00[];

s32 func_001221D0(void);
s32 func_00123260(void *, void *, s32);

s32 func_00122E18(s32 arg0) {
    func_001221D0();
    D_00167F00[2] = arg0;
    D_00167F00[1] = D_00135958[0];
    return func_00123260(D_00167EC0, D_00167F00, 0x67);
}
