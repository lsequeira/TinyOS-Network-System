#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 46 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 66
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 129
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;






extern char *strcat(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;





extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 263 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 348
extern char *strtok(char *__restrict __s, const char *__restrict __delim) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(2))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 147
extern int atoi(const char *__nptr) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;








__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 127
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 124
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 129
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 153
#line 138
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 155
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 213
#line 173
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 211
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 215
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 230
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 236
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 466
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 483
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2b8da2835cf8, const void *arg_0x2b8da2834020);
#line 780
__extension__ 
#line 797
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 153
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 184
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 250
extern double erfc(double arg_0x2b8da28b6618) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
# 189 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 308
#line 301
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 326
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 180
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 245
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 338
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 242
extern int fflush(FILE *__stream);
#line 306
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 356
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 386
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 858
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x2b8da2af78e8), 
int (*key_eq_fn)(void *arg_0x2b8da2af60c8, void *arg_0x2b8da2af6368));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 284U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 239 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x2b8da2d07610, int arg_0x2b8da2d07878);
static double RandomUniform(void );
# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/home/luis/local/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/luis/local/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/home/luis/local/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 41 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4280 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4281 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4282 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4283 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 9 "/home/luis/workspace/Project0/src/packetid.h"
#line 4
typedef struct PacketID {

  uint16_t sequence;
  uint16_t moteID;
  uint16_t age;
} PacketID;
# 8 "/home/luis/workspace/Project0/src/neighbortuple.h"
#line 4
typedef nx_struct NeighborTuple {

  nx_uint16_t mote;
  nx_uint16_t age;
} __attribute__((packed)) NeighborTuple;
# 9 "/home/luis/workspace/Project0/src/simbuild/micaz/../../protocol.h"
enum __nesc_unnamed4284 {
  PROTOCOL_PING = 0, 
  PROTOCOL_PINGREPLY = 1, 
  PROTOCOL_LINKSTATE = 2, 
  PROTOCOL_NAME = 3, 
  PROTOCOL_TCP = 4, 
  PROTOCOL_DV = 5, 
  PROTOCOL_CMD = 99
};
# 11 "/home/luis/workspace/Project0/src/simbuild/micaz/../../packet.h"
enum __nesc_unnamed4285 {
  PACKET_HEADER_LENGTH = 8, 
  PACKET_MAX_PAYLOAD_SIZE = 28 - PACKET_HEADER_LENGTH, 
  MAX_TTL = 15
};









#line 18
typedef nx_struct pack {
  nx_uint16_t dest;
  nx_uint16_t src;
  nx_uint16_t seq;
  nx_uint8_t TTL;
  nx_uint8_t protocol;
  nx_uint8_t payload[PACKET_MAX_PAYLOAD_SIZE];
} __attribute__((packed)) pack;
#line 38
enum __nesc_unnamed4286 {
  AM_PACK = 6
};
# 10 "/home/luis/workspace/Project0/src/senttuple.h"
#line 6
typedef struct SentTuple {

  pack packet;
  uint16_t age;
} SentTuple;
# 9 "/home/luis/workspace/Project0/src/route.h"
#line 4
typedef struct Route {

  uint16_t node;
  uint16_t cost;
  uint16_t nextHop;
} Route;
# 17 "/home/luis/workspace/Project0/src/socket.h"
#line 6
typedef enum socketState {
  SOCK_ESTABLISHED = 0, 
  SOCK_LISTEN = 1, 
  SOCK_CLOSED = 2, 
  SOCK_SYN_SENT = 3, 
  SOCK_CLOSE_WAIT = 4, 
  SOCK_FIN_WAIT = 5, 
  SOCK_SYN_RCVD = 6, 
  SOCK_FIN_WAIT2 = 7, 
  SOCK_TIME_WAIT = 8, 
  SOCK_LAST_ACK = 9
} socketState;

enum __nesc_unnamed4287 {
  SOCKET_SEND_BUFFER_SIZE = 128, 
  SOCKET_RECEIVE_BUFFER_SIZE = 128, 
  DATA_TO_SEND_SIZE = 5000, 
  READ_BUFFER_MAX = 5000, 
  NULL_SOCKET = 0, 
  MAX_TRANSPORT_SIZE = 10
};






#line 28
typedef nx_struct socket_addr_t {
  nx_uint8_t srcPort;
  nx_uint8_t destPort;
  nx_uint16_t srcAddr;
  nx_uint16_t destAddr;
} __attribute__((packed)) socket_addr_t;
#line 69
#line 35
typedef struct socket_storage_t {
  socketState state;
  socket_addr_t sockAddr;
  uint8_t sendBuff[SOCKET_SEND_BUFFER_SIZE];
  uint8_t recBuff[SOCKET_RECEIVE_BUFFER_SIZE];
  uint8_t dataToSend[DATA_TO_SEND_SIZE];
  uint8_t messageToQuery[DATA_TO_SEND_SIZE];
  uint8_t sendWindow[MAX_TRANSPORT_SIZE];
  uint16_t sendWindowSize;
  uint16_t dataToSendSize;
  uint16_t messageToQuerySize;
  uint16_t sendBuffSize;
  uint16_t recBuffSize;
  uint16_t lastByteSent;
  uint16_t lastByteWritten;
  uint16_t lastByteAck;
  uint16_t lastByteRec;
  uint16_t lastByteRead;
  uint16_t nextByteExpected;
  uint16_t nextExpectedSeq;
  uint8_t advWin;
  uint16_t seq;
  uint16_t ackseq;
  uint16_t timeOut;
  uint16_t HStimeOut;
  uint16_t acktimeOut;
  pack packet;

  uint16_t inTimeOut;
  uint16_t inHSTimeOut;
  uint16_t inAckTimeOut;
  uint16_t waitingAck;
  uint16_t neverSent;
  uint16_t sending;
} socket_storage_t;

typedef uint16_t socket_t;
# 9 "/home/luis/workspace/Project0/src/users.h"
#line 4
typedef struct User {

  uint8_t *name[20];
  uint8_t namesize;
  uint8_t port;
} User;
# 25 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4288 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4289 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4290 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4291 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4292 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4293 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4294 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4295 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4296 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4297 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4298 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4299 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4300 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4301 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/home/luis/local/tinyos-2.1.1/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4302 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 12 "/home/luis/workspace/Project0/src/command.h"
enum __nesc_unnamed4303 {
  CMD_PING = '0', 
  CMD_NEIGHBOR_DUMP = '1', 
  CMD_LINKSTATE_DUMP = '2', 
  CMD_ROUTETABLE_DUMP = '3', 
  CMD_TEST_CLIENT = '4', 
  CMD_TEST_SERVER = '5', 
  CMD_KILL = '6', 
  CMD_MESSAGE = '7', 
  CMD_ERROR = '9'
};

enum __nesc_unnamed4304 {
  CMD_LENGTH = 1
};
# 8 "/home/luis/workspace/Project0/src/sendInfo.h"
enum __nesc_unnamed4305 {
  SEND_BUFFER_SIZE = 128
};





#line 12
typedef struct sendInfo {
  pack packet;
  uint16_t src;
  uint16_t dest;
} sendInfo;
# 13 "/home/luis/workspace/Project0/src/TCP.h"
#line 4
typedef enum flagtype {

  SYN = '0', 
  SYN_ACK = '1', 
  ACK = '2', 
  FIN = '3', 
  DATA = '4', 
  DATA_ACK = '5', 
  PROBE = '6'
} flagtype;
#line 25
#line 15
typedef nx_struct TCP {

  nx_uint8_t src_port;
  nx_uint8_t dest_port;
  nx_uint16_t seq;
  nx_uint16_t ack;
  nx_uint8_t flag;
  nx_uint8_t adv_win;
  nx_uint8_t data[10];
  nx_uint8_t dataSize;
} __attribute__((packed)) TCP;
# 52 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4306 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4307 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4308 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4309 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4310 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4311 {

  uint8_t flat;
  struct __nesc_unnamed4312 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4313 {

  uint8_t flat;
  struct __nesc_unnamed4314 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4315 {

  uint8_t flat;
  struct __nesc_unnamed4316 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4321 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4322 {

  uint8_t flat;
  struct __nesc_unnamed4323 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4324 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4325 {

  uint8_t flat;
  struct __nesc_unnamed4326 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4327 {

  uint8_t flat;
  struct __nesc_unnamed4328 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4329 {

  uint8_t flat;
  struct __nesc_unnamed4330 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4331 {

  uint8_t flat;
  struct __nesc_unnamed4332 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 11 "/home/luis/workspace/Project0/src/lib/modules/../../linkstate.h"
#line 4
typedef nx_struct LinkState {

  nx_uint8_t size;
  nx_uint8_t node;
  nx_uint8_t seq;
  nx_uint8_t cost[8];
  nx_uint8_t neighbors[8];
} __attribute__((packed)) LinkState;
typedef TMilli Node$BuildRoutingTableTimer$precision_tag;
typedef TMilli Node$CheckNeighborTimer$precision_tag;
typedef socket_storage_t Node$Sockets$t;
typedef TMilli Node$AttemptConnectionTimer$precision_tag;
typedef TMilli Node$ClientWriteTimer$precision_tag;
typedef socket_t Node$FDs$t;
typedef TMilli Node$SendNeighborsTimer$precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef sendInfo SimpleSendP$Pool$t;
typedef sendInfo *SimpleSendP$Queue$t;
typedef TMilli SimpleSendP$sendTimer$precision_tag;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4333 {
  AMQueueP$NUM_CLIENTS = 1U
};
typedef sendInfo /*SimpleSendC.PoolC*/PoolC$0$pool_t;
typedef /*SimpleSendC.PoolC*/PoolC$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t;
typedef /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t;
typedef sendInfo */*SimpleSendC.QueueC*/QueueC$0$queue_t;
typedef /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$t;
typedef LinkState NeighborC$NeighborLS$t;
typedef NeighborTuple NeighborC$Neighbors$t;
typedef NeighborTuple /*NodeC.Neighbors*/ListC$0$t;
typedef /*NodeC.Neighbors*/ListC$0$t /*NodeC.Neighbors*/ListC$0$List$t;
typedef LinkState /*NodeC.NeighborLS*/ListC$1$t;
typedef /*NodeC.NeighborLS*/ListC$1$t /*NodeC.NeighborLS*/ListC$1$List$t;
typedef SentTuple FloodingC$sentPackets$t;
typedef NeighborTuple FloodingC$Neighbors$t;
typedef PacketID FloodingC$recPackets$t;
typedef PacketID /*NodeC.recPackets*/ListC$2$t;
typedef /*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$List$t;
typedef SentTuple /*NodeC.sentPackets*/ListC$3$t;
typedef /*NodeC.sentPackets*/ListC$3$t /*NodeC.sentPackets*/ListC$3$List$t;
typedef LinkState ShortestPathC$NeighborLS$t;
typedef Route ShortestPathC$Tentative$t;
typedef Route ShortestPathC$ConfirmedNodes$t;
typedef PacketID ShortestPathC$recPackets$t;
typedef Route /*NodeC.Tentative*/HashmapC$0$t;
typedef /*NodeC.Tentative*/HashmapC$0$t /*NodeC.Tentative*/HashmapC$0$Hashmap$t;
typedef Route /*NodeC.ConfirmedNodes*/HashmapC$1$t;
typedef /*NodeC.ConfirmedNodes*/HashmapC$1$t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$t;
typedef TMilli TransportC$TimeoutTimer$precision_tag;
typedef socket_storage_t TransportC$Sockets$t;
typedef TMilli TransportC$HandShakeTimer$precision_tag;
typedef TMilli TransportC$AckTimer$precision_tag;
typedef socket_t TransportC$FDs$t;
typedef socket_storage_t /*NodeC.Sockets*/HashmapC$2$t;
typedef /*NodeC.Sockets*/HashmapC$2$t /*NodeC.Sockets*/HashmapC$2$Hashmap$t;
typedef socket_t /*NodeC.FDs*/HashmapC$3$t;
typedef /*NodeC.FDs*/HashmapC$3$t /*NodeC.FDs*/HashmapC$3$Hashmap$t;
typedef User ApplicationC$Users$t;
typedef TMilli ApplicationC$TryWritingTimer$precision_tag;
typedef TMilli ApplicationC$ReadTimer$precision_tag;
typedef socket_storage_t ApplicationC$Sockets$t;
typedef socket_t ApplicationC$FDs$t;
typedef User /*NodeC.Users*/HashmapC$4$t;
typedef /*NodeC.Users*/HashmapC$4$t /*NodeC.Users*/HashmapC$4$Hashmap$t;
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 44 "/home/luis/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b8da2e08108);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b8da2e08108);
# 57 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3137220, 
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3135020, 
# 71 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 94
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3136340, 
# 71 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 68 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
# 60 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/home/luis/local/tinyos-2.1.1/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$BuildRoutingTableTimer$fired(void );
# 113 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void Node$AMControl$startDone(error_t error);
#line 138
static void Node$AMControl$stopDone(error_t error);
# 60 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void Node$Boot$booted(void );
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$CheckNeighborTimer$fired(void );
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Node$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$AttemptConnectionTimer$fired(void );
#line 83
static void Node$ClientWriteTimer$fired(void );
# 14 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
static void Node$CommandHandler$setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);
static void Node$CommandHandler$closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port);
#line 10
static void Node$CommandHandler$printLinkState(void );
#line 8
static void Node$CommandHandler$printNeighbors(void );




static void Node$CommandHandler$setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
#line 12
static void Node$CommandHandler$setTestServer(uint8_t server_port);
#line 9
static void Node$CommandHandler$printRouteTable(void );
#line 7
static void Node$CommandHandler$ping(uint8_t destination, uint8_t *payload);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$SendNeighborsTimer$fired(void );
# 109 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8da35cdc28);
# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8da35cdc28);
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8da35cdc28, 
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8da35cdc28, 
# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest);
# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void SimpleSendP$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimpleSendP$sendBufferTask$runTask(void );
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void SimpleSendP$sendTimer$fired(void );
# 52 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 46
static uint32_t RandomMlcgC$Random$rand32(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b8da36e0c70, 
# 103 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8da36e1990, 
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8da36e1990, 
# 96 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 97 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t * 


/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void );
#line 61
static bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void );
#line 89
static error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(
#line 85
/*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$t * newVal);
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void );
# 73 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  

/*SimpleSendC.QueueC*/QueueC$0$Queue$head(void );
#line 90
static error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(
#line 86
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*SimpleSendC.QueueC*/QueueC$0$Queue$t  

/*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void );







static uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void );
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
static error_t CommandHandlerC$CommandHandler$receive(pack *msg);
# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
static uint16_t PacketInfoC$PacketInfo$getSeq(void );

static void PacketInfoC$PacketInfo$incSeq(void );
# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
static uint16_t NeighborC$Neighbor$reply(pack *msg);
#line 5
static error_t NeighborC$Neighbor$receive(pack *msg);



static error_t NeighborC$Neighbor$startDisc(pack *msg);



static error_t NeighborC$Neighbor$sendNeighbors(void );



static error_t NeighborC$Neighbor$printLS(void );
#line 15
static error_t NeighborC$Neighbor$addLS(pack *msg);
#line 11
static error_t NeighborC$Neighbor$print(void );
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t /*NodeC.Neighbors*/ListC$0$List$size(void );

static void /*NodeC.Neighbors*/ListC$0$List$set(uint16_t position, /*NodeC.Neighbors*/ListC$0$List$t input);
#line 25
static /*NodeC.Neighbors*/ListC$0$List$t /*NodeC.Neighbors*/ListC$0$List$get(uint16_t position);

static void /*NodeC.Neighbors*/ListC$0$List$delete(uint16_t position);
#line 17
static void /*NodeC.Neighbors*/ListC$0$List$pushback(/*NodeC.Neighbors*/ListC$0$List$t input);






static uint16_t /*NodeC.NeighborLS*/ListC$1$List$size(void );

static void /*NodeC.NeighborLS*/ListC$1$List$set(uint16_t position, /*NodeC.NeighborLS*/ListC$1$List$t input);
#line 23
static bool /*NodeC.NeighborLS*/ListC$1$List$isEmpty(void );

static /*NodeC.NeighborLS*/ListC$1$List$t /*NodeC.NeighborLS*/ListC$1$List$get(uint16_t position);
#line 17
static void /*NodeC.NeighborLS*/ListC$1$List$pushback(/*NodeC.NeighborLS*/ListC$1$List$t input);
# 5 "/home/luis/workspace/Project0/src/lib/interfaces/Flooding.nc"
static uint16_t FloodingC$Flooding$receive(pack *msg);

static error_t FloodingC$Flooding$start(pack *msg);
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t /*NodeC.recPackets*/ListC$2$List$size(void );
static /*NodeC.recPackets*/ListC$2$List$t /*NodeC.recPackets*/ListC$2$List$get(uint16_t position);
#line 17
static void /*NodeC.recPackets*/ListC$2$List$pushback(/*NodeC.recPackets*/ListC$2$List$t input);


static /*NodeC.recPackets*/ListC$2$List$t /*NodeC.recPackets*/ListC$2$List$popfront(void );
# 5 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
static error_t ShortestPathC$ShortestPath$Dijkstra(void );



static error_t ShortestPathC$ShortestPath$RoutePack(pack *myMsg);
#line 7
static error_t ShortestPathC$ShortestPath$PrintRoutingTable(void );



static error_t ShortestPathC$ShortestPath$SendPack(pack *myMsg);
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t /*NodeC.Tentative*/HashmapC$0$Hashmap$size(void );
#line 14
static /*NodeC.Tentative*/HashmapC$0$Hashmap$t /*NodeC.Tentative*/HashmapC$0$Hashmap$get(uint32_t key);


static bool /*NodeC.Tentative*/HashmapC$0$Hashmap$isEmpty(void );
#line 12
static void /*NodeC.Tentative*/HashmapC$0$Hashmap$remove(uint32_t key);
#line 11
static void /*NodeC.Tentative*/HashmapC$0$Hashmap$insert(uint32_t key, /*NodeC.Tentative*/HashmapC$0$Hashmap$t input);







static uint32_t */*NodeC.Tentative*/HashmapC$0$Hashmap$getKeys(void );
#line 16
static bool /*NodeC.Tentative*/HashmapC$0$Hashmap$contains(uint32_t key);
#line 13
static void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$clear(void );




static uint16_t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$size(void );
#line 14
static /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$get(uint32_t key);
#line 11
static void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$insert(uint32_t key, /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$t input);







static uint32_t */*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$getKeys(void );
#line 16
static bool /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$contains(uint32_t key);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportC$TimeoutTimer$fired(void );
# 20 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
static void TransportC$Transport$startTimer(void );
#line 149
static error_t TransportC$Transport$listen(socket_t fd);







static error_t TransportC$Transport$send(TCP ack_TCP);
#line 85
static error_t TransportC$Transport$receive(pack *package);
#line 102
static uint16_t TransportC$Transport$read(socket_t fd, uint8_t *buff, uint16_t bufflen);
#line 44
static error_t TransportC$Transport$bind(socket_t fd, socket_addr_t *addr);
#line 30
static socket_t TransportC$Transport$socket(void );
#line 116
static error_t TransportC$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 155
static error_t TransportC$Transport$incoming(TCP data_TCP);
#line 58
static socket_t TransportC$Transport$accept(socket_t fd);
#line 75
static uint16_t TransportC$Transport$write(socket_t fd);
#line 151
static error_t TransportC$Transport$setNodeSocket(socket_t fd);
#line 127
static error_t TransportC$Transport$close(socket_t fd);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportC$HandShakeTimer$fired(void );
#line 83
static void TransportC$AckTimer$fired(void );
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t /*NodeC.Sockets*/HashmapC$2$Hashmap$size(void );
#line 14
static /*NodeC.Sockets*/HashmapC$2$Hashmap$t /*NodeC.Sockets*/HashmapC$2$Hashmap$get(uint32_t key);
#line 12
static void /*NodeC.Sockets*/HashmapC$2$Hashmap$remove(uint32_t key);
#line 11
static void /*NodeC.Sockets*/HashmapC$2$Hashmap$insert(uint32_t key, /*NodeC.Sockets*/HashmapC$2$Hashmap$t input);







static uint32_t */*NodeC.Sockets*/HashmapC$2$Hashmap$getKeys(void );
#line 16
static bool /*NodeC.Sockets*/HashmapC$2$Hashmap$contains(uint32_t key);
#line 14
static /*NodeC.FDs*/HashmapC$3$Hashmap$t /*NodeC.FDs*/HashmapC$3$Hashmap$get(uint32_t key);
#line 12
static void /*NodeC.FDs*/HashmapC$3$Hashmap$remove(uint32_t key);
#line 11
static void /*NodeC.FDs*/HashmapC$3$Hashmap$insert(uint32_t key, /*NodeC.FDs*/HashmapC$3$Hashmap$t input);




static bool /*NodeC.FDs*/HashmapC$3$Hashmap$contains(uint32_t key);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ApplicationC$TryWritingTimer$fired(void );
# 15 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
static error_t ApplicationC$Application$clientReady(void );
#line 9
static error_t ApplicationC$Application$initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
#line 7
static error_t ApplicationC$Application$initializeServer(uint8_t server_port);









static error_t ApplicationC$Application$serverReady(void );
#line 13
static error_t ApplicationC$Application$query(socket_t qfd, uint8_t *buff, uint16_t bufflen);
#line 11
static error_t ApplicationC$Application$messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ApplicationC$ReadTimer$fired(void );
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t /*NodeC.Users*/HashmapC$4$Hashmap$size(void );
#line 14
static /*NodeC.Users*/HashmapC$4$Hashmap$t /*NodeC.Users*/HashmapC$4$Hashmap$get(uint32_t key);
#line 11
static void /*NodeC.Users*/HashmapC$4$Hashmap$insert(uint32_t key, /*NodeC.Users*/HashmapC$4$Hashmap$t input);







static uint32_t */*NodeC.Users*/HashmapC$4$Hashmap$getKeys(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/home/luis/local/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/home/luis/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 49 "/home/luis/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 61
static inline error_t MotePlatformP$SubInit$default$init(void );
# 59 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/home/luis/local/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b8da2e08108);



enum SimSchedulerBasicP$__nesc_unnamed4334 {

  SimSchedulerBasicP$NUM_TASKS = 8U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3137220, 
# 103 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3135020, 
# 71 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b8da3136340, 
# 71 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 85 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 96 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4335 {
#line 96
  TossimPacketModelC$startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4336 {
#line 101
  TossimPacketModelC$stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 145
enum TossimPacketModelC$__nesc_unnamed4337 {
#line 145
  TossimPacketModelC$sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 70
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static error_t TossimPacketModelC$Control$start(void );
#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 159
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 211
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool Node$BuildRoutingTableTimer$isRunning(void );
#line 73
static void Node$BuildRoutingTableTimer$startOneShot(uint32_t dt);
# 104 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t Node$AMControl$start(void );
# 5 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
static error_t Node$ShortestPath$Dijkstra(void );



static error_t Node$ShortestPath$RoutePack(pack *myMsg);
#line 7
static error_t Node$ShortestPath$PrintRoutingTable(void );



static error_t Node$ShortestPath$SendPack(pack *myMsg);
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$CheckNeighborTimer$startPeriodic(uint32_t dt);
# 20 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
static void Node$Transport$startTimer(void );
#line 85
static error_t Node$Transport$receive(pack *package);
#line 127
static error_t Node$Transport$close(socket_t fd);
# 9 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
static error_t Node$Application$initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
#line 7
static error_t Node$Application$initializeServer(uint8_t server_port);



static error_t Node$Application$messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);
# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
static uint16_t Node$PacketInfo$getSeq(void );

static void Node$PacketInfo$incSeq(void );
# 5 "/home/luis/workspace/Project0/src/lib/interfaces/Flooding.nc"
static uint16_t Node$Flooding$receive(pack *msg);
# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
static uint16_t Node$Neighbor$reply(pack *msg);
#line 5
static error_t Node$Neighbor$receive(pack *msg);



static error_t Node$Neighbor$startDisc(pack *msg);



static error_t Node$Neighbor$sendNeighbors(void );



static error_t Node$Neighbor$printLS(void );
#line 15
static error_t Node$Neighbor$addLS(pack *msg);
#line 11
static error_t Node$Neighbor$print(void );
# 14 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static Node$FDs$t Node$FDs$get(uint32_t key);
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
static error_t Node$CommandHandler$receive(pack *msg);
# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool Node$SendNeighborsTimer$isRunning(void );
#line 73
static void Node$SendNeighborsTimer$startOneShot(uint32_t dt);
# 52 "/home/luis/workspace/Project0/src/Node.nc"
pack Node$sendPackage[1000];

static uint16_t Node$Seq[1000];
socket_t Node$fd[1000];







static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);



static inline void Node$Boot$booted(void );










static inline void Node$AMControl$startDone(error_t err);
#line 91
static inline void Node$AMControl$stopDone(error_t err);

static inline message_t *Node$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 179
static inline void Node$CommandHandler$ping(uint8_t destination, uint8_t *payload);
#line 193
static inline void Node$CommandHandler$printNeighbors(void );




static inline void Node$CommandHandler$printRouteTable(void );




static inline void Node$CommandHandler$printLinkState(void );






static inline void Node$CommandHandler$setTestServer(uint8_t server_port);




static inline void Node$CommandHandler$setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);




static inline void Node$CommandHandler$setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);




static inline void Node$CommandHandler$closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port);










static inline void Node$AttemptConnectionTimer$fired(void );




static inline void Node$ClientWriteTimer$fired(void );




static inline void Node$CheckNeighborTimer$fired(void );








static inline void Node$SendNeighborsTimer$fired(void );






static inline void Node$BuildRoutingTableTimer$fired(void );




static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 53 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4338 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4339 {
#line 74
  AlarmToTimerC$0$fired = 3U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8da35cdc28);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4340 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 4U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4341 {

  VirtualizeTimerC$0$NUM_TIMERS = 13U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4342 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 97 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
SimpleSendP$Pool$t * 


SimpleSendP$Pool$get(void );
#line 61
static bool SimpleSendP$Pool$empty(void );
#line 89
static error_t SimpleSendP$Pool$put(
#line 85
SimpleSendP$Pool$t * newVal);
# 73 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
SimpleSendP$Queue$t  

SimpleSendP$Queue$head(void );
#line 90
static error_t SimpleSendP$Queue$enqueue(
#line 86
SimpleSendP$Queue$t  newVal);
#line 81
static 
#line 79
SimpleSendP$Queue$t  

SimpleSendP$Queue$dequeue(void );
#line 50
static bool SimpleSendP$Queue$empty(void );
# 126 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 123
void * 


SimpleSendP$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t SimpleSendP$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 52 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t SimpleSendP$Random$rand16(void );
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SimpleSendP$sendBufferTask$postTask(void );
# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool SimpleSendP$sendTimer$isRunning(void );
#line 73
static void SimpleSendP$sendTimer$startOneShot(uint32_t dt);
# 56 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
enum SimpleSendP$__nesc_unnamed4343 {
#line 56
  SimpleSendP$sendBufferTask = 5U
};
#line 56
typedef int SimpleSendP$__nesc_sillytask_sendBufferTask[SimpleSendP$sendBufferTask];
#line 28
bool SimpleSendP$busy[1000];
message_t SimpleSendP$pkt[1000];

static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message);

static void SimpleSendP$postSendTask(void );





static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest);
#line 56
static inline void SimpleSendP$sendBufferTask$runTask(void );
#line 74
static inline void SimpleSendP$sendTimer$fired(void );
#line 89
static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message);
#line 109
static inline void SimpleSendP$AMSend$sendDone(message_t *msg, error_t error);
# 52 "/home/luis/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 69
static uint32_t RandomMlcgC$Random$rand32(void );
#line 89
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b8da36e0c70, 
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8da36e1990, 
# 96 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4344 {
#line 126
  AMQueueImplP$0$CancelTask = 6U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4345 {
#line 169
  AMQueueImplP$0$errorTask = 7U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4346 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "/home/luis/local/tinyos-2.1.1/tos/system/PoolP.nc"
uint8_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[1000];
uint8_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[1000];
/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t * /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[1000][20];
/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[1000][20];

static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void );









static inline bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void );
#line 88
static inline /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t */*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void );
#line 103
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *newVal);
# 48 "/home/luis/local/tinyos-2.1.1/tos/system/QueueC.nc"
/*SimpleSendC.QueueC*/QueueC$0$queue_t  /*SimpleSendC.QueueC*/QueueC$0$queue[1000][20];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$head[1000];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$tail[1000];
uint8_t /*SimpleSendC.QueueC*/QueueC$0$size[1000];

static inline bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void );



static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void );



static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void );



static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$head(void );



static void /*SimpleSendC.QueueC*/QueueC$0$printQueue(void );
#line 85
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 97
static inline error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(/*SimpleSendC.QueueC*/QueueC$0$queue_t newVal);
# 14 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
static void CommandHandlerC$CommandHandler$setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);
static void CommandHandlerC$CommandHandler$closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port);
#line 10
static void CommandHandlerC$CommandHandler$printLinkState(void );
#line 8
static void CommandHandlerC$CommandHandler$printNeighbors(void );




static void CommandHandlerC$CommandHandler$setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
#line 12
static void CommandHandlerC$CommandHandler$setTestServer(uint8_t server_port);
#line 9
static void CommandHandlerC$CommandHandler$printRouteTable(void );
#line 7
static void CommandHandlerC$CommandHandler$ping(uint8_t destination, uint8_t *payload);
# 18 "/home/luis/workspace/Project0/src/lib/modules/CommandHandlerC.nc"
static inline error_t CommandHandlerC$CommandHandler$receive(pack *msg);
# 7 "/home/luis/workspace/Project0/src/lib/modules/PacketInfoC.nc"
static uint16_t PacketInfoC$Seq[1000];

static inline uint16_t PacketInfoC$PacketInfo$getSeq(void );




static inline void PacketInfoC$PacketInfo$incSeq(void );
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t NeighborC$NeighborLS$size(void );

static void NeighborC$NeighborLS$set(uint16_t position, NeighborC$NeighborLS$t input);
#line 23
static bool NeighborC$NeighborLS$isEmpty(void );

static NeighborC$NeighborLS$t NeighborC$NeighborLS$get(uint16_t position);
#line 17
static void NeighborC$NeighborLS$pushback(NeighborC$NeighborLS$t input);






static uint16_t NeighborC$Neighbors$size(void );

static void NeighborC$Neighbors$set(uint16_t position, NeighborC$Neighbors$t input);
#line 25
static NeighborC$Neighbors$t NeighborC$Neighbors$get(uint16_t position);

static void NeighborC$Neighbors$delete(uint16_t position);
#line 17
static void NeighborC$Neighbors$pushback(NeighborC$Neighbors$t input);
# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
static uint16_t NeighborC$PacketInfo$getSeq(void );

static void NeighborC$PacketInfo$incSeq(void );
# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Flooding.nc"
static error_t NeighborC$Flooding$start(pack *msg);
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
static error_t NeighborC$Sender$send(pack msg, uint16_t dest);
# 24 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
uint8_t NeighborC$payday[1000][PACKET_MAX_PAYLOAD_SIZE];

pack NeighborC$sendPackage[1000];
NeighborTuple NeighborC$newtuple[1000];
LinkState *NeighborC$newls[1000];
LinkState NeighborC$newls2[1000];
static uint16_t NeighborC$Seq[1000];
int NeighborC$i[1000];
#line 31
int NeighborC$j[1000];
#line 31
int NeighborC$updated[1000];
static void NeighborC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);

static inline error_t NeighborC$Neighbor$receive(pack *myMsg);
#line 46
static inline uint16_t NeighborC$Neighbor$reply(pack *myMsg);
#line 67
static inline error_t NeighborC$Neighbor$startDisc(pack *msg);
#line 101
static inline error_t NeighborC$Neighbor$print(void );
#line 113
static error_t NeighborC$Neighbor$sendNeighbors(void );
#line 155
static inline error_t NeighborC$Neighbor$addLS(pack *msg);
#line 182
static inline error_t NeighborC$Neighbor$printLS(void );
#line 199
static void NeighborC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 18 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
uint16_t /*NodeC.Neighbors*/ListC$0$MAX_SIZE[1000];

/*NodeC.Neighbors*/ListC$0$t /*NodeC.Neighbors*/ListC$0$container[1000][16];
uint16_t /*NodeC.Neighbors*/ListC$0$size[1000];

static inline void /*NodeC.Neighbors*/ListC$0$List$pushback(/*NodeC.Neighbors*/ListC$0$t input);
#line 81
static inline uint16_t /*NodeC.Neighbors*/ListC$0$List$size(void );



static inline /*NodeC.Neighbors*/ListC$0$t /*NodeC.Neighbors*/ListC$0$List$get(uint16_t position);



static inline void /*NodeC.Neighbors*/ListC$0$List$set(uint16_t position, /*NodeC.Neighbors*/ListC$0$t input);




static inline void /*NodeC.Neighbors*/ListC$0$List$delete(uint16_t position);
#line 18
uint16_t /*NodeC.NeighborLS*/ListC$1$MAX_SIZE[1000];

/*NodeC.NeighborLS*/ListC$1$t /*NodeC.NeighborLS*/ListC$1$container[1000][16];
uint16_t /*NodeC.NeighborLS*/ListC$1$size[1000];

static void /*NodeC.NeighborLS*/ListC$1$List$pushback(/*NodeC.NeighborLS*/ListC$1$t input);
#line 74
static inline bool /*NodeC.NeighborLS*/ListC$1$List$isEmpty(void );






static inline uint16_t /*NodeC.NeighborLS*/ListC$1$List$size(void );



static inline /*NodeC.NeighborLS*/ListC$1$t /*NodeC.NeighborLS*/ListC$1$List$get(uint16_t position);



static inline void /*NodeC.NeighborLS*/ListC$1$List$set(uint16_t position, /*NodeC.NeighborLS*/ListC$1$t input);
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
static error_t FloodingC$Sender$send(pack msg, uint16_t dest);
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t FloodingC$recPackets$size(void );
static FloodingC$recPackets$t FloodingC$recPackets$get(uint16_t position);
#line 17
static void FloodingC$recPackets$pushback(FloodingC$recPackets$t input);


static FloodingC$recPackets$t FloodingC$recPackets$popfront(void );
# 26 "/home/luis/workspace/Project0/src/lib/modules/FloodingC.nc"
PacketID FloodingC$newpackid[1000];



int FloodingC$i[1000];



static inline int FloodingC$checkSequences(uint16_t seq, uint16_t src);
#line 50
static inline void FloodingC$printMsg(pack *msg);





static inline void FloodingC$broadcastMsg(pack *msg);







static inline error_t FloodingC$Flooding$start(pack *myMsg);
#line 89
static inline uint16_t FloodingC$Flooding$receive(pack *myMsg);
# 18 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
uint16_t /*NodeC.recPackets*/ListC$2$MAX_SIZE[1000];

/*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$container[1000][99];
uint16_t /*NodeC.recPackets*/ListC$2$size[1000];

static void /*NodeC.recPackets*/ListC$2$List$pushback(/*NodeC.recPackets*/ListC$2$t input);
#line 50
static /*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$List$popfront(void );
#line 81
static inline uint16_t /*NodeC.recPackets*/ListC$2$List$size(void );



static inline /*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$List$get(uint16_t position);
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t ShortestPathC$NeighborLS$size(void );
static ShortestPathC$NeighborLS$t ShortestPathC$NeighborLS$get(uint16_t position);
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t ShortestPathC$Tentative$size(void );
#line 14
static ShortestPathC$Tentative$t ShortestPathC$Tentative$get(uint32_t key);


static bool ShortestPathC$Tentative$isEmpty(void );
#line 12
static void ShortestPathC$Tentative$remove(uint32_t key);
#line 11
static void ShortestPathC$Tentative$insert(uint32_t key, ShortestPathC$Tentative$t input);







static uint32_t *ShortestPathC$Tentative$getKeys(void );
#line 16
static bool ShortestPathC$Tentative$contains(uint32_t key);
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
static error_t ShortestPathC$Sender$send(pack msg, uint16_t dest);
# 13 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static void ShortestPathC$ConfirmedNodes$clear(void );




static uint16_t ShortestPathC$ConfirmedNodes$size(void );
#line 14
static ShortestPathC$ConfirmedNodes$t ShortestPathC$ConfirmedNodes$get(uint32_t key);
#line 11
static void ShortestPathC$ConfirmedNodes$insert(uint32_t key, ShortestPathC$ConfirmedNodes$t input);







static uint32_t *ShortestPathC$ConfirmedNodes$getKeys(void );
#line 16
static bool ShortestPathC$ConfirmedNodes$contains(uint32_t key);
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
static uint16_t ShortestPathC$recPackets$size(void );
static ShortestPathC$recPackets$t ShortestPathC$recPackets$get(uint16_t position);
#line 17
static void ShortestPathC$recPackets$pushback(ShortestPathC$recPackets$t input);


static ShortestPathC$recPackets$t ShortestPathC$recPackets$popfront(void );
# 28 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
uint16_t ShortestPathC$i[1000];
LinkState ShortestPathC$newls[1000];
Route ShortestPathC$next[1000];
Route ShortestPathC$route[1000];
Route ShortestPathC$route2[1000];
uint8_t ShortestPathC$neighbor[1000];
uint32_t *ShortestPathC$keys[1000];
uint32_t ShortestPathC$key[1000];
uint16_t ShortestPathC$cost[1000];
PacketID ShortestPathC$newpackid[1000];




static int ShortestPathC$checkSequences(uint16_t seq, uint16_t src);
#line 58
static void ShortestPathC$printMsg(pack *msg);





static inline error_t ShortestPathC$ShortestPath$Dijkstra(void );
#line 169
static inline error_t ShortestPathC$ShortestPath$PrintRoutingTable(void );
#line 187
static error_t ShortestPathC$ShortestPath$RoutePack(pack *myMsg);
#line 241
static error_t ShortestPathC$ShortestPath$SendPack(pack *myMsg);
# 15 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
uint16_t /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[1000];




#line 17
typedef struct /*NodeC.Tentative*/HashmapC$0$hashmapEntry {
  uint32_t key;
  /*NodeC.Tentative*/HashmapC$0$t value;
} /*NodeC.Tentative*/HashmapC$0$hashmapEntry;

/*NodeC.Tentative*/HashmapC$0$hashmapEntry /*NodeC.Tentative*/HashmapC$0$map[1000][16];
uint32_t /*NodeC.Tentative*/HashmapC$0$keys[1000][16];
uint16_t /*NodeC.Tentative*/HashmapC$0$numofVals[1000];


static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash2(uint32_t k);


static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash3(uint32_t k);



static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash(uint32_t k, uint32_t i);



static void /*NodeC.Tentative*/HashmapC$0$Hashmap$insert(uint32_t k, /*NodeC.Tentative*/HashmapC$0$t input);
#line 59
static void /*NodeC.Tentative*/HashmapC$0$Hashmap$remove(uint32_t k);
#line 102
static /*NodeC.Tentative*/HashmapC$0$t /*NodeC.Tentative*/HashmapC$0$Hashmap$get(uint32_t k);
#line 125
static bool /*NodeC.Tentative*/HashmapC$0$Hashmap$contains(uint32_t k);










static inline bool /*NodeC.Tentative*/HashmapC$0$Hashmap$isEmpty(void );





static inline uint32_t */*NodeC.Tentative*/HashmapC$0$Hashmap$getKeys(void );



static inline uint16_t /*NodeC.Tentative*/HashmapC$0$Hashmap$size(void );
#line 15
uint16_t /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[1000];




#line 17
typedef struct /*NodeC.ConfirmedNodes*/HashmapC$1$hashmapEntry {
  uint32_t key;
  /*NodeC.ConfirmedNodes*/HashmapC$1$t value;
} /*NodeC.ConfirmedNodes*/HashmapC$1$hashmapEntry;

/*NodeC.ConfirmedNodes*/HashmapC$1$hashmapEntry /*NodeC.ConfirmedNodes*/HashmapC$1$map[1000][16];
uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$keys[1000][16];
uint16_t /*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[1000];


static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash2(uint32_t k);


static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash3(uint32_t k);



static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash(uint32_t k, uint32_t i);



static void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$insert(uint32_t k, /*NodeC.ConfirmedNodes*/HashmapC$1$t input);
#line 90
static inline void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$clear(void );
#line 102
static /*NodeC.ConfirmedNodes*/HashmapC$1$t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$get(uint32_t k);
#line 125
static inline bool /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$contains(uint32_t k);
#line 142
static inline uint32_t */*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$getKeys(void );



static inline uint16_t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$size(void );
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportC$TimeoutTimer$startPeriodic(uint32_t dt);
# 11 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
static error_t TransportC$ShortestPath$SendPack(pack *myMsg);
# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
static uint16_t TransportC$PacketInfo$getSeq(void );

static void TransportC$PacketInfo$incSeq(void );
# 15 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
static error_t TransportC$Application$clientReady(void );

static error_t TransportC$Application$serverReady(void );
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t TransportC$Sockets$size(void );
#line 14
static TransportC$Sockets$t TransportC$Sockets$get(uint32_t key);
#line 12
static void TransportC$Sockets$remove(uint32_t key);
#line 11
static void TransportC$Sockets$insert(uint32_t key, TransportC$Sockets$t input);







static uint32_t *TransportC$Sockets$getKeys(void );
#line 16
static bool TransportC$Sockets$contains(uint32_t key);
# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportC$HandShakeTimer$startOneShot(uint32_t dt);
#line 73
static void TransportC$AckTimer$startOneShot(uint32_t dt);
# 14 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static TransportC$FDs$t TransportC$FDs$get(uint32_t key);
#line 12
static void TransportC$FDs$remove(uint32_t key);
#line 11
static void TransportC$FDs$insert(uint32_t key, TransportC$FDs$t input);




static bool TransportC$FDs$contains(uint32_t key);
# 26 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
uint8_t TransportC$payday[1000][PACKET_MAX_PAYLOAD_SIZE];
pack TransportC$sendPackage[1000];
socket_storage_t TransportC$nodeSocket[1000];
socket_addr_t TransportC$nodeAddr[1000];
socket_t TransportC$nodeFD[1000];
socket_t TransportC$sock[1000];
socket_addr_t TransportC$addrTMP[1000];
socket_storage_t TransportC$sockSt[1000];
static uint16_t TransportC$Seq[1000];

uint16_t TransportC$i[1000];
TCP *TransportC$recTCP[1000];



static void TransportC$sendSignal(socket_t fd);
static inline void TransportC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);

static inline void TransportC$Transport$startTimer(void );






static socket_t TransportC$Transport$socket(void );
#line 78
static error_t TransportC$Transport$bind(socket_t fd, socket_addr_t *addr);
#line 96
static inline socket_t TransportC$Transport$accept(socket_t fd);
#line 140
static inline uint16_t TransportC$Transport$write(socket_t fd);
#line 207
static inline error_t TransportC$Transport$receive(pack *package);
#line 435
static inline uint16_t TransportC$Transport$read(socket_t fd, uint8_t *buff, uint16_t bufflen);
#line 462
static inline error_t TransportC$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 490
static inline error_t TransportC$Transport$close(socket_t fd);
#line 529
static inline error_t TransportC$Transport$listen(socket_t fd);
#line 545
static error_t TransportC$Transport$setNodeSocket(socket_t fd);
#line 559
static inline error_t TransportC$Transport$incoming(TCP data_TCP);
#line 639
static error_t TransportC$Transport$send(TCP ack_TCP);
#line 769
static inline void TransportC$TimeoutTimer$fired(void );
#line 806
static inline void TransportC$HandShakeTimer$fired(void );
#line 837
static inline void TransportC$AckTimer$fired(void );
#line 876
static void TransportC$sendSignal(socket_t fd);
#line 888
static inline void TransportC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length);
# 15 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
uint16_t /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[1000];




#line 17
typedef struct /*NodeC.Sockets*/HashmapC$2$hashmapEntry {
  uint32_t key;
  /*NodeC.Sockets*/HashmapC$2$t value;
} /*NodeC.Sockets*/HashmapC$2$hashmapEntry;

/*NodeC.Sockets*/HashmapC$2$hashmapEntry /*NodeC.Sockets*/HashmapC$2$map[1000][15];
uint32_t /*NodeC.Sockets*/HashmapC$2$keys[1000][15];
uint16_t /*NodeC.Sockets*/HashmapC$2$numofVals[1000];


static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash2(uint32_t k);


static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash3(uint32_t k);



static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash(uint32_t k, uint32_t i);



static void /*NodeC.Sockets*/HashmapC$2$Hashmap$insert(uint32_t k, /*NodeC.Sockets*/HashmapC$2$t input);
#line 59
static void /*NodeC.Sockets*/HashmapC$2$Hashmap$remove(uint32_t k);
#line 102
static /*NodeC.Sockets*/HashmapC$2$t /*NodeC.Sockets*/HashmapC$2$Hashmap$get(uint32_t k);
#line 125
static bool /*NodeC.Sockets*/HashmapC$2$Hashmap$contains(uint32_t k);
#line 142
static inline uint32_t */*NodeC.Sockets*/HashmapC$2$Hashmap$getKeys(void );



static inline uint16_t /*NodeC.Sockets*/HashmapC$2$Hashmap$size(void );
#line 15
uint16_t /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[1000];




#line 17
typedef struct /*NodeC.FDs*/HashmapC$3$hashmapEntry {
  uint32_t key;
  /*NodeC.FDs*/HashmapC$3$t value;
} /*NodeC.FDs*/HashmapC$3$hashmapEntry;

/*NodeC.FDs*/HashmapC$3$hashmapEntry /*NodeC.FDs*/HashmapC$3$map[1000][15];
uint32_t /*NodeC.FDs*/HashmapC$3$keys[1000][15];
uint16_t /*NodeC.FDs*/HashmapC$3$numofVals[1000];


static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash2(uint32_t k);


static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash3(uint32_t k);



static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash(uint32_t k, uint32_t i);



static void /*NodeC.FDs*/HashmapC$3$Hashmap$insert(uint32_t k, /*NodeC.FDs*/HashmapC$3$t input);
#line 59
static void /*NodeC.FDs*/HashmapC$3$Hashmap$remove(uint32_t k);
#line 102
static /*NodeC.FDs*/HashmapC$3$t /*NodeC.FDs*/HashmapC$3$Hashmap$get(uint32_t k);
#line 125
static bool /*NodeC.FDs*/HashmapC$3$Hashmap$contains(uint32_t k);
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t ApplicationC$Users$size(void );
#line 14
static ApplicationC$Users$t ApplicationC$Users$get(uint32_t key);
#line 11
static void ApplicationC$Users$insert(uint32_t key, ApplicationC$Users$t input);







static uint32_t *ApplicationC$Users$getKeys(void );
# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ApplicationC$TryWritingTimer$startOneShot(uint32_t dt);
# 149 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
static error_t ApplicationC$Transport$listen(socket_t fd);
#line 102
static uint16_t ApplicationC$Transport$read(socket_t fd, uint8_t *buff, uint16_t bufflen);
#line 44
static error_t ApplicationC$Transport$bind(socket_t fd, socket_addr_t *addr);
#line 30
static socket_t ApplicationC$Transport$socket(void );
#line 116
static error_t ApplicationC$Transport$connect(socket_t fd, socket_addr_t *addr);
#line 75
static uint16_t ApplicationC$Transport$write(socket_t fd);
#line 151
static error_t ApplicationC$Transport$setNodeSocket(socket_t fd);
# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ApplicationC$ReadTimer$startOneShot(uint32_t dt);
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
static uint16_t ApplicationC$Sockets$size(void );
#line 14
static ApplicationC$Sockets$t ApplicationC$Sockets$get(uint32_t key);
#line 12
static void ApplicationC$Sockets$remove(uint32_t key);
#line 11
static void ApplicationC$Sockets$insert(uint32_t key, ApplicationC$Sockets$t input);







static uint32_t *ApplicationC$Sockets$getKeys(void );
#line 14
static ApplicationC$FDs$t ApplicationC$FDs$get(uint32_t key);
#line 11
static void ApplicationC$FDs$insert(uint32_t key, ApplicationC$FDs$t input);
# 23 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
socket_t ApplicationC$fd[1000];
#line 23
socket_t ApplicationC$sock[1000];
socket_addr_t ApplicationC$addr[1000];
socket_storage_t ApplicationC$sockSt[1000];
User ApplicationC$user[1000];
#line 26
User ApplicationC$user2[1000];
uint8_t ApplicationC$readBuffer[1000][READ_BUFFER_MAX];
uint16_t ApplicationC$readBuffSize[1000];
uint8_t ApplicationC$messageToSend[1000][150];
uint8_t ApplicationC$messageToSendSize[1000];
uint16_t ApplicationC$i[1000];

static inline error_t ApplicationC$Application$initializeServer(uint8_t server_port);
#line 52
static inline error_t ApplicationC$Application$initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
#line 96
static inline error_t ApplicationC$Application$messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message);
#line 127
static inline error_t ApplicationC$Application$query(socket_t qfd, uint8_t *buff, uint16_t bufflen);
#line 344
static inline error_t ApplicationC$Application$clientReady(void );






static inline error_t ApplicationC$Application$serverReady(void );






static inline void ApplicationC$TryWritingTimer$fired(void );
#line 377
static inline void ApplicationC$ReadTimer$fired(void );
# 15 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
uint16_t /*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[1000];




#line 17
typedef struct /*NodeC.Users*/HashmapC$4$hashmapEntry {
  uint32_t key;
  /*NodeC.Users*/HashmapC$4$t value;
} /*NodeC.Users*/HashmapC$4$hashmapEntry;

/*NodeC.Users*/HashmapC$4$hashmapEntry /*NodeC.Users*/HashmapC$4$map[1000][15];
uint32_t /*NodeC.Users*/HashmapC$4$keys[1000][15];
uint16_t /*NodeC.Users*/HashmapC$4$numofVals[1000];


static inline uint32_t /*NodeC.Users*/HashmapC$4$hash2(uint32_t k);


static inline uint32_t /*NodeC.Users*/HashmapC$4$hash3(uint32_t k);



static inline uint32_t /*NodeC.Users*/HashmapC$4$hash(uint32_t k, uint32_t i);



static inline void /*NodeC.Users*/HashmapC$4$Hashmap$insert(uint32_t k, /*NodeC.Users*/HashmapC$4$t input);
#line 102
static /*NodeC.Users*/HashmapC$4$t /*NodeC.Users*/HashmapC$4$Hashmap$get(uint32_t k);
#line 142
static inline uint32_t */*NodeC.Users*/HashmapC$4$Hashmap$getKeys(void );



static inline uint16_t /*NodeC.Users*/HashmapC$4$Hashmap$size(void );
# 78 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(109U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 185
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 28;
}

# 88 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 9 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
inline static error_t Node$ShortestPath$RoutePack(pack *myMsg){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = ShortestPathC$ShortestPath$RoutePack(myMsg);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 11 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void TransportC$Sockets$insert(uint32_t key, TransportC$Sockets$t input){
#line 11
  /*NodeC.Sockets*/HashmapC$2$Hashmap$insert(key, input);
#line 11
}
#line 11

inline static void TransportC$Sockets$remove(uint32_t key){
#line 12
  /*NodeC.Sockets*/HashmapC$2$Hashmap$remove(key);
#line 12
}
#line 12




inline static bool TransportC$Sockets$contains(uint32_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$contains(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
#line 14
inline static TransportC$Sockets$t TransportC$Sockets$get(uint32_t key){
#line 14
  struct socket_storage_t __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static TransportC$FDs$t TransportC$FDs$get(uint32_t key){
#line 14
  unsigned short __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.FDs*/HashmapC$3$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 559 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline error_t TransportC$Transport$incoming(TCP data_TCP)
{
  uint16_t window_size;
#line 561
  uint16_t send_size;
#line 561
  uint16_t LBRc_RBRe;
#line 561
  uint16_t tmp;
  TCP *sendTCP;
  uint16_t j;

#line 564
  sendTCP = (TCP *)TransportC$payday[sim_node()];
  j = 0;

  TransportC$sock[sim_node()] = TransportC$FDs$get(__nesc_ntoh_uint8(data_TCP.src_port.nxdata));
  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(TransportC$sock[sim_node()]);

  if (TransportC$sockSt[sim_node()].nextExpectedSeq < __nesc_ntoh_uint16(data_TCP.seq.nxdata)) 
    {

      return FAIL;
    }

  tmp = TransportC$sockSt[sim_node()].nextByteExpected - (TransportC$sockSt[sim_node()].nextExpectedSeq - __nesc_ntoh_uint16(data_TCP.seq.nxdata));
  if (tmp < TransportC$sockSt[sim_node()].nextByteExpected) 
    {
      __nesc_hton_uint8(sendTCP->adv_win.nxdata, (uint8_t )(SOCKET_RECEIVE_BUFFER_SIZE - TransportC$sockSt[sim_node()].recBuffSize));
      __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
      __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata));
      __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq - __nesc_ntoh_uint16(data_TCP.seq.nxdata));
      __nesc_hton_uint8(sendTCP->flag.nxdata, DATA_ACK);
      __nesc_hton_uint16(sendTCP->ack.nxdata, __nesc_ntoh_uint16(data_TCP.seq.nxdata) + __nesc_ntoh_uint8(data_TCP.dataSize.nxdata));

      TransportC$sendSignal(TransportC$sock[sim_node()]);
      return SUCCESS;
    }

  __nesc_hton_uint16(sendTCP->ack.nxdata, __nesc_ntoh_uint16(data_TCP.seq.nxdata));


  if (SOCKET_RECEIVE_BUFFER_SIZE - (TransportC$sockSt[sim_node()].lastByteRec - TransportC$sockSt[sim_node()].lastByteRead) < __nesc_ntoh_uint8(data_TCP.dataSize.nxdata)) 
    {
      window_size = SOCKET_RECEIVE_BUFFER_SIZE - (TransportC$sockSt[sim_node()].lastByteRec - TransportC$sockSt[sim_node()].lastByteRead);
    }
  else 
    {
      window_size = __nesc_ntoh_uint8(data_TCP.dataSize.nxdata);
    }


  for (TransportC$i[sim_node()] = TransportC$sockSt[sim_node()].nextByteExpected; TransportC$i[sim_node()] < TransportC$sockSt[sim_node()].nextByteExpected + window_size; TransportC$i[sim_node()]++) 
    {

      if (j >= __nesc_ntoh_uint8(data_TCP.dataSize.nxdata)) 
        {
          break;
        }

      TransportC$sockSt[sim_node()].recBuff[TransportC$i[sim_node()] % 128] = __nesc_ntoh_uint8(data_TCP.data[j].nxdata);
      TransportC$sockSt[sim_node()].lastByteRec++;
      j++;
    }

  TransportC$sockSt[sim_node()].nextByteExpected = TransportC$sockSt[sim_node()].lastByteRec + 1;
  TransportC$sockSt[sim_node()].recBuffSize = TransportC$sockSt[sim_node()].lastByteRec - TransportC$sockSt[sim_node()].lastByteRead;


  __nesc_hton_uint16(sendTCP->ack.nxdata, __nesc_ntoh_uint16(data_TCP.seq.nxdata) + j);
  TransportC$sockSt[sim_node()].nextExpectedSeq = __nesc_ntoh_uint16(sendTCP->ack.nxdata);

  __nesc_hton_uint8(sendTCP->adv_win.nxdata, (uint8_t )(SOCKET_RECEIVE_BUFFER_SIZE - TransportC$sockSt[sim_node()].recBuffSize));
  __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
  __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata));
  __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq - send_size);
  __nesc_hton_uint8(sendTCP->flag.nxdata, DATA_ACK);



  TransportC$sendSignal(TransportC$sock[sim_node()]);

  TransportC$Sockets$remove(TransportC$sock[sim_node()]);
  TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 12 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void TransportC$FDs$remove(uint32_t key){
#line 12
  /*NodeC.FDs*/HashmapC$3$Hashmap$remove(key);
#line 12
}
#line 12
# 11 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
inline static error_t TransportC$ShortestPath$SendPack(pack *myMsg){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = ShortestPathC$ShortestPath$SendPack(myMsg);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 351 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$serverReady(void )
{
  ApplicationC$ReadTimer$startOneShot(37707);

  return SUCCESS;
}

# 17 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
inline static error_t TransportC$Application$serverReady(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ApplicationC$Application$serverReady();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 344 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$clientReady(void )
{
  ApplicationC$TryWritingTimer$startOneShot(40000);

  return SUCCESS;
}

# 15 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
inline static error_t TransportC$Application$clientReady(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = ApplicationC$Application$clientReady();
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 16 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static bool TransportC$FDs$contains(uint32_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*NodeC.FDs*/HashmapC$3$Hashmap$contains(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
#line 11
inline static void TransportC$FDs$insert(uint32_t key, TransportC$FDs$t input){
#line 11
  /*NodeC.FDs*/HashmapC$3$Hashmap$insert(key, input);
#line 11
}
#line 11
# 96 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline socket_t TransportC$Transport$accept(socket_t fd)
{
  if (!TransportC$Sockets$contains(fd)) 
    {
      return FAIL;
    }


  TransportC$nodeSocket[sim_node()] = TransportC$Sockets$get(TransportC$nodeFD[sim_node()]);
  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);
  __nesc_hton_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata, __nesc_ntoh_uint8(TransportC$nodeSocket[sim_node()].sockAddr.srcPort.nxdata));
  __nesc_hton_uint16(TransportC$sockSt[sim_node()].sockAddr.srcAddr.nxdata, __nesc_ntoh_uint16(TransportC$nodeSocket[sim_node()].sockAddr.srcAddr.nxdata));

  TransportC$sockSt[sim_node()].messageToQuerySize = 0;
  TransportC$sockSt[sim_node()].sendBuffSize = 0;
  TransportC$sockSt[sim_node()].recBuffSize = 0;
  TransportC$sockSt[sim_node()].lastByteRec = 65535;
  TransportC$sockSt[sim_node()].lastByteRead = 65535;
  TransportC$sockSt[sim_node()].nextByteExpected = 0;
  TransportC$sockSt[sim_node()].nextExpectedSeq = 65535;
  TransportC$sockSt[sim_node()].recBuffSize = 0;

  TransportC$sockSt[sim_node()].dataToSendSize = 0;
  TransportC$sockSt[sim_node()].messageToQuerySize = 0;
  TransportC$sockSt[sim_node()].sendBuffSize = 0;
  TransportC$sockSt[sim_node()].recBuffSize = 0;
  TransportC$sockSt[sim_node()].lastByteSent = 0;
  TransportC$sockSt[sim_node()].lastByteWritten = 0;
  TransportC$sockSt[sim_node()].lastByteAck = 0;

  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);


  if (TransportC$FDs$contains(__nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata))) 
    {
      TransportC$FDs$remove(__nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
    }

  TransportC$FDs$insert(__nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata), fd);

  return SUCCESS;
}

#line 207
static inline error_t TransportC$Transport$receive(pack *package)
{
  TCP *sendTCP;

#line 210
  TransportC$recTCP[sim_node()] = (TCP *)package->payload;
  sendTCP = (TCP *)TransportC$payday[sim_node()];


  if (__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata) != __nesc_ntoh_uint8(TransportC$nodeAddr[sim_node()].srcPort.nxdata)) 
    {
      sim_log_debug(242U, "Project3TGen", "Port not open\n");
      return FAIL;
    }


  if (__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->flag.nxdata) == SYN) 
    {
      sim_log_debug(243U, "Project3TGen", "Received SYN from node %d at port %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata));

      if (TransportC$FDs$contains(__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->src_port.nxdata)) == FALSE) 
        {
          __nesc_hton_uint16(TransportC$addrTMP[sim_node()].destAddr.nxdata, __nesc_ntoh_uint16(package->src.nxdata));
          __nesc_hton_uint8(TransportC$addrTMP[sim_node()].destPort.nxdata, __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->src_port.nxdata));

          TransportC$sock[sim_node()] = TransportC$Transport$socket();

          if (TransportC$sock[sim_node()] == 0) 
            {
              return FAIL;
            }

          TransportC$Transport$bind(TransportC$sock[sim_node()], &TransportC$addrTMP[sim_node()]);
          TransportC$Transport$accept(TransportC$sock[sim_node()]);
        }
    }


  if (TransportC$FDs$contains(__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->src_port.nxdata)) == FALSE) 
    {
      return FAIL;
    }

  TransportC$sock[sim_node()] = TransportC$FDs$get(__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->src_port.nxdata));
  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(TransportC$sock[sim_node()]);

  __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata));
  __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
  __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq);
  __nesc_hton_uint16(sendTCP->ack.nxdata, __nesc_ntoh_uint16(TransportC$recTCP[sim_node()]->seq.nxdata) + 1);

  switch (__nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->flag.nxdata)) 
    {

      case SYN: 
        if (TransportC$sockSt[sim_node()].state == SOCK_LISTEN) 
          {
            __nesc_hton_uint8(sendTCP->flag.nxdata, SYN_ACK);
            TransportC$sockSt[sim_node()].state = SOCK_SYN_RCVD;

            TransportC$sendSignal(TransportC$sock[sim_node()]);
            TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];

            TransportC$sockSt[sim_node()].inHSTimeOut = TRUE;
            TransportC$sockSt[sim_node()].HStimeOut = 9000;

            sim_log_debug(244U, "Project3TGen", "Sent SYN_ACK\n");
            TransportC$sockSt[sim_node()].seq++;

            TransportC$Sockets$remove(TransportC$sock[sim_node()]);
            TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
          }
      break;

      case SYN_ACK: 
        sim_log_debug(245U, "Project3TGen", "Received SYN_ACK from node %d at port %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata));

      if (TransportC$sockSt[sim_node()].state == SOCK_SYN_SENT) 
        {
          __nesc_hton_uint8(sendTCP->flag.nxdata, ACK);
          TransportC$sockSt[sim_node()].state = SOCK_ESTABLISHED;
          sim_log_debug(246U, "Project3TGen", "Connection Established\n");

          TransportC$sendSignal(TransportC$sock[sim_node()]);
          TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];
          sim_log_debug(247U, "Project3TGen", "Sent ACK\n");

          TransportC$sockSt[sim_node()].ackseq = TransportC$sockSt[sim_node()].seq;
          TransportC$sockSt[sim_node()].seq++;


          TransportC$sockSt[sim_node()].inHSTimeOut = FALSE;
          TransportC$sockSt[sim_node()].HStimeOut = 0;

          TransportC$Sockets$remove(TransportC$sock[sim_node()]);
          TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);

          TransportC$Application$clientReady();
          TransportC$Application$serverReady();
        }
      else {
#line 305
        if (TransportC$sockSt[sim_node()].state == SOCK_ESTABLISHED) 
          {
            __nesc_hton_uint8(sendTCP->flag.nxdata, ACK);
            __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].ackseq);
            TransportC$sockSt[sim_node()].seq = TransportC$sockSt[sim_node()].ackseq + 1;

            TransportC$Sockets$remove(TransportC$sock[sim_node()]);
            TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);

            TransportC$ShortestPath$SendPack(& TransportC$sockSt[sim_node()].packet);
            sim_log_debug(248U, "Project3TGen", "Sent ACK\n");
          }
        }
#line 317
      break;

      case ACK: 
        sim_log_debug(249U, "Project3TGen", "Received ACK from node %d at port %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata));

      if (TransportC$sockSt[sim_node()].state == SOCK_FIN_WAIT) 
        {
          TransportC$sockSt[sim_node()].state = SOCK_FIN_WAIT2;
        }
      else {
#line 326
        if (TransportC$sockSt[sim_node()].state == SOCK_SYN_RCVD) 
          {
            TransportC$sockSt[sim_node()].state = SOCK_ESTABLISHED;

            TransportC$sockSt[sim_node()].inHSTimeOut = FALSE;
            TransportC$sockSt[sim_node()].HStimeOut = 0;
            TransportC$sockSt[sim_node()].nextExpectedSeq = __nesc_ntoh_uint16(TransportC$recTCP[sim_node()]->seq.nxdata) + 1;

            sim_log_debug(250U, "Project3TGen", "Connection Established, seq: %d\n", __nesc_ntoh_uint16(TransportC$recTCP[sim_node()]->seq.nxdata));
          }
        else {
#line 336
          if (TransportC$sockSt[sim_node()].state == SOCK_LAST_ACK) 
            {
              TransportC$sockSt[sim_node()].state = SOCK_CLOSED;
              TransportC$sockSt[sim_node()].inHSTimeOut = FALSE;
              TransportC$sockSt[sim_node()].HStimeOut = 0;

              TransportC$FDs$remove(__nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
              TransportC$Sockets$remove(TransportC$sock[sim_node()]);

              sim_log_debug(251U, "Project3TGen", "Connection Closed\n");
            }
          }
        }
#line 347
      break;

      case FIN: 
        sim_log_debug(252U, "Project3TGen", "Received FIN from node %d at port %d\n", __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata));

      if (TransportC$sockSt[sim_node()].state == SOCK_ESTABLISHED) 
        {
          __nesc_hton_uint8(sendTCP->flag.nxdata, FIN);
          TransportC$sockSt[sim_node()].state = SOCK_LAST_ACK;

          TransportC$sendSignal(TransportC$sock[sim_node()]);
          TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];


          TransportC$sockSt[sim_node()].inHSTimeOut = TRUE;
          TransportC$sockSt[sim_node()].HStimeOut = 9000;

          sim_log_debug(253U, "Project3TGen", "Sent FIN\n");
          TransportC$sockSt[sim_node()].seq++;

          TransportC$Sockets$remove(TransportC$sock[sim_node()]);
          TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
        }
      else {
#line 370
        if (TransportC$sockSt[sim_node()].state == SOCK_FIN_WAIT) 
          {
            __nesc_hton_uint8(sendTCP->flag.nxdata, ACK);
            TransportC$sockSt[sim_node()].state = SOCK_TIME_WAIT;

            TransportC$sendSignal(TransportC$sock[sim_node()]);
            TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];


            TransportC$sockSt[sim_node()].inHSTimeOut = TRUE;
            TransportC$sockSt[sim_node()].HStimeOut = 9000;


            TransportC$sockSt[sim_node()].inAckTimeOut = TRUE;
            TransportC$sockSt[sim_node()].acktimeOut = 18000;

            sim_log_debug(254U, "Project3TGen", "Sent ACK\n");
            TransportC$sockSt[sim_node()].seq++;

            TransportC$Sockets$remove(TransportC$sock[sim_node()]);
            TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
          }
        else {
#line 392
          if (TransportC$sockSt[sim_node()].state == SOCK_TIME_WAIT) 
            {

              TransportC$sockSt[sim_node()].inAckTimeOut = TRUE;
              TransportC$sockSt[sim_node()].acktimeOut = 18707;

              TransportC$Sockets$remove(TransportC$sock[sim_node()]);
              TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
            }
          }
        }
#line 401
      break;

      case DATA: 


        if (TransportC$sockSt[sim_node()].state == SOCK_ESTABLISHED) 
          {
            TransportC$Transport$incoming(*TransportC$recTCP[sim_node()]);
          }
      break;

      case DATA_ACK: 


        if (TransportC$sockSt[sim_node()].state == SOCK_ESTABLISHED) 
          {
            TransportC$Transport$send(*TransportC$recTCP[sim_node()]);
          }
      break;

      default: 
        sim_log_debug(255U, "Project3TGen", "Received Other: %c from node %d at port %d\n", __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->flag.nxdata), __nesc_ntoh_uint16(package->src.nxdata), __nesc_ntoh_uint8(TransportC$recTCP[sim_node()]->dest_port.nxdata));
      break;
    }

  if (TransportC$Sockets$contains(TransportC$sock[sim_node()])) 
    {
      TransportC$Sockets$remove(TransportC$sock[sim_node()]);
      TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
    }

  return SUCCESS;
}

# 85 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static error_t Node$Transport$receive(pack *package){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TransportC$Transport$receive(package);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
inline static error_t FloodingC$Sender$send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = SimpleSendP$SimpleSend$send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 56 "/home/luis/workspace/Project0/src/lib/modules/FloodingC.nc"
static inline void FloodingC$broadcastMsg(pack *msg)
{
  sim_log_debug(219U, "Project1F", "Broadcasting...\n");

  FloodingC$Sender$send(*msg, AM_BROADCAST_ADDR);
}

#line 50
static inline void FloodingC$printMsg(pack *msg)
{
  sim_log_debug(217U, "Project1F", "Delivered from node: %d\n", (uint16_t )__nesc_ntoh_uint16(msg->src.nxdata));
  sim_log_debug(218U, "genDebug", "Packet Payload: %s\n", msg->payload);
}

# 17 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void FloodingC$recPackets$pushback(FloodingC$recPackets$t input){
#line 17
  /*NodeC.recPackets*/ListC$2$List$pushback(input);
#line 17
}
#line 17



inline static FloodingC$recPackets$t FloodingC$recPackets$popfront(void ){
#line 20
  struct PacketID __nesc_result;
#line 20

#line 20
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$popfront();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 81 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline uint16_t /*NodeC.recPackets*/ListC$2$List$size(void )
#line 81
{
  return /*NodeC.recPackets*/ListC$2$size[sim_node()];
}

# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static uint16_t FloodingC$recPackets$size(void ){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$size();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 85 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline /*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$List$get(uint16_t position)
#line 85
{
  return /*NodeC.recPackets*/ListC$2$container[sim_node()][position];
}

# 25 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static FloodingC$recPackets$t FloodingC$recPackets$get(uint16_t position){
#line 25
  struct PacketID __nesc_result;
#line 25

#line 25
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$get(position);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 34 "/home/luis/workspace/Project0/src/lib/modules/FloodingC.nc"
static inline int FloodingC$checkSequences(uint16_t seq, uint16_t src)
{
  for (FloodingC$i[sim_node()] = 0; FloodingC$i[sim_node()] < FloodingC$recPackets$size(); FloodingC$i[sim_node()]++) 
    {
      FloodingC$newpackid[sim_node()] = FloodingC$recPackets$get(FloodingC$i[sim_node()]);

      if (seq == FloodingC$newpackid[sim_node()].sequence && src == FloodingC$newpackid[sim_node()].moteID) 
        {
          sim_log_debug(216U, "Project1F", "Already received packet!\n");
          return TRUE;
        }
    }

  return FALSE;
}

#line 89
static inline uint16_t FloodingC$Flooding$receive(pack *myMsg)
{
  sim_log_debug(220U, "Project1F", "Packet Received\n");


  if (FloodingC$checkSequences(__nesc_ntoh_uint16(myMsg->seq.nxdata), __nesc_ntoh_uint16(myMsg->src.nxdata)) == TRUE) 
    {
      return FALSE;
    }


  FloodingC$newpackid[sim_node()].sequence = __nesc_ntoh_uint16(myMsg->seq.nxdata);
  FloodingC$newpackid[sim_node()].moteID = __nesc_ntoh_uint16(myMsg->src.nxdata);


  if (FloodingC$recPackets$size() >= 90) 
    {
      for (FloodingC$i[sim_node()] = 0; FloodingC$i[sim_node()] < 70; FloodingC$i[sim_node()]++) 
        {
          FloodingC$recPackets$popfront();
        }
    }

  FloodingC$recPackets$pushback(FloodingC$newpackid[sim_node()]);


  if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == TOS_NODE_ID) 
    {
      FloodingC$printMsg(myMsg);
    }
  else 
    {
      FloodingC$broadcastMsg(myMsg);
    }

  return TRUE;
}

# 5 "/home/luis/workspace/Project0/src/lib/interfaces/Flooding.nc"
inline static uint16_t Node$Flooding$receive(pack *msg){
#line 5
  unsigned short __nesc_result;
#line 5

#line 5
  __nesc_result = FloodingC$Flooding$receive(msg);
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 17 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void NeighborC$NeighborLS$pushback(NeighborC$NeighborLS$t input){
#line 17
  /*NodeC.NeighborLS*/ListC$1$List$pushback(input);
#line 17
}
#line 17
# 89 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline void /*NodeC.NeighborLS*/ListC$1$List$set(uint16_t position, /*NodeC.NeighborLS*/ListC$1$t input)
{
  /*NodeC.NeighborLS*/ListC$1$container[sim_node()][position] = input;
}

# 26 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void NeighborC$NeighborLS$set(uint16_t position, NeighborC$NeighborLS$t input){
#line 26
  /*NodeC.NeighborLS*/ListC$1$List$set(position, input);
#line 26
}
#line 26
# 85 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline /*NodeC.NeighborLS*/ListC$1$t /*NodeC.NeighborLS*/ListC$1$List$get(uint16_t position)
#line 85
{
  return /*NodeC.NeighborLS*/ListC$1$container[sim_node()][position];
}

# 25 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static NeighborC$NeighborLS$t NeighborC$NeighborLS$get(uint16_t position){
#line 25
  nx_struct LinkState __nesc_result;
#line 25

#line 25
  __nesc_result = /*NodeC.NeighborLS*/ListC$1$List$get(position);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 81 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline uint16_t /*NodeC.NeighborLS*/ListC$1$List$size(void )
#line 81
{
  return /*NodeC.NeighborLS*/ListC$1$size[sim_node()];
}

# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static uint16_t NeighborC$NeighborLS$size(void ){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = /*NodeC.NeighborLS*/ListC$1$List$size();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 74 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline bool /*NodeC.NeighborLS*/ListC$1$List$isEmpty(void )
#line 74
{
  if (/*NodeC.NeighborLS*/ListC$1$size[sim_node()] == 0) {
    return TRUE;
    }
  else {
#line 78
    return FALSE;
    }
}

# 23 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static bool NeighborC$NeighborLS$isEmpty(void ){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  __nesc_result = /*NodeC.NeighborLS*/ListC$1$List$isEmpty();
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 155 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline error_t NeighborC$Neighbor$addLS(pack *msg)
{
  NeighborC$newls[sim_node()] = (LinkState *)msg->payload;

  if (NeighborC$NeighborLS$isEmpty() == TRUE) 
    {
      NeighborC$NeighborLS$pushback(*NeighborC$newls[sim_node()]);
      return SUCCESS;
    }

  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$NeighborLS$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newls2[sim_node()] = NeighborC$NeighborLS$get(NeighborC$i[sim_node()]);

      if (__nesc_ntoh_uint8(NeighborC$newls[sim_node()]->node.nxdata) == __nesc_ntoh_uint8(NeighborC$newls2[sim_node()].node.nxdata)) 
        {
          NeighborC$NeighborLS$set(NeighborC$i[sim_node()], *NeighborC$newls[sim_node()]);

          return SUCCESS;
        }
    }

  NeighborC$NeighborLS$pushback(*NeighborC$newls[sim_node()]);

  return SUCCESS;
}

# 15 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$addLS(pack *msg){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = NeighborC$Neighbor$addLS(msg);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 222 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void Node$BuildRoutingTableTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 73
}
#line 73
# 169 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning;
}

# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static bool Node$BuildRoutingTableTimer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
inline static bool Node$SendNeighborsTimer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(1U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 23 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline void /*NodeC.Neighbors*/ListC$0$List$pushback(/*NodeC.Neighbors*/ListC$0$t input)
#line 23
{
  if (/*NodeC.Neighbors*/ListC$0$size[sim_node()] < /*NodeC.Neighbors*/ListC$0$MAX_SIZE[sim_node()]) {
      /*NodeC.Neighbors*/ListC$0$container[sim_node()][/*NodeC.Neighbors*/ListC$0$size[sim_node()]] = input;
      /*NodeC.Neighbors*/ListC$0$size[sim_node()]++;
    }
}

# 17 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void NeighborC$Neighbors$pushback(NeighborC$Neighbors$t input){
#line 17
  /*NodeC.Neighbors*/ListC$0$List$pushback(input);
#line 17
}
#line 17
# 89 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline void /*NodeC.Neighbors*/ListC$0$List$set(uint16_t position, /*NodeC.Neighbors*/ListC$0$t input)
{
  /*NodeC.Neighbors*/ListC$0$container[sim_node()][position] = input;
}

# 26 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void NeighborC$Neighbors$set(uint16_t position, NeighborC$Neighbors$t input){
#line 26
  /*NodeC.Neighbors*/ListC$0$List$set(position, input);
#line 26
}
#line 26
# 85 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline /*NodeC.Neighbors*/ListC$0$t /*NodeC.Neighbors*/ListC$0$List$get(uint16_t position)
#line 85
{
  return /*NodeC.Neighbors*/ListC$0$container[sim_node()][position];
}

# 25 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static NeighborC$Neighbors$t NeighborC$Neighbors$get(uint16_t position){
#line 25
  nx_struct NeighborTuple __nesc_result;
#line 25

#line 25
  __nesc_result = /*NodeC.Neighbors*/ListC$0$List$get(position);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 81 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline uint16_t /*NodeC.Neighbors*/ListC$0$List$size(void )
#line 81
{
  return /*NodeC.Neighbors*/ListC$0$size[sim_node()];
}

# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static uint16_t NeighborC$Neighbors$size(void ){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = /*NodeC.Neighbors*/ListC$0$List$size();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 46 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline uint16_t NeighborC$Neighbor$reply(pack *myMsg)
{
  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$Neighbors$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newtuple[sim_node()] = NeighborC$Neighbors$get(NeighborC$i[sim_node()]);

      if (__nesc_ntoh_uint16(NeighborC$newtuple[sim_node()].mote.nxdata) == __nesc_ntoh_uint16(myMsg->src.nxdata)) 
        {
          __nesc_hton_uint16(NeighborC$newtuple[sim_node()].age.nxdata, 0);
          NeighborC$Neighbors$set(NeighborC$i[sim_node()], NeighborC$newtuple[sim_node()]);
          return FALSE;
        }
    }

  __nesc_hton_uint16(NeighborC$newtuple[sim_node()].mote.nxdata, __nesc_ntoh_uint16(myMsg->src.nxdata));
  __nesc_hton_uint16(NeighborC$newtuple[sim_node()].age.nxdata, 0);
  NeighborC$Neighbors$pushback(NeighborC$newtuple[sim_node()]);

  return TRUE;
}

# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static uint16_t Node$Neighbor$reply(pack *msg){
#line 7
  unsigned short __nesc_result;
#line 7

#line 7
  __nesc_result = NeighborC$Neighbor$reply(msg);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
inline static error_t NeighborC$Sender$send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = SimpleSendP$SimpleSend$send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 14 "/home/luis/workspace/Project0/src/lib/modules/PacketInfoC.nc"
static inline void PacketInfoC$PacketInfo$incSeq(void )
{
  PacketInfoC$Seq[sim_node()]++;

  return;
}

# 5 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
inline static void NeighborC$PacketInfo$incSeq(void ){
#line 5
  PacketInfoC$PacketInfo$incSeq();
#line 5
}
#line 5
# 9 "/home/luis/workspace/Project0/src/lib/modules/PacketInfoC.nc"
static inline uint16_t PacketInfoC$PacketInfo$getSeq(void )
{
  return PacketInfoC$Seq[sim_node()];
}

# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
inline static uint16_t NeighborC$PacketInfo$getSeq(void ){
#line 3
  unsigned short __nesc_result;
#line 3

#line 3
  __nesc_result = PacketInfoC$PacketInfo$getSeq();
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 34 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline error_t NeighborC$Neighbor$receive(pack *myMsg)
{
  NeighborC$Seq[sim_node()] = NeighborC$PacketInfo$getSeq();

  NeighborC$makePack(&NeighborC$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(myMsg->src.nxdata), 1, PROTOCOL_PINGREPLY, NeighborC$Seq[sim_node()]++, "NEIGHBOR_REPLY", PACKET_MAX_PAYLOAD_SIZE);
  NeighborC$PacketInfo$incSeq();

  NeighborC$Sender$send(NeighborC$sendPackage[sim_node()], __nesc_ntoh_uint16(myMsg->src.nxdata));

  return SUCCESS;
}

# 5 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$receive(pack *msg){
#line 5
  unsigned char __nesc_result;
#line 5

#line 5
  __nesc_result = NeighborC$Neighbor$receive(msg);
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 490 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline error_t TransportC$Transport$close(socket_t fd)
{
  TCP *sendTCP;

#line 493
  sendTCP = (TCP *)TransportC$payday[sim_node()];

  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);

  if (TransportC$sockSt[sim_node()].state != SOCK_ESTABLISHED) 
    {
      sim_log_debug(257U, "Project3TGen", "Nothing to close\n");
      return FAIL;
    }

  __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata));
  __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
  __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq);
  __nesc_hton_uint16(sendTCP->ack.nxdata, 0);
  __nesc_hton_uint8(sendTCP->flag.nxdata, FIN);

  TransportC$sockSt[sim_node()].state = SOCK_FIN_WAIT;
  TransportC$sendSignal(fd);
  TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];
  sim_log_debug(258U, "Project3TGen", "Sent FIN\n");

  TransportC$sockSt[sim_node()].inHSTimeOut = TRUE;
  TransportC$sockSt[sim_node()].HStimeOut = 9000;

  TransportC$sockSt[sim_node()].seq++;
  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 127 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static error_t Node$Transport$close(socket_t fd){
#line 127
  unsigned char __nesc_result;
#line 127

#line 127
  __nesc_result = TransportC$Transport$close(fd);
#line 127

#line 127
  return __nesc_result;
#line 127
}
#line 127
# 14 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static Node$FDs$t Node$FDs$get(uint32_t key){
#line 14
  unsigned short __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.FDs*/HashmapC$3$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 225 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port)
{

  Node$fd[sim_node()] = Node$FDs$get(dest_port);
  Node$Transport$close(Node$fd[sim_node()]);
}

# 15 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port){
#line 15
  Node$CommandHandler$closeClient(client_port, dest_addr, dest_port);
#line 15
}
#line 15
# 529 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline error_t TransportC$Transport$listen(socket_t fd)
{
  if (!TransportC$Sockets$contains(fd)) 
    {
      return FAIL;
    }

  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);
  TransportC$sockSt[sim_node()].state = SOCK_LISTEN;

  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 149 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static error_t ApplicationC$Transport$listen(socket_t fd){
#line 149
  unsigned char __nesc_result;
#line 149

#line 149
  __nesc_result = TransportC$Transport$listen(fd);
#line 149

#line 149
  return __nesc_result;
#line 149
}
#line 149


inline static error_t ApplicationC$Transport$setNodeSocket(socket_t fd){
#line 151
  unsigned char __nesc_result;
#line 151

#line 151
  __nesc_result = TransportC$Transport$setNodeSocket(fd);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 44
inline static error_t ApplicationC$Transport$bind(socket_t fd, socket_addr_t *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = TransportC$Transport$bind(fd, addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 11 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void ApplicationC$FDs$insert(uint32_t key, ApplicationC$FDs$t input){
#line 11
  /*NodeC.FDs*/HashmapC$3$Hashmap$insert(key, input);
#line 11
}
#line 11
# 30 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static socket_t ApplicationC$Transport$socket(void ){
#line 30
  unsigned short __nesc_result;
#line 30

#line 30
  __nesc_result = TransportC$Transport$socket();
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 33 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$initializeServer(uint8_t server_port)
{
  ApplicationC$fd[sim_node()] = ApplicationC$Transport$socket();
  __nesc_hton_uint16(ApplicationC$addr[sim_node()].srcAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(ApplicationC$addr[sim_node()].srcPort.nxdata, server_port);

  ApplicationC$FDs$insert(__nesc_ntoh_uint8(ApplicationC$addr[sim_node()].srcPort.nxdata), ApplicationC$fd[sim_node()]);
  ApplicationC$Transport$bind(ApplicationC$fd[sim_node()], &ApplicationC$addr[sim_node()]);
  ApplicationC$Transport$setNodeSocket(ApplicationC$fd[sim_node()]);
  ApplicationC$Transport$listen(ApplicationC$fd[sim_node()]);

  ApplicationC$readBuffSize[sim_node()] = 0;

  ApplicationC$Application$serverReady();
  ApplicationC$Application$clientReady();

  return SUCCESS;
}

# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
inline static error_t Node$Application$initializeServer(uint8_t server_port){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = ApplicationC$Application$initializeServer(server_port);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 210 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$setTestServer(uint8_t server_port)
{
  Node$Application$initializeServer(server_port);
}

# 12 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$setTestServer(uint8_t server_port){
#line 12
  Node$CommandHandler$setTestServer(server_port);
#line 12
}
#line 12
# 11 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void ApplicationC$Sockets$insert(uint32_t key, ApplicationC$Sockets$t input){
#line 11
  /*NodeC.Sockets*/HashmapC$2$Hashmap$insert(key, input);
#line 11
}
#line 11

inline static void ApplicationC$Sockets$remove(uint32_t key){
#line 12
  /*NodeC.Sockets*/HashmapC$2$Hashmap$remove(key);
#line 12
}
#line 12


inline static ApplicationC$Sockets$t ApplicationC$Sockets$get(uint32_t key){
#line 14
  struct socket_storage_t __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static ApplicationC$FDs$t ApplicationC$FDs$get(uint32_t key){
#line 14
  unsigned short __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.FDs*/HashmapC$3$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 96 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message)
{
  ApplicationC$sock[sim_node()] = ApplicationC$FDs$get(dest_port);
  ApplicationC$sockSt[sim_node()] = ApplicationC$Sockets$get(ApplicationC$sock[sim_node()]);


  for (ApplicationC$i[sim_node()] = ApplicationC$messageToSendSize[sim_node()]; ApplicationC$i[sim_node()] < ApplicationC$messageToSendSize[sim_node()] + size; ApplicationC$i[sim_node()]++) 
    {
      ApplicationC$messageToSend[sim_node()][ApplicationC$i[sim_node()]] = message[ApplicationC$i[sim_node()] - ApplicationC$messageToSendSize[sim_node()]];
    }
  ApplicationC$messageToSendSize[sim_node()] += size;


  if (ApplicationC$messageToSend[sim_node()][ApplicationC$messageToSendSize[sim_node()] - 1] == '\n') 
    {

      for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$messageToSendSize[sim_node()]; ApplicationC$i[sim_node()]++) 
        {
          ApplicationC$sockSt[sim_node()].dataToSend[ApplicationC$i[sim_node()]] = ApplicationC$messageToSend[sim_node()][ApplicationC$i[sim_node()]];
        }

      ApplicationC$sockSt[sim_node()].dataToSendSize = ApplicationC$messageToSendSize[sim_node()];
      ApplicationC$messageToSendSize[sim_node()] = 0;
    }

  ApplicationC$Sockets$remove(ApplicationC$fd[sim_node()]);
  ApplicationC$Sockets$insert(ApplicationC$fd[sim_node()], ApplicationC$sockSt[sim_node()]);

  return SUCCESS;
}

# 11 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
inline static error_t Node$Application$messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = ApplicationC$Application$messageClient(client_port, dest_addr, dest_port, size, message);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 220 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message)
{
  Node$Application$messageClient(client_port, dest_addr, dest_port, size, message);
}

# 14 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message){
#line 14
  Node$CommandHandler$setChatClient(client_port, dest_addr, dest_port, size, message);
#line 14
}
#line 14
# 462 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline error_t TransportC$Transport$connect(socket_t fd, socket_addr_t *addr)
{
  TCP *sendTCP;

#line 465
  sendTCP = (TCP *)TransportC$payday[sim_node()];

  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);

  __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(addr->srcPort.nxdata));
  __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(addr->destPort.nxdata));
  __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq);
  __nesc_hton_uint16(sendTCP->ack.nxdata, 0);
  __nesc_hton_uint8(sendTCP->flag.nxdata, SYN);

  TransportC$sockSt[sim_node()].state = SOCK_SYN_SENT;
  TransportC$sendSignal(fd);
  TransportC$sockSt[sim_node()].packet = TransportC$sendPackage[sim_node()];
  sim_log_debug(256U, "Project3TGen", "Sent SYN\n");

  TransportC$sockSt[sim_node()].inHSTimeOut = TRUE;
  TransportC$sockSt[sim_node()].HStimeOut = 9000;

  TransportC$sockSt[sim_node()].seq++;
  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 116 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static error_t ApplicationC$Transport$connect(socket_t fd, socket_addr_t *addr){
#line 116
  unsigned char __nesc_result;
#line 116

#line 116
  __nesc_result = TransportC$Transport$connect(fd, addr);
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 52 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer)
{
  uint16_t index;

#line 55
  index = 0;
  ApplicationC$messageToSendSize[sim_node()] = 0;
  ApplicationC$fd[sim_node()] = ApplicationC$Transport$socket();
  __nesc_hton_uint16(ApplicationC$addr[sim_node()].srcAddr.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(ApplicationC$addr[sim_node()].srcPort.nxdata, client_port);
  __nesc_hton_uint16(ApplicationC$addr[sim_node()].destAddr.nxdata, dest_addr);
  __nesc_hton_uint8(ApplicationC$addr[sim_node()].destPort.nxdata, dest_port);
  ApplicationC$FDs$insert(__nesc_ntoh_uint8(ApplicationC$addr[sim_node()].destPort.nxdata), ApplicationC$fd[sim_node()]);

  if (ApplicationC$Transport$bind(ApplicationC$fd[sim_node()], &ApplicationC$addr[sim_node()]) == SUCCESS) 
    {
      ApplicationC$Transport$setNodeSocket(ApplicationC$fd[sim_node()]);
      ApplicationC$Transport$connect(ApplicationC$fd[sim_node()], &ApplicationC$addr[sim_node()]);
      ApplicationC$sockSt[sim_node()] = ApplicationC$Sockets$get(ApplicationC$fd[sim_node()]);


      ApplicationC$sockSt[sim_node()].dataToSendSize = 0;
      ApplicationC$sockSt[sim_node()].messageToQuerySize = 0;
      ApplicationC$sockSt[sim_node()].sendBuffSize = 0;
      ApplicationC$sockSt[sim_node()].recBuffSize = 0;
      ApplicationC$sockSt[sim_node()].lastByteSent = 0;
      ApplicationC$sockSt[sim_node()].lastByteWritten = 0;
      ApplicationC$sockSt[sim_node()].lastByteAck = 0;

      ApplicationC$sockSt[sim_node()].messageToQuerySize = 0;
      ApplicationC$sockSt[sim_node()].sendBuffSize = 0;
      ApplicationC$sockSt[sim_node()].recBuffSize = 0;
      ApplicationC$sockSt[sim_node()].lastByteRec = 65535;
      ApplicationC$sockSt[sim_node()].lastByteRead = 65535;
      ApplicationC$sockSt[sim_node()].nextByteExpected = 0;
      ApplicationC$sockSt[sim_node()].nextExpectedSeq = 65535;
      ApplicationC$sockSt[sim_node()].recBuffSize = 0;
      ApplicationC$readBuffSize[sim_node()] = 0;

      ApplicationC$Sockets$remove(ApplicationC$fd[sim_node()]);
      ApplicationC$Sockets$insert(ApplicationC$fd[sim_node()], ApplicationC$sockSt[sim_node()]);
    }

  return SUCCESS;
}

# 9 "/home/luis/workspace/Project0/src/lib/interfaces/Application.nc"
inline static error_t Node$Application$initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = ApplicationC$Application$initializeClient(client_port, dest_addr, dest_port, transfer);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 215 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer)
{
  Node$Application$initializeClient(client_port, dest_addr, dest_port, transfer);
}

# 13 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer){
#line 13
  Node$CommandHandler$setTestClient(client_port, dest_addr, dest_port, transfer);
#line 13
}
#line 13
# 14 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static ShortestPathC$ConfirmedNodes$t ShortestPathC$ConfirmedNodes$get(uint32_t key){
#line 14
  struct Route __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 146 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint16_t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$size(void )
#line 146
{
  return /*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[sim_node()];
}

# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint16_t ShortestPathC$ConfirmedNodes$size(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$size();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 142 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t */*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$getKeys(void )
#line 142
{
  return /*NodeC.ConfirmedNodes*/HashmapC$1$keys[sim_node()];
}

# 19 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *ShortestPathC$ConfirmedNodes$getKeys(void ){
#line 19
  unsigned int *__nesc_result;
#line 19

#line 19
  __nesc_result = /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$getKeys();
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 169 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
static inline error_t ShortestPathC$ShortestPath$PrintRoutingTable(void )
{
  ShortestPathC$keys[sim_node()] = ShortestPathC$ConfirmedNodes$getKeys();

  sim_log_debug(224U, "Project2", "---- %d's Routing Table ----\n", (uint16_t )TOS_NODE_ID);
  sim_log_debug(225U, "Project2", "(node, cost, next-hop)\n");
  for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < ShortestPathC$ConfirmedNodes$size(); ShortestPathC$i[sim_node()]++) 
    {
      ShortestPathC$key[sim_node()] = ShortestPathC$keys[sim_node()][ShortestPathC$i[sim_node()]];
      ShortestPathC$route[sim_node()] = ShortestPathC$ConfirmedNodes$get(ShortestPathC$key[sim_node()]);

      sim_log_debug(226U, "Project2", "(%d,%d,%d)\n", ShortestPathC$route[sim_node()].node, ShortestPathC$route[sim_node()].cost, ShortestPathC$route[sim_node()].nextHop);
    }
  sim_log_debug(227U, "Project2", "----------- End -----------\n");

  return SUCCESS;
}

# 7 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
inline static error_t Node$ShortestPath$PrintRoutingTable(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = ShortestPathC$ShortestPath$PrintRoutingTable();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 198 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$printRouteTable(void )
{
  Node$ShortestPath$PrintRoutingTable();
}

# 9 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$printRouteTable(void ){
#line 9
  Node$CommandHandler$printRouteTable();
#line 9
}
#line 9
# 182 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline error_t NeighborC$Neighbor$printLS(void )
{
  sim_log_debug(213U, "Project2", "------ LinkStates------\n");
  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$NeighborLS$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newls2[sim_node()] = NeighborC$NeighborLS$get(NeighborC$i[sim_node()]);

      sim_log_debug(214U, "Project2", "%d's Neighbors:\n", (uint8_t )__nesc_ntoh_uint8(NeighborC$newls2[sim_node()].node.nxdata), (uint8_t )__nesc_ntoh_uint8(NeighborC$newls2[sim_node()].size.nxdata));
      for (NeighborC$j[sim_node()] = 0; NeighborC$j[sim_node()] < __nesc_ntoh_uint8(NeighborC$newls2[sim_node()].size.nxdata); NeighborC$j[sim_node()]++) 
        {
          sim_log_debug(215U, "Project2", "Node: %d\n", (uint8_t )__nesc_ntoh_uint8(NeighborC$newls2[sim_node()].neighbors[NeighborC$j[sim_node()]].nxdata));
        }
    }

  return SUCCESS;
}

# 17 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$printLS(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = NeighborC$Neighbor$printLS();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 203 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$printLinkState(void )
{
  Node$Neighbor$printLS();
}

# 10 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$printLinkState(void ){
#line 10
  Node$CommandHandler$printLinkState();
#line 10
}
#line 10
# 101 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline error_t NeighborC$Neighbor$print(void )
{
  sim_log_debug(211U, "Project1N", "Neighbors:\n");
  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$Neighbors$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newtuple[sim_node()] = NeighborC$Neighbors$get(NeighborC$i[sim_node()]);
      sim_log_debug(212U, "Project1N", "Node %d\n", (uint16_t )__nesc_ntoh_uint16(NeighborC$newtuple[sim_node()].mote.nxdata));
    }

  return SUCCESS;
}

# 11 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$print(void ){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = NeighborC$Neighbor$print();
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 193 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$printNeighbors(void )
{
  Node$Neighbor$print();
}

# 8 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$printNeighbors(void ){
#line 8
  Node$CommandHandler$printNeighbors();
#line 8
}
#line 8
# 11 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
inline static error_t Node$ShortestPath$SendPack(pack *myMsg){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = ShortestPathC$ShortestPath$SendPack(myMsg);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 5 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
inline static void Node$PacketInfo$incSeq(void ){
#line 5
  PacketInfoC$PacketInfo$incSeq();
#line 5
}
#line 5
#line 3
inline static uint16_t Node$PacketInfo$getSeq(void ){
#line 3
  unsigned short __nesc_result;
#line 3

#line 3
  __nesc_result = PacketInfoC$PacketInfo$getSeq();
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 179 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CommandHandler$ping(uint8_t destination, uint8_t *payload)
{
  Node$Seq[sim_node()] = Node$PacketInfo$getSeq();

  Node$makePack(&Node$sendPackage[sim_node()], TOS_NODE_ID, destination, 15, PROTOCOL_PING, Node$Seq[sim_node()], payload, PACKET_MAX_PAYLOAD_SIZE);
  Node$PacketInfo$incSeq();





  Node$ShortestPath$SendPack(&Node$sendPackage[sim_node()]);
}

# 7 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static void CommandHandlerC$CommandHandler$ping(uint8_t destination, uint8_t *payload){
#line 7
  Node$CommandHandler$ping(destination, payload);
#line 7
}
#line 7
# 18 "/home/luis/workspace/Project0/src/lib/modules/CommandHandlerC.nc"
static inline error_t CommandHandlerC$CommandHandler$receive(pack *msg)
#line 18
{
  uint8_t commandID;
  uint8_t *buff;
  uint16_t combined;

  buff = (uint8_t *)msg->payload;
  commandID = buff[0];

  sim_log_debug(201U, "cmdDebug", "A Command has been Issued.\n");

  if (commandID == CMD_PING) {
      sim_log_debug(202U, "cmdDebug", "Command Type: Ping\n");
      CommandHandlerC$CommandHandler$ping(buff[1], &buff[2]);
      return SUCCESS;
    }
  else {
#line 32
    if (commandID == CMD_NEIGHBOR_DUMP) {
        sim_log_debug(203U, "cmdDebug", "Command Type: Neighbor Dump\n");
        CommandHandlerC$CommandHandler$printNeighbors();
        return SUCCESS;
      }
    else {
#line 36
      if (commandID == CMD_LINKSTATE_DUMP) {
          sim_log_debug(204U, "cmdDebug", "Command Type: Link State Dump\n");
          CommandHandlerC$CommandHandler$printLinkState();
          return SUCCESS;
        }
      else {
#line 40
        if (commandID == CMD_ROUTETABLE_DUMP) {
            sim_log_debug(205U, "cmdDebug", "Command Type: Route Table Dump\n");
            CommandHandlerC$CommandHandler$printRouteTable();
            return SUCCESS;
          }
        else {
#line 44
          if (commandID == CMD_TEST_CLIENT) {
              sim_log_debug(206U, "cmdDebug", "Command Type: Test Client\n");
              CommandHandlerC$CommandHandler$setTestClient(buff[1], buff[2], buff[3], (buff[4] << 8) | buff[5]);
              return SUCCESS;
            }
          else {
#line 48
            if (commandID == CMD_MESSAGE) {
                sim_log_debug(207U, "cmdDebug", "Command Type: Chat Client\n");
                CommandHandlerC$CommandHandler$setChatClient(buff[1], buff[2], buff[3], buff[4], &buff[5]);
                return SUCCESS;
              }
            else {
#line 52
              if (commandID == CMD_TEST_SERVER) {
                  sim_log_debug(208U, "cmdDebug", "Command Type: Test Server\n");
                  CommandHandlerC$CommandHandler$setTestServer(buff[1]);
                  return SUCCESS;
                }
              else {
#line 56
                if (commandID == CMD_KILL) {
                    sim_log_debug(209U, "cmdDebug", "Command Type: Close Client\n");
                    CommandHandlerC$CommandHandler$closeClient(buff[1], buff[2], buff[3]);
                    return SUCCESS;
                  }
                else 
#line 60
                  {
                    sim_log_debug(210U, "cmdDebug", "CMD_ERROR: \"%s\" does not match any known commands.\n", commandID);
                    return FAIL;
                  }
                }
              }
            }
          }
        }
      }
    }
}

# 4 "/home/luis/workspace/Project0/src/lib/interfaces/CommandHandler.nc"
inline static error_t Node$CommandHandler$receive(pack *msg){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = CommandHandlerC$CommandHandler$receive(msg);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 93 "/home/luis/workspace/Project0/src/Node.nc"
static inline message_t *Node$Receive$receive(message_t *msg, void *payload, uint8_t len)
{
  if (len == sizeof(pack )) 
    {
      pack *myMsg = (pack *)payload;

      if (__nesc_ntoh_uint8(myMsg->TTL.nxdata) <= 0) 
        {
          sim_log_debug(151U, "genDebug", "Packet Dropped! (TTL)\n");
          return msg;
        }

      __nesc_hton_uint8(myMsg->TTL.nxdata, __nesc_ntoh_uint8(myMsg->TTL.nxdata) - 1);

      if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_CMD) 
        {
          Node$CommandHandler$receive(myMsg);
        }
      else {
#line 111
        if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_PING) 
          {

            if (!strcmp((char *)myMsg->payload, "NEIGHBOR_DISCOVERY")) 
              {
                Node$Neighbor$receive(myMsg);
                return msg;
              }





            Node$ShortestPath$RoutePack(myMsg);
          }
        else {
#line 126
          if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_PINGREPLY) 
            {

              if (!strcmp((char *)myMsg->payload, "NEIGHBOR_REPLY")) 
                {
                  if (Node$Neighbor$reply(myMsg) == TRUE) 
                    {
                      if (Node$SendNeighborsTimer$isRunning() == FALSE) 
                        {
                          Node$SendNeighborsTimer$startOneShot(76777);
                        }
                    }

                  return msg;
                }
            }
          else {
#line 142
            if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_LINKSTATE) 
              {
                if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == TOS_NODE_ID) 
                  {
                    sim_log_debug(152U, "genDebug", "Packet Payload: %s\n", myMsg->payload);
                  }

                if (Node$BuildRoutingTableTimer$isRunning() == FALSE) 
                  {
                    Node$BuildRoutingTableTimer$startOneShot(34070);
                  }

                Node$Neighbor$addLS(myMsg);
                Node$Flooding$receive(myMsg);
              }
            else {
#line 157
              if (__nesc_ntoh_uint8(myMsg->protocol.nxdata) == PROTOCOL_TCP) 
                {
                  if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == TOS_NODE_ID) 
                    {
                      Node$Transport$receive(myMsg);
                    }

                  Node$ShortestPath$RoutePack(myMsg);
                }
              else 
                {
                  sim_log_debug(153U, "genDebug", "else...\n");
                }
              }
            }
          }
        }
#line 171
      return msg;
    }

  sim_log_debug(154U, "genDebug", "Unknown Packet Type %d\n", len);

  return msg;
}

# 212 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x2b8da3136340, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b8da3136340) {
#line 78
    case 6:
#line 78
      __nesc_result = Node$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x2b8da3136340, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 24 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static uint16_t ShortestPathC$recPackets$size(void ){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$size();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24

inline static ShortestPathC$recPackets$t ShortestPathC$recPackets$get(uint16_t position){
#line 25
  struct PacketID __nesc_result;
#line 25

#line 25
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$get(position);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
#line 20
inline static ShortestPathC$recPackets$t ShortestPathC$recPackets$popfront(void ){
#line 20
  struct PacketID __nesc_result;
#line 20

#line 20
  __nesc_result = /*NodeC.recPackets*/ListC$2$List$popfront();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
#line 17
inline static void ShortestPathC$recPackets$pushback(ShortestPathC$recPackets$t input){
#line 17
  /*NodeC.recPackets*/ListC$2$List$pushback(input);
#line 17
}
#line 17
# 4 "/home/luis/workspace/Project0/src/lib/interfaces/SimpleSend.nc"
inline static error_t ShortestPathC$Sender$send(pack msg, uint16_t dest){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = SimpleSendP$SimpleSend$send(msg, dest);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 75 "/home/luis/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline bool /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty(void )
#line 75
{
  sim_log_debug(190U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
  return /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] == 0;
}

# 61 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static bool SimpleSendP$Pool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/home/luis/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t */*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]) {
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *rval = /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]];

#line 91
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]] = (void *)0;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]--;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()]++;
      if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] == 20) {
          /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
        }
      sim_log_debug(192U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static SimpleSendP$Pool$t * SimpleSendP$Pool$get(void ){
#line 97
  struct sendInfo *__nesc_result;
#line 97

#line 97
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 61 "/home/luis/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 20;
}

#line 57
static inline uint8_t /*SimpleSendC.QueueC*/QueueC$0$Queue$size(void )
#line 57
{
  return /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()];
}

#line 97
static inline error_t /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(/*SimpleSendC.QueueC*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*SimpleSendC.QueueC*/QueueC$0$Queue$size() < /*SimpleSendC.QueueC*/QueueC$0$Queue$maxSize()) {
      sim_log_debug(200U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]);
      /*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][/*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()]] = newVal;
      /*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()]++;
      if (/*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()] == 20) {
#line 102
        /*SimpleSendC.QueueC*/QueueC$0$tail[sim_node()] = 0;
        }
#line 103
      /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]++;
      /*SimpleSendC.QueueC*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static error_t SimpleSendP$Queue$enqueue(SimpleSendP$Queue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 92 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static bool SimpleSendP$sendTimer$isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(5U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 73
inline static void SimpleSendP$sendTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, dt);
#line 73
}
#line 73
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 61 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4317 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 89 "/home/luis/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 52 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t SimpleSendP$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 30 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash3(uint32_t k)
#line 30
{
  return 1 + k % 11;
}

#line 27
static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash2(uint32_t k)
#line 27
{
  return k % 13;
}




static inline uint32_t /*NodeC.Sockets*/HashmapC$2$hash(uint32_t k, uint32_t i)
#line 34
{
  return (/*NodeC.Sockets*/HashmapC$2$hash2(k) + i * /*NodeC.Sockets*/HashmapC$2$hash3(k)) % /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()];
}

#line 30
static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash3(uint32_t k)
#line 30
{
  return 1 + k % 11;
}

#line 27
static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash2(uint32_t k)
#line 27
{
  return k % 13;
}




static inline uint32_t /*NodeC.FDs*/HashmapC$3$hash(uint32_t k, uint32_t i)
#line 34
{
  return (/*NodeC.FDs*/HashmapC$3$hash2(k) + i * /*NodeC.FDs*/HashmapC$3$hash3(k)) % /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()];
}

# 3 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
inline static uint16_t TransportC$PacketInfo$getSeq(void ){
#line 3
  unsigned short __nesc_result;
#line 3

#line 3
  __nesc_result = PacketInfoC$PacketInfo$getSeq();
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 888 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline void TransportC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

# 5 "/home/luis/workspace/Project0/src/lib/interfaces/PacketInfo.nc"
inline static void TransportC$PacketInfo$incSeq(void ){
#line 5
  PacketInfoC$PacketInfo$incSeq();
#line 5
}
#line 5
# 216 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x2b8da3135020, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x2b8da3135020, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(96U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 104 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t Node$AMControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 78 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$AMControl$startDone(error_t err)
{
  if (err == SUCCESS) 
    {
      sim_log_debug(150U, "genDebug", "Radio On\n");
    }
  else 
    {

      Node$AMControl$start();
    }
}

# 113 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  Node$AMControl$startDone(error);
#line 113
}
#line 113
# 96 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 96
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 91 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$AMControl$stopDone(error_t err)
#line 91
{
}

# 138 "/home/luis/local/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  Node$AMControl$stopDone(error);
#line 138
}
#line 138
# 101 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 101
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x2b8da3137220, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x2b8da3137220, msg, error);
#line 110
}
#line 110
# 103 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 82 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 139 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 53 "/home/luis/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline bool /*SimpleSendC.QueueC*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()] == 0;
}

# 50 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static bool SimpleSendP$Queue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 103 "/home/luis/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] >= 20) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] + /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()];

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][emptyIndex] = newVal;
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]++;
      sim_log_debug(193U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static error_t SimpleSendP$Pool$put(SimpleSendP$Pool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 65 "/home/luis/local/tinyos-2.1.1/tos/system/QueueC.nc"
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$head(void )
#line 65
{
  return /*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][/*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]];
}

#line 85
static inline /*SimpleSendC.QueueC*/QueueC$0$queue_t /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*SimpleSendC.QueueC*/QueueC$0$queue_t t = /*SimpleSendC.QueueC*/QueueC$0$Queue$head();

#line 87
  sim_log_debug(199U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]);
  if (!/*SimpleSendC.QueueC*/QueueC$0$Queue$empty()) {
      /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]++;
      if (/*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] == 20) {
#line 90
        /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] = 0;
        }
#line 91
      /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]--;
      /*SimpleSendC.QueueC*/QueueC$0$printQueue();
    }
  return t;
}

# 81 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static SimpleSendP$Queue$t  SimpleSendP$Queue$dequeue(void ){
#line 81
  struct sendInfo *__nesc_result;
#line 81

#line 81
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x2b8da36e0c70, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x2b8da36e0c70, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 181
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(185U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(186U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(187U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(188U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 170 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 162 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
# 145 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 6);
  return /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 80 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t SimpleSendP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 189 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * SimpleSendP$Packet$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 89 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static inline error_t SimpleSendP$send(uint16_t src, uint16_t dest, pack *message)
#line 89
{
  if (!SimpleSendP$busy[sim_node()]) {
      pack *msg = (pack *)SimpleSendP$Packet$getPayload(&SimpleSendP$pkt[sim_node()], sizeof(pack ));

#line 92
      *msg = *message;

      if (SimpleSendP$AMSend$send(dest, &SimpleSendP$pkt[sim_node()], sizeof(pack )) == SUCCESS) {
          SimpleSendP$busy[sim_node()] = TRUE;
          return SUCCESS;
        }
      else 
#line 97
        {
          sim_log_debug(182U, "genDebug", "The radio is busy, or something\n");
          return FAIL;
        }
    }
  else 
#line 101
    {
      sim_log_debug(183U, "genDebug", "The radio is busy");
      return EBUSY;
    }
  sim_log_debug(184U, "genDebug", "FAILED!?");
  return FAIL;
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static SimpleSendP$Queue$t  SimpleSendP$Queue$head(void ){
#line 73
  struct sendInfo *__nesc_result;
#line 73

#line 73
  __nesc_result = /*SimpleSendC.QueueC*/QueueC$0$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 56 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$sendBufferTask$runTask(void )
#line 56
{
  if (!SimpleSendP$Queue$empty() && !SimpleSendP$busy[sim_node()]) {
      sendInfo *info;

#line 59
      info = SimpleSendP$Queue$head();

      if (SUCCESS == SimpleSendP$send(info->src, info->dest, & info->packet)) {

          SimpleSendP$Queue$dequeue();
          SimpleSendP$Pool$put(info);
        }
    }


  if (!SimpleSendP$Queue$empty()) {
      SimpleSendP$postSendTask();
    }
}

# 169 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

# 109 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$AMSend$sendDone(message_t *msg, error_t error)
#line 109
{

  if (&SimpleSendP$pkt[sim_node()] == msg) {
      SimpleSendP$busy[sim_node()] = FALSE;
      SimpleSendP$postSendTask();
    }
}

# 110 "/home/luis/local/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  SimpleSendP$AMSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 215 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x2b8da36e1990, message_t * msg, error_t error){
#line 100
  switch (arg_0x2b8da36e1990) {
#line 100
    case 0U:
#line 100
      /*SimpleSendC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x2b8da36e1990, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 221 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2b8da2e08108){
#line 75
  switch (arg_0x2b8da2e08108) {
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case SimpleSendP$sendBufferTask:
#line 75
      SimpleSendP$sendBufferTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x2b8da2e08108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
#line 67
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 177 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 483 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 288 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(129U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(130U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(131U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(132U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(133U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(134U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(135U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(136U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(137U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(138U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(139U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(140U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(141U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(142U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(143U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(144U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(145U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(146U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(147U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 282
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(121U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(119U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(120U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 459 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(148U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(127U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 243
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(118U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC$start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(117U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(115U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(116U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 90 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(128U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(108U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(122U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(125U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 94 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static inline void /*NodeC.Neighbors*/ListC$0$List$delete(uint16_t position)
{
  uint16_t i;

  if (/*NodeC.Neighbors*/ListC$0$size[sim_node()] < /*NodeC.Neighbors*/ListC$0$MAX_SIZE[sim_node()]) 
    {
      for (i = position; i < /*NodeC.Neighbors*/ListC$0$size[sim_node()] - 1; i++) 
        {
          /*NodeC.Neighbors*/ListC$0$container[sim_node()][i] = /*NodeC.Neighbors*/ListC$0$container[sim_node()][i + 1];
        }

      /*NodeC.Neighbors*/ListC$0$size[sim_node()]--;
    }
}

# 27 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static void NeighborC$Neighbors$delete(uint16_t position){
#line 27
  /*NodeC.Neighbors*/ListC$0$List$delete(position);
#line 27
}
#line 27
# 67 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static inline error_t NeighborC$Neighbor$startDisc(pack *msg)
{
  NeighborC$updated[sim_node()] = FALSE;

  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$Neighbors$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newtuple[sim_node()] = NeighborC$Neighbors$get(NeighborC$i[sim_node()]);
      __nesc_hton_uint16(NeighborC$newtuple[sim_node()].age.nxdata, __nesc_ntoh_uint16(NeighborC$newtuple[sim_node()].age.nxdata) + 1);
      NeighborC$Neighbors$set(NeighborC$i[sim_node()], NeighborC$newtuple[sim_node()]);
    }

  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$Neighbors$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newtuple[sim_node()] = NeighborC$Neighbors$get(NeighborC$i[sim_node()]);

      if (__nesc_ntoh_uint16(NeighborC$newtuple[sim_node()].age.nxdata) >= 5) 
        {
          NeighborC$Neighbors$delete(NeighborC$i[sim_node()]);
          NeighborC$updated[sim_node()] = TRUE;
          NeighborC$i[sim_node()]--;
        }
    }

  if (NeighborC$updated[sim_node()] == TRUE) 
    {
      NeighborC$Neighbor$sendNeighbors();
    }

  NeighborC$Sender$send(*msg, AM_BROADCAST_ADDR);

  return SUCCESS;
}

# 9 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$startDisc(pack *msg){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = NeighborC$Neighbor$startDisc(msg);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 246 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$CheckNeighborTimer$fired(void )
{
  Node$Seq[sim_node()] = Node$PacketInfo$getSeq();
  Node$makePack(&Node$sendPackage[sim_node()], TOS_NODE_ID, TOS_NODE_ID, 1, PROTOCOL_PING, Node$Seq[sim_node()], "NEIGHBOR_DISCOVERY", PACKET_MAX_PAYLOAD_SIZE);
  Node$PacketInfo$incSeq();

  Node$Neighbor$startDisc(&Node$sendPackage[sim_node()]);
}

# 13 "/home/luis/workspace/Project0/src/lib/interfaces/Neighbor.nc"
inline static error_t Node$Neighbor$sendNeighbors(void ){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = NeighborC$Neighbor$sendNeighbors();
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 255 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$SendNeighborsTimer$fired(void )
{
  Node$Neighbor$sendNeighbors();

  Node$SendNeighborsTimer$startOneShot(75777);
}

# 25 "/home/luis/workspace/Project0/src/dataStructures/interfaces/List.nc"
inline static ShortestPathC$NeighborLS$t ShortestPathC$NeighborLS$get(uint16_t position){
#line 25
  nx_struct LinkState __nesc_result;
#line 25

#line 25
  __nesc_result = /*NodeC.NeighborLS*/ListC$1$List$get(position);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
#line 24
inline static uint16_t ShortestPathC$NeighborLS$size(void ){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = /*NodeC.NeighborLS*/ListC$1$List$size();
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 11 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void ShortestPathC$ConfirmedNodes$insert(uint32_t key, ShortestPathC$ConfirmedNodes$t input){
#line 11
  /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$insert(key, input);
#line 11
}
#line 11

inline static void ShortestPathC$Tentative$remove(uint32_t key){
#line 12
  /*NodeC.Tentative*/HashmapC$0$Hashmap$remove(key);
#line 12
}
#line 12


inline static ShortestPathC$Tentative$t ShortestPathC$Tentative$get(uint32_t key){
#line 14
  struct Route __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.Tentative*/HashmapC$0$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 146 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint16_t /*NodeC.Tentative*/HashmapC$0$Hashmap$size(void )
#line 146
{
  return /*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()];
}

# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint16_t ShortestPathC$Tentative$size(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = /*NodeC.Tentative*/HashmapC$0$Hashmap$size();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 142 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t */*NodeC.Tentative*/HashmapC$0$Hashmap$getKeys(void )
#line 142
{
  return /*NodeC.Tentative*/HashmapC$0$keys[sim_node()];
}

# 19 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *ShortestPathC$Tentative$getKeys(void ){
#line 19
  unsigned int *__nesc_result;
#line 19

#line 19
  __nesc_result = /*NodeC.Tentative*/HashmapC$0$Hashmap$getKeys();
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 136 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline bool /*NodeC.Tentative*/HashmapC$0$Hashmap$isEmpty(void )
#line 136
{
  if (/*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()] == 0) {
    return TRUE;
    }
#line 139
  return FALSE;
}

# 17 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static bool ShortestPathC$Tentative$isEmpty(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*NodeC.Tentative*/HashmapC$0$Hashmap$isEmpty();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
#line 11
inline static void ShortestPathC$Tentative$insert(uint32_t key, ShortestPathC$Tentative$t input){
#line 11
  /*NodeC.Tentative*/HashmapC$0$Hashmap$insert(key, input);
#line 11
}
#line 11





inline static bool ShortestPathC$Tentative$contains(uint32_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*NodeC.Tentative*/HashmapC$0$Hashmap$contains(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 30 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash3(uint32_t k)
#line 30
{
  return 1 + k % 11;
}

#line 27
static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash2(uint32_t k)
#line 27
{
  return k % 13;
}




static inline uint32_t /*NodeC.ConfirmedNodes*/HashmapC$1$hash(uint32_t k, uint32_t i)
#line 34
{
  return (/*NodeC.ConfirmedNodes*/HashmapC$1$hash2(k) + i * /*NodeC.ConfirmedNodes*/HashmapC$1$hash3(k)) % /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[sim_node()];
}

#line 125
static inline bool /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$contains(uint32_t k)
#line 125
{
  uint32_t i = 0;
#line 126
  uint32_t j = 0;

#line 127
  do {
      j = /*NodeC.ConfirmedNodes*/HashmapC$1$hash(k, i);
      if (/*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 131
      i++;
    }
  while (
#line 132
  i < /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

# 16 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static bool ShortestPathC$ConfirmedNodes$contains(uint32_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$contains(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 90 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$clear(void )
#line 90
{
  uint32_t i = 0;
#line 91
  uint32_t j = 0;

  for (i = 0; i < 16; i++) 
    {
      /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][i].key = 0;
      /*NodeC.ConfirmedNodes*/HashmapC$1$keys[sim_node()][i] = 0;
    }

  /*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[sim_node()] = 0;
}

# 13 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void ShortestPathC$ConfirmedNodes$clear(void ){
#line 13
  /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$clear();
#line 13
}
#line 13
# 64 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
static inline error_t ShortestPathC$ShortestPath$Dijkstra(void )
{
  ShortestPathC$ConfirmedNodes$clear();

  ShortestPathC$route[sim_node()].node = TOS_NODE_ID;
  ShortestPathC$route[sim_node()].cost = 0;
  ShortestPathC$route[sim_node()].nextHop = TOS_NODE_ID;

  ShortestPathC$ConfirmedNodes$insert(TOS_NODE_ID, ShortestPathC$route[sim_node()]);

  ShortestPathC$next[sim_node()] = ShortestPathC$route[sim_node()];

  for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < ShortestPathC$NeighborLS$size(); ShortestPathC$i[sim_node()]++) 
    {
      ShortestPathC$newls[sim_node()] = ShortestPathC$NeighborLS$get(ShortestPathC$i[sim_node()]);

      if (__nesc_ntoh_uint8(ShortestPathC$newls[sim_node()].node.nxdata) == TOS_NODE_ID) 
        {
          break;
        }
    }

  while (1) 
    {
      ShortestPathC$route[sim_node()] = ShortestPathC$ConfirmedNodes$get(ShortestPathC$next[sim_node()].node);

      for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < __nesc_ntoh_uint8(ShortestPathC$newls[sim_node()].size.nxdata); ShortestPathC$i[sim_node()]++) 
        {
          ShortestPathC$neighbor[sim_node()] = __nesc_ntoh_uint8(ShortestPathC$newls[sim_node()].neighbors[ShortestPathC$i[sim_node()]].nxdata);

          ShortestPathC$cost[sim_node()] = ShortestPathC$route[sim_node()].cost + __nesc_ntoh_uint8(ShortestPathC$newls[sim_node()].cost[ShortestPathC$i[sim_node()]].nxdata);

          if (!ShortestPathC$ConfirmedNodes$contains(ShortestPathC$neighbor[sim_node()]) && !ShortestPathC$Tentative$contains(ShortestPathC$neighbor[sim_node()])) 
            {
              ShortestPathC$route2[sim_node()].node = ShortestPathC$neighbor[sim_node()];
              ShortestPathC$route2[sim_node()].cost = ShortestPathC$cost[sim_node()];
              if (ShortestPathC$route[sim_node()].node == TOS_NODE_ID) 
                {
                  ShortestPathC$route2[sim_node()].nextHop = ShortestPathC$route2[sim_node()].node;
                }
              else 
                {
                  ShortestPathC$route2[sim_node()].nextHop = ShortestPathC$route[sim_node()].nextHop;
                }

              ShortestPathC$Tentative$insert(ShortestPathC$neighbor[sim_node()], ShortestPathC$route2[sim_node()]);
            }
          else {
#line 111
            if (ShortestPathC$Tentative$contains(ShortestPathC$neighbor[sim_node()])) 
              {
                ShortestPathC$route2[sim_node()] = ShortestPathC$Tentative$get(ShortestPathC$neighbor[sim_node()]);

                if (ShortestPathC$cost[sim_node()] < ShortestPathC$route2[sim_node()].cost) 
                  {
                    ShortestPathC$Tentative$remove(ShortestPathC$neighbor[sim_node()]);

                    ShortestPathC$route2[sim_node()].node = ShortestPathC$neighbor[sim_node()];
                    ShortestPathC$route2[sim_node()].cost = ShortestPathC$cost[sim_node()];
                    ShortestPathC$route2[sim_node()].nextHop = ShortestPathC$route[sim_node()].nextHop;

                    ShortestPathC$Tentative$insert(ShortestPathC$neighbor[sim_node()], ShortestPathC$route2[sim_node()]);
                  }
              }
            }
        }
      if (ShortestPathC$Tentative$isEmpty()) 
        {
          return SUCCESS;
        }

      ShortestPathC$keys[sim_node()] = ShortestPathC$Tentative$getKeys();
      ShortestPathC$route[sim_node()] = ShortestPathC$Tentative$get(ShortestPathC$keys[sim_node()][0]);
      ShortestPathC$cost[sim_node()] = ShortestPathC$route[sim_node()].cost;

      for (ShortestPathC$i[sim_node()] = 1; ShortestPathC$i[sim_node()] < ShortestPathC$Tentative$size(); ShortestPathC$i[sim_node()]++) 
        {
          ShortestPathC$route2[sim_node()] = ShortestPathC$Tentative$get(ShortestPathC$keys[sim_node()][ShortestPathC$i[sim_node()]]);

          if (ShortestPathC$route2[sim_node()].cost < ShortestPathC$cost[sim_node()]) 
            {
              ShortestPathC$route[sim_node()] = ShortestPathC$route2[sim_node()];
              ShortestPathC$cost[sim_node()] = ShortestPathC$route[sim_node()].cost;
            }
        }

      ShortestPathC$Tentative$remove(ShortestPathC$route[sim_node()].node);
      ShortestPathC$ConfirmedNodes$insert(ShortestPathC$route[sim_node()].node, ShortestPathC$route[sim_node()]);

      ShortestPathC$route2[sim_node()] = ShortestPathC$ConfirmedNodes$get(ShortestPathC$route[sim_node()].node);

      ShortestPathC$next[sim_node()] = ShortestPathC$route[sim_node()];

      for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < ShortestPathC$NeighborLS$size(); ShortestPathC$i[sim_node()]++) 
        {
          ShortestPathC$newls[sim_node()] = ShortestPathC$NeighborLS$get(ShortestPathC$i[sim_node()]);

          if (__nesc_ntoh_uint8(ShortestPathC$newls[sim_node()].node.nxdata) == ShortestPathC$next[sim_node()].node) 
            {
              break;
            }
        }
    }

  return SUCCESS;
}

# 5 "/home/luis/workspace/Project0/src/lib/interfaces/ShortestPath.nc"
inline static error_t Node$ShortestPath$Dijkstra(void ){
#line 5
  unsigned char __nesc_result;
#line 5

#line 5
  __nesc_result = ShortestPathC$ShortestPath$Dijkstra();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 262 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$BuildRoutingTableTimer$fired(void )
{
  Node$ShortestPath$Dijkstra();
}

#line 236
static inline void Node$AttemptConnectionTimer$fired(void )
{
}


static inline void Node$ClientWriteTimer$fired(void )
{
}

# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SimpleSendP$sendBufferTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(SimpleSendP$sendBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 74 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static inline void SimpleSendP$sendTimer$fired(void )
#line 74
{
  SimpleSendP$sendBufferTask$postTask();
}

# 146 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint16_t /*NodeC.Sockets*/HashmapC$2$Hashmap$size(void )
#line 146
{
  return /*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()];
}

# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint16_t TransportC$Sockets$size(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$size();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 142 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t */*NodeC.Sockets*/HashmapC$2$Hashmap$getKeys(void )
#line 142
{
  return /*NodeC.Sockets*/HashmapC$2$keys[sim_node()];
}

# 19 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *TransportC$Sockets$getKeys(void ){
#line 19
  unsigned int *__nesc_result;
#line 19

#line 19
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$getKeys();
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 769 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline void TransportC$TimeoutTimer$fired(void )
{
  TCP tmpTCP;
  uint32_t key;
  uint32_t *keys;

#line 774
  keys = TransportC$Sockets$getKeys();


  for (TransportC$i[sim_node()] = 0; TransportC$i[sim_node()] < TransportC$Sockets$size(); TransportC$i[sim_node()]++) 
    {
      key = keys[TransportC$i[sim_node()]];
      TransportC$sockSt[sim_node()] = TransportC$Sockets$get(key);

      if (TransportC$sockSt[sim_node()].inTimeOut == TRUE) 
        {

          TransportC$sockSt[sim_node()].timeOut -= 4500;

          if (TransportC$sockSt[sim_node()].timeOut == 0 || TransportC$sockSt[sim_node()].timeOut > 60000) 
            {

              TransportC$sockSt[sim_node()].inTimeOut = FALSE;
              __nesc_hton_uint16(tmpTCP.ack.nxdata, TransportC$sockSt[sim_node()].seq - (TransportC$sockSt[sim_node()].lastByteSent - TransportC$sockSt[sim_node()].lastByteAck));
              __nesc_hton_uint8(tmpTCP.adv_win.nxdata, TransportC$sockSt[sim_node()].advWin);
              __nesc_hton_uint8(tmpTCP.src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));

              TransportC$Sockets$remove(key);
              TransportC$Sockets$insert(key, TransportC$sockSt[sim_node()]);
              TransportC$Transport$send(tmpTCP);
            }

          TransportC$Sockets$remove(key);
          TransportC$Sockets$insert(key, TransportC$sockSt[sim_node()]);
        }
    }
}

static inline void TransportC$HandShakeTimer$fired(void )
{
  uint32_t key;
  uint32_t *keys;
  TCP *tmpTCP;

#line 811
  keys = TransportC$Sockets$getKeys();

  for (TransportC$i[sim_node()] = 0; TransportC$i[sim_node()] < TransportC$Sockets$size(); TransportC$i[sim_node()]++) 
    {
      key = keys[TransportC$i[sim_node()]];
      TransportC$sockSt[sim_node()] = TransportC$Sockets$get(key);

      if (TransportC$sockSt[sim_node()].inHSTimeOut == TRUE) 
        {
          TransportC$sockSt[sim_node()].HStimeOut -= 4500;

          if (TransportC$sockSt[sim_node()].HStimeOut == 0 || TransportC$sockSt[sim_node()].HStimeOut > 60000) 
            {
              tmpTCP = (TCP *)TransportC$sockSt[sim_node()].packet.payload;
              TransportC$ShortestPath$SendPack(& TransportC$sockSt[sim_node()].packet);
              TransportC$sockSt[sim_node()].HStimeOut = 9000;
            }

          TransportC$Sockets$remove(key);
          TransportC$Sockets$insert(key, TransportC$sockSt[sim_node()]);
        }
    }

  TransportC$HandShakeTimer$startOneShot(4500);
}

static inline void TransportC$AckTimer$fired(void )
{
  uint32_t key;
  uint32_t *keys;

#line 841
  keys = TransportC$Sockets$getKeys();

  for (TransportC$i[sim_node()] = 0; TransportC$i[sim_node()] < TransportC$Sockets$size(); TransportC$i[sim_node()]++) 
    {
      key = keys[TransportC$i[sim_node()]];
      TransportC$sockSt[sim_node()] = TransportC$Sockets$get(key);


      if (TransportC$sockSt[sim_node()].state == SOCK_TIME_WAIT && TransportC$sockSt[sim_node()].inAckTimeOut == TRUE) 
        {
          TransportC$sockSt[sim_node()].acktimeOut -= 4500;

          if (TransportC$sockSt[sim_node()].state == SOCK_TIME_WAIT && (TransportC$sockSt[sim_node()].acktimeOut == 0 || TransportC$sockSt[sim_node()].acktimeOut > 60000)) 
            {
              sim_log_debug(259U, "Project3TGen", "Connection Closed\n");
              TransportC$sockSt[sim_node()].acktimeOut = 0;
              TransportC$sockSt[sim_node()].inAckTimeOut = FALSE;
              TransportC$sockSt[sim_node()].HStimeOut = 0;
              TransportC$sockSt[sim_node()].inHSTimeOut = FALSE;

              TransportC$sockSt[sim_node()].state = SOCK_CLOSED;
              TransportC$FDs$remove(__nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
            }

          TransportC$Sockets$remove(key);
          if (TransportC$sockSt[sim_node()].state != SOCK_CLOSED) 
            {
              TransportC$Sockets$insert(key, TransportC$sockSt[sim_node()]);
            }
        }
    }

  TransportC$AckTimer$startOneShot(4500);
}

#line 140
static inline uint16_t TransportC$Transport$write(socket_t fd)
{
  uint16_t min;
#line 142
  uint16_t j;
#line 142
  uint16_t stopped;
#line 142
  uint16_t LBW_LBA;
#line 142
  uint16_t tmp;
  TCP tmpTCP;

#line 144
  j = 0;

  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);
  if (TransportC$sockSt[sim_node()].inTimeOut == TRUE) 
    {
      return 0;
    }

  if (TransportC$sockSt[sim_node()].neverSent == TRUE) 
    {
      TransportC$sockSt[sim_node()].lastByteWritten = 65535;
      TransportC$sockSt[sim_node()].lastByteAck = 65535;
      TransportC$sockSt[sim_node()].lastByteSent = 65535;
      TransportC$sockSt[sim_node()].advWin = 2;
    }


  LBW_LBA = TransportC$sockSt[sim_node()].lastByteWritten - TransportC$sockSt[sim_node()].lastByteAck;
  LBW_LBA = LBW_LBA % 128;

  if (SOCKET_SEND_BUFFER_SIZE - LBW_LBA < TransportC$sockSt[sim_node()].dataToSendSize) 
    {
      min = SOCKET_SEND_BUFFER_SIZE - LBW_LBA;
    }
  else 
    {
      min = TransportC$sockSt[sim_node()].dataToSendSize;
    }


  tmp = TransportC$sockSt[sim_node()].lastByteWritten;
  tmp++;
  for (TransportC$i[sim_node()] = tmp; TransportC$i[sim_node()] < tmp + min; TransportC$i[sim_node()]++) 
    {
      TransportC$sockSt[sim_node()].sendBuff[TransportC$i[sim_node()] % 128] = TransportC$sockSt[sim_node()].dataToSend[j];
      TransportC$sockSt[sim_node()].lastByteWritten++;
      stopped = j;
      j++;
    }

  LBW_LBA = TransportC$sockSt[sim_node()].lastByteWritten - TransportC$sockSt[sim_node()].lastByteAck;
  LBW_LBA = LBW_LBA % 128;
  TransportC$sockSt[sim_node()].sendBuffSize = LBW_LBA;


  for (TransportC$i[sim_node()] = 0; TransportC$i[sim_node()] < TransportC$sockSt[sim_node()].dataToSendSize - stopped - 1; TransportC$i[sim_node()]++) 
    {
      TransportC$sockSt[sim_node()].dataToSend[TransportC$i[sim_node()]] = TransportC$sockSt[sim_node()].dataToSend[TransportC$i[sim_node()] + stopped + 1];
    }
  TransportC$sockSt[sim_node()].dataToSendSize = TransportC$sockSt[sim_node()].dataToSendSize - stopped - 1;

  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);


  __nesc_hton_uint16(tmpTCP.ack.nxdata, TransportC$sockSt[sim_node()].seq);
  __nesc_hton_uint8(tmpTCP.adv_win.nxdata, 2);
  __nesc_hton_uint8(tmpTCP.src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
  TransportC$Transport$send(tmpTCP);

  return j;
}

# 75 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static uint16_t ApplicationC$Transport$write(socket_t fd){
#line 75
  unsigned short __nesc_result;
#line 75

#line 75
  __nesc_result = TransportC$Transport$write(fd);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint16_t ApplicationC$Sockets$size(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$size();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18

inline static uint32_t *ApplicationC$Sockets$getKeys(void ){
#line 19
  unsigned int *__nesc_result;
#line 19

#line 19
  __nesc_result = /*NodeC.Sockets*/HashmapC$2$Hashmap$getKeys();
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 358 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline void ApplicationC$TryWritingTimer$fired(void )
{
  uint32_t *keys;

  keys = ApplicationC$Sockets$getKeys();

  for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$Sockets$size(); ApplicationC$i[sim_node()]++) 
    {
      ApplicationC$sockSt[sim_node()] = ApplicationC$Sockets$get(keys[ApplicationC$i[sim_node()]]);

      if (ApplicationC$sockSt[sim_node()].dataToSendSize > 0) 
        {
          ApplicationC$Transport$write(keys[ApplicationC$i[sim_node()]]);
        }
    }

  ApplicationC$TryWritingTimer$startOneShot(90000);
}

# 14 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static ApplicationC$Users$t ApplicationC$Users$get(uint32_t key){
#line 14
  struct User __nesc_result;
#line 14

#line 14
  __nesc_result = /*NodeC.Users*/HashmapC$4$Hashmap$get(key);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 146 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint16_t /*NodeC.Users*/HashmapC$4$Hashmap$size(void )
#line 146
{
  return /*NodeC.Users*/HashmapC$4$numofVals[sim_node()];
}

# 18 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint16_t ApplicationC$Users$size(void ){
#line 18
  unsigned short __nesc_result;
#line 18

#line 18
  __nesc_result = /*NodeC.Users*/HashmapC$4$Hashmap$size();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 142 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t */*NodeC.Users*/HashmapC$4$Hashmap$getKeys(void )
#line 142
{
  return /*NodeC.Users*/HashmapC$4$keys[sim_node()];
}

# 19 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static uint32_t *ApplicationC$Users$getKeys(void ){
#line 19
  unsigned int *__nesc_result;
#line 19

#line 19
  __nesc_result = /*NodeC.Users*/HashmapC$4$Hashmap$getKeys();
#line 19

#line 19
  return __nesc_result;
#line 19
}
#line 19
# 30 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t /*NodeC.Users*/HashmapC$4$hash3(uint32_t k)
#line 30
{
  return 1 + k % 11;
}

#line 27
static inline uint32_t /*NodeC.Users*/HashmapC$4$hash2(uint32_t k)
#line 27
{
  return k % 13;
}




static inline uint32_t /*NodeC.Users*/HashmapC$4$hash(uint32_t k, uint32_t i)
#line 34
{
  return (/*NodeC.Users*/HashmapC$4$hash2(k) + i * /*NodeC.Users*/HashmapC$4$hash3(k)) % /*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[sim_node()];
}

static inline void /*NodeC.Users*/HashmapC$4$Hashmap$insert(uint32_t k, /*NodeC.Users*/HashmapC$4$t input)
#line 38
{
  uint32_t i = 0;
#line 39
  uint32_t j = 0;

  if (k == 0) {
#line 41
    return;
    }
  do {
      j = /*NodeC.Users*/HashmapC$4$hash(k, i);
      if (/*NodeC.Users*/HashmapC$4$map[sim_node()][j].key == 0 || /*NodeC.Users*/HashmapC$4$map[sim_node()][j].key == k) {
          if (/*NodeC.Users*/HashmapC$4$map[sim_node()][j].key == 0) {
              /*NodeC.Users*/HashmapC$4$keys[sim_node()][/*NodeC.Users*/HashmapC$4$numofVals[sim_node()]] = k;
              /*NodeC.Users*/HashmapC$4$numofVals[sim_node()]++;
            }
          /*NodeC.Users*/HashmapC$4$map[sim_node()][j].value = input;
          /*NodeC.Users*/HashmapC$4$map[sim_node()][j].key = k;

          return;
        }
      i++;
    }
  while (
#line 56
  i < /*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[sim_node()]);
}

# 11 "/home/luis/workspace/Project0/src/dataStructures/interfaces/Hashmap.nc"
inline static void ApplicationC$Users$insert(uint32_t key, ApplicationC$Users$t input){
#line 11
  /*NodeC.Users*/HashmapC$4$Hashmap$insert(key, input);
#line 11
}
#line 11
# 127 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline error_t ApplicationC$Application$query(socket_t qfd, uint8_t *buff, uint16_t bufflen)
{
  socket_t tmpFD;
  socket_storage_t tmpSockSt;
  uint8_t copy[200];
  uint8_t username[200];
  uint8_t target[200];
  uint8_t *msg[200];
  uint8_t chr;
#line 135
  uint8_t size;
  char *split;
  char *broadcast = "bc ";
  char *list = "list ";
  char *private = "priv ";
  char *space = " ";
  char *comma = ", ";
  char *nl = "\n";
  char *rc = "\r";
  uint32_t *keys;
  uint32_t key;

  ApplicationC$sockSt[sim_node()] = ApplicationC$Sockets$get(qfd);


  for (ApplicationC$i[sim_node()] = ApplicationC$sockSt[sim_node()].messageToQuerySize; ApplicationC$i[sim_node()] < ApplicationC$sockSt[sim_node()].messageToQuerySize + bufflen; ApplicationC$i[sim_node()]++) 
    {
      ApplicationC$sockSt[sim_node()].messageToQuery[ApplicationC$i[sim_node()]] = buff[ApplicationC$i[sim_node()] - ApplicationC$sockSt[sim_node()].messageToQuerySize];
    }

  ApplicationC$sockSt[sim_node()].messageToQuerySize += ApplicationC$readBuffSize[sim_node()];
  ApplicationC$Sockets$remove(qfd);
  ApplicationC$Sockets$insert(qfd, ApplicationC$sockSt[sim_node()]);


  if (ApplicationC$sockSt[sim_node()].messageToQuery[ApplicationC$sockSt[sim_node()].messageToQuerySize - 1] == '\n') 
    {

      strcpy(copy, ApplicationC$sockSt[sim_node()].messageToQuery);
      split = strtok(copy, " \r");


      if (!strcmp(split, "hello")) 
        {
          sim_log_debug(270U, "Project4Gen", "\"Connect to Server\" Command Detected!\n");


          split = strtok((void *)0, " ");
          ApplicationC$user[sim_node()].namesize = (uint8_t )strlen(split);
          strcpy(ApplicationC$user[sim_node()].name, split);


          split = strtok((void *)0, "\r");
          ApplicationC$user[sim_node()].port = (uint8_t )atoi(split);
          sim_log_debug(271U, "Project4Clean", "<Server> Registered %s at port: %d\n", ApplicationC$user[sim_node()].name, ApplicationC$user[sim_node()].port);


          ApplicationC$Users$insert(ApplicationC$user[sim_node()].port, ApplicationC$user[sim_node()]);
        }
      else {
#line 184
        if (!strcmp(split, "msg")) 
          {
            sim_log_debug(272U, "Project4Gen", "\"Broadcast a Message\" Command Detected!\n");
            ApplicationC$user[sim_node()] = ApplicationC$Users$get(__nesc_ntoh_uint8(ApplicationC$sockSt[sim_node()].sockAddr.destPort.nxdata));


            split = strtok((void *)0, "\r");
            size = (uint8_t )strlen(split);


            keys = ApplicationC$Users$getKeys();
            for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$Users$size(); ApplicationC$i[sim_node()]++) 
              {
                key = keys[ApplicationC$i[sim_node()]];
                ApplicationC$user2[sim_node()] = ApplicationC$Users$get(key);

                tmpFD = ApplicationC$FDs$get(ApplicationC$user2[sim_node()].port);
                tmpSockSt = ApplicationC$Sockets$get(tmpFD);


                strcpy(tmpSockSt.dataToSend, broadcast);
                tmpSockSt.dataToSendSize = (uint8_t )strlen(broadcast);
                strcat(tmpSockSt.dataToSend, ApplicationC$user[sim_node()].name);
                tmpSockSt.dataToSendSize += ApplicationC$user[sim_node()].namesize;
                strcat(tmpSockSt.dataToSend, space);
                tmpSockSt.dataToSendSize++;
                strcat(tmpSockSt.dataToSend, split);
                tmpSockSt.dataToSendSize += size;
                strcat(tmpSockSt.dataToSend, nl);
                tmpSockSt.dataToSendSize++;

                ApplicationC$Sockets$remove(tmpFD);
                ApplicationC$Sockets$insert(tmpFD, tmpSockSt);
              }


            strcpy(ApplicationC$sockSt[sim_node()].dataToSend, broadcast);
            ApplicationC$sockSt[sim_node()].dataToSendSize = (uint8_t )strlen(broadcast);
            strcat(ApplicationC$sockSt[sim_node()].dataToSend, ApplicationC$user[sim_node()].name);
            ApplicationC$sockSt[sim_node()].dataToSendSize += ApplicationC$user[sim_node()].namesize;
            strcat(ApplicationC$sockSt[sim_node()].dataToSend, space);
            ApplicationC$sockSt[sim_node()].dataToSendSize++;
            strcat(ApplicationC$sockSt[sim_node()].dataToSend, split);
            ApplicationC$sockSt[sim_node()].dataToSendSize += size;
            strcat(ApplicationC$sockSt[sim_node()].dataToSend, nl);
            ApplicationC$sockSt[sim_node()].dataToSendSize++;
          }
        else {
#line 231
          if (!strcmp(split, "whisper")) 
            {
              sim_log_debug(273U, "Project4Gen", "\"Unicast a Message\" Command Detected!\n");

              ApplicationC$user[sim_node()] = ApplicationC$Users$get(__nesc_ntoh_uint8(ApplicationC$sockSt[sim_node()].sockAddr.destPort.nxdata));


              split = strtok((void *)0, " ");
              size = (uint8_t )strlen(split);


              keys = ApplicationC$Users$getKeys();
              for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$Users$size(); ApplicationC$i[sim_node()]++) 
                {
                  key = keys[ApplicationC$i[sim_node()]];
                  ApplicationC$user2[sim_node()] = ApplicationC$Users$get(key);

                  if (!strcmp(ApplicationC$user2[sim_node()].name, split)) 
                    {

                      split = strtok((void *)0, "\r");
                      size = (uint8_t )strlen(split);

                      tmpFD = ApplicationC$FDs$get(ApplicationC$user2[sim_node()].port);
                      tmpSockSt = ApplicationC$Sockets$get(tmpFD);

                      strcpy(tmpSockSt.dataToSend, private);
                      tmpSockSt.dataToSendSize = (uint8_t )strlen(private);
                      strcat(tmpSockSt.dataToSend, ApplicationC$user[sim_node()].name);
                      tmpSockSt.dataToSendSize += ApplicationC$user[sim_node()].namesize;
                      strcat(tmpSockSt.dataToSend, space);
                      tmpSockSt.dataToSendSize++;
                      strcat(tmpSockSt.dataToSend, ApplicationC$user2[sim_node()].name);
                      tmpSockSt.dataToSendSize += ApplicationC$user2[sim_node()].namesize;
                      strcat(tmpSockSt.dataToSend, space);
                      tmpSockSt.dataToSendSize++;
                      strcat(tmpSockSt.dataToSend, split);
                      tmpSockSt.dataToSendSize += size;
                      strcat(tmpSockSt.dataToSend, nl);
                      tmpSockSt.dataToSendSize++;

                      ApplicationC$Sockets$remove(tmpFD);
                      ApplicationC$Sockets$insert(tmpFD, tmpSockSt);
                    }
                }
            }
          else {
#line 277
            if (!strcmp(split, "listusr")) 
              {
                sim_log_debug(274U, "Project4Gen", "\"Print Users\" Command Detected!\n");
                strcpy(msg, list);

                keys = ApplicationC$Users$getKeys();


                for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$Users$size(); ApplicationC$i[sim_node()]++) 
                  {
                    key = keys[ApplicationC$i[sim_node()]];
                    ApplicationC$user[sim_node()] = ApplicationC$Users$get(key);

                    strcat(msg, ApplicationC$user[sim_node()].name);
                    strcat(msg, comma);
                  }
                strcat(msg, nl);

                strcpy(ApplicationC$sockSt[sim_node()].dataToSend, msg);
                ApplicationC$sockSt[sim_node()].dataToSendSize = strlen(msg);
              }
            else {

              if (!strcmp(split, "bc")) 
                {

                  split = strtok((void *)0, " ");
                  strcpy(username, split);
                  split = strtok((void *)0, "\n");
                  strcpy(msg, split);

                  sim_log_debug(275U, "Project4Clean", "<%s> %s\n", username, msg);
                }
              else {
#line 310
                if (!strcmp(split, "priv")) 
                  {

                    split = strtok((void *)0, " ");
                    strcpy(username, split);
                    split = strtok((void *)0, " ");
                    strcpy(target, split);
                    split = strtok((void *)0, "\n");
                    strcpy(msg, split);

                    sim_log_debug(276U, "Project4Clean", "<%s @ %s> %s\n", username, target, msg);
                  }
                else {
#line 322
                  if (!strcmp(split, "list")) 
                    {

                      split = strtok((void *)0, "\n");
                      strcpy(msg, split);

                      sim_log_debug(277U, "Project4Clean", "<Chat> UserList: %s\n", msg);
                    }
                  else 
                    {
                      sim_log_debug(278U, "Project4Gen", "Unknown protocol: %s\n", ApplicationC$sockSt[sim_node()].messageToQuery);
                    }
                  }
                }
              }
            }
          }
        }
#line 335
      ApplicationC$sockSt[sim_node()].messageToQuerySize = 0;

      ApplicationC$Sockets$remove(qfd);
      ApplicationC$Sockets$insert(qfd, ApplicationC$sockSt[sim_node()]);
    }

  return SUCCESS;
}

# 435 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline uint16_t TransportC$Transport$read(socket_t fd, uint8_t *buff, uint16_t bufflen)
{
  uint16_t j;
#line 437
  uint16_t readStart;

#line 438
  j = 0;

  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);


  readStart = TransportC$sockSt[sim_node()].lastByteRead + 1;
  for (TransportC$i[sim_node()] = readStart; TransportC$i[sim_node()] < TransportC$sockSt[sim_node()].nextByteExpected; TransportC$i[sim_node()]++) 
    {
      if (j >= bufflen) 
        {
          break;
        }

      buff[j] = TransportC$sockSt[sim_node()].recBuff[TransportC$i[sim_node()] % 128];
      TransportC$sockSt[sim_node()].lastByteRead++;
      j++;
    }

  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);

  return j;
}

# 102 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static uint16_t ApplicationC$Transport$read(socket_t fd, uint8_t *buff, uint16_t bufflen){
#line 102
  unsigned short __nesc_result;
#line 102

#line 102
  __nesc_result = TransportC$Transport$read(fd, buff, bufflen);
#line 102

#line 102
  return __nesc_result;
#line 102
}
#line 102
# 377 "/home/luis/workspace/Project0/src/lib/modules/ApplicationC.nc"
static inline void ApplicationC$ReadTimer$fired(void )
{
  uint16_t tmp1;
#line 379
  uint16_t tmp2;
#line 379
  uint16_t j;
  uint32_t *keys;
  uint32_t key;

  keys = ApplicationC$Sockets$getKeys();

  for (ApplicationC$i[sim_node()] = 0; ApplicationC$i[sim_node()] < ApplicationC$Sockets$size(); ApplicationC$i[sim_node()]++) 
    {
      key = keys[ApplicationC$i[sim_node()]];
      ApplicationC$sockSt[sim_node()] = ApplicationC$Sockets$get(key);

      tmp1 = ApplicationC$sockSt[sim_node()].lastByteRec + 1;
      tmp2 = ApplicationC$sockSt[sim_node()].lastByteRead + 1;
      if (tmp1 > tmp2 && ApplicationC$sockSt[sim_node()].state == SOCK_ESTABLISHED) 
        {
          ApplicationC$readBuffSize[sim_node()] = ApplicationC$Transport$read(key, ApplicationC$readBuffer[sim_node()], READ_BUFFER_MAX - ApplicationC$readBuffSize[sim_node()]);


          ApplicationC$Application$query(key, ApplicationC$readBuffer[sim_node()], ApplicationC$readBuffSize[sim_node()]);
          ApplicationC$readBuffSize[sim_node()] = 0;
        }
    }

  ApplicationC$ReadTimer$startOneShot(37707);
}

# 204 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x2b8da35cdc28){
#line 83
  switch (arg_0x2b8da35cdc28) {
#line 83
    case 0U:
#line 83
      Node$CheckNeighborTimer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      Node$SendNeighborsTimer$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      Node$BuildRoutingTableTimer$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      Node$AttemptConnectionTimer$fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      Node$ClientWriteTimer$fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      SimpleSendP$sendTimer$fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      TransportC$TimeoutTimer$fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      TransportC$HandShakeTimer$fired();
#line 83
      break;
#line 83
    case 10U:
#line 83
      TransportC$AckTimer$fired();
#line 83
      break;
#line 83
    case 11U:
#line 83
      ApplicationC$TryWritingTimer$fired();
#line 83
      break;
#line 83
    case 12U:
#line 83
      ApplicationC$ReadTimer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x2b8da35cdc28);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 30 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash3(uint32_t k)
#line 30
{
  return 1 + k % 11;
}

#line 27
static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash2(uint32_t k)
#line 27
{
  return k % 13;
}




static inline uint32_t /*NodeC.Tentative*/HashmapC$0$hash(uint32_t k, uint32_t i)
#line 34
{
  return (/*NodeC.Tentative*/HashmapC$0$hash2(k) + i * /*NodeC.Tentative*/HashmapC$0$hash3(k)) % /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()];
}

# 64 "/home/luis/workspace/Project0/src/lib/modules/FloodingC.nc"
static inline error_t FloodingC$Flooding$start(pack *myMsg)
{

  FloodingC$newpackid[sim_node()].sequence = __nesc_ntoh_uint16(myMsg->seq.nxdata);
  FloodingC$newpackid[sim_node()].moteID = __nesc_ntoh_uint16(myMsg->src.nxdata);

  FloodingC$recPackets$pushback(FloodingC$newpackid[sim_node()]);
#line 84
  FloodingC$broadcastMsg(myMsg);

  return SUCCESS;
}

# 7 "/home/luis/workspace/Project0/src/lib/interfaces/Flooding.nc"
inline static error_t NeighborC$Flooding$start(pack *msg){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = FloodingC$Flooding$start(msg);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 54 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(181U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(180U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(177U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(178U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(170U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(160U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(161U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(162U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(163U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(164U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(165U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(166U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(167U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 67 "/home/luis/local/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/home/luis/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 61
{
  return SUCCESS;
}

# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/home/luis/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/home/luis/local/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 49 "/home/luis/local/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 49
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$PlatformInit$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/luis/local/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 21 "/home/luis/local/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/luis/local/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  return ok;
}

# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 86
{
  sim_log_debug(110U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(172U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 55 "/home/luis/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 65 "/home/luis/local/tinyos-2.1.1/tos/system/PoolP.nc"
static inline error_t /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[sim_node()][i] = &/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[sim_node()][i];
    }
  /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[sim_node()] = 20;
  /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
  return SUCCESS;
}

# 62 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SimpleSendC.PoolC.PoolP*/PoolP$0$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void TransportC$TimeoutTimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(8U, dt);
#line 64
}
#line 64
# 44 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static inline void TransportC$Transport$startTimer(void )
{
  TransportC$TimeoutTimer$startPeriodic(4500);
  TransportC$HandShakeTimer$startOneShot(4500);
  TransportC$AckTimer$startOneShot(4500);
}

# 20 "/home/luis/workspace/Project0/src/lib/interfaces/Transport.nc"
inline static void Node$Transport$startTimer(void ){
#line 20
  TransportC$Transport$startTimer();
#line 20
}
#line 20
# 64 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void Node$CheckNeighborTimer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 64
}
#line 64
# 67 "/home/luis/workspace/Project0/src/Node.nc"
static inline void Node$Boot$booted(void )
{
  Node$AMControl$start();

  sim_log_debug(149U, "genDebug", "Booted\n");

  Node$CheckNeighborTimer$startPeriodic(55777);
  Node$SendNeighborsTimer$startOneShot(75777);
  Node$Transport$startTimer();
}

# 60 "/home/luis/local/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  Node$Boot$booted();
#line 60
}
#line 60
# 55 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(104U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(106U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(107U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 267 "/home/luis/workspace/Project0/src/Node.nc"
static void Node$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

# 241 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
static error_t ShortestPathC$ShortestPath$SendPack(pack *myMsg)
{
  ShortestPathC$key[sim_node()] = __nesc_ntoh_uint16(myMsg->dest.nxdata);
  ShortestPathC$route[sim_node()] = ShortestPathC$ConfirmedNodes$get(ShortestPathC$key[sim_node()]);

  if (ShortestPathC$key[sim_node()] == TOS_NODE_ID) 
    {
      ShortestPathC$ShortestPath$RoutePack(myMsg);
    }
  else 
    {
      ShortestPathC$newpackid[sim_node()].sequence = __nesc_ntoh_uint16(myMsg->seq.nxdata);
      ShortestPathC$newpackid[sim_node()].moteID = __nesc_ntoh_uint16(myMsg->src.nxdata);

      if (ShortestPathC$recPackets$size() >= 90) 
        {
          for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < 70; ShortestPathC$i[sim_node()]++) 
            {
              ShortestPathC$recPackets$popfront();
            }
        }

      ShortestPathC$recPackets$pushback(ShortestPathC$newpackid[sim_node()]);

      sim_log_debug(230U, "Project2", "Sending to: %d, Next Hop: %d\n", __nesc_ntoh_uint16(myMsg->dest.nxdata), ShortestPathC$route[sim_node()].nextHop);
      ShortestPathC$Sender$send(*myMsg, ShortestPathC$route[sim_node()].nextHop);
    }

  return SUCCESS;
}

# 102 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static /*NodeC.ConfirmedNodes*/HashmapC$1$t /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$get(uint32_t k)
#line 102
{
  uint32_t i = 0;
#line 103
  uint32_t j = 0;

#line 104
  do {
      j = /*NodeC.ConfirmedNodes*/HashmapC$1$hash(k, i);
      if (/*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key == k) {
        return /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].value;
        }
#line 108
      i++;
    }
  while (
#line 109
  i < /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[sim_node()]);
  return /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][0].value;
}

# 187 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
static error_t ShortestPathC$ShortestPath$RoutePack(pack *myMsg)
{
  if (__nesc_ntoh_uint16(myMsg->dest.nxdata) == TOS_NODE_ID) 
    {
      if (ShortestPathC$checkSequences(__nesc_ntoh_uint16(myMsg->seq.nxdata), __nesc_ntoh_uint16(myMsg->src.nxdata)) == FALSE) 
        {
          pack rep = *myMsg;

          ShortestPathC$newpackid[sim_node()].sequence = __nesc_ntoh_uint16(myMsg->seq.nxdata);
          ShortestPathC$newpackid[sim_node()].moteID = __nesc_ntoh_uint16(myMsg->src.nxdata);

          if (ShortestPathC$recPackets$size() >= 90) 
            {
              for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < 70; ShortestPathC$i[sim_node()]++) 
                {
                  ShortestPathC$recPackets$popfront();
                }
            }

          ShortestPathC$recPackets$pushback(ShortestPathC$newpackid[sim_node()]);

          ShortestPathC$printMsg(myMsg);








          return SUCCESS;
        }
      else {
#line 219
        if (ShortestPathC$checkSequences(__nesc_ntoh_uint16(myMsg->seq.nxdata), __nesc_ntoh_uint16(myMsg->src.nxdata)) == TRUE) 
          {
            if (!strcmp((char *)myMsg->payload, "ACKNOWLEDGEMENT")) 
              {
                sim_log_debug(228U, "Project2", "Received ACK\n");
                return SUCCESS;
              }

            ShortestPathC$printMsg(myMsg);
            return SUCCESS;
          }
        }
    }
  ShortestPathC$key[sim_node()] = __nesc_ntoh_uint16(myMsg->dest.nxdata);
  ShortestPathC$route[sim_node()] = ShortestPathC$ConfirmedNodes$get(ShortestPathC$key[sim_node()]);

  sim_log_debug(229U, "Project2", "Sending to: %d, Next Hop: %d\n", __nesc_ntoh_uint16(myMsg->dest.nxdata), ShortestPathC$route[sim_node()].nextHop);
  ShortestPathC$Sender$send(*myMsg, ShortestPathC$route[sim_node()].nextHop);

  return SUCCESS;
}

#line 42
static int ShortestPathC$checkSequences(uint16_t seq, uint16_t src)
{
  for (ShortestPathC$i[sim_node()] = 0; ShortestPathC$i[sim_node()] < ShortestPathC$recPackets$size(); ShortestPathC$i[sim_node()]++) 
    {
      ShortestPathC$newpackid[sim_node()] = ShortestPathC$recPackets$get(ShortestPathC$i[sim_node()]);

      if (seq == ShortestPathC$newpackid[sim_node()].sequence && src == ShortestPathC$newpackid[sim_node()].moteID) 
        {
          sim_log_debug(221U, "Project1F", "Already received packet!\n");
          return TRUE;
        }
    }

  return FALSE;
}

# 50 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static /*NodeC.recPackets*/ListC$2$t /*NodeC.recPackets*/ListC$2$List$popfront(void )
#line 50
{
  /*NodeC.recPackets*/ListC$2$t returnVal;
  uint16_t i;

  returnVal = /*NodeC.recPackets*/ListC$2$container[sim_node()][0];
  if (/*NodeC.recPackets*/ListC$2$size[sim_node()] > 0) {
      for (i = 0; i < /*NodeC.recPackets*/ListC$2$size[sim_node()] - 1; i++) {
          /*NodeC.recPackets*/ListC$2$container[sim_node()][i] = /*NodeC.recPackets*/ListC$2$container[sim_node()][i + 1];
        }

      /*NodeC.recPackets*/ListC$2$size[sim_node()]--;
    }

  return returnVal;
}

#line 23
static void /*NodeC.recPackets*/ListC$2$List$pushback(/*NodeC.recPackets*/ListC$2$t input)
#line 23
{
  if (/*NodeC.recPackets*/ListC$2$size[sim_node()] < /*NodeC.recPackets*/ListC$2$MAX_SIZE[sim_node()]) {
      /*NodeC.recPackets*/ListC$2$container[sim_node()][/*NodeC.recPackets*/ListC$2$size[sim_node()]] = input;
      /*NodeC.recPackets*/ListC$2$size[sim_node()]++;
    }
}

# 58 "/home/luis/workspace/Project0/src/lib/modules/ShortestPathC.nc"
static void ShortestPathC$printMsg(pack *msg)
{
  sim_log_debug(222U, "Project2", "Delivered from node: %d\n", (uint16_t )__nesc_ntoh_uint16(msg->src.nxdata));
  sim_log_debug(223U, "Project2", "Packet Payload: %s\n", msg->payload);
}

# 39 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static error_t SimpleSendP$SimpleSend$send(pack msg, uint16_t dest)
#line 39
{
  if (!SimpleSendP$Pool$empty()) {
      sendInfo *input;

      input = SimpleSendP$Pool$get();
      input->packet = msg;
      input->dest = dest;

      SimpleSendP$Queue$enqueue(input);

      SimpleSendP$postSendTask();

      return SUCCESS;
    }
  return FAIL;
}

# 69 "/home/luis/local/tinyos-2.1.1/tos/system/QueueC.nc"
static void /*SimpleSendC.QueueC*/QueueC$0$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(194U, "QueueC", "head <-");
  for (i = /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()]; i < /*SimpleSendC.QueueC*/QueueC$0$head[sim_node()] + /*SimpleSendC.QueueC*/QueueC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(195U, "QueueC", "[");
      for (j = 0; j < sizeof(/*SimpleSendC.QueueC*/QueueC$0$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*SimpleSendC.QueueC*/QueueC$0$queue[sim_node()][i % 20])[j];

#line 77
          sim_log_debug_clear(196U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(197U, "QueueC", "] ");
    }
  sim_log_debug_clear(198U, "QueueC", "<- tail\n");
}

# 33 "/home/luis/workspace/Project0/src/lib/modules/SimpleSendP.nc"
static void SimpleSendP$postSendTask(void )
#line 33
{
  if (SimpleSendP$sendTimer$isRunning() == FALSE) {
      SimpleSendP$sendTimer$startOneShot(SimpleSendP$Random$rand16() % 200 + 500);
    }
}

# 144 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 205 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(99U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(100U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 161 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(169U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(175U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 69 "/home/luis/local/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 51 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static socket_t TransportC$Transport$socket(void )
{
  socket_storage_t sockStTMP;


  for (TransportC$sock[sim_node()] = 0; TransportC$sock[sim_node()] <= 15; TransportC$sock[sim_node()]++) 
    {
      if (!TransportC$Sockets$contains(TransportC$sock[sim_node()])) 
        {
          sockStTMP.state = SOCK_LISTEN;
          sockStTMP.inTimeOut = FALSE;
          sockStTMP.inAckTimeOut = FALSE;
          sockStTMP.inHSTimeOut = FALSE;
          sockStTMP.neverSent = TRUE;
          sockStTMP.sending = FALSE;
          sockStTMP.seq = 0;

          TransportC$Sockets$insert(TransportC$sock[sim_node()], sockStTMP);

          return TransportC$sock[sim_node()];
        }
    }

  sim_log_debug(241U, "Project3TGen", "No available sockets...\n");
  return -1;
}

# 125 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static bool /*NodeC.Sockets*/HashmapC$2$Hashmap$contains(uint32_t k)
#line 125
{
  uint32_t i = 0;
#line 126
  uint32_t j = 0;

#line 127
  do {
      j = /*NodeC.Sockets*/HashmapC$2$hash(k, i);
      if (/*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 131
      i++;
    }
  while (
#line 132
  i < /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

#line 38
static void /*NodeC.Sockets*/HashmapC$2$Hashmap$insert(uint32_t k, /*NodeC.Sockets*/HashmapC$2$t input)
#line 38
{
  uint32_t i = 0;
#line 39
  uint32_t j = 0;

  if (k == 0) {
#line 41
    return;
    }
  do {
      j = /*NodeC.Sockets*/HashmapC$2$hash(k, i);
      if (/*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == 0 || /*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == k) {
          if (/*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == 0) {
              /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][/*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()]] = k;
              /*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()]++;
            }
          /*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].value = input;
          /*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key = k;

          return;
        }
      i++;
    }
  while (
#line 56
  i < /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()]);
}

#line 38
static void /*NodeC.FDs*/HashmapC$3$Hashmap$insert(uint32_t k, /*NodeC.FDs*/HashmapC$3$t input)
#line 38
{
  uint32_t i = 0;
#line 39
  uint32_t j = 0;

  if (k == 0) {
#line 41
    return;
    }
  do {
      j = /*NodeC.FDs*/HashmapC$3$hash(k, i);
      if (/*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == 0 || /*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == k) {
          if (/*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == 0) {
              /*NodeC.FDs*/HashmapC$3$keys[sim_node()][/*NodeC.FDs*/HashmapC$3$numofVals[sim_node()]] = k;
              /*NodeC.FDs*/HashmapC$3$numofVals[sim_node()]++;
            }
          /*NodeC.FDs*/HashmapC$3$map[sim_node()][j].value = input;
          /*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key = k;

          return;
        }
      i++;
    }
  while (
#line 56
  i < /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()]);
}

# 78 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static error_t TransportC$Transport$bind(socket_t fd, socket_addr_t *addr)
{
  if (!TransportC$Sockets$contains(fd)) 
    {
      return FAIL;
    }


  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(fd);
  TransportC$sockSt[sim_node()].sockAddr = *addr;
  TransportC$sockSt[sim_node()].lastByteWritten = 65535;

  TransportC$Sockets$remove(fd);
  TransportC$Sockets$insert(fd, TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 102 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static /*NodeC.Sockets*/HashmapC$2$t /*NodeC.Sockets*/HashmapC$2$Hashmap$get(uint32_t k)
#line 102
{
  uint32_t i = 0;
#line 103
  uint32_t j = 0;

#line 104
  do {
      j = /*NodeC.Sockets*/HashmapC$2$hash(k, i);
      if (/*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == k) {
        return /*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].value;
        }
#line 108
      i++;
    }
  while (
#line 109
  i < /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()]);
  return /*NodeC.Sockets*/HashmapC$2$map[sim_node()][0].value;
}

#line 59
static void /*NodeC.Sockets*/HashmapC$2$Hashmap$remove(uint32_t k)
#line 59
{
  uint32_t i = 0;
#line 60
  uint32_t j = 0;

#line 61
  do {
      j = /*NodeC.Sockets*/HashmapC$2$hash(k, i);
      if (/*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key == k) {
          /*NodeC.Sockets*/HashmapC$2$map[sim_node()][j].key = 0;
          break;
        }
      i++;
    }
  while (
#line 68
  i < /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()]);

  sim_log_debug(260U, "hashmap", "Removing entry %d\n", k);
  for (i = 0; i < /*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()]; i++) {
      if (/*NodeC.Sockets*/HashmapC$2$keys[sim_node()][i] == k) {
          sim_log_debug(261U, "hashmap", "Key found at %d\n", i);

          for (j = i; j < /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[sim_node()]; j++) {
              if (/*NodeC.Sockets*/HashmapC$2$keys[sim_node()][j] == 0) {
#line 76
                break;
                }
#line 77
              sim_log_debug(262U, "hashamp", "Moving %d to %d\n", j, j + 1);
              sim_log_debug(263U, "hashamp", "Replacing %d with %d\n", /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][j], /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][j + 1]);
              /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][j] = /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][j + 1];
            }
          /*NodeC.Sockets*/HashmapC$2$keys[sim_node()][/*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()]] = 0;

          /*NodeC.Sockets*/HashmapC$2$numofVals[sim_node()]--;
          sim_log_debug(264U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

# 545 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static error_t TransportC$Transport$setNodeSocket(socket_t fd)
{
  TransportC$nodeFD[sim_node()] = fd;
  TransportC$nodeSocket[sim_node()] = TransportC$Sockets$get(fd);
  TransportC$nodeAddr[sim_node()] = TransportC$nodeSocket[sim_node()].sockAddr;

  return SUCCESS;
}

#line 876
static void TransportC$sendSignal(socket_t fd)
{
  socket_storage_t sendSockSt;

#line 879
  sendSockSt = TransportC$Sockets$get(fd);

  TransportC$Seq[sim_node()] = TransportC$PacketInfo$getSeq();
  TransportC$makePack(&TransportC$sendPackage[sim_node()], TOS_NODE_ID, __nesc_ntoh_uint16(sendSockSt.sockAddr.destAddr.nxdata), 15, PROTOCOL_TCP, TransportC$Seq[sim_node()], TransportC$payday[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  TransportC$PacketInfo$incSeq();

  TransportC$ShortestPath$SendPack(&TransportC$sendPackage[sim_node()]);
}

# 102 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static /*NodeC.FDs*/HashmapC$3$t /*NodeC.FDs*/HashmapC$3$Hashmap$get(uint32_t k)
#line 102
{
  uint32_t i = 0;
#line 103
  uint32_t j = 0;

#line 104
  do {
      j = /*NodeC.FDs*/HashmapC$3$hash(k, i);
      if (/*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == k) {
        return /*NodeC.FDs*/HashmapC$3$map[sim_node()][j].value;
        }
#line 108
      i++;
    }
  while (
#line 109
  i < /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()]);
  return /*NodeC.FDs*/HashmapC$3$map[sim_node()][0].value;
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ApplicationC$ReadTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(12U, dt);
#line 73
}
#line 73
static void ApplicationC$TryWritingTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(11U, dt);
#line 73
}
#line 73
# 199 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static void NeighborC$makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t *payload, uint8_t length)
{
  __nesc_hton_uint16(Package->src.nxdata, src);
  __nesc_hton_uint16(Package->dest.nxdata, dest);
  __nesc_hton_uint8(Package->TTL.nxdata, TTL);
  __nesc_hton_uint16(Package->seq.nxdata, seq);
  __nesc_hton_uint8(Package->protocol.nxdata, protocol);
  memcpy(Package->payload, payload, length);
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void Node$SendNeighborsTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 73
}
#line 73
# 23 "/home/luis/workspace/Project0/src/dataStructures/modules/ListC.nc"
static void /*NodeC.NeighborLS*/ListC$1$List$pushback(/*NodeC.NeighborLS*/ListC$1$t input)
#line 23
{
  if (/*NodeC.NeighborLS*/ListC$1$size[sim_node()] < /*NodeC.NeighborLS*/ListC$1$MAX_SIZE[sim_node()]) {
      /*NodeC.NeighborLS*/ListC$1$container[sim_node()][/*NodeC.NeighborLS*/ListC$1$size[sim_node()]] = input;
      /*NodeC.NeighborLS*/ListC$1$size[sim_node()]++;
    }
}

# 125 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static bool /*NodeC.FDs*/HashmapC$3$Hashmap$contains(uint32_t k)
#line 125
{
  uint32_t i = 0;
#line 126
  uint32_t j = 0;

#line 127
  do {
      j = /*NodeC.FDs*/HashmapC$3$hash(k, i);
      if (/*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 131
      i++;
    }
  while (
#line 132
  i < /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

#line 59
static void /*NodeC.FDs*/HashmapC$3$Hashmap$remove(uint32_t k)
#line 59
{
  uint32_t i = 0;
#line 60
  uint32_t j = 0;

#line 61
  do {
      j = /*NodeC.FDs*/HashmapC$3$hash(k, i);
      if (/*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key == k) {
          /*NodeC.FDs*/HashmapC$3$map[sim_node()][j].key = 0;
          break;
        }
      i++;
    }
  while (
#line 68
  i < /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()]);

  sim_log_debug(265U, "hashmap", "Removing entry %d\n", k);
  for (i = 0; i < /*NodeC.FDs*/HashmapC$3$numofVals[sim_node()]; i++) {
      if (/*NodeC.FDs*/HashmapC$3$keys[sim_node()][i] == k) {
          sim_log_debug(266U, "hashmap", "Key found at %d\n", i);

          for (j = i; j < /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[sim_node()]; j++) {
              if (/*NodeC.FDs*/HashmapC$3$keys[sim_node()][j] == 0) {
#line 76
                break;
                }
#line 77
              sim_log_debug(267U, "hashamp", "Moving %d to %d\n", j, j + 1);
              sim_log_debug(268U, "hashamp", "Replacing %d with %d\n", /*NodeC.FDs*/HashmapC$3$keys[sim_node()][j], /*NodeC.FDs*/HashmapC$3$keys[sim_node()][j + 1]);
              /*NodeC.FDs*/HashmapC$3$keys[sim_node()][j] = /*NodeC.FDs*/HashmapC$3$keys[sim_node()][j + 1];
            }
          /*NodeC.FDs*/HashmapC$3$keys[sim_node()][/*NodeC.FDs*/HashmapC$3$numofVals[sim_node()]] = 0;

          /*NodeC.FDs*/HashmapC$3$numofVals[sim_node()]--;
          sim_log_debug(269U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

# 639 "/home/luis/workspace/Project0/src/lib/modules/TransportC.nc"
static error_t TransportC$Transport$send(TCP ack_TCP)
{
  uint16_t window_size;
#line 641
  uint16_t send_size;
#line 641
  uint16_t send_size2;
#line 641
  uint16_t LBW_LBA;
#line 641
  uint16_t LBW_LBS;
  TCP *sendTCP;
  uint16_t j;
#line 643
  uint16_t tmp;

#line 644
  sendTCP = (TCP *)TransportC$payday[sim_node()];

  TransportC$sock[sim_node()] = TransportC$FDs$get(__nesc_ntoh_uint8(ack_TCP.src_port.nxdata));
  TransportC$sockSt[sim_node()] = TransportC$Sockets$get(TransportC$sock[sim_node()]);

  if (TransportC$sockSt[sim_node()].neverSent == TRUE) 
    {
      TransportC$sockSt[sim_node()].lastByteSent = 65535;
      TransportC$sockSt[sim_node()].lastByteAck = 65535;
    }
  else 
    {
      TransportC$sockSt[sim_node()].lastByteAck = TransportC$sockSt[sim_node()].lastByteSent - (TransportC$sockSt[sim_node()].seq - __nesc_ntoh_uint16(ack_TCP.ack.nxdata));
    }
  TransportC$sockSt[sim_node()].advWin = __nesc_ntoh_uint8(ack_TCP.adv_win.nxdata);


  if (TransportC$sockSt[sim_node()].lastByteSent != TransportC$sockSt[sim_node()].lastByteAck && TransportC$sockSt[sim_node()].inTimeOut == TRUE) 
    {

      return FAIL;
    }


  TransportC$sockSt[sim_node()].seq = __nesc_ntoh_uint16(ack_TCP.ack.nxdata);
  TransportC$sockSt[sim_node()].neverSent = FALSE;
  TransportC$sockSt[sim_node()].inTimeOut = FALSE;
  TransportC$Sockets$remove(TransportC$sock[sim_node()]);
  TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);


  LBW_LBA = TransportC$sockSt[sim_node()].lastByteWritten - TransportC$sockSt[sim_node()].lastByteAck;
  if (__nesc_ntoh_uint8(ack_TCP.adv_win.nxdata) < LBW_LBA) 
    {
      window_size = __nesc_ntoh_uint8(ack_TCP.adv_win.nxdata);
    }
  else 
    {
      window_size = LBW_LBA;
    }

  if (LBW_LBA == 0) 
    {
      if (TransportC$sockSt[sim_node()].dataToSendSize > 0) 
        {
        }
      else 

        {
        }


      TransportC$Sockets$remove(TransportC$sock[sim_node()]);
      TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);
      return SUCCESS;
    }

  if (__nesc_ntoh_uint8(ack_TCP.adv_win.nxdata) == 0) 
    {

      return FAIL;
    }


  TransportC$sockSt[sim_node()].lastByteSent = TransportC$sockSt[sim_node()].lastByteAck;
  tmp = TransportC$sockSt[sim_node()].lastByteAck + 1;
  for (TransportC$i[sim_node()] = tmp; TransportC$i[sim_node()] < tmp + window_size; TransportC$i[sim_node()]++) 
    {

      if (__nesc_ntoh_uint8(ack_TCP.adv_win.nxdata) < MAX_TRANSPORT_SIZE) 
        {
          send_size2 = __nesc_ntoh_uint8(ack_TCP.adv_win.nxdata);
        }
      else 
        {
          send_size2 = MAX_TRANSPORT_SIZE;
        }

      LBW_LBA = TransportC$sockSt[sim_node()].lastByteWritten - TransportC$sockSt[sim_node()].lastByteAck;
      if (send_size2 < LBW_LBA) 
        {
          send_size = send_size2;
        }
      else 
        {
          send_size = LBW_LBA;
        }


      for (j = 0; j < send_size; j++) 
        {
          if (TransportC$i[sim_node()] >= tmp + window_size) 
            {
              break;
            }
          __nesc_hton_uint8(sendTCP->data[j].nxdata, TransportC$sockSt[sim_node()].sendBuff[TransportC$i[sim_node()] % 128]);

          TransportC$sockSt[sim_node()].lastByteSent++;
          TransportC$sockSt[sim_node()].seq++;
          TransportC$i[sim_node()]++;
        }
      TransportC$i[sim_node()]--;

      __nesc_hton_uint8(sendTCP->dataSize.nxdata, (uint8_t )j);
      __nesc_hton_uint16(sendTCP->ack.nxdata, 0);
      __nesc_hton_uint8(sendTCP->dest_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.destPort.nxdata));
      __nesc_hton_uint8(sendTCP->src_port.nxdata, __nesc_ntoh_uint8(TransportC$sockSt[sim_node()].sockAddr.srcPort.nxdata));
      __nesc_hton_uint16(sendTCP->seq.nxdata, TransportC$sockSt[sim_node()].seq - j);
      __nesc_hton_uint8(sendTCP->flag.nxdata, DATA);



      TransportC$sendSignal(TransportC$sock[sim_node()]);
    }


  TransportC$sockSt[sim_node()].inTimeOut = TRUE;
  TransportC$sockSt[sim_node()].timeOut = 18000;

  TransportC$Sockets$remove(TransportC$sock[sim_node()]);
  TransportC$Sockets$insert(TransportC$sock[sim_node()], TransportC$sockSt[sim_node()]);

  return SUCCESS;
}

# 110 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(95U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(97U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(98U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 163 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(105U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 274 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(123U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(124U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 189 "/home/luis/local/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(189U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 248 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 307 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 102 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static /*NodeC.Users*/HashmapC$4$t /*NodeC.Users*/HashmapC$4$Hashmap$get(uint32_t k)
#line 102
{
  uint32_t i = 0;
#line 103
  uint32_t j = 0;

#line 104
  do {
      j = /*NodeC.Users*/HashmapC$4$hash(k, i);
      if (/*NodeC.Users*/HashmapC$4$map[sim_node()][j].key == k) {
        return /*NodeC.Users*/HashmapC$4$map[sim_node()][j].value;
        }
#line 108
      i++;
    }
  while (
#line 109
  i < /*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[sim_node()]);
  return /*NodeC.Users*/HashmapC$4$map[sim_node()][0].value;
}

# 73 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void TransportC$AckTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(10U, dt);
#line 73
}
#line 73
static void TransportC$HandShakeTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(9U, dt);
#line 73
}
#line 73
# 38 "/home/luis/workspace/Project0/src/dataStructures/modules/HashmapC.nc"
static void /*NodeC.ConfirmedNodes*/HashmapC$1$Hashmap$insert(uint32_t k, /*NodeC.ConfirmedNodes*/HashmapC$1$t input)
#line 38
{
  uint32_t i = 0;
#line 39
  uint32_t j = 0;

  if (k == 0) {
#line 41
    return;
    }
  do {
      j = /*NodeC.ConfirmedNodes*/HashmapC$1$hash(k, i);
      if (/*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key == 0 || /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key == k) {
          if (/*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key == 0) {
              /*NodeC.ConfirmedNodes*/HashmapC$1$keys[sim_node()][/*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[sim_node()]] = k;
              /*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[sim_node()]++;
            }
          /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].value = input;
          /*NodeC.ConfirmedNodes*/HashmapC$1$map[sim_node()][j].key = k;

          return;
        }
      i++;
    }
  while (
#line 56
  i < /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[sim_node()]);
}

#line 125
static bool /*NodeC.Tentative*/HashmapC$0$Hashmap$contains(uint32_t k)
#line 125
{
  uint32_t i = 0;
#line 126
  uint32_t j = 0;

#line 127
  do {
      j = /*NodeC.Tentative*/HashmapC$0$hash(k, i);
      if (/*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == k) {
        return TRUE;
        }
#line 131
      i++;
    }
  while (
#line 132
  i < /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()]);
  return FALSE;
}

#line 38
static void /*NodeC.Tentative*/HashmapC$0$Hashmap$insert(uint32_t k, /*NodeC.Tentative*/HashmapC$0$t input)
#line 38
{
  uint32_t i = 0;
#line 39
  uint32_t j = 0;

  if (k == 0) {
#line 41
    return;
    }
  do {
      j = /*NodeC.Tentative*/HashmapC$0$hash(k, i);
      if (/*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == 0 || /*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == k) {
          if (/*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == 0) {
              /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][/*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()]] = k;
              /*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()]++;
            }
          /*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].value = input;
          /*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key = k;

          return;
        }
      i++;
    }
  while (
#line 56
  i < /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()]);
}

#line 102
static /*NodeC.Tentative*/HashmapC$0$t /*NodeC.Tentative*/HashmapC$0$Hashmap$get(uint32_t k)
#line 102
{
  uint32_t i = 0;
#line 103
  uint32_t j = 0;

#line 104
  do {
      j = /*NodeC.Tentative*/HashmapC$0$hash(k, i);
      if (/*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == k) {
        return /*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].value;
        }
#line 108
      i++;
    }
  while (
#line 109
  i < /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()]);
  return /*NodeC.Tentative*/HashmapC$0$map[sim_node()][0].value;
}

#line 59
static void /*NodeC.Tentative*/HashmapC$0$Hashmap$remove(uint32_t k)
#line 59
{
  uint32_t i = 0;
#line 60
  uint32_t j = 0;

#line 61
  do {
      j = /*NodeC.Tentative*/HashmapC$0$hash(k, i);
      if (/*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key == k) {
          /*NodeC.Tentative*/HashmapC$0$map[sim_node()][j].key = 0;
          break;
        }
      i++;
    }
  while (
#line 68
  i < /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()]);

  sim_log_debug(231U, "hashmap", "Removing entry %d\n", k);
  for (i = 0; i < /*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()]; i++) {
      if (/*NodeC.Tentative*/HashmapC$0$keys[sim_node()][i] == k) {
          sim_log_debug(232U, "hashmap", "Key found at %d\n", i);

          for (j = i; j < /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[sim_node()]; j++) {
              if (/*NodeC.Tentative*/HashmapC$0$keys[sim_node()][j] == 0) {
#line 76
                break;
                }
#line 77
              sim_log_debug(233U, "hashamp", "Moving %d to %d\n", j, j + 1);
              sim_log_debug(234U, "hashamp", "Replacing %d with %d\n", /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][j], /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][j + 1]);
              /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][j] = /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][j + 1];
            }
          /*NodeC.Tentative*/HashmapC$0$keys[sim_node()][/*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()]] = 0;

          /*NodeC.Tentative*/HashmapC$0$numofVals[sim_node()]--;
          sim_log_debug(235U, "hashmap", "Done removing entry\n");
          return;
        }
    }
}

# 113 "/home/luis/workspace/Project0/src/lib/modules/NeighborC.nc"
static error_t NeighborC$Neighbor$sendNeighbors(void )
{
  NeighborC$Seq[sim_node()] = NeighborC$PacketInfo$getSeq();

  NeighborC$newls[sim_node()] = (LinkState *)NeighborC$payday[sim_node()];
  __nesc_hton_uint8(NeighborC$newls[sim_node()]->size.nxdata, (uint8_t )NeighborC$Neighbors$size());
  __nesc_hton_uint8(NeighborC$newls[sim_node()]->node.nxdata, (uint8_t )TOS_NODE_ID);
  __nesc_hton_uint8(NeighborC$newls[sim_node()]->seq.nxdata, (uint8_t )NeighborC$Seq[sim_node()]);

  for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$Neighbors$size(); NeighborC$i[sim_node()]++) 
    {
      NeighborC$newtuple[sim_node()] = NeighborC$Neighbors$get(NeighborC$i[sim_node()]);
      __nesc_hton_uint8(NeighborC$newls[sim_node()]->neighbors[NeighborC$i[sim_node()]].nxdata, (uint8_t )__nesc_ntoh_uint16(NeighborC$newtuple[sim_node()].mote.nxdata));
      __nesc_hton_uint8(NeighborC$newls[sim_node()]->cost[NeighborC$i[sim_node()]].nxdata, 1);
    }

  if (NeighborC$NeighborLS$isEmpty() == TRUE) 
    {
      NeighborC$NeighborLS$pushback(*NeighborC$newls[sim_node()]);
    }
  else 
    {
      for (NeighborC$i[sim_node()] = 0; NeighborC$i[sim_node()] < NeighborC$NeighborLS$size(); NeighborC$i[sim_node()]++) 
        {
          NeighborC$newls2[sim_node()] = NeighborC$NeighborLS$get(NeighborC$i[sim_node()]);

          if (__nesc_ntoh_uint8(NeighborC$newls[sim_node()]->node.nxdata) == __nesc_ntoh_uint8(NeighborC$newls2[sim_node()].node.nxdata)) 
            {
              NeighborC$NeighborLS$set(NeighborC$i[sim_node()], *NeighborC$newls[sim_node()]);
              break;
            }
        }
    }

  NeighborC$makePack(&NeighborC$sendPackage[sim_node()], TOS_NODE_ID, 99, 15, PROTOCOL_LINKSTATE, NeighborC$Seq[sim_node()], NeighborC$payday[sim_node()], PACKET_MAX_PAYLOAD_SIZE);
  NeighborC$PacketInfo$incSeq();

  NeighborC$Flooding$start(&NeighborC$sendPackage[sim_node()]);

  return SUCCESS;
}

# 212 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(155U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(156U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(157U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(158U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(159U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(176U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/home/luis/local/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(179U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(168U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 106 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$Control$start(void )
#line 106
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(111U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(112U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 154 "/home/luis/local/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 90 "/home/luis/local/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(102U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(103U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(101U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module Node */
  if (!strcmp(varname, "Node$sendPackage"))
  {
    *addr = (uintptr_t)&Node$sendPackage[__nesc_mote];
    *size = sizeof(Node$sendPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$Seq"))
  {
    *addr = (uintptr_t)&Node$Seq[__nesc_mote];
    *size = sizeof(Node$Seq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Node$fd"))
  {
    *addr = (uintptr_t)&Node$fd[__nesc_mote];
    *size = sizeof(Node$fd[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module SimpleSendP */
  if (!strcmp(varname, "SimpleSendP$busy"))
  {
    *addr = (uintptr_t)&SimpleSendP$busy[__nesc_mote];
    *size = sizeof(SimpleSendP$busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimpleSendP$pkt"))
  {
    *addr = (uintptr_t)&SimpleSendP$pkt[__nesc_mote];
    *size = sizeof(SimpleSendP$pkt[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$0 */
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$free"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$index"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote];
    *size = sizeof(/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$0 */
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$queue"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$head"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$tail"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SimpleSendC.QueueC*/QueueC$0$size"))
  {
    *addr = (uintptr_t)&/*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote];
    *size = sizeof(/*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module CommandHandlerC */

  /* Module PacketInfoC */
  if (!strcmp(varname, "PacketInfoC$Seq"))
  {
    *addr = (uintptr_t)&PacketInfoC$Seq[__nesc_mote];
    *size = sizeof(PacketInfoC$Seq[__nesc_mote]);
    return 0;
  }

  /* Module NeighborC */
  if (!strcmp(varname, "NeighborC$payday"))
  {
    *addr = (uintptr_t)&NeighborC$payday[__nesc_mote];
    *size = sizeof(NeighborC$payday[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$sendPackage"))
  {
    *addr = (uintptr_t)&NeighborC$sendPackage[__nesc_mote];
    *size = sizeof(NeighborC$sendPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$newtuple"))
  {
    *addr = (uintptr_t)&NeighborC$newtuple[__nesc_mote];
    *size = sizeof(NeighborC$newtuple[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$newls"))
  {
    *addr = (uintptr_t)&NeighborC$newls[__nesc_mote];
    *size = sizeof(NeighborC$newls[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$newls2"))
  {
    *addr = (uintptr_t)&NeighborC$newls2[__nesc_mote];
    *size = sizeof(NeighborC$newls2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$Seq"))
  {
    *addr = (uintptr_t)&NeighborC$Seq[__nesc_mote];
    *size = sizeof(NeighborC$Seq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$i"))
  {
    *addr = (uintptr_t)&NeighborC$i[__nesc_mote];
    *size = sizeof(NeighborC$i[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$j"))
  {
    *addr = (uintptr_t)&NeighborC$j[__nesc_mote];
    *size = sizeof(NeighborC$j[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborC$updated"))
  {
    *addr = (uintptr_t)&NeighborC$updated[__nesc_mote];
    *size = sizeof(NeighborC$updated[__nesc_mote]);
    return 0;
  }

  /* Module ListC$0 */
  if (!strcmp(varname, "/*NodeC.Neighbors*/ListC$0$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.Neighbors*/ListC$0$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.Neighbors*/ListC$0$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Neighbors*/ListC$0$container"))
  {
    *addr = (uintptr_t)&/*NodeC.Neighbors*/ListC$0$container[__nesc_mote];
    *size = sizeof(/*NodeC.Neighbors*/ListC$0$container[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Neighbors*/ListC$0$size"))
  {
    *addr = (uintptr_t)&/*NodeC.Neighbors*/ListC$0$size[__nesc_mote];
    *size = sizeof(/*NodeC.Neighbors*/ListC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module ListC$1 */
  if (!strcmp(varname, "/*NodeC.NeighborLS*/ListC$1$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.NeighborLS*/ListC$1$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.NeighborLS*/ListC$1$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.NeighborLS*/ListC$1$container"))
  {
    *addr = (uintptr_t)&/*NodeC.NeighborLS*/ListC$1$container[__nesc_mote];
    *size = sizeof(/*NodeC.NeighborLS*/ListC$1$container[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.NeighborLS*/ListC$1$size"))
  {
    *addr = (uintptr_t)&/*NodeC.NeighborLS*/ListC$1$size[__nesc_mote];
    *size = sizeof(/*NodeC.NeighborLS*/ListC$1$size[__nesc_mote]);
    return 0;
  }

  /* Module FloodingC */
  if (!strcmp(varname, "FloodingC$newpackid"))
  {
    *addr = (uintptr_t)&FloodingC$newpackid[__nesc_mote];
    *size = sizeof(FloodingC$newpackid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "FloodingC$i"))
  {
    *addr = (uintptr_t)&FloodingC$i[__nesc_mote];
    *size = sizeof(FloodingC$i[__nesc_mote]);
    return 0;
  }

  /* Module ListC$2 */
  if (!strcmp(varname, "/*NodeC.recPackets*/ListC$2$MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.recPackets*/ListC$2$MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.recPackets*/ListC$2$MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.recPackets*/ListC$2$container"))
  {
    *addr = (uintptr_t)&/*NodeC.recPackets*/ListC$2$container[__nesc_mote];
    *size = sizeof(/*NodeC.recPackets*/ListC$2$container[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.recPackets*/ListC$2$size"))
  {
    *addr = (uintptr_t)&/*NodeC.recPackets*/ListC$2$size[__nesc_mote];
    *size = sizeof(/*NodeC.recPackets*/ListC$2$size[__nesc_mote]);
    return 0;
  }

  /* Module ListC$3 */

  /* Module ShortestPathC */
  if (!strcmp(varname, "ShortestPathC$i"))
  {
    *addr = (uintptr_t)&ShortestPathC$i[__nesc_mote];
    *size = sizeof(ShortestPathC$i[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$newls"))
  {
    *addr = (uintptr_t)&ShortestPathC$newls[__nesc_mote];
    *size = sizeof(ShortestPathC$newls[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$next"))
  {
    *addr = (uintptr_t)&ShortestPathC$next[__nesc_mote];
    *size = sizeof(ShortestPathC$next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$route"))
  {
    *addr = (uintptr_t)&ShortestPathC$route[__nesc_mote];
    *size = sizeof(ShortestPathC$route[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$route2"))
  {
    *addr = (uintptr_t)&ShortestPathC$route2[__nesc_mote];
    *size = sizeof(ShortestPathC$route2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$neighbor"))
  {
    *addr = (uintptr_t)&ShortestPathC$neighbor[__nesc_mote];
    *size = sizeof(ShortestPathC$neighbor[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$keys"))
  {
    *addr = (uintptr_t)&ShortestPathC$keys[__nesc_mote];
    *size = sizeof(ShortestPathC$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$key"))
  {
    *addr = (uintptr_t)&ShortestPathC$key[__nesc_mote];
    *size = sizeof(ShortestPathC$key[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$cost"))
  {
    *addr = (uintptr_t)&ShortestPathC$cost[__nesc_mote];
    *size = sizeof(ShortestPathC$cost[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ShortestPathC$newpackid"))
  {
    *addr = (uintptr_t)&ShortestPathC$newpackid[__nesc_mote];
    *size = sizeof(ShortestPathC$newpackid[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC$0 */
  if (!strcmp(varname, "/*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Tentative*/HashmapC$0$map"))
  {
    *addr = (uintptr_t)&/*NodeC.Tentative*/HashmapC$0$map[__nesc_mote];
    *size = sizeof(/*NodeC.Tentative*/HashmapC$0$map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Tentative*/HashmapC$0$keys"))
  {
    *addr = (uintptr_t)&/*NodeC.Tentative*/HashmapC$0$keys[__nesc_mote];
    *size = sizeof(/*NodeC.Tentative*/HashmapC$0$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Tentative*/HashmapC$0$numofVals"))
  {
    *addr = (uintptr_t)&/*NodeC.Tentative*/HashmapC$0$numofVals[__nesc_mote];
    *size = sizeof(/*NodeC.Tentative*/HashmapC$0$numofVals[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC$1 */
  if (!strcmp(varname, "/*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.ConfirmedNodes*/HashmapC$1$map"))
  {
    *addr = (uintptr_t)&/*NodeC.ConfirmedNodes*/HashmapC$1$map[__nesc_mote];
    *size = sizeof(/*NodeC.ConfirmedNodes*/HashmapC$1$map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.ConfirmedNodes*/HashmapC$1$keys"))
  {
    *addr = (uintptr_t)&/*NodeC.ConfirmedNodes*/HashmapC$1$keys[__nesc_mote];
    *size = sizeof(/*NodeC.ConfirmedNodes*/HashmapC$1$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.ConfirmedNodes*/HashmapC$1$numofVals"))
  {
    *addr = (uintptr_t)&/*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[__nesc_mote];
    *size = sizeof(/*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[__nesc_mote]);
    return 0;
  }

  /* Module TransportC */
  if (!strcmp(varname, "TransportC$payday"))
  {
    *addr = (uintptr_t)&TransportC$payday[__nesc_mote];
    *size = sizeof(TransportC$payday[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$sendPackage"))
  {
    *addr = (uintptr_t)&TransportC$sendPackage[__nesc_mote];
    *size = sizeof(TransportC$sendPackage[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$nodeSocket"))
  {
    *addr = (uintptr_t)&TransportC$nodeSocket[__nesc_mote];
    *size = sizeof(TransportC$nodeSocket[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$nodeAddr"))
  {
    *addr = (uintptr_t)&TransportC$nodeAddr[__nesc_mote];
    *size = sizeof(TransportC$nodeAddr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$nodeFD"))
  {
    *addr = (uintptr_t)&TransportC$nodeFD[__nesc_mote];
    *size = sizeof(TransportC$nodeFD[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$sock"))
  {
    *addr = (uintptr_t)&TransportC$sock[__nesc_mote];
    *size = sizeof(TransportC$sock[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$addrTMP"))
  {
    *addr = (uintptr_t)&TransportC$addrTMP[__nesc_mote];
    *size = sizeof(TransportC$addrTMP[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$sockSt"))
  {
    *addr = (uintptr_t)&TransportC$sockSt[__nesc_mote];
    *size = sizeof(TransportC$sockSt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$Seq"))
  {
    *addr = (uintptr_t)&TransportC$Seq[__nesc_mote];
    *size = sizeof(TransportC$Seq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$i"))
  {
    *addr = (uintptr_t)&TransportC$i[__nesc_mote];
    *size = sizeof(TransportC$i[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TransportC$recTCP"))
  {
    *addr = (uintptr_t)&TransportC$recTCP[__nesc_mote];
    *size = sizeof(TransportC$recTCP[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC$2 */
  if (!strcmp(varname, "/*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Sockets*/HashmapC$2$map"))
  {
    *addr = (uintptr_t)&/*NodeC.Sockets*/HashmapC$2$map[__nesc_mote];
    *size = sizeof(/*NodeC.Sockets*/HashmapC$2$map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Sockets*/HashmapC$2$keys"))
  {
    *addr = (uintptr_t)&/*NodeC.Sockets*/HashmapC$2$keys[__nesc_mote];
    *size = sizeof(/*NodeC.Sockets*/HashmapC$2$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Sockets*/HashmapC$2$numofVals"))
  {
    *addr = (uintptr_t)&/*NodeC.Sockets*/HashmapC$2$numofVals[__nesc_mote];
    *size = sizeof(/*NodeC.Sockets*/HashmapC$2$numofVals[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC$3 */
  if (!strcmp(varname, "/*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.FDs*/HashmapC$3$map"))
  {
    *addr = (uintptr_t)&/*NodeC.FDs*/HashmapC$3$map[__nesc_mote];
    *size = sizeof(/*NodeC.FDs*/HashmapC$3$map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.FDs*/HashmapC$3$keys"))
  {
    *addr = (uintptr_t)&/*NodeC.FDs*/HashmapC$3$keys[__nesc_mote];
    *size = sizeof(/*NodeC.FDs*/HashmapC$3$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.FDs*/HashmapC$3$numofVals"))
  {
    *addr = (uintptr_t)&/*NodeC.FDs*/HashmapC$3$numofVals[__nesc_mote];
    *size = sizeof(/*NodeC.FDs*/HashmapC$3$numofVals[__nesc_mote]);
    return 0;
  }

  /* Module ApplicationC */
  if (!strcmp(varname, "ApplicationC$fd"))
  {
    *addr = (uintptr_t)&ApplicationC$fd[__nesc_mote];
    *size = sizeof(ApplicationC$fd[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$sock"))
  {
    *addr = (uintptr_t)&ApplicationC$sock[__nesc_mote];
    *size = sizeof(ApplicationC$sock[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$addr"))
  {
    *addr = (uintptr_t)&ApplicationC$addr[__nesc_mote];
    *size = sizeof(ApplicationC$addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$sockSt"))
  {
    *addr = (uintptr_t)&ApplicationC$sockSt[__nesc_mote];
    *size = sizeof(ApplicationC$sockSt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$user"))
  {
    *addr = (uintptr_t)&ApplicationC$user[__nesc_mote];
    *size = sizeof(ApplicationC$user[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$user2"))
  {
    *addr = (uintptr_t)&ApplicationC$user2[__nesc_mote];
    *size = sizeof(ApplicationC$user2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$readBuffer"))
  {
    *addr = (uintptr_t)&ApplicationC$readBuffer[__nesc_mote];
    *size = sizeof(ApplicationC$readBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$readBuffSize"))
  {
    *addr = (uintptr_t)&ApplicationC$readBuffSize[__nesc_mote];
    *size = sizeof(ApplicationC$readBuffSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$messageToSend"))
  {
    *addr = (uintptr_t)&ApplicationC$messageToSend[__nesc_mote];
    *size = sizeof(ApplicationC$messageToSend[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$messageToSendSize"))
  {
    *addr = (uintptr_t)&ApplicationC$messageToSendSize[__nesc_mote];
    *size = sizeof(ApplicationC$messageToSendSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ApplicationC$i"))
  {
    *addr = (uintptr_t)&ApplicationC$i[__nesc_mote];
    *size = sizeof(ApplicationC$i[__nesc_mote]);
    return 0;
  }

  /* Module HashmapC$4 */
  if (!strcmp(varname, "/*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE"))
  {
    *addr = (uintptr_t)&/*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[__nesc_mote];
    *size = sizeof(/*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Users*/HashmapC$4$map"))
  {
    *addr = (uintptr_t)&/*NodeC.Users*/HashmapC$4$map[__nesc_mote];
    *size = sizeof(/*NodeC.Users*/HashmapC$4$map[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Users*/HashmapC$4$keys"))
  {
    *addr = (uintptr_t)&/*NodeC.Users*/HashmapC$4$keys[__nesc_mote];
    *size = sizeof(/*NodeC.Users*/HashmapC$4$keys[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*NodeC.Users*/HashmapC$4$numofVals"))
  {
    *addr = (uintptr_t)&/*NodeC.Users*/HashmapC$4$numofVals[__nesc_mote];
    *size = sizeof(/*NodeC.Users*/HashmapC$4$numofVals[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module Node */
  memset((void *)&Node$sendPackage[__nesc_mote], 0, sizeof Node$sendPackage[__nesc_mote]);
  Node$Seq[__nesc_mote] = 0;
  memset((void *)&Node$fd[__nesc_mote], 0, sizeof Node$fd[__nesc_mote]);

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module SimpleSendP */
  SimpleSendP$busy[__nesc_mote] = FALSE;
  memset((void *)&SimpleSendP$pkt[__nesc_mote], 0, sizeof SimpleSendP$pkt[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module PoolP$0 */
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$free[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$index[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
  memset((void *)&/*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote], 0, sizeof /*SimpleSendC.PoolC.PoolP*/PoolP$0$pool[__nesc_mote]);

  /* Module QueueC$0 */
  memset((void *)&/*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote], 0, sizeof /*SimpleSendC.QueueC*/QueueC$0$queue[__nesc_mote]);
  /*SimpleSendC.QueueC*/QueueC$0$head[__nesc_mote] = 0;
  /*SimpleSendC.QueueC*/QueueC$0$tail[__nesc_mote] = 0;
  /*SimpleSendC.QueueC*/QueueC$0$size[__nesc_mote] = 0;

  /* Module CommandHandlerC */

  /* Module PacketInfoC */
  PacketInfoC$Seq[__nesc_mote] = 0;

  /* Module NeighborC */
  memset((void *)&NeighborC$payday[__nesc_mote], 0, sizeof NeighborC$payday[__nesc_mote]);
  memset((void *)&NeighborC$sendPackage[__nesc_mote], 0, sizeof NeighborC$sendPackage[__nesc_mote]);
  memset((void *)&NeighborC$newtuple[__nesc_mote], 0, sizeof NeighborC$newtuple[__nesc_mote]);
  memset((void *)&NeighborC$newls[__nesc_mote], 0, sizeof NeighborC$newls[__nesc_mote]);
  memset((void *)&NeighborC$newls2[__nesc_mote], 0, sizeof NeighborC$newls2[__nesc_mote]);
  NeighborC$Seq[__nesc_mote] = 0;
  memset((void *)&NeighborC$i[__nesc_mote], 0, sizeof NeighborC$i[__nesc_mote]);
  memset((void *)&NeighborC$j[__nesc_mote], 0, sizeof NeighborC$j[__nesc_mote]);
  memset((void *)&NeighborC$updated[__nesc_mote], 0, sizeof NeighborC$updated[__nesc_mote]);

  /* Module ListC$0 */
  /*NodeC.Neighbors*/ListC$0$MAX_SIZE[__nesc_mote] = 16;
  memset((void *)&/*NodeC.Neighbors*/ListC$0$container[__nesc_mote], 0, sizeof /*NodeC.Neighbors*/ListC$0$container[__nesc_mote]);
  /*NodeC.Neighbors*/ListC$0$size[__nesc_mote] = 0;

  /* Module ListC$1 */
  /*NodeC.NeighborLS*/ListC$1$MAX_SIZE[__nesc_mote] = 16;
  memset((void *)&/*NodeC.NeighborLS*/ListC$1$container[__nesc_mote], 0, sizeof /*NodeC.NeighborLS*/ListC$1$container[__nesc_mote]);
  /*NodeC.NeighborLS*/ListC$1$size[__nesc_mote] = 0;

  /* Module FloodingC */
  memset((void *)&FloodingC$newpackid[__nesc_mote], 0, sizeof FloodingC$newpackid[__nesc_mote]);
  memset((void *)&FloodingC$i[__nesc_mote], 0, sizeof FloodingC$i[__nesc_mote]);

  /* Module ListC$2 */
  /*NodeC.recPackets*/ListC$2$MAX_SIZE[__nesc_mote] = 99;
  memset((void *)&/*NodeC.recPackets*/ListC$2$container[__nesc_mote], 0, sizeof /*NodeC.recPackets*/ListC$2$container[__nesc_mote]);
  /*NodeC.recPackets*/ListC$2$size[__nesc_mote] = 0;

  /* Module ListC$3 */

  /* Module ShortestPathC */
  memset((void *)&ShortestPathC$i[__nesc_mote], 0, sizeof ShortestPathC$i[__nesc_mote]);
  memset((void *)&ShortestPathC$newls[__nesc_mote], 0, sizeof ShortestPathC$newls[__nesc_mote]);
  memset((void *)&ShortestPathC$next[__nesc_mote], 0, sizeof ShortestPathC$next[__nesc_mote]);
  memset((void *)&ShortestPathC$route[__nesc_mote], 0, sizeof ShortestPathC$route[__nesc_mote]);
  memset((void *)&ShortestPathC$route2[__nesc_mote], 0, sizeof ShortestPathC$route2[__nesc_mote]);
  memset((void *)&ShortestPathC$neighbor[__nesc_mote], 0, sizeof ShortestPathC$neighbor[__nesc_mote]);
  memset((void *)&ShortestPathC$keys[__nesc_mote], 0, sizeof ShortestPathC$keys[__nesc_mote]);
  memset((void *)&ShortestPathC$key[__nesc_mote], 0, sizeof ShortestPathC$key[__nesc_mote]);
  memset((void *)&ShortestPathC$cost[__nesc_mote], 0, sizeof ShortestPathC$cost[__nesc_mote]);
  memset((void *)&ShortestPathC$newpackid[__nesc_mote], 0, sizeof ShortestPathC$newpackid[__nesc_mote]);

  /* Module HashmapC$0 */
  /*NodeC.Tentative*/HashmapC$0$HASH_MAX_SIZE[__nesc_mote] = 16;
  memset((void *)&/*NodeC.Tentative*/HashmapC$0$map[__nesc_mote], 0, sizeof /*NodeC.Tentative*/HashmapC$0$map[__nesc_mote]);
  memset((void *)&/*NodeC.Tentative*/HashmapC$0$keys[__nesc_mote], 0, sizeof /*NodeC.Tentative*/HashmapC$0$keys[__nesc_mote]);
  memset((void *)&/*NodeC.Tentative*/HashmapC$0$numofVals[__nesc_mote], 0, sizeof /*NodeC.Tentative*/HashmapC$0$numofVals[__nesc_mote]);

  /* Module HashmapC$1 */
  /*NodeC.ConfirmedNodes*/HashmapC$1$HASH_MAX_SIZE[__nesc_mote] = 16;
  memset((void *)&/*NodeC.ConfirmedNodes*/HashmapC$1$map[__nesc_mote], 0, sizeof /*NodeC.ConfirmedNodes*/HashmapC$1$map[__nesc_mote]);
  memset((void *)&/*NodeC.ConfirmedNodes*/HashmapC$1$keys[__nesc_mote], 0, sizeof /*NodeC.ConfirmedNodes*/HashmapC$1$keys[__nesc_mote]);
  memset((void *)&/*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[__nesc_mote], 0, sizeof /*NodeC.ConfirmedNodes*/HashmapC$1$numofVals[__nesc_mote]);

  /* Module TransportC */
  memset((void *)&TransportC$payday[__nesc_mote], 0, sizeof TransportC$payday[__nesc_mote]);
  memset((void *)&TransportC$sendPackage[__nesc_mote], 0, sizeof TransportC$sendPackage[__nesc_mote]);
  memset((void *)&TransportC$nodeSocket[__nesc_mote], 0, sizeof TransportC$nodeSocket[__nesc_mote]);
  memset((void *)&TransportC$nodeAddr[__nesc_mote], 0, sizeof TransportC$nodeAddr[__nesc_mote]);
  memset((void *)&TransportC$nodeFD[__nesc_mote], 0, sizeof TransportC$nodeFD[__nesc_mote]);
  memset((void *)&TransportC$sock[__nesc_mote], 0, sizeof TransportC$sock[__nesc_mote]);
  memset((void *)&TransportC$addrTMP[__nesc_mote], 0, sizeof TransportC$addrTMP[__nesc_mote]);
  memset((void *)&TransportC$sockSt[__nesc_mote], 0, sizeof TransportC$sockSt[__nesc_mote]);
  TransportC$Seq[__nesc_mote] = 0;
  memset((void *)&TransportC$i[__nesc_mote], 0, sizeof TransportC$i[__nesc_mote]);
  memset((void *)&TransportC$recTCP[__nesc_mote], 0, sizeof TransportC$recTCP[__nesc_mote]);

  /* Module HashmapC$2 */
  /*NodeC.Sockets*/HashmapC$2$HASH_MAX_SIZE[__nesc_mote] = 15;
  memset((void *)&/*NodeC.Sockets*/HashmapC$2$map[__nesc_mote], 0, sizeof /*NodeC.Sockets*/HashmapC$2$map[__nesc_mote]);
  memset((void *)&/*NodeC.Sockets*/HashmapC$2$keys[__nesc_mote], 0, sizeof /*NodeC.Sockets*/HashmapC$2$keys[__nesc_mote]);
  memset((void *)&/*NodeC.Sockets*/HashmapC$2$numofVals[__nesc_mote], 0, sizeof /*NodeC.Sockets*/HashmapC$2$numofVals[__nesc_mote]);

  /* Module HashmapC$3 */
  /*NodeC.FDs*/HashmapC$3$HASH_MAX_SIZE[__nesc_mote] = 15;
  memset((void *)&/*NodeC.FDs*/HashmapC$3$map[__nesc_mote], 0, sizeof /*NodeC.FDs*/HashmapC$3$map[__nesc_mote]);
  memset((void *)&/*NodeC.FDs*/HashmapC$3$keys[__nesc_mote], 0, sizeof /*NodeC.FDs*/HashmapC$3$keys[__nesc_mote]);
  memset((void *)&/*NodeC.FDs*/HashmapC$3$numofVals[__nesc_mote], 0, sizeof /*NodeC.FDs*/HashmapC$3$numofVals[__nesc_mote]);

  /* Module ApplicationC */
  memset((void *)&ApplicationC$fd[__nesc_mote], 0, sizeof ApplicationC$fd[__nesc_mote]);
  memset((void *)&ApplicationC$sock[__nesc_mote], 0, sizeof ApplicationC$sock[__nesc_mote]);
  memset((void *)&ApplicationC$addr[__nesc_mote], 0, sizeof ApplicationC$addr[__nesc_mote]);
  memset((void *)&ApplicationC$sockSt[__nesc_mote], 0, sizeof ApplicationC$sockSt[__nesc_mote]);
  memset((void *)&ApplicationC$user[__nesc_mote], 0, sizeof ApplicationC$user[__nesc_mote]);
  memset((void *)&ApplicationC$user2[__nesc_mote], 0, sizeof ApplicationC$user2[__nesc_mote]);
  memset((void *)&ApplicationC$readBuffer[__nesc_mote], 0, sizeof ApplicationC$readBuffer[__nesc_mote]);
  memset((void *)&ApplicationC$readBuffSize[__nesc_mote], 0, sizeof ApplicationC$readBuffSize[__nesc_mote]);
  memset((void *)&ApplicationC$messageToSend[__nesc_mote], 0, sizeof ApplicationC$messageToSend[__nesc_mote]);
  memset((void *)&ApplicationC$messageToSendSize[__nesc_mote], 0, sizeof ApplicationC$messageToSendSize[__nesc_mote]);
  memset((void *)&ApplicationC$i[__nesc_mote], 0, sizeof ApplicationC$i[__nesc_mote]);

  /* Module HashmapC$4 */
  /*NodeC.Users*/HashmapC$4$HASH_MAX_SIZE[__nesc_mote] = 15;
  memset((void *)&/*NodeC.Users*/HashmapC$4$map[__nesc_mote], 0, sizeof /*NodeC.Users*/HashmapC$4$map[__nesc_mote]);
  memset((void *)&/*NodeC.Users*/HashmapC$4$keys[__nesc_mote], 0, sizeof /*NodeC.Users*/HashmapC$4$keys[__nesc_mote]);
  memset((void *)&/*NodeC.Users*/HashmapC$4$numofVals[__nesc_mote], 0, sizeof /*NodeC.Users*/HashmapC$4$numofVals[__nesc_mote]);

}
