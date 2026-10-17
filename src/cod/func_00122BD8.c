#include "common.h"

extern u8 D_00167EC0[];
extern u8 D_00167F00[];

s32 func_001221D0(void);
void func_00128FB0(void *, void *);
s32 func_00123260(void *, void *, s32);

s32 func_00122BD8(void *arg0) {
    u8 *buf;
    func_001221D0();
    buf = D_00167F00;
    func_00128FB0(buf + 0x10, arg0);
    return func_00123260(D_00167EC0, buf, 7);
}
