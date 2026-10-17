#include "common.h"

void func_00128FB0(void *, void *);

s32 func_00118578(void *arg0, s32 *arg1, s32 arg2) {
    if (arg0 == NULL) {
        return 0;
    }
    func_00128FB0(arg0, &arg1[arg2]);
    return 0;
}
