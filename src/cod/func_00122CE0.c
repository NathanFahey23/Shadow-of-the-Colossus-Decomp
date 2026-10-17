#include "common.h"

#include "common.h"

struct pkt_167f00 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    char str1[0x100];
    char str2[0x100];
};

void func_001221D0(void);
char *func_00128FB0(char *, void *);
s32 func_00123260(void *, void *, s32);
extern struct pkt_167f00 D_00167F00;
extern u8 D_00167EC0[];
extern s32 D_00135958;

s32 func_00122CE0(void *arg0, s32 arg1, void *arg2) {
    struct pkt_167f00 *p;
    func_001221D0();
    p = &D_00167F00;
    func_00128FB0((char *)((u32)p + 0x10), arg0);
    p->unk8 = arg1;
    func_00128FB0((char *)((u32)p + 0x110), arg2);
    p->unk4 = D_00135958;
    return func_00123260(D_00167EC0, p, 0xA);
}
