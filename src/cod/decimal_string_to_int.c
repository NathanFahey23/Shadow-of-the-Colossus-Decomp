#include "common.h"

s64 parse_signed_integer64(const char *, char **, s32);
s32 decimal_string_to_int(const char *text) { return (s32)parse_signed_integer64(text, 0, 10); }
