#include "common.h"

struct object {
  void *pc_begin;
  void *pc_end;
  void *fde_begin;
  void *fde_array;
  u32 count;
  struct object *next;
};

extern struct object *D_00169F90;

s32 func_00107020(s32);
void func_00107000(s32);
void func_001277C0(void *);
void func_00127448(void);

void *func_001261D8(void *begin) {
    struct object **p;

    func_00107020(D_001329A4[0]);
    p = &D_00169F90;
    while (*p) {
        if ((*p)->fde_begin == begin) {
            struct object *ob = *p;
            *p = ob->next;
            if (ob->fde_array && ob->fde_array != begin) {
                func_001277C0(ob->fde_array);
            }
            func_00107000(D_001329A4[0]);
            return ob;
        }
        p = &((*p)->next);
    }
    func_00107000(D_001329A4[0]);
    func_00127448();
}
