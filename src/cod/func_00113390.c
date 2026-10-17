#include "common.h"

typedef struct {
    s16 field0;
    s16 field2;
    s16 field4;
    s16 field6;
    s32 field8;
    s32 fieldC;
} GsScreen;

void *func_00113520(void);
s32 func_00107320(s32);
void func_00107470(s32);
void func_00106CE0(s32, s32);
void func_00106BE0(s32, s32, s32);

void func_00113390(s16 mode, s16 w, s16 h, s16 flag) {
    GsScreen *screen;
    u64 csr;

    switch (mode) {
    case 0:
        screen = func_00113520();
        *(volatile u64 *)0x12001000 = 0x200;
        screen->field0 = w;
        csr = *(volatile u64 *)0x12001000;
        {
            screen->field2 = h;
            screen->field6 = (csr >> 16) & 0xFF;
            func_00107320(0xFF00);
            screen->field4 = (flag != 0);
            if (screen->field8 != 0) {
                func_00107470(2);
                func_00106CE0(2, screen->fieldC);
                screen->field8 = 0;
                screen->fieldC = 0;
            }
        }
        func_00106BE0(w & 1, h & 0xFF, flag & 1);
        break;

    case 1:
        *(volatile u64 *)0x12001000 = 0x100;
        break;

    case 5:
        screen = func_00113520();
        csr = *(volatile u64 *)0x12001000;
        screen->field4 = (flag != 0);
        screen->field0 = w;
        screen->field2 = h;
        screen->field6 = (csr >> 16) & 0xFF;
        func_00106BE0(w & 1, h & 0xFF, flag & 1);
        break;
    }
}
