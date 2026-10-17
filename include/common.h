/* context.h for SCUS-97472: shared by every function. Agents grow it with edit_context:
 * add a prototype or struct the moment you work one out, so the next function benefits. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef float f32;
typedef double f64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef int s32_bool;

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

/* This game keeps small globals (8 bytes or less) in $gp-relative small data. Declare those here WITHOUT
 * `extern` (for example `s32 D_8001B278;`): then the compiler reads them through $gp, like the game does.
 * With `extern`, it builds the full address instead and the function can't match. */
s32 g_allocation_offset;

s32 D_0013A11C;
void func_00104F58(s32 arg0);

/* COP0 exception program counter setter (handwritten SDK helper). */
void SetEPC(u32 epc);

/* Returns the address of a 16-byte global; layout not yet identified. */
extern u8 D_0013CF90[16];
void *func_00103CA8(void);

/* Incomplete array preserves absolute addressing for this data symbol. */
extern s32 D_001329A4[];
s32 func_0010FBE8(void);

extern s32 D_00133940[];
void func_00111D50(void);

/* Opaque global accessor; incomplete array retains absolute addressing. */
extern u8 D_0014B358[];
void *func_00112908(void);

/* Returns a 16-byte data object whose layout remains unidentified. */
extern u8 D_00133970[16];
void *func_00113520(void);

extern s32 D_00135C60[];
s32 func_00127528(void);

/* Address accessor for a 16-byte data object; layout not yet established. */
extern u8 D_00139B08[16];
void *func_0012E520(void);

/* Iterates linked blocks at object+0x1D8; count +4, entries +8.
 * Entries have stride 0x58 and a signed active flag at +0xC.
 * Returns bitwise OR of callback results for active entries. */
s32 visit_active_entries(s32 object, s32 (*callback)(void *));

/* Wrapper forwards argument 0 and supplies zero in argument 1; semantic types unknown. */
void func_00130AC8(s32 arg0, s32 arg1);
void func_0012C208(s32 arg0);

/* Allocates a 12-byte linked-block header and count zeroed 0x58-byte entries. */
void *func_00127A60(s32 allocator, s32 size);
void *func_001283D0(void *dest, s32 value, s32 size);
void *allocate_entry_block(s32 allocator, s32 count);

/* Decimal conversion wrapper and signed 64-bit parser (end pointer, radix). */
s64 parse_signed_integer64(const char *text, char **end, s32 base);
s32 decimal_string_to_int(const char *text);

/* Software floating-point runtime helpers, identified from conversion routines. */
f64 fptodp(f32 value);
s32 dpcmp(f64 a, f64 b);
f64 dpmul(f64 a, f64 b);
u32 dptoul(f64 value);
f64 dpadd(f64 a, f64 b);
f64 dpsub(f64 a, f64 b);
f64 __floatdidf(s64 value);

/* fptodp unpacks float into four words: kind, sign, exponent, u32 fraction.
 * FloatParts is defined locally in the matched source; fraction is shifted 30 bits
 * to align it with the double representation consumed by pack_double. */
f64 pack_double(s32 kind, s32 sign, s32 exponent, u64 fraction);

/* Aligns the allocation cursor, advances it by size, returns aligned start. */
u32 allocate_aligned_offset(s32 size, u32 alignment);

/* 256-byte alignment specialization of allocate_aligned_offset. */
u32 allocate_256_aligned_offset(s32 size);

/* Clears words at +4/+8 after conditional call; +8 gates the call. */
s32 func_0012E018(s32 arg0, void *arg1);
s32 func_00129830(s32 arg0, void *arg1);

/* Base-10 signed 64-bit conversion without an end-pointer output. */
s64 decimal_string_to_int64(const char *text);

/* Sets object word +4 to 0x2000 and clears 64-bit field +0x48. */
s32 func_00112088(s32 unused, void *object);

/* String-format forwarding wrapper; incomplete array preserves absolute address. */
extern char g_string_format[];
s32 func_001285C0(const char *format, ...);
void print_string(const char *text);

extern s32 D_00135958[];
s32 func_00122448(s32 arg0);

/* Six-argument transfer helper; callers supply command, buffer, size, and three words. */
s32 func_00112E40(u32 command, void *buffer, s32 size, s32 word0, s32 word1, s32 word2);

/* Visits entries 1..count-1 in relative-linked nodes. Entry stride 0x20,
 * callback argument at +0, pending flag at +0x18 cleared before callback.
 * Node: next relative offset +8, entries pointer +0x30, count +0x40. */
s32 func_00101800(void *node, s32 (*callback)(s32));

/* Removes trailing zero bits in place; returns count (32 for zero). */
s32 remove_trailing_zero_bits(u32 *value);
