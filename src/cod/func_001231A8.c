#include "common.h"

s32 func_00106FE0(void *);
extern volatile s32 D_00135960;
extern u8 D_00138DF0[];

s32 func_001231A8(void) {
    struct {
        s32 unk0;
        s32 count;
        s32 init;
        s32 unkC;
        s32 unk10;
        void *attr;
    } sem;
    if (D_00135960 >= 0) {
        return -1;
    }
    sem.count = 1;
    sem.attr = D_00138DF0;
    sem.init = 0;
    D_00135960 = func_00106FE0(&sem);
    if (D_00135960 < 0) {
        return -1;
    }
    return D_00135960;
}
