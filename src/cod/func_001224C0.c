#include "common.h"

extern u8 D_00167EC0[];
extern u8 D_00167F00[];

s32 func_001221D0(void);
void func_00128FB0(void *, void *);
void func_00123260(void *, void *, s32);

void func_001224C0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *buf;
    u8 **new_var2;
    func_001221D0();
    buf = D_00167F00;
    func_00128FB0(buf + 0x10, arg0);
    *(s32 *)buf = arg3;
    *(s32 *)(buf + 8) = arg1;
    *(s32 *)(buf + 0xC) = arg2;
    new_var2 = &buf;
    func_00123260(D_00167EC0, *new_var2, 1);
}
