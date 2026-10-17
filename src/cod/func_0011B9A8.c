#include "common.h"

s32 func_0011B050(void);
void func_0011B670(s32, s32, void *);

s32 func_0011B9A8(void) {
    s32 val = func_0011B050();
    if (val != 0) {
        return val;
    }
    func_0011B670(0, 0, &val);
    return val;
}
