#include "common.h"

void func_00108FF8(s32);
s32 func_0010DCE8(void);
void func_0010DED8(s32);
extern s32 D_0013C790[];

void func_00102C90(void) {
    s32 *p;
    s32 count = 255;

    func_00108FF8(0);
    func_0010DCE8();

    p = D_0013C790;
    do {
        s32 val = *p;
        if (val != 0) {
            func_0010DED8(val);
            *p = 0;
        }
        count--;
        p++;
    } while (count >= 0);
}
