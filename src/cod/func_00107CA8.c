#include "common.h"

extern s32 D_00132284;
extern char D_001440A0[];

void func_00112330(char *str);

void func_00107CA8(s32 c) {
    s32 cursor = D_00132284;
    if (cursor >= 0x7E) {
        D_00132284 = 0;
        D_001440A0[0x7F] = 0;
        func_00112330(D_001440A0);
        cursor = D_00132284;
    }
    if (c == '\n') {
        D_00132284 = 0;
        D_001440A0[cursor] = c;
        D_001440A0[cursor + 1] = 0;
        func_00112330(D_001440A0);
    } else {
        D_00132284 = cursor + 1;
        D_001440A0[cursor] = c;
    }
}
