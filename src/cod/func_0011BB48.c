#include "common.h"

void *func_00128CDC(char *, s32);
char *func_00129578(char *, s32);
u32 func_001290C4(char *);

s32 func_0011BB48(char *arg0) {
    if (func_00128CDC(arg0, 0x2F) != 0) {
        if (func_001290C4(func_00129578(arg0, 0x2F) + 1) >= 0x20) {
            return 0;
        }
    } else if (func_001290C4(arg0) >= 0x20) {
        return 0;
    }
    return 1;
}
