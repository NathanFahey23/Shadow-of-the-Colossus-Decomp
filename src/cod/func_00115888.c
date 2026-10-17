#include "common.h"

extern u8 D_001385B8;
extern void *D_001339F8[];
void func_00128FB0(u8 *, void *);

void func_00115888(u32 arg0, u8 *arg1) {
    if (arg0 < 4) {
        func_00128FB0(arg1, D_001339F8[arg0]);
        return;
    }
    *arg1 = D_001385B8;
}
