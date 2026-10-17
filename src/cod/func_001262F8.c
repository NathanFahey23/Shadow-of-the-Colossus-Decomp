#include "common.h"

typedef struct dwarf_fde {
  u32 length;
  s32 CIE_delta;
  void* pc_begin;
  u32 pc_range;
} fde;

typedef struct fde_vector {
  fde **array;
  u32 count;
} fde_vector;

typedef struct fde_accumulator {
  fde_vector linear;
  fde_vector erratic;
} fde_accumulator;

static inline fde *next_fde (fde *p) {
  return (fde *)(((char *)p) + p->length + sizeof (p->length));
}

static inline void fde_insert (fde_accumulator *accu, fde *this_fde) {
  accu->linear.array[accu->linear.count++] = this_fde;
}

void func_001262F8(fde *this_fde, fde_accumulator *accu, void **beg_ptr, void **end_ptr) {
  void *pc_begin = *beg_ptr;
  void *pc_end = *end_ptr;

  for (; this_fde->length != 0; this_fde = next_fde (this_fde)) {
      if (this_fde->CIE_delta == 0 || this_fde->pc_begin == 0)
        continue;

      if (accu->linear.array)
        fde_insert (accu, this_fde);

      if (this_fde->pc_begin < pc_begin)
        pc_begin = this_fde->pc_begin;
      if (this_fde->pc_begin + this_fde->pc_range > pc_end)
        pc_end = this_fde->pc_begin + this_fde->pc_range;
  }

  *beg_ptr = pc_begin;
  *end_ptr = pc_end;
}
