#include "common.h"

void func_00108EF8(void *);
void func_00107A08(s32);
s32 func_00109B80(void *);
extern s32 D_00133A50;
extern u8 D_001389B0[];
extern u8 D_001355C0[];

s32 func_00117838(s32 arg0) {
    if (arg0 == 0) {
        if (D_00133A50 > 0) {
            func_00108EF8(D_001389B0);
        }
        while (func_00109B80(D_001355C0) != 0) {
            func_00107A08(4000);
        }
        return 0;
    }
    return func_00109B80(D_001355C0);
}
