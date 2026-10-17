#include "common.h"

extern u8 D_00167EC0[];
extern u8 D_00167F00[];

s32 func_001221D0(void);
void func_00128FB0(void *, void *);
void func_00123260(void *, void *, s32);

void func_00122458(void *arg0, s32 arg1) {
    u8 *buf;
    u8 *new_var;
    u8 **new_var2;
    func_001221D0();
    buf = D_00167F00;
    func_00128FB0(buf + 0x10, arg0);
    new_var = buf + 8;
    *(s32 *)new_var = arg1;
    new_var2 = &buf;
    func_00123260(D_00167EC0, *new_var2, 0);
}
