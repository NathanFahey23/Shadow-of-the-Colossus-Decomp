#include "common.h"

// -fno-schedule-insns
void func_0011C198(s32);
s32 func_00121EF8(void);
s32 func_001220F8(s32);
extern s32 D_00135630;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} ArgStruct;

s32 func_0011A408(ArgStruct *arg0) {
    s32 res;

    if (D_00135630 == 0) {
        return 0x81018001;
    }
    if ((arg0->unk4 != 2 && arg0->unk4 != 3) || arg0->unk8 != 0) {
        return 0x81010016;
    }
    res = func_00121EF8();
    if (res < 0) {
        return 0x81010017;
    }
    func_0011C198(res);
    return func_001220F8(res);
}
