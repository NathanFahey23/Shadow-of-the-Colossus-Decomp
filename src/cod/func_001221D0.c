#include "common.h"

extern u8 D_00167F00[];

s32 func_00122128(void);

s32 func_001221D0(void) {
    s32 ret = func_00122128();
    func_001283D0(D_00167F00, 0, 0x310);
    return ret;
}
