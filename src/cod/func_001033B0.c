#include "common.h"

// TARGET: 0x001033B0

extern char D_00136AE8[];
extern char D_00136B00[];
extern char D_00136B10[];
extern char D_00136B48[];
extern char D_00136B58[];
extern char D_00136B98[];
extern char D_00136BB8[];
extern char D_00136BC8[];
extern char D_00136BD8[];
extern char D_00136BF8[];
extern char D_00136C10[];
extern char D_00136C30[];
extern char D_00136C50[];
extern char D_00136C70[];
extern char D_00136C90[];
extern char D_00136CB0[];
extern char D_00136CD0[];
extern char D_00136CE0[];
extern char D_00136CF0[];
extern char D_00136D00[];
extern char D_00136D10[];
extern char D_00136D30[];
extern char D_00136D60[];
extern char D_00136D78[];
extern char D_0013A018[];
extern char D_0013A020[];
extern char D_0013A028[];
extern char D_0013A038[];
extern char D_0013A040[];

#define LOAD_MOD(ident, path)     {         s32 result;         result = LoaderSysLoadIopModule(path, 0, NULL);         if (result < 0)         {             while (1)                 ;         }         setNewIopIdentifier(ident);     }
#include "loaderSys3.h"
#include "common.h"
#include "ee/libdbc.h"
#include "ee/sifrpc.h"
#include "gcc/stdio.h"
#include "gcc/stdlib.h"
#include "loaderSys.h"
#include "loaderSys2.h"
#include "loaderSysException.h"
#include "loaderSysFileIO.h"
#include "loaderSysMemprint.h"
#include "padSys.h"
#include "powerOff.h"
#include "putString.h"
#include "sdk/common/libcdvd.h"
#include "usbSerialSys.h"

extern s32 D_0013A010;
extern s32 D_0013A014;

void LoaderSysRebootIop(const char *arg0)
{
    PutString(PUTSTR_COL_CYAN, D_00136AE8);
    PutString(PUTSTR_COL_TEALA, D_0013A018, arg0);
    PutStringS(PUTSTR_COL_CYAN, D_0013A020);

    while (sceSifRebootIop(arg0) == 0)
        ;

    while (sceSifSyncIop() == 0)
        ;

    PutStringS(PUTSTR_COL_CYAN, D_0013A028);
}

s32 LoaderSysLoadIopModule(const char *path, s32 arg_count, const char *args)
{
    s32 result;

    PutString(PUTSTR_COL_LBLUE, D_00136B00);
    PutString(PUTSTR_COL_LLBLUE, D_0013A018, path);
    PutStringS(PUTSTR_COL_LBLUE, D_0013A020);
    result = sceSifLoadModule(path, arg_count, args);
    if (result < 0)
    {
        PutStringS(PUTSTR_COL_LORANGE, D_00136B10, path, result);
        return -1;
    }
    PutStringS(PUTSTR_COL_LBLUE, D_0013A028);
    return 0;
}

s32 LoaderSysUnloadIopModuleByName(const char *arg0, s32 arg1, s32 arg2, s32 *arg3)
{
    s32 modId;
    s32 success;
    s32 dummy;

    PutString(PUTSTR_COL_LBLUE, D_00136B48);
    PutString(PUTSTR_COL_LLBLUE, D_0013A018, arg0);
    PutStringS(PUTSTR_COL_LBLUE, D_0013A020);
    modId = sceSifSearchModuleByName(arg0);

    if (modId >= 0)
    {
        success = sceSifStopModule(modId, 1, "", arg3 ? arg3 : &dummy);
        if (success >= 0)
        {
            success = sceSifUnloadModule(modId);
        }
    }
    else
    {
        success = modId;
    }

    if (success < 0)
    {
        PutStringS(PUTSTR_COL_LORANGE, D_00136B58, arg0, success);
        return -1;
    }

    PutStringS(PUTSTR_COL_LBLUE, D_0013A028);
    return success;
}

#define LOAD_MODULE(ident)                                                             \
    {                                                                                  \
        s32 result;                                                                    \
        result = LoaderSysLoadIopModule("cdrom0:\\MODULES\\" ident ".IRX;1", 0, NULL); \
        if (result < 0)                                                                \
        {                                                                              \
            while (1)                                                                  \
                ;                                                                      \
        }                                                                              \
        setNewIopIdentifier(ident);                                                    \
    }

void func_001033B0()
{
    sceSifInitRpc(0);
    sceSifInitIopHeap();

    PutString(PUTSTR_COL_WHITE, D_00136B98);
    // PutString(PUTSTR_COL_LGREEN, D_0013A038, __DATE__, __TIME__);
    PutString(PUTSTR_COL_LGREEN, D_0013A038, D_00136BB8, D_00136BC8);
    PutStringS(PUTSTR_COL_WHITE, D_0013A040);
    PutStringS(PUTSTR_COL_LLBLUE, D_00136BD8);
    sceCdInit(0);
    sceCdMmode(2);
    PutStringS(PUTSTR_COL_LLBLUE, D_0013A028);

    LoaderSysRebootIop(D_00136BF8);

    sceSifInitRpc(0);
    sceSifLoadFileReset();
    sceFsReset();
    sceCdInit(0);
    sceCdMmode(2);
    PreparePowerOff();
    sceSifLoadFileReset();
    sceFsReset();
    sceDmaReset(1);

    LOAD_MOD("SIO2MAN", D_00136C10);

    LOAD_MOD("DBCMAN", D_00136C30);

    LOAD_MOD("SIO2D", D_00136C50);

    LOAD_MOD("DS1O_D", D_00136C70);

    sceSifLoadFileReset();
    sceFsReset();
    sceDmaReset(1);
    sceDbcInit();
    padsysInit();

    LOAD_MOD("USBD", D_00136C90);

    LOAD_MOD("PL2303", D_00136CB0);
    usbSerialSysInit();
}

extern s32 D_0013A078;                // Dummy
#define LOADER_RESET_CALLBACK_NUM D_0013A07C
extern s32 D_0013A07C; // 0x0013A17C
extern s32 D_0013A080;
extern s32 D_0013A084;

extern char D_0013CF90[16]; // Filled at runtime: "cdrom0:\SCPS_15"
#define MAX_RESET_CALLBACKS 10
#define RESET_CALLBACK_LIST D_0013CFA0
extern t_resetCallback D_0013CFA0[MAX_RESET_CALLBACKS];

s32 end;
static inline void loaderPrintMessage()
{
    void *heap_base;

    REG_SP_INT(sp);
    REG_GP_INT(gp);
    heap_base = (void *)malloc(1);
    free(heap_base);
    PutStringS(PUTSTR_COL_WHITE, D_00136CD0, gp);
    PutStringS(PUTSTR_COL_WHITE, D_00136CE0, sp);
    PutStringS(PUTSTR_COL_WHITE, D_00136CF0, heap_base);
    PutStringS(PUTSTR_COL_WHITE, D_00136D00, &end);
    PutStringS(PUTSTR_COL_WHITE, D_00136D10, D_0013A010);
    memset(&RESET_CALLBACK_LIST, 0, sizeof(RESET_CALLBACK_LIST));
    LOADER_RESET_CALLBACK_NUM = 0;
}

void loaderSetResetCallback(t_resetCallback callback)
{
    if (LOADER_RESET_CALLBACK_NUM == MAX_RESET_CALLBACKS)
    {
        LoaderSysPrintf(D_00136D30);
        LOADER_RESET_CALLBACK_NUM = 0;
    }

    RESET_CALLBACK_LIST[LOADER_RESET_CALLBACK_NUM++] = callback;
}

void loaderExecResetCallback(void)
{
    s32 i;

    for (i = 0; i < MAX_RESET_CALLBACKS; i++)
    {
        if (RESET_CALLBACK_LIST[i] != NULL)
        {
            RESET_CALLBACK_LIST[i]();
        }
    }

    memset(&RESET_CALLBACK_LIST, 0, sizeof(RESET_CALLBACK_LIST));
    LOADER_RESET_CALLBACK_NUM = 0;
}

void loaderLoop(void)
{
    s32 reset_count;

    reset_count = 0;
    loaderPrintMessage();

    while (1)
    {
        SetHeapStartPoint(D_0013A010);
        D_0013A014 = execProgWithThread(D_00136D60, 2);
        SleepThread();

        loaderExecResetCallback();
        reset_count++;
        LoaderSysExecuteRecoveryFirstProcess();
        ChangeThreadPriority(D_0013A084, 1);
        LoaderSysDeleteAllExternalIntcHandler();
        LoaderSysDeleteAllExternalThread();
        LoaderSysDeleteAllExternalSema();
        LoaderSysDeleteAllExternalIopMemory();
        ReinitDisp();
        PutStringS(PUTSTR_COL_WHITE, D_00136D78, reset_count);
    }
}

s32 main(s32 argc, char **argv)
{
    REG_SP(sp);
    s32 i;
    s32 heap;
    s32 heap_size;

    printf("ld: start: argc:%d \n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("ld: \targc %d: %s\n", i, argv[i]);
    }

    if (argc != 0)
    {
        strncpy(D_0013CF90, argv[0], 16);
        D_0013CF90[15] = 0;
    }
    else
    {
        D_0013CF90[0] = 0;
    }

    D_0013A084 = GetThreadId();
    InitDisp();
    initmemprintf(0x2000000, 0x7ffff00);
    func_001033B0();

    heap = LoaderSysGetHeapBase();
    heap_size = LoaderSysGetHeapSize();
    D_0013A010 = ALIGN(heap + heap_size, 0x10);

    InitException();
    LoaderSysInitExternalIntcHandlerList();
    LoaderSysInitExternalThreadList();
    LoaderSysInitExternalSemaList();
    LoaderSysInitExternalIopMemoryList();
    ChangeThreadPriority(D_0013A084, 1);
    PutStringS(PUTSTR_COL_WHITE, "\nInitialize loader complete.\n\n\0");
    D_0013A080 = (s32)sp;
    loaderLoop();

    return 0;
}

char *LoaderSysGetBootArg(void)
{
    return D_0013CF90;
}

void LoaderSysHookPoint(void)
{
}
