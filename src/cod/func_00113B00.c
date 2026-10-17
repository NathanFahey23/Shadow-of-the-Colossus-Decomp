#include "common.h"

void func_00114530(char *);
void func_00113780(char *);

void func_00113B00(char *arg0, s32 arg1) {
    s32 flag = arg1 & 1;
    s32 *p = &arg1;
    func_00114530(arg0 + (flag * 0x28));
    if (flag) {
        func_00113780(arg0 + 0x140);
    } else {
        func_00113780(arg0 + 0x50);
    }
}
