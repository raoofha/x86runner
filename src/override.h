#include <stdint.h>
//#if defined(__TINYC__)
//#pragma pack(1)
//#pragma pack(8)
//#endif

#define __builtin_bswap32(arg) ((((uint16_t*) &arg)[0] << 16) + ((uint16_t*) &arg)[1])
#define __builtin_prefetch(a, b, c)
#define __builtin_bswap16(arg) ((((uint8_t*) &arg)[0] << 8) + ((uint8_t*) &arg)[1])
//#define sched_yield() (goto fini)
//#define syscall(number, ...) syscall(number, __VA_ARGS__)
#ifdef __EMSCRIPTEN_major__
#define __sighandler_t sighandler_t
#define SYS_gettid 224 
long syscall(long number, ...);
#endif
