#include "common.h"

// TARGET: 0x00122A38
// TC: 2.9
// -G0
// -O2

struct McCmd {
    s32 pad0;
    s32 field_4;
    s32 field_8;
    s32 padC;
    char path0[256];
    char path1[256];
    char path2[256];
};

extern struct McCmd D_00167F00;
extern int D_00167EC0;

void func_001221D0(void);
void *func_00128FB0(void *, const void *);
s32 func_00123260(void *, void *, s32);

s32 func_00122A38(const void *arg0, s32 arg1, const void *arg2, const void *arg3) {
    struct McCmd *cmd;
    func_001221D0();
    cmd = &D_00167F00;
    func_00128FB0(cmd->path0, arg0);
    cmd->field_8 = arg1;
    func_00128FB0(cmd->path1, arg2);
    func_00128FB0(cmd->path2, arg3);
    cmd->field_4 = *D_00135958;
    return func_00123260(&D_00167EC0, cmd, 4);
}
