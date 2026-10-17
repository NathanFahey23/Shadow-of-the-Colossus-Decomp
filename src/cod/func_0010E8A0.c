#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    char str[0xFC];
} RpcBuf;

extern RpcBuf D_00147380;
extern u8 D_00147580[];
s32 func_0010E238(void);
s32 func_0010E338(void);
char *func_001293B8(char *, const char *, s32);
s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0010E8A0(const char *arg0) {
    if (func_0010E238() < 0) {
        return 0xFFFF0000;
    }
    if (func_0010E338() != 0) {
        return 0xFFFEFFFC;
    }
    func_001293B8(D_00147380.str, arg0, 0xFC);
    D_00147380.str[0xFB] = 0;
    if (func_00109980(D_00147580, 9, 0, &D_00147380, 0x200, &D_00147380, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_00147380.f0;
}
