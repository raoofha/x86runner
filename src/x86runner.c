#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <elf.h>
#include <sys/mman.h>
//#include <sys/user.h>
#define PAGE_SIZE 0x10000

#include <SDL2/SDL.h>
#define GL_GLEXT_PROTOTYPES
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_opengl_glext.h>
void emscripten_sleep (unsigned int ms);

#include "emu/x87emu_private.h"
int Run(x86emu_t *emu, int step); // 0 if run was successfull, 1 if error in x86 world
#include "x86emu.h"
#include "box86context.h"
//#include "librarian/library_private.h"
#include "bridge.h"


#ifdef __EMSCRIPTEN_major__
long syscall(long number, ...) { return 0; }
#endif

typedef void (*wrapper_t)(x86emu_t* emu, uintptr_t fnc);
uintptr_t AddCheckBridge(bridge_t* bridge, wrapper_t w, void* fnc, int N) { return 0; }
uint32_t RunFunctionWithEmu(x86emu_t *emu, int QuitOnLongJump, uintptr_t fnc, int nargs, ...) { return 0; }
int my_setcontext(x86emu_t* emu, void* ucp) { return 0; }
void emit_signal(x86emu_t* emu, int sig, void* addr, int code) {}
void my_cpuid(x86emu_t* emu, uint32_t tmp32u) {}
void x86Int3(x86emu_t* emu) {}
int GetTID() { return 0; }
x86emu_t* x86emu_fork(x86emu_t* e, int forktype) { return e; }

uint16_t Pop16(x86emu_t *emu)
{
    uint16_t* st = ((uint16_t*)(R_ESP));
    R_ESP += 2;
    return *st;
}

void Push16(x86emu_t *emu, uint16_t v)
{
    R_ESP -= 2;
    *((uint16_t*)R_ESP) = v;
}
void x86Syscall(x86emu_t *emu) {}


static uint32_t x86emu_parity_tab[8] =
{
	0x96696996,
	0x69969669,
	0x69969669,
	0x96696996,
	0x69969669,
	0x96696996,
	0x96696996,
	0x69969669,
};

#define PARITY(x)   (((emu->x86emu_parity_tab[(x) / 32] >> ((x) % 32)) & 1) == 0)
#define XOR2(x) 	(((x) ^ ((x)>>1)) & 0x1)
void UpdateFlags(x86emu_t *emu)
{
    uint32_t cc;
    uint32_t lo, hi;
    uint32_t bc;
    uint32_t cnt;

    switch(emu->df) {
        case d_none:
            return;
        case d_add8:
            CONDITIONAL_SET_FLAG(emu->res & 0x100, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);

            cc = (emu->op1 & emu->op2) | ((~emu->res) & (emu->op1 | emu->op2));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_add16:
            CONDITIONAL_SET_FLAG(emu->res & 0x10000, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (emu->op1 & emu->op2) | ((~emu->res) & (emu->op1 | emu->op2));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_add32:
            lo = (emu->op2 & 0xFFFF) + (emu->op1 & 0xFFFF);
            hi = (lo >> 16) + (emu->op2 >> 16) + (emu->op1 >> 16);
            CONDITIONAL_SET_FLAG(hi & 0x10000, F_CF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (emu->op1 & emu->op2) | ((~emu->res) & (emu->op1 | emu->op2));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_and8:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_and16:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_and32:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_dec8:
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | 1)) | (~emu->op1 & 1);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_dec16:
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | 1)) | (~emu->op1 & 1);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_dec32:
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | 1)) | (~emu->op1 & 1);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_inc8:
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = ((1 & emu->op1) | (~emu->res)) & (1 | emu->op1);
            CONDITIONAL_SET_FLAG(XOR2(cc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_inc16:
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (1 & emu->op1) | ((~emu->res) & (1 | emu->op1));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_inc32:
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (1 & emu->op1) | ((~emu->res) & (1 | emu->op1));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_imul8:
            lo = emu->res & 0xff;
            hi = (emu->res>>8)&0xff;
            if (((lo & 0x80) == 0 && hi == 0x00) ||
                ((lo & 0x80) != 0 && hi == 0xFF)) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(lo & 0xff), F_PF);
            break;
        case d_imul16:
            lo = (uint16_t)emu->res;
            hi = (uint16_t)(emu->res >> 16);
            if (((lo & 0x8000) == 0 && hi == 0x00) ||
                ((lo & 0x8000) != 0 && hi == 0xFFFF)) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(lo & 0xff), F_PF);
            break;
        case d_imul32:
            if (((emu->res & 0x80000000) == 0 && emu->op1 == 0x00) ||
                ((emu->res & 0x80000000) != 0 && emu->op1 == 0xFFFFFFFF)) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_mul8:
            lo = emu->res & 0xff;
            hi = (emu->res>>8)&0xff;
            if (hi == 0) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(lo & 0xff), F_PF);
            break;
        case d_mul16:
            lo = (uint16_t)emu->res;
            hi = (uint16_t)(emu->res >> 16);
            if (hi == 0) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(lo & 0xff), F_PF);
            break;
        case d_mul32:
            if (emu->op1 == 0) {
                CLEAR_FLAG(F_CF);
                CLEAR_FLAG(F_OF);
            } else {
                SET_FLAG(F_CF);
                SET_FLAG(F_OF);
            }
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_or8:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_or16:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_or32:
            CLEAR_FLAG(F_OF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            break;
        case d_neg8:
            CONDITIONAL_SET_FLAG(emu->op1 != 0, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = emu->res | emu->op1;
            CONDITIONAL_SET_FLAG(XOR2(bc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_neg16:
            CONDITIONAL_SET_FLAG(emu->op1 != 0, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = emu->res | emu->op1;
            CONDITIONAL_SET_FLAG(XOR2(bc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_neg32:
            CONDITIONAL_SET_FLAG(emu->op1 != 0, F_CF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = emu->res | emu->op1;
            CONDITIONAL_SET_FLAG(XOR2(bc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_shl8:
            if (emu->op2 < 8) {
                cnt = emu->op2 % 8;
                if (cnt > 0) {
                    cc = emu->op1 & (1 << (8 - cnt));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                }
                if (cnt == 1) {
                    CONDITIONAL_SET_FLAG((((emu->res & 0x80) == 0x80) ^(ACCESS_FLAG(F_CF) != 0)), F_OF);
                } else {
                    CLEAR_FLAG(F_OF);
                }
            } else {
                CONDITIONAL_SET_FLAG((emu->op1 << (emu->op2-1)) & 0x80, F_CF);
                CLEAR_FLAG(F_OF);
                CLEAR_FLAG(F_SF);
                SET_FLAG(F_PF);
                SET_FLAG(F_ZF);
            }
            break;
        case d_shl16:
            if (emu->op2 < 16) {
                cnt = emu->op2 % 16;
                if (cnt > 0) {
                    cc = emu->op1 & (1 << (16 - cnt));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                }
                if (cnt == 1) {
                    CONDITIONAL_SET_FLAG(((!!(emu->res & 0x8000)) ^(ACCESS_FLAG(F_CF) != 0)), F_OF);
                } else {
                    CLEAR_FLAG(F_OF);
                }
            } else {
                CONDITIONAL_SET_FLAG((emu->op1 << (emu->op2-1)) & 0x8000, F_CF);
                CLEAR_FLAG(F_OF);
                CLEAR_FLAG(F_SF);
                SET_FLAG(F_PF);
                SET_FLAG(F_ZF);
            }
            break;
        case d_shl32:
            if (emu->op2 > 0) {
                cc = emu->op1 & (1 << (32 - emu->op2));
                CONDITIONAL_SET_FLAG(cc, F_CF);
                CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
                CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
                CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            }
            if (emu->op2 == 1) {
                CONDITIONAL_SET_FLAG(((!!(emu->res & 0x80000000)) ^
                                        (ACCESS_FLAG(F_CF) != 0)), F_OF);
            } else {
                CLEAR_FLAG(F_OF);
            }
            break;
        case d_sar8:
            if (emu->op2 < 8) {
                if(emu->op2) {
                    cc = emu->op1 & (1 << (emu->op2 - 1));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
                }
            } else {
                if (emu->op1&0x80) {
                    SET_FLAG(F_CF);
                    CLEAR_FLAG(F_ZF);
                    SET_FLAG(F_SF);
                    SET_FLAG(F_PF);
                } else {
                    CLEAR_FLAG(F_CF);
                    SET_FLAG(F_ZF);
                    CLEAR_FLAG(F_SF);
                    SET_FLAG(F_PF);
                }
            }
            break;
        case d_sar16:
            if (emu->op2 < 16) {
                if(emu->op2) {
                    cc = emu->op1 & (1 << (emu->op2 - 1));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                }
            } else {
                if (emu->op1&0x8000) {
                    SET_FLAG(F_CF);
                    CLEAR_FLAG(F_ZF);
                    SET_FLAG(F_SF);
                    SET_FLAG(F_PF);
                } else {
                    CLEAR_FLAG(F_CF);
                    SET_FLAG(F_ZF);
                    CLEAR_FLAG(F_SF);
                    SET_FLAG(F_PF);
                }
            }
            break;
        case d_sar32:
            if(emu->op2) {
                cc = emu->op1 & (1 << (emu->op2 - 1));
                CONDITIONAL_SET_FLAG(cc, F_CF);
                CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
                CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
                CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            }
            break;
        case d_shr8:
            if (emu->op2 < 8) {
                cnt = emu->op2 % 8;
                if (cnt > 0) {
                    cc = emu->op1 & (1 << (cnt - 1));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                }
                if (cnt == 1) {
                    CONDITIONAL_SET_FLAG(XOR2(emu->res >> 6), F_OF);
                }
            } else {
                CONDITIONAL_SET_FLAG((emu->op1 >> (emu->op2-1)) & 0x1, F_CF);
                CLEAR_FLAG(F_SF);
                SET_FLAG(F_PF);
                SET_FLAG(F_ZF);
            }
            break;
        case d_shr16:
            if (emu->op2 < 16) {
                cnt = emu->op2 % 16;
                if (cnt > 0) {
                    cc = emu->op1 & (1 << (cnt - 1));
                    CONDITIONAL_SET_FLAG(cc, F_CF);
                    CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
                    CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
                    CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
                }
                if (cnt == 1) {
                    CONDITIONAL_SET_FLAG(XOR2(emu->res >> 14), F_OF);
                }
            } else {
                CLEAR_FLAG(F_CF);
                SET_FLAG(F_ZF);
                CLEAR_FLAG(F_SF);
                SET_FLAG(F_PF);
            }
            break;
        case d_shr32:
            cnt = emu->op2;
            if (cnt > 0) {
                cc = emu->op1 & (1 << (cnt - 1));
                CONDITIONAL_SET_FLAG(cc, F_CF);
                CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
                CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
                CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            }
            if (cnt == 1) {
                CONDITIONAL_SET_FLAG(XOR2(emu->res >> 30), F_OF);
            }
            break;
        case d_sub8:
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x80, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_sub16:
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x8000, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_sub32:
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x80000000, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_xor8:
            CLEAR_FLAG(F_OF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            break;
        case d_xor16:
            CLEAR_FLAG(F_OF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            break;
        case d_xor32:
            CLEAR_FLAG(F_OF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            CLEAR_FLAG(F_CF);
            CLEAR_FLAG(F_AF);
            break;
        case d_cmp8:
            CLEAR_FLAG(F_CF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x80, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_cmp16:
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x8000, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_cmp32:
        	CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
        	CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
        	CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
        	bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
        	CONDITIONAL_SET_FLAG(bc & 0x80000000, F_CF);
        	CONDITIONAL_SET_FLAG(XOR2(bc >> 30), F_OF);
        	CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_tst8:
        	CLEAR_FLAG(F_OF);
        	CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
        	CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
        	CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
        	CLEAR_FLAG(F_CF);
            break;
        case d_tst16:
            CLEAR_FLAG(F_OF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            CLEAR_FLAG(F_CF);
            break;
        case d_tst32:
        	CLEAR_FLAG(F_OF);
        	CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
        	CONDITIONAL_SET_FLAG(emu->res == 0, F_ZF);
        	CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
        	CLEAR_FLAG(F_CF);
            break;
        case d_adc8:
            CONDITIONAL_SET_FLAG(emu->res & 0x100, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (emu->op1 & emu->op2) | ((~emu->res) & (emu->op1 | emu->op2));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_adc16:
            CONDITIONAL_SET_FLAG(emu->res & 0x10000, F_CF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (emu->op1 & emu->op2) | ((~emu->res) & (emu->op1 | emu->op2));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_adc32:
            if(emu->res == (emu->op1+emu->op2)) {
                lo = (emu->op1 & 0xFFFF) + (emu->op2 & 0xFFFF);
            } else {
                lo = 1 + (emu->op1 & 0xFFFF) + (emu->op2 & 0xFFFF);
            }
            hi = (lo >> 16) + (emu->op1 >> 16) + (emu->op2 >> 16);
            CONDITIONAL_SET_FLAG(hi & 0x10000, F_CF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            cc = (emu->op2 & emu->op1) | ((~emu->res) & (emu->op2 | emu->op1));
            CONDITIONAL_SET_FLAG(XOR2(cc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(cc & 0x8, F_AF);
            break;
        case d_sbb8:
            CONDITIONAL_SET_FLAG(emu->res & 0x80, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x80, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 6), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_sbb16:
            CONDITIONAL_SET_FLAG(emu->res & 0x8000, F_SF);
            CONDITIONAL_SET_FLAG((emu->res & 0xffff) == 0, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x8000, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 14), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_sbb32:
            CONDITIONAL_SET_FLAG(emu->res & 0x80000000, F_SF);
            CONDITIONAL_SET_FLAG(!emu->res, F_ZF);
            CONDITIONAL_SET_FLAG(PARITY(emu->res & 0xff), F_PF);
            bc = (emu->res & (~emu->op1 | emu->op2)) | (~emu->op1 & emu->op2);
            CONDITIONAL_SET_FLAG(bc & 0x80000000, F_CF);
            CONDITIONAL_SET_FLAG(XOR2(bc >> 30), F_OF);
            CONDITIONAL_SET_FLAG(bc & 0x8, F_AF);
            break;
        case d_rol8:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG((emu->res + (emu->res >> 7)) & 1, F_OF);
            }
        	CONDITIONAL_SET_FLAG(emu->res & 0x1, F_CF);
            break;
        case d_rol16:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG((emu->res + (emu->res >> 15)) & 1, F_OF);
            }
        	CONDITIONAL_SET_FLAG(emu->res & 0x1, F_CF);
            break;
        case d_rol32:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG((emu->res + (emu->res >> 31)) & 1, F_OF);
            }
        	CONDITIONAL_SET_FLAG(emu->res & 0x1, F_CF);
            break;
        case d_ror8:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG(XOR2(emu->res >> 6), F_OF);
            }
            CONDITIONAL_SET_FLAG(emu->res & (1 << 7), F_CF);
            break;
        case d_ror16:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG(XOR2(emu->res >> 14), F_OF);
            }
            CONDITIONAL_SET_FLAG(emu->res & (1 << 15), F_CF);
            break;
        case d_ror32:
            if(emu->op2 == 1) {
                CONDITIONAL_SET_FLAG(XOR2(emu->res >> 30), F_OF);
            }
            CONDITIONAL_SET_FLAG(emu->res & (1 << 31), F_CF);
            break;

        case d_unknown:
            printf_log(LOG_NONE, "Box86: %p trying to evaluate Unknown defered Flags\n", (void*)R_EIP);
            break;
    }
    RESET_FLAGS(emu);
}

void* GetSegmentBase(uint32_t desc)
{
    printf_log(LOG_NONE, "Warning, accessing segment unknown 0x%x or unset\n", desc);
    return NULL;
}

uintptr_t GetSegmentBaseEmu(x86emu_t* emu, int seg)
{
    if(emu->segs_serial[seg] != emu->context->sel_serial) {
        emu->segs_offs[seg] = (uintptr_t)GetSegmentBase(emu->segs[seg]);
        emu->segs_serial[seg] = emu->context->sel_serial;
    }
    return emu->segs_offs[seg];
}



typedef int8_t  i8; typedef int16_t i16; typedef int32_t i32; typedef int64_t i64; typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32; typedef uint64_t u64; typedef float f32; typedef double f64; typedef long double f80;

typedef struct Array
{
  u8* value;
  u64 size;
} Array;

Array* Array_newFromFile(char* path)
{
  FILE* f  = fopen(path, "rb");

  fseek(f, 0, SEEK_END);
  u64 size = ftell(f);

  fseek(f, 0L, SEEK_SET);
  
  u8* buf = malloc(size);
  fread(buf, size, 1, f);

  Array* ret = malloc(sizeof(Array));
  ret->value = buf;
  ret->size = size;
  return ret;
}

void Array_free(Array* this)
{
  free(this->value);
  free(this);
}


#define STACK_SIZE 83886080
#define STACK_STORAGE_SIZE 0x1000
#define STACK_STRING_SIZE  0x1000

#define ROUND_UP(v, s) ((v + s - 1) & -s)
#define ROUND_DOWN(v, s) (v & -s)

typedef struct X86Runner 
{
  //u8* ram;
  //u32 ramLength;
  //Array* elf;
  u32 esp;
  u32* argcPtr;
  char* args;
  void* stack;
  void* _start;
  void* _init;
  void* main;
} X86Runner;

X86Runner x86runner;
x86emu_t* emu;

void* X86RunnerSyscalls___libc_start_main() 
{
  printf_log(LOG_DEBUG, "X86RunnerSyscalls___libc_start_main %x %x %x %x %x\n", *((u32*) (R_ESP + 12)), *((u32*) (R_ESP +  8)), *((u32*) (R_ESP +  0)), *((u32*) (R_ESP +  4)), *((u32*) (R_ESP + 16)));
  u32 esp = R_ESP;
  Push(emu, *((u32*) (esp + 12)));
  Push(emu, *((u32*) (esp +  8)));
  Push(emu, *((u32*) (esp +  0)));
  Push(emu, *((u32*) (esp +  4)));
  //R_EIP = *((u32*) (esp + 16));
  return (void*) *((u32*) (esp + 16));
  //return (void*) R_EIP;
}

int X86RunnerSyscalls_vprintf(void* fmt, va_list v) 
{
  return vprintf(fmt, v);
}

void X86RunnerSyscalls_printf() 
{
  //printf_log(LOG_DEBUG, "inside printf\n");
  //R_EAX = (u32) vprintf(*((char**) R_ESP + 1), (void*) ((char**) R_ESP + 2));
  //R_EAX = (u32) X86RunnerSyscalls_vprintf(*((char**) R_ESP + 1), (void*) ((char**) R_ESP + 2));
  R_EAX = (u32) vprintf((const char*) *((char**) R_ESP + 1), (void*) ((char**) R_ESP + 2));
}

void X86RunnerSyscalls_snprintf() 
{
  R_EAX = (u32) vsnprintf(*((char**) R_ESP + 1), *((size_t*) R_ESP + 2), *((char**) R_ESP + 3), (void*) ((char**) R_ESP + 4));
}

void X86RunnerSyscalls_SDL_Delay() 
{
#ifdef __EMSCRIPTEN_major__
  emscripten_sleep(*((u32*) R_ESP + 1));
#else
  SDL_Delay(*((u32*) R_ESP + 1));
#endif
}

#include "x86runner_syscalls.h"

void* getAlternate(void* addr)
{
  printf_log(LOG_DEBUG, "getAlternate = %x\n", addr);
  printf_log(LOG_DEBUG, "stack values %x %x %x %x %x\n", *((u32*) (R_ESP + 0)), *((u32*) (R_ESP +  4)), *((u32*) (R_ESP +  8)), *((u32*) (R_ESP +  12)), *((u32*) (R_ESP + 16)));
  if ( addr == X86RunnerSyscalls___libc_start_main ) return X86RunnerSyscalls___libc_start_main();
  //return addr;
  if ( addr == x86runner._init ) return addr;
  //return ((void*(*)()) addr)();
  ((void(*)()) addr)();
  //return ip;
  if ( addr != x86runner.main )
  return (void*) Pop(emu);
  return 0;
}

void X86Runner_loadELF(X86Runner* this, char** argv, char** env) 
{
  FILE* f = fopen(argv[0], "r");
  Elf32_Ehdr hdr;
  fread(&hdr, 1, sizeof(Elf32_Ehdr) , f);

  fseek(f, hdr.e_phoff, SEEK_SET);
  Elf32_Phdr phdr[hdr.e_phnum];
  fread(phdr, hdr.e_phnum, sizeof(Elf32_Phdr) , f);


  //for(int i = 0; i < hdr.e_phnum; i++)
  //{
  //  if(phdr[i].p_type != PT_LOAD)
  //     continue;

  //  if(!phdr[i].p_filesz)
  //     continue;

  //  void* map_start = (void *) ROUND_DOWN(phdr[i].p_vaddr, PAGE_SIZE);
  //  int round_down_size = (void *) phdr[i].p_vaddr - map_start;
  //  int map_size = ROUND_UP(phdr[i].p_memsz + round_down_size, PAGE_SIZE);
  //  void* p = mmap(map_start, map_size, PROT_READ|PROT_WRITE, MAP_PRIVATE | MAP_ANON | MAP_FIXED, -1, 0);
  //  //void* p = mmap(map_start, map_size, PROT_READ|PROT_WRITE, MAP_PRIVATE | MAP_ANON , -1, 0);
  //  printf("p = %8x map_start = %8x map_size = %8x phdr[i].p_vaddr = %8x phdr[i].p_memsz = %8x\n", p, map_start, map_size, phdr[i].p_vaddr, phdr[i].p_memsz);

  //  fseek(f, phdr[i].p_offset, SEEK_SET);
  //  fread((void *) phdr[i].p_vaddr, 1, phdr[i].p_filesz, f);
  //}


  void* mapStart = 0;
  int mapSize = 0;
  for(int i = 0, k = 0; i < hdr.e_phnum; i += 1)
  {
    if(phdr[i].p_type != PT_LOAD)
       continue;

    if(!phdr[i].p_filesz)
       continue;

    void* map_start = (void *) ROUND_DOWN(phdr[i].p_vaddr, PAGE_SIZE);
    int round_down_size = (void *) phdr[i].p_vaddr - map_start;
    int map_size = ROUND_UP(phdr[i].p_memsz + round_down_size, PAGE_SIZE);
    printf_log(LOG_DEBUG, "map_start = %8x map_size = %8x phdr[i].p_vaddr = %8x phdr[i].p_memsz = %8x\n", map_start, map_size, phdr[i].p_vaddr, phdr[i].p_memsz);

    if ( k == 0 ) mapStart = map_start;
    mapSize += map_size;
    k += 1;
  }

  void* p = mmap(mapStart, mapSize, PROT_READ|PROT_WRITE, MAP_PRIVATE | MAP_ANON | MAP_FIXED, -1, 0);
  printf_log(LOG_DEBUG, "p = %8x mapStart = %8x mapSize = %8x\n", p, mapStart, mapSize);

  for(int i = 0; i < hdr.e_phnum; i++)
  {
    if(phdr[i].p_type != PT_LOAD)
       continue;

    if(!phdr[i].p_filesz)
       continue;

    fseek(f, phdr[i].p_offset, SEEK_SET);
    fread((void *) phdr[i].p_vaddr, 1, phdr[i].p_filesz, f);
  }

  rewind(f);
  {
    Array* elf = Array_newFromFile(argv[0]);
    Elf32_Ehdr* hdr  = (Elf32_Ehdr*) elf->value;
    Elf32_Phdr* phdr = (Elf32_Phdr*) (elf->value + hdr->e_phoff);   
    Elf32_Shdr* shdr = (Elf32_Shdr *)(elf->value + hdr->e_shoff);

    for(int i = 0; i < hdr->e_shnum; i++) 
    {
      if(shdr[i].sh_type == SHT_REL) 
      {
        Elf32_Rel* syms = (Elf32_Rel *) (elf->value + shdr[i].sh_offset);
        for(u32 y = 0; y < shdr[i].sh_size / sizeof(Elf32_Rel); y++) 
        {
          if ( ELF32_R_TYPE (syms[y].r_info) ) 
          {
            int idx = ELF32_R_SYM(syms[y].r_info);
            for(int x = 0; x < hdr->e_shnum; x++) 
            {
        //printf("i = %x x = %x\n", i, x);
              if(shdr[x].sh_type == SHT_DYNSYM) 
              {
                const char *strings = (char*) (elf->value + shdr[shdr[x].sh_link].sh_offset);
                Elf32_Sym *_syms = (Elf32_Sym *)(elf->value + shdr[x].sh_offset);
                const char* s = strings + _syms[idx].st_name;
        //printf("x = %x %s\n", x, s);
                if ( _syms[idx].st_value ) *((u32*) (syms[y].r_offset)) = _syms[idx].st_value;
                else *((u32*) (syms[y].r_offset)) = (u32) X86Runner_getFnAddress(s);
                if ( !strcmp(s, "main") ) this->main = (void*) _syms[idx].st_value;
                else if ( !strcmp(s, "_init") ) this->_init = (void*) _syms[idx].st_value;
                //printf("%x %s %x %x\n", _syms[idx].st_value, strings + _syms[idx].st_name, *((u32*) syms[y].r_offset), X86RunnerSyscalls_get(strings + _syms[idx].st_name));
                break;
              }
            }
          }
        }
      }
    }

    Array_free(elf);
  }
  fclose(f);

  //void* stack = this->stack = calloc(1, STACK_SIZE); 
  void* stack = this->stack = mmap(NULL, STACK_SIZE, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_GROWSDOWN, -1, 0);

  this->_start = (u32*) hdr.e_entry;

  int x;
  int str_len;
  int str_ptr = 0;
  int stack_ptr = 1;
  int argc = 0;
  int envc = 0;

  // First, let's count arguments...
  while(argv[argc])
     argc++;

  // ...and envs
  while(env[envc])
     envc++;

  // Zero out the whole stack, Justin Case
  //memset(stack, 0, STACK_STORAGE_SIZE);

  u32 *stack_storage = stack + STACK_SIZE - STACK_STORAGE_SIZE - STACK_STRING_SIZE;
  char *string_storage =  stack + STACK_SIZE - STACK_STRING_SIZE;

  //this->esp = (u32) stack_storage;
  //this->esp = (u32) ((u8*) stack_storage);
  this->esp = (u32) ((u32) stack_storage);
  //printf("eip = %x esp = %x stack = %x %x\n", this->eip, this->esp, stack, sizeof(size_t));
  
  u32 *s_argc = stack_storage;
  u32 *s_argv = &stack_storage[1];

  // Setup argc
  *s_argc = argc;

  this->argcPtr = s_argc;
  this->args = (char*) s_argv;

  // Setup argv
  for(x = 0; x < argc; x++)
  {
     str_len =  strlen(argv[x]) + 1;

     // Copy the string on to the stack inside the string storage area
     memcpy(&string_storage[str_ptr], argv[x], str_len);

     // Make the startup struct point to the string
     s_argv[x] = (u32) &string_storage[str_ptr];

     str_ptr += str_len;
     stack_ptr++;
  }

  // End-of-argv NULL
  stack_storage[stack_ptr++] = 0;

  u32* s_env = &stack_storage[stack_ptr];

  for(x = 0; x < envc; x++)
  {
     str_len =  strlen(env[x]) + 1;

     // Copy the string on to the stack inside the string storage area
     memcpy(&string_storage[str_ptr], env[x], str_len);

     // Make the startup struct point to the string
     s_env[x] = (u32) &string_storage[str_ptr];

     str_ptr += str_len;
     stack_ptr++;
  }

  // End-of-env NULL
  stack_storage[stack_ptr++] = 0;
}


int trace_xmm = 0;
int trace_emm = 0;
uintptr_t   trace_start = 0, trace_end = 0;
uint32_t default_fs = 0;
int box86_log = LOG_NONE; // LOG_VERBOSE ; // LOG_DEBUG; // LOG_NONE;
FILE* ftrace = NULL;
box86context_t *my_context = NULL;
//void* my_context = 0;

int main(int argc, char **argv, char **env)
{
  //printf("PAGE_SIZE = %d\n", PAGE_SIZE);
  printf_log(LOG_DEBUG, "&X86RunnerSyscalls___libc_start_main = %x\n", X86RunnerSyscalls___libc_start_main);

  char* env_box86_log = getenv("BOX86_LOG");
  if ( env_box86_log )
  {
    if ( !strcmp(env_box86_log, "INFO") ) box86_log = LOG_INFO;
    else if ( !strcmp(env_box86_log, "DEBUG") ) box86_log = LOG_DEBUG;
    else box86_log = LOG_NONE;
  }

  char* _env[] = { "HOME=/tmp", NULL, };
  X86Runner_loadELF(&x86runner, &argv[1], _env);

  ftrace = stdout;
  emu = NewX86Emu(my_context, (u32) x86runner._start, (uintptr_t)x86runner.stack , STACK_SIZE, 0);
  emu->df = d_none; // reset flags
  R_EAX = (u32) x86runner.argcPtr;
  R_EBX = (u32) x86runner.args;
  R_ESP = (u32) x86runner.esp;
  R_EDX = (u32) X86RUNNERSYSCALLS_exit;
  Run(emu, 0);
  return R_EAX;
}
