#include "common.h"

// TARGET: 0x00104990
#include "netSys.h"
#include "common.h"
#include "gcc/malloc.h"
#include "gcc/stdio.h"
#include "loaderSys3.h"
#include "loaderSysFileIO.h"
#include "padSys.h"
#include "putString.h"
#include "sdk/common/netcnfif.h"
#include "sdk/ee/libmc2.h"
#include "sdk/ee/libmrpc.h"
#include "sdk/ee/libnet.h"
#include "sdk/ee/libnet/libnetdefs.h"
#include "usbSerialSys.h"

// The buffer is accessed as an offset from D_0013D180 so it mus be an struct of this form
// I'd imagine "buffer" is sceNetcnfifData_t but that struct is actually bigger
typedef struct joined_t
{
    sceSifMClientData client_data;
    s32 pad;
    u8 buffer[0x800];
} joined_t;

#define sceLibnetWaitGetInterfaceID func_00119778
#define sceLibnetWaitGetAddress func_00119808
extern s32 func_00119778();
extern s32 func_00119808();

extern int D_0013A184;
#define D_0013A304 D_0013A184

extern joined_t D_0013D000;
#define D_0013D180 D_0013D000

extern s32 D_0013A0EC;
#define D_0013A1EC D_0013A0EC

extern const char *D_00131FA0[];
#define D_001320A0 D_00131FA0

extern const char *D_00131FB8[];
#define D_001320B8 D_00131FB8

extern struct sceInetAddress D_00131FC0;
#define D_001320C0 D_00131FC0

extern char D_00136DE0[];
extern char D_00136E00[];
extern char D_00136E20[];
extern char D_00136E68[];
extern char D_00136E88[];
extern char D_00136EA0[];
extern char D_00136EC0[];
extern char D_00136EE0[];
extern char D_00136F00[];
extern char D_00136F20[];
extern char D_00136F40[];
extern char D_00136F60[];
extern char D_00136F78[];
extern char D_00136F98[];
extern char D_00136FB8[];
extern char D_00136FD8[];
extern char D_00137008[];
extern char D_00137030[];
extern char D_00137040[];
extern char D_00137050[];
extern char D_00137060[];
extern char D_00137070[];
extern char D_00137080[];
extern char D_001370A0[];
extern char D_001370B8[];
extern char D_001370D0[];
extern char D_001370E8[];
extern char D_00137108[];
extern char D_00137128[];
extern char D_00137140[];
extern char D_001371B0[];
extern char D_001371C8[];
extern char D_001371E0[];
extern char D_00137208[];
extern char D_00137230[];
extern char D_00137240[];
extern char D_00137258[];
extern char D_00137270[];
extern char D_00137290[];
extern char D_001372B0[];
extern char D_001372D8[];
extern char D_001372E8[];
extern char D_00137300[];
extern char D_00137328[];
extern char D_00137340[];
extern char D_00137360[];
extern char D_00137380[];
extern char D_001373B8[];
extern char D_001373C8[];

extern char D_0013A088[];
extern char D_0013A090[];
extern char D_0013A098[];
extern char D_0013A0A0[];
extern char D_0013A0A8[];
extern char D_0013A0B0[];
extern char D_0013A0B8[];
extern char D_0013A0C0[];
extern char D_0013A0C8[];
extern char D_0013A0D8[];
extern char D_0013A0E0[];
extern char D_0013A0E8[];
extern char D_0013A0F0[];
extern char D_0013A0F8[];
extern char D_0013A100[];
extern char D_0013A108[];
extern char D_0013A110[];



static s32 func_00104090(s32 mode);
static s32 LoadSetConfiguration(sceSifMClientData *cd, u32 *net_buf, sceNetcnfifData_t *p_data, const char *fname, const char *usr_name, u32 flags);
s32 func_00104668(s32 a0, s32 a1);
int func_00104818(void);
joined_t *LoaderSysInitTCP(void);




#define _LOAD_MODULE_ARGS(ident, argc, args)                                             \
    {                                                                                    \
        if (LoaderSysLoadIopModule("cdrom0:\\MODULES\\" ident ".IRX;1", argc, args) < 0) \
            return -1;                                                                   \
        setNewIopIdentifier(ident);                                                      \
    }

#define LOAD_MODULE_ARGS(ident, args) _LOAD_MODULE_ARGS(ident, sizeof(args), args)
#define LOAD_MODULE(ident) _LOAD_MODULE_ARGS(ident, 0, NULL)

static s32 func_00104090(s32 mode)
{
    LoaderSysLoadIopModule(D_00136DE0, 0, NULL); setNewIopIdentifier(D_0013A088);

    LoaderSysLoadIopModule(D_00136E00, 72, D_00136E20); setNewIopIdentifier(D_0013A090);

    LoaderSysLoadIopModule(D_00136E68, 20, D_00136E88); setNewIopIdentifier(D_0013A098);

    switch (mode)
    {
    case 1:
    case 2:
        LoaderSysLoadIopModule(D_00136EA0, 0, NULL); setNewIopIdentifier(D_0013A0A0);
        LoaderSysLoadIopModule(D_00136EC0, 0, NULL); setNewIopIdentifier(D_0013A0A8);
        break;
    case 5:
        LoaderSysLoadIopModule(D_00136EA0, 0, NULL); setNewIopIdentifier(D_0013A0A0);
        break;
    case 3:
    case 4:
        LoaderSysLoadIopModule(D_00136EE0, 0, NULL); setNewIopIdentifier(D_0013A0B0);
        LoaderSysLoadIopModule(D_00136F00, 0, NULL); setNewIopIdentifier(D_0013A0B8);
        break;
    case 0:
        break;
    }

    switch (mode)
    {
    case 2:
    case 4:
        LoaderSysLoadIopModule(D_00136F20, 0, NULL); setNewIopIdentifier(D_0013A0C0);
        LoaderSysLoadIopModule(D_00136F40, 0, NULL); setNewIopIdentifier(D_0013A0C8);
        break;
    case 5:
        LoaderSysLoadIopModule(D_00136F20, 0, NULL); setNewIopIdentifier(D_0013A0C0);
        LoaderSysLoadIopModule(D_00136F60, 1, D_00136F60 + 22); setNewIopIdentifier("");
        break;
    case 0:
        LoaderSysLoadIopModule(D_00136EA0, 0, NULL);
        LoaderSysLoadIopModule(D_00136EC0, 0, NULL);
        LoaderSysLoadIopModule(D_00136EE0, 0, NULL);
        LoaderSysLoadIopModule(D_00136F00, 0, NULL);
        LoaderSysLoadIopModule(D_00136F20, 0, NULL);
        LoaderSysLoadIopModule(D_00136F40, 0, NULL);
        break;
    }

    LoaderSysLoadIopModule(D_00136F78, 0, NULL); setNewIopIdentifier(D_0013A0D8);
    LoaderSysLoadIopModule(D_00136F98, 0, NULL); setNewIopIdentifier(D_0013A0E0);

    if (LoaderSysLoadIopModule(D_00136FB8, 0, NULL) < 0)
        return -1;
    setNewIopIdentifier(D_00136FD8);

    return 0;
}

static s32 LoadSetConfiguration(sceSifMClientData *cd, u32 *net_buf, sceNetcnfifData_t *p_data, const char *fname, const char *usr_name, u32 flags)
{
    sceNetcnfifArg_t if_arg;
    s32 addr;
    s32 id;
    s32 ret;

    printf(D_00137008, fname);
    if (flags & sceLIBNETF_AUTO_LOADMODULE)
    {
        if (LoaderSysLoadIopModule(D_00136FB8, 0, (void *)0) < 0)
        {
            return (-1);
        }
        setNewIopIdentifier(D_00136FD8);
    }

    /* Setup Netcnfif. */
    sceNetcnfifSetup();
    /* Prepare workarea in IOP. */
    sceNetcnfifAllocWorkarea(WORKAREA_SIZE);
    {
        sceNetcnfifArg_t *parg = &if_arg;
        while (sceNetcnfifCheck())
            ;
        sceNetcnfifGetResult(parg);
        if (parg->data < 0)
        {
            return (sceLIBNETE_NG);
        }
    }
    if (flags & sceLIBNETF_DECODE)
    {
        sceNetcnfifSetFNoDecode(sceNetcnfifArg_f_no_decode_off);
    }
    else
    {
        sceNetcnfifSetFNoDecode(sceNetcnfifArg_f_no_decode_on);
    }

    /* Get setting information. */
    FlushCache(0);
    sceNetcnfifLoadEntry(fname, sceNetcnfifArg_type_net, usr_name, p_data);
    {
        sceNetcnfifArg_t *parg = &if_arg;
        while (sceNetcnfifCheck())
            ;
        sceNetcnfifGetResult(parg);
        if (parg->data < 0)
        {
            return (sceLIBNETE_NG);
        }

        /* Get a destination address of sceNetcnfifData(). */
        {
            // Bug? sceNetcnfifGetAddr doesn't take any arguments, whatever it is, we need
            // this compiling so override the declaration here
            int sceNetcnfifGetAddr();
            sceNetcnfifGetAddr(parg->data);
        }
    }
    {
        sceNetcnfifArg_t *parg = &if_arg;
        while (sceNetcnfifCheck())
            ;
        sceNetcnfifGetResult(parg);
        if (parg->data < 0)
        {
            return (sceLIBNETE_NG);
        }

        addr = if_arg.addr;

        /* Transfer sceNetcnfifData() to IOP. */
        id = sceNetcnfifSendIOP((u32)p_data, (u32)addr, (u32)sizeof(sceNetcnfifData_t));
        if (id == 0)
        {
            return (sceLIBNETE_NG);
        }
        while (sceNetcnfifDmaCheck(id))
            ;
    }

    /* Set env. */
    sceNetcnfifSetEnv(sceNetcnfifArg_type_net);
    {
        sceNetcnfifArg_t *parg = &if_arg;
        while (sceNetcnfifCheck())
            ;
        sceNetcnfifGetResult(parg);
        if (parg->data < 0)
        {
            return (sceLIBNETE_NG);
        }
    }
    addr = if_arg.addr;

    if (flags & sceLIBNETF_AUTO_UPIF)
    {
        ret = sceInetCtlSetAutoMode(cd, net_buf, !0);
    }
    else
    {
        ret = sceInetCtlSetAutoMode(cd, net_buf, 0);
    }
    if (ret < 0)
    {
        return (ret);
    }

    ret = sceLibnetSetConfiguration(cd, net_buf, (u32)addr);
    if (ret < 0)
    {
        return (ret);
    }

    return (sceLIBNETE_OK);
}

static inline s32 _load_set_conf_only(sceSifMClientData *cd, void *net_buf, const char *conf_path, const char *usr_name, s32 flags)
{
    s32 ret;
    sceNetcnfifData_t *p_data;

    p_data = memalign(0x40, sizeof(sceNetcnfifData_t));

    if (p_data == NULL)
    {
        return sceLIBNETE_INSUFFICIENT_RESOURCES;
    }

    ret = LoadSetConfiguration(cd, net_buf, p_data, conf_path, usr_name, flags);
    free(p_data);
    return ret;
}

void *func_table[] = {&LoaderSysInitTCP, &sceMc2Init, &loaderSetResetCallback, &usbSerialSysPutString};




s32 func_00104668(s32 a0, s32 a1)
{
    const char *conf_path;
    const char *usr_name;
    u32 flags;

    // I'd like to know why the order is like this...
    flags = 0;
    if (a0 == 0)
    {
        conf_path = D_00137080;
        usr_name = D_001320A0[a1];
        PutStringS(PUTSTR_COL_LGREEN2, D_001370A0);
    }
    else
    {
        PutStringS(PUTSTR_COL_LLBLUE3, D_001370B8);
        conf_path = D_001370D0;
        usr_name = D_001320B8[a1];
        flags = 1;
    }

    printf(D_001370E8);

    if (_load_set_conf_only(&D_0013D180.client_data, &D_0013D180.buffer, conf_path, usr_name, flags) < 0)
    {
        printf(D_00137108);
        return 0;
    }

    if (get_interface_id(&D_0013D180.client_data, &D_0013D180.buffer, &D_0013A304) < 0)
    {
        printf(D_00137128);
        return 0;
    }

    sceInetCtlUpInterface(&D_0013D180.client_data, &D_0013D180.buffer, D_0013A304);

    if (wait_get_addr_only(&D_0013D180.client_data, &D_0013D180.buffer, &D_0013A304, &D_001320C0) < 0)
    {
        printf(D_00137140);
        return 0;
    }

    return 1;
}

// These 2 strings are present but unreferenced, so add them to this dummy function
static inline void unused(void)
{
    printf("start_thread(): CreateThread() failed.\n");
    printf("start_thread(): StartThread() failed.\n");
}

int func_00104818(void)
{
    s32 s1;
    s32 r;
    s32 ret;

    PutStringS(PUTSTR_COL_LLBLUE, D_0013A0E8);

    s1 = 0;
    r = 0;
    while (s1++ < 0x1E && !(r = padSysReadForLoader()))
    {
        Sync();
        ExecBaseProc();
    }

    switch (r)
    {
    case 0x800:
        ret = 3;
        PutStringS(PUTSTR_COL_LLBLUE, D_001371B0);
        break;
    case 0x20:
        ret = 1;
        PutStringS(PUTSTR_COL_LLBLUE, D_001371C8);
        break;
    case 0x10:
        ret = 2;
        PutStringS(PUTSTR_COL_LLBLUE, D_001371E0);
        break;
    case 0x80:
        ret = 4;
        PutStringS(PUTSTR_COL_LLBLUE, D_00137208);
        break;
    case 0x40:
        ret = 5;
        PutStringS(PUTSTR_COL_LLBLUE, D_00137230);
        break;
    default:
        ret = 0;
        PutStringS(PUTSTR_COL_LLBLUE, D_00137240);
        break;
    }
    return ret;
}

joined_t *LoaderSysInitTCP(void)
{
    static s32 D_0013A1EC = 0;
    char hostStr[0x80];
    char ipStr[0x80];
    s32 temp_v0;

    if (D_0013A1EC != 0)
    {
        return &D_0013D180;
    }

    temp_v0 = func_00104818();
    func_00104090(temp_v0);
    sceSifMInitRpc(0);
    sceLibnetInitialize(&D_0013D180.client_data, 0x800, 0x2000, 0x20);
    if (sceLibnetRegisterHandler(&D_0013D180.client_data, &D_0013D180.buffer) < 0)
    {
        printf(D_00137258);
        while (1)
        {
            // Infinite loop
        }
    }
    LoaderSysLoadIopModule(D_00137270, 0, 0);
    LoaderSysLoadIopModule(D_00137290, 0, 0);
    PutString(PUTSTR_COL_WHITE, D_001372B0);

    switch (temp_v0)
    {
    case 0:
        if (func_00104668(1, temp_v0))
        {
            break;
        }
        PutStringS(PUTSTR_COL_LORANGE, D_001372D8);
        PutString(PUTSTR_COL_WHITE, D_001372E8);
        temp_v0 = 3;
        /* fallthrough */
    default:
        if (func_00104668(0, temp_v0))
        {
            break;
        }
        PutStringS(PUTSTR_COL_LORANGE, D_001372D8);
        PutString(PUTSTR_COL_WHITE, D_00137300);
    }

    if (sceInetAddress2String(&D_0013D180.client_data, &D_0013D180.buffer, (char *)&ipStr, sizeof(ipStr), &D_001320C0) != 0)
    {
        printf(D_00137328);
        while (1)
        {
            // Infinite loop
        }
    }

    if (sceInetAddress2Name(&D_0013D180.client_data, &D_0013D180.buffer, 0, (char *)&hostStr, sizeof(hostStr), &D_001320C0, 0, 0) != 0)
    {
        hostStr[0] = 0;
        printf(D_00137340, (char *)&ipStr);
    }
    else
    {
        printf(D_00137360, (char *)&hostStr, (char *)&ipStr);
    }

    PutString(PUTSTR_COL_WHITE, D_0013A0F0);
    LoaderSysUnloadIopModuleByName(D_0013A0F8, 0, 0, 0);
    LoaderSysUnloadIopModuleByName(D_0013A100, 0, 0, 0);
    PutString(PUTSTR_COL_WHITE, D_0013A108);
    PutString(PUTSTR_COL_CYAN, D_00137380);
    if (hostStr[0] != 0)
    {
        PutString(PUTSTR_COL_CYAN, D_001373B8);
        PutString(PUTSTR_COL_LGREEN3, D_0013A110, (char *)&hostStr);
    }
    PutString(PUTSTR_COL_CYAN, D_001373C8);
    PutString(PUTSTR_COL_LGREEN3, D_0013A110, (char *)&ipStr);
    PutString(PUTSTR_COL_CYAN, D_00137380);
    PutStringS(PUTSTR_COL_CYAN, D_0013A108);
    D_0013A1EC = 1;

    return &D_0013D180;
}
