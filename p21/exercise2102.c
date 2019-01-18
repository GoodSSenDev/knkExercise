in stdio.h


#define __Wformat_ms_fprintf	__Wformat_msvcrt_printf(2,3)
#define __Wformat_ms_sprintf	__Wformat_msvcrt_printf(2,3)
#define __Wformat_ms_vprintf	__Wformat_msvcrt_printf(1,0)
#define __Wformat_ms_vfprintf	__Wformat_msvcrt_printf(2,0)
#define __Wformat_ms_vsprintf	__Wformat_msvcrt_printf(2,0)


made different macros using different set in same function.