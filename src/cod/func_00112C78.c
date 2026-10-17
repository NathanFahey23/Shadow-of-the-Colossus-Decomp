#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern Struct12 *D_0014B364;
extern Struct12 *D_0014B36C;

void func_00112C78(s32 arg0) {
    if (arg0 < 0) {
        D_0014B364[arg0 & 0x7FFFFFFF].f0 = 0;
    } else {
        D_0014B36C[arg0].f0 = 0;
    }
}
