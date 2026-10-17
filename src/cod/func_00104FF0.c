#include "common.h"

// TARGET: 0x00104FF0
#include "powerOff.h"
#include "common.h"
#include "putString.h"
#include "sdk/common/libcdvd.h"
#include "sdk/ee/eekernel.h"
#include "sdk/ee/sifdev.h"

#define STACKSZ 0x1000

extern u8 D_0013DAC0[STACKSZ] __attribute__((aligned(16)));
extern char D_0013A120[];
extern char D_0013A128[];
extern s32 D_0013A118;
extern cbFunc_t *D_0013A11C;

void LoaderSysSetPowerOffCallBackFunc(cbFunc_t *arg0);
void PreparePowerOff(void);
void PowerOffThread(void *arg);
void PowerOffHandler(void *arg);

void LoaderSysSetPowerOffCallBackFunc(cbFunc_t *arg0)
{
    D_0013A11C = arg0;
}

void PreparePowerOff(void)
{
    struct SemaParam sparam;
    struct ThreadParam tparam;
    s32 tid;

    sparam.initCount = 0;
    sparam.maxCount = 1;
    sparam.option = 0;
    D_0013A118 = CreateSema(&sparam);

    // ChangeThreadPriority(GetThreadId(), 2);	//No such in SotC.

    tparam.stackSize = STACKSZ; // sizeof(stack)	//Original setting order actually matches the asm, while asm field write order does not.
    tparam.gpReg = &_gp;
    tparam.entry = PowerOffThread;
    tparam.stack = (void *)D_0013DAC0;
    tparam.initPriority = 1;
    tid = CreateThread(&tparam);

    StartThread(tid, NULL);

    sceCdPOffCallback(PowerOffHandler, NULL);
}

void PowerOffThread(void *arg)
{
    s32 stat;

    while (1)
    {
        WaitSema(D_0013A118);

        if (D_0013A11C != NULL)
        {
            D_0013A11C();
        }

        PutStringS(PUTSTR_COL_LBLUEA, "\npower off request has come.\n");

        // close all files
        sceDevctl(D_0013A120, PDIOC_CLOSEALL, NULL, 0, NULL, 0);

        // dev9 power off, need to power off PS2
        while (sceDevctl(D_0013A128, DDIOC_OFF, NULL, 0, NULL, 0) < 0)
            ;

        // PS2 power off
        while (!sceCdPowerOff(&stat) || stat)
            ;
    }
}

void PowerOffHandler(void *arg)
{
    iSignalSema(D_0013A118);
}
