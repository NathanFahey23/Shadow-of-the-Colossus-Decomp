#include "common.h"

struct unk { s32 unk0; s32 unk4; };
typedef struct {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    u32 attr;
    u32 option;
} SemaParam;

extern s32 D_0013B790[256];
extern s32 D_0013BB90[256];
extern struct unk D_0013BF90[256];
extern s32 D_0013C790[256];

s32 func_00106ED0(void);
s32 func_00106E70(s32, s32);
s32 func_00106E30(s32);
s32 func_00106DF0(s32);
s32 func_00107470(s32);
s32 func_00106CE0(s32, s32);
s32 func_00106FF0(s32);
s32 func_00107050(s32, SemaParam *);
void func_00108FF8(s32);
s32 func_0010DCE8(void);
s32 func_0010DED8(void *);
void func_001032F8(void);
void func_00102438(void);
void func_00102500(void);

static inline s32 FindIntcHandlerIndex(void) {
    s32 i;
    for (i = 0; i < 256; i++) {
        if (D_0013BF90[i].unk4 < 0)
            return i;
    }
    return -1;
}

static inline s32 FindSemaIndex(void) {
    s32 i;
    for (i = 0; i < 256; i++) {
        if (D_0013BB90[i] < 0)
            return i;
    }
    return -1;
}

static inline void LoaderSysInitExternalIntcHandlerList(void) {
    s32 i;
    for (i = 0; i < 256; i++) {
        D_0013BF90[i].unk0 = D_0013BF90[i].unk4 = -1;
    }
}

static inline void LoaderSysInitExternalSemaList(void) {
    s32 i;
    for (i = 0; i < 256; i++) {
        D_0013BB90[i] = -1;
    }
}

static inline void LoaderSysChangeExternalThreadPriorityExceptMe(s32 priority) {
    s32 i;
    s32 threadId = func_00106ED0();
    for (i = 0; i < 256; i++) {
        if ((D_0013B790[i] != threadId) && (-1 < D_0013B790[i])) {
            func_00106E70(D_0013B790[i], priority);
        }
    }
}

static inline void LoaderSysDeleteAllExternalThreadExceptMe(void) {
    s32 threadId = func_00106ED0();
    s32 i;
    for (i = 0; i < 256; i++) {
        if ((D_0013B790[i] != threadId) && (D_0013B790[i] >= 0)) {
            func_00106E30(D_0013B790[i]);
            func_00106DF0(D_0013B790[i]);
            D_0013B790[i] = -1;
        }
    }
}

static inline void LoaderSysDeleteAllExternalIopMemory(void) {
    s32 i;
    func_00108FF8(0);
    func_0010DCE8();
    for (i = 0; i < 256; i++) {
        if (D_0013C790[i] != 0) {
            func_0010DED8((void *)D_0013C790[i]);
            D_0013C790[i] = 0;
        }
    }
}

void func_001027E0(s32 arg1) {
    D_0013BB90[FindSemaIndex()] = arg1;
}
