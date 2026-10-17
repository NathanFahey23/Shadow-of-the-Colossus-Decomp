#include "common.h"

extern u8 D_00167EC0[];
extern u8 D_00167F00[];
extern s32 D_00135958[];

s32 func_001221D0(void);
volatile unsigned char func_00128FB0(void *, void *);
void func_00123260(void *, void *, s32);

void func_00122550(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    u8 *buf;
    u8 **new_var2;
    u8 *new_var;
    func_001221D0();
    buf = D_00167F00;
    new_var = buf + 0x10;
    func_00128FB0(new_var, arg0);
    *(s32 *)(buf + 8) = arg1;
    func_00128FB0(buf + 0x110, arg2);
    *(s32 *)(buf + 0xC) = arg3;
    *(s32 *)(buf + 4) = D_00135958[0];
    new_var2 = &buf;
    func_00123260(D_00167EC0, *new_var2, 2);
}
