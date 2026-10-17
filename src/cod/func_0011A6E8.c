#include "common.h"

typedef struct {
    s32 slot;
    s32 command;
} Request_0011A6E8;

extern Request_0011A6E8 D_00151900;
extern s32 D_00135630;
extern s32 D_00151E24;
extern s32 D_00151E2C;

void func_00107000(s32);
void func_00107020(s32);
s32 func_001220B0(s32);

u32 func_0011A6E8(s32 arg0) {
    if (!D_00135630) {
        return 0x81018001;
    }
    arg0 = func_001220B0(arg0);
    if (arg0 < 0) {
        return 0x81018002;
    }
    func_00107020(D_00151E2C);
    if (D_00151900.command) {
        func_00107000(D_00151E2C);
        return 0x81010010;
    }
    D_00151900.slot = arg0;
    D_00151900.command = 4;
    func_00107000(D_00151E24);
    func_00107000(D_00151E2C);
    return 0;
}
