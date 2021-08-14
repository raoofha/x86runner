#ifndef __BOX86CONTEXT_H_
#define __BOX86CONTEXT_H_
#include <stdint.h>
#include <pthread.h>
#include "pathcoll.h"
#include "dictionnary.h"

typedef struct elfheader_s elfheader_t;
typedef struct cleanup_s cleanup_t;
typedef struct x86emu_s x86emu_t;
typedef struct zydis_s zydis_t;
typedef struct lib_s lib_t;
typedef struct bridge_s bridge_t;
typedef struct dlprivate_s dlprivate_t;
typedef struct kh_symbolmap_s kh_symbolmap_t;
typedef struct library_s library_t;
typedef struct kh_fts_s kh_fts_t;
typedef struct kh_threadstack_s kh_threadstack_t;
typedef struct zydis_dec_s zydis_dec_t;
typedef struct atfork_fnc_s {
    uintptr_t prepare;
    uintptr_t parent;
    uintptr_t child;
    void*     handle;
} atfork_fnc_t;
#ifdef DYNAREC
typedef struct dynablock_s      dynablock_t;
typedef struct dynablocklist_s  dynablocklist_t;
typedef struct mmaplist_s       mmaplist_t;
typedef struct kh_dynablocks_s  kh_dynablocks_t;
#endif
#define DYNAMAP_SHIFT 16
#define DYNAMAP_SIZE (1<<(32-DYNAMAP_SHIFT))
#define JMPTABL_SHIFT 16
#define JMPTABL_SIZE (1<<(32-JMPTABL_SHIFT))

typedef void* (*procaddess_t)(const char* name);
typedef void* (*vkprocaddess_t)(void* instance, const char* name);

#define MAX_SIGNAL 64

typedef struct tlsdatasize_s {
    int32_t     tlssize;
    void*       tlsdata;
} tlsdatasize_t;

void free_tlsdatasize(void* p);

typedef struct needed_libs_s {
    int         cap;
    int         size;
    library_t   **libs;
} needed_libs_t;
void free_neededlib(needed_libs_t* needed); // defined in library.c

typedef struct base_segment_s {
    uintptr_t       base;
    uint32_t        limit;
    int             present;
    pthread_key_t   key;
} base_segment_t;

typedef struct box86context_s {
    path_collection_t   box86_path;     // PATH env. variable
    path_collection_t   box86_ld_lib;   // LD_LIBRARY_PATH env. variable

    path_collection_t   box86_emulated_libs;    // Collection of libs that should not be wrapped

    int                 x86trace;
    int                 trace_tid;

    uint32_t            sel_serial;     // will be increment each time selectors changes

    zydis_t             *zydis;         // dlopen the zydis dissasembler
    void*               box86lib;       // dlopen on box86 itself

    int                 argc;
    char**              argv;

    int                 envc;
    char**              envv;

    char*               fullpath;
    char*               box86path;      // path of current box86 executable
    char*               box64path;      // path of box64 executable (beside box86, if it exists)

    uint32_t            stacksz;
    int                 stackalign;
    void*               stack;          // alocated stack

    elfheader_t         **elfs;         // elf headers and memory
    int                 elfcap;
    int                 elfsize;        // number of elf loaded

    needed_libs_t       neededlibs;     // needed libs for main elf

    uintptr_t           ep;             // entry point

    lib_t               *maplib;        // lib and symbols handling
    lib_t               *local_maplib;  // libs and symbols openned has local (only collection of libs, no symbols)
    dic_t               *versym;        // dictionnary of versionned symbols

    kh_threadstack_t    *stacksizes;    // stack sizes attributes for thread (temporary)
    bridge_t            *system;        // other bridges
    uintptr_t           vsyscall;       // vsyscall bridge value
    dlprivate_t         *dlprivate;     // dlopen library map
    kh_symbolmap_t      *glwrappers;    // the map of wrapper for glProcs (for GLX or SDL1/2)
    kh_symbolmap_t      *glmymap;       // link to the mysymbolmap of libGL
    procaddess_t        glxprocaddress;
    kh_symbolmap_t      *alwrappers;    // the map of wrapper for alGetProcAddress
    kh_symbolmap_t      *almymap;       // link to the mysymbolmap if libOpenAL
    kh_symbolmap_t      *vkwrappers;    // the map of wrapper for VulkanProcs (TODO: check SDL2)
    kh_symbolmap_t      *vkmymap;       // link to the mysymbolmap of libGL
    vkprocaddess_t      vkprocaddress;

    pthread_mutex_t     mutex_once;
    pthread_mutex_t     mutex_once2;
    pthread_mutex_t     mutex_trace;
    #ifndef DYNAREC
    pthread_mutex_t     mutex_lock;     // dynarec build will use their own mecanism
    #else
    pthread_mutex_t     mutex_dyndump;
    int                 trace_dynarec;
    #endif
    pthread_mutex_t     mutex_tls;
    pthread_mutex_t     mutex_thread;
    pthread_mutex_t     mutex_bridge;

    library_t           *libclib;       // shortcut to libc library (if loaded, so probably yes)
    library_t           *sdl1lib;       // shortcut to SDL1 library (if loaded)
    void*               sdl1allocrw;
    void*               sdl1freerw;
    library_t           *sdl1mixerlib;
    library_t           *sdl2lib;       // shortcut to SDL2 library (if loaded)
    void*               sdl2allocrw;
    void*               sdl2freerw;
    library_t           *sdl2mixerlib;
    library_t           *x11lib;
    library_t           *libxcb;
    library_t           *libxcbxfixes;
    library_t           *libxcbshape;
    library_t           *libxcbshm;
    library_t           *libxcbrandr;
    library_t           *libxcbimage;
    library_t           *libxcbkeysyms;
    library_t           *libxcbxtest;
    library_t           *zlib;
    library_t           *vorbisfile;
    library_t           *vorbis;
    library_t           *asound;
    library_t           *pulse;
    library_t           *d3dadapter9;

    int                 deferedInit;
    elfheader_t         **deferedInitList;
    int                 deferedInitSz;
    int                 deferedInitCap;

    pthread_key_t       tlskey;     // then tls key to have actual tlsdata
    void*               tlsdata;    // the initial global tlsdata
    int32_t             tlssize;    // wanted size of tlsdata
    base_segment_t      segtls[3];  // only handling 0/1/2 descriptors

    uintptr_t           *auxval_start;

    cleanup_t   *cleanups;          // atexit functions
    int         clean_sz;
    int         clean_cap;
#ifndef NOALIGN
    kh_fts_t            *ftsmap;
#endif
    zydis_dec_t         *dec;           // trace

    int                 forked;         //  how many forks... cleanup only when < 0

    atfork_fnc_t        *atforks;       // fnc for atfork...
    int                 atfork_sz;
    int                 atfork_cap;

    uint8_t             canary[4];

    uintptr_t           signals[MAX_SIGNAL];
    uintptr_t           restorer[MAX_SIGNAL];
    int                 onstack[MAX_SIGNAL];
    int                 is_sigaction[MAX_SIGNAL];
    x86emu_t            *emu_sig;       // the emu with stack used for signal handling (must be separated from main ones)
    int                 no_sigsegv;
    int                 no_sigill;
#ifdef BUILD_DYNAMIC
    int                 count;      // number of instances
#endif
} box86context_t;

extern box86context_t *my_context; // global context

box86context_t *NewBox86Context(int argc);
void FreeBox86Context(box86context_t** context);

// return the index of the added header
int AddElfHeader(box86context_t* ctx, elfheader_t* head);

// return the tlsbase (negative) for the new TLS partition created (no partition index is stored in the context)
int AddTLSPartition(box86context_t* context, int tlssize);

// defined in fact in threads.c
void thread_set_emu(x86emu_t* emu);
x86emu_t* thread_get_emu();

// unlock mutex that are locked by current thread (for signal handling). Return a mask of unlock mutex
int unlockMutex();
// relock the muxtex that were unlocked
void relockMutex(int locks);

#endif //__BOX86CONTEXT_H_
