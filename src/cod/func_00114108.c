#include "common.h"

extern char D_001384A8[];
s32 func_0010ADC0(const char *, s32);
s32 func_0010B408(s32, void *, s32);
s32 func_0010B050(s32);
s32 func_00127500(const char *);

s32 func_00114108(void) {
    char buf[0x100];
    s32 fd = func_0010ADC0(D_001384A8, 1);
    u32 i;
    if (fd < 0) {
        return -1;
    }
    for (i = 0; i < 0x100; i++) {
        func_0010B408(fd, &buf[i], 1);
        if (buf[i] == 0) {
            break;
        }
    }
    func_0010B050(fd);
    return func_00127500(&buf[i - 9]) > 0x1315670;
}
