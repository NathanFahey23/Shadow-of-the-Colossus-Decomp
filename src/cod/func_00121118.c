#include "common.h"

extern s32 D_00163CC0;
struct unk_163cc8 {
    s32 unk0;
    s32 unk4;
    s32 pad[7];
};
extern struct unk_163cc8 D_00163CC8[2];
void func_00106FF0(s32);
void func_00115F70(s32);

s32 func_00121118(void) {
    s32 i;
    if (D_00163CC0 >= 0) {
        func_00106FF0(D_00163CC0);
    }
    for (i = 0; i < 2; i++) {
        if (D_00163CC8[i].unk0 != 0) {
            func_00115F70(D_00163CC8[i].unk4);
            D_00163CC8[i].unk0 = 0;
        }
    }
    return 1;
}
