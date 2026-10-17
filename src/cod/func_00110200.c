#include "common.h"

// TARGET: 0x00110200

extern s32 D_001326B0;
extern char D_00138270[];

void func_00110000(char *, s32, s32);
void func_00110118(void);
void func_00107400(s32, s32);

void func_00110200(s32 arg0, s32 arg1) {
    func_00110000(D_00138270, arg0, arg1);
    func_00110118();
    func_00107400(arg0, D_001326B0 + 4);
}
