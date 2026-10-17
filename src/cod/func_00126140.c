#include "common.h"

typedef struct Entry {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    struct Entry *next;
} Entry;

extern Entry *D_00169F90;

s32 func_00107020(s32);
void func_00107000(s32);

void func_00126140(s32 arg0, Entry *entry) {
    entry->f8 = arg0;
    entry->fC = arg0;
    entry->f4 = 0;
    entry->f0 = 0;
    entry->f10 = 0;
    func_00107020(D_001329A4[0]);
    entry->next = D_00169F90;
    D_00169F90 = entry;
    func_00107000(D_001329A4[0]);
    do {} while (0);
}
