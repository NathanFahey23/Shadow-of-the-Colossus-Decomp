#include "common.h"

extern char g_string_format[];
extern s32 func_001285C0(const char *, ...);
void print_string(const char *text) { func_001285C0(g_string_format, text); }
