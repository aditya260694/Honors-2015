# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c"
# 23 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic.h" 1
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/config.h" 1
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic.h" 2




# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic_gcc.h" 1
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic_gcc.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdint.h" 1 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 4 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdint.h" 2 3 4
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic_gcc.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic.h" 1
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic_gcc.h" 2


static inline int atomic_int_get_gcc(volatile int *ptr)
{



    __sync_synchronize();
    return *ptr;

}


static inline void atomic_int_set_gcc(volatile int *ptr, int val)
{



    *ptr = val;
    __sync_synchronize();

}


static inline int atomic_int_add_and_fetch_gcc(volatile int *ptr, int inc)
{



    return __sync_add_and_fetch(ptr, inc);

}


static inline void *atomic_ptr_cas_gcc(void * volatile *ptr,
                                       void *oldval, void *newval)
{






    return __sync_val_compare_and_swap(ptr, oldval, newval);





}
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/atomic.h" 2
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h" 1
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 150 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 324 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
typedef int wchar_t;
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/attributes.h" 1
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h" 2
# 42 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
int av_strstart(const char *str, const char *pfx, const char **ptr);
# 54 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
int av_stristart(const char *str, const char *pfx, const char **ptr);
# 68 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_stristr(const char *haystack, const char *needle);
# 83 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_strnstr(const char *haystack, const char *needle, size_t hay_length);
# 100 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
size_t av_strlcpy(char *dst, const char *src, size_t size);
# 118 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
size_t av_strlcat(char *dst, const char *src, size_t size);
# 132 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
size_t av_strlcatf(char *dst, size_t size, const char *fmt, ...) ;







static inline size_t av_strnlen(const char *s, size_t len)
{
    size_t i;
    for (i = 0; i < len && s[i]; i++)
        ;
    return i;
}
# 156 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_asprintf(const char *fmt, ...) ;




char *av_d2str(double d);
# 177 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_get_token(const char **buf, const char *term);
# 201 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_strtok(char *s, const char *delim, char **saveptr);




 int av_isdigit(int c);




 int av_isgraph(int c);




 int av_isspace(int c);




static inline int av_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c ^= 0x20;
    return c;
}




static inline int av_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c ^= 0x20;
    return c;
}




 int av_isxdigit(int c);





int av_strcasecmp(const char *a, const char *b);





int av_strncasecmp(const char *a, const char *b, size_t n);







const char *av_basename(const char *path);







const char *av_dirname(char *path);







int av_match_name(const char *name, const char *names);
# 287 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
char *av_append_path_component(const char *path, const char *component);

enum AVEscapeMode {
    AV_ESCAPE_MODE_AUTO,
    AV_ESCAPE_MODE_BACKSLASH,
    AV_ESCAPE_MODE_QUOTE,
};
# 328 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
int av_escape(char **dst, const char *src, const char *special_chars,
              enum AVEscapeMode mode, int flags);
# 367 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h"
int av_utf8_decode(int32_t *codep, const uint8_t **bufp, const uint8_t *buf_end,
                   unsigned int flags);






int av_match_list(const char *name, const char *list, char separator);
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h" 1
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h" 2


# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avstring.h" 1
# 28 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h" 2
# 82 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
struct





 ff_pad_helper_AVBPrint
# 82 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
 { char *str; unsigned len; unsigned size; unsigned size_max; char reserved_internal_buffer[1]; }; typedef struct AVBPrint { char *str; unsigned len; unsigned size; unsigned size_max; char reserved_internal_buffer[1]; char reserved_padding[1024 - sizeof(struct





 ff_pad_helper_AVBPrint
# 82 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
 )]; } AVBPrint;
# 111 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_init(AVBPrint *buf, unsigned size_init, unsigned size_max);
# 122 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_init_for_buffer(AVBPrint *buf, char *buffer, unsigned size);




void av_bprintf(AVBPrint *buf, const char *fmt, ...) ;




void av_vbprintf(AVBPrint *buf, const char *fmt, va_list vl_arg);




void av_bprint_chars(AVBPrint *buf, char c, unsigned n);
# 146 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_append_data(AVBPrint *buf, const char *data, unsigned size);

struct tm;
# 160 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_strftime(AVBPrint *buf, const char *fmt, const struct tm *tm);
# 171 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_get_buffer(AVBPrint *buf, unsigned size,
                          unsigned char **mem, unsigned *actual_size);




void av_bprint_clear(AVBPrint *buf);







static inline int av_bprint_is_complete(const AVBPrint *buf)
{
    return buf->len < buf->size;
}
# 201 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
int av_bprint_finalize(AVBPrint *buf, char **ret_str);
# 216 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/bprint.h"
void av_bprint_escape(AVBPrint *dstbuf, const char *src, const char *special_chars,
                      enum AVEscapeMode mode, int flags);
# 26 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h" 1
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h" 1
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 169 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/local_lim.h" 1 3 4
# 39 "/usr/include/i386-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/i386-linux-gnu/bits/local_lim.h" 2 3 4
# 158 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 170 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 2 3 4
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h" 2
# 43 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h"
typedef struct AVRational{
    int num;
    int den;
} AVRational;






static inline AVRational av_make_q(int num, int den)
{
    AVRational r = { num, den };
    return r;
}
# 66 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h"
static inline int av_cmp_q(AVRational a, AVRational b){
    const int64_t tmp= a.num * (int64_t)b.den - b.num * (int64_t)a.den;

    if(tmp) return (int)((tmp ^ a.den ^ b.den)>>63)|1;
    else if(b.den && a.den) return 0;
    else if(a.num && b.num) return (a.num>>31) - (b.num>>31);
    else return (-2147483647 - 1);
}






static inline double av_q2d(AVRational a){
    return a.num / (double) a.den;
}
# 94 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h"
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);







AVRational av_mul_q(AVRational b, AVRational c) ;







AVRational av_div_q(AVRational b, AVRational c) ;







AVRational av_add_q(AVRational b, AVRational c) ;







AVRational av_sub_q(AVRational b, AVRational c) ;






static inline AVRational av_inv_q(AVRational q)
{
    AVRational r = { q.den, q.num };
    return r;
}
# 147 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h"
AVRational av_d2q(double d, int max) ;





int av_nearer_q(AVRational q, AVRational q1, AVRational q2);






int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);






uint32_t av_q2intfloat(AVRational q);
# 31 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 1
# 163 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
unsigned avutil_version(void);






const char *av_version_info(void);




const char *avutil_configuration(void);




const char *avutil_license(void);
# 191 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
enum AVMediaType {
    AVMEDIA_TYPE_UNKNOWN = -1,
    AVMEDIA_TYPE_VIDEO,
    AVMEDIA_TYPE_AUDIO,
    AVMEDIA_TYPE_DATA,
    AVMEDIA_TYPE_SUBTITLE,
    AVMEDIA_TYPE_ATTACHMENT,
    AVMEDIA_TYPE_NB
};





const char *av_get_media_type_string(enum AVMediaType media_type);
# 264 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
enum AVPictureType {
    AV_PICTURE_TYPE_NONE = 0,
    AV_PICTURE_TYPE_I,
    AV_PICTURE_TYPE_P,
    AV_PICTURE_TYPE_B,
    AV_PICTURE_TYPE_S,
    AV_PICTURE_TYPE_SI,
    AV_PICTURE_TYPE_SP,
    AV_PICTURE_TYPE_BI,
};
# 282 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
char av_get_picture_type_char(enum AVPictureType pict_type);





# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 1
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/i386-linux-gnu/bits/errno.h" 1 3 4
# 25 "/usr/include/i386-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/i386-linux-gnu/bits/errno.h" 2 3 4
# 47 "/usr/include/i386-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) ;
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 34 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 35 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      ;


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) ;


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) ;


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     ;
# 442 "/usr/include/inttypes.h" 3 4

# 35 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 36 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/i386-linux-gnu/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/mathdef.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) ; extern double __acos (double __x) ;

extern double asin (double __x) ; extern double __asin (double __x) ;

extern double atan (double __x) ; extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;


extern double cos (double __x) ; extern double __cos (double __x) ;

extern double sin (double __x) ; extern double __sin (double __x) ;

extern double tan (double __x) ; extern double __tan (double __x) ;




extern double cosh (double __x) ; extern double __cosh (double __x) ;

extern double sinh (double __x) ; extern double __sinh (double __x) ;

extern double tanh (double __x) ; extern double __tanh (double __x) ;

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) ; extern double __acosh (double __x) ;

extern double asinh (double __x) ; extern double __asinh (double __x) ;

extern double atanh (double __x) ; extern double __atanh (double __x) ;







extern double exp (double __x) ; extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;


extern double log (double __x) ; extern double __log (double __x) ;


extern double log10 (double __x) ; extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr)
     ;

# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) ; extern double __expm1 (double __x) ;


extern double log1p (double __x) ; extern double __log1p (double __x) ;


extern double logb (double __x) ; extern double __logb (double __x) ;






extern double exp2 (double __x) ; extern double __exp2 (double __x) ;


extern double log2 (double __x) ; extern double __log2 (double __x) ;








extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ; extern double __sqrt (double __x) ;





extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;






extern double cbrt (double __x) ; extern double __cbrt (double __x) ;








extern double ceil (double __x) ; extern double __ceil (double __x) ;


extern double fabs (double __x) ; extern double __fabs (double __x) ;


extern double floor (double __x) ; extern double __floor (double __x) ;


extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;




extern int __isinf (double __value) ;


extern int __finite (double __value) ;





extern int isinf (double __value) ;


extern int finite (double __value) ;


extern double drem (double __x, double __y) ; extern double __drem (double __x, double __y) ;



extern double significand (double __x) ; extern double __significand (double __x) ;





extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;






extern double nan (__const char *__tagb) ; extern double __nan (__const char *__tagb) ;





extern int __isnan (double __value) ;



extern int isnan (double __value) ;


extern double j0 (double) ; extern double __j0 (double) ;
extern double j1 (double) ; extern double __j1 (double) ;
extern double jn (int, double) ; extern double __jn (int, double) ;
extern double y0 (double) ; extern double __y0 (double) ;
extern double y1 (double) ; extern double __y1 (double) ;
extern double yn (int, double) ; extern double __yn (int, double) ;






extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;






extern double tgamma (double) ; extern double __tgamma (double) ;





extern double gamma (double) ; extern double __gamma (double) ;






extern double lgamma_r (double, int *__signgamp) ; extern double __lgamma_r (double, int *__signgamp) ;







extern double rint (double __x) ; extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;



extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ; extern int __ilogb (double __x) ;




extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;



extern double round (double __x) ; extern double __round (double __x) ;



extern double trunc (double __x) ; extern double __trunc (double __x) ;




extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ; extern long int __lrint (double __x) ;
extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;



extern long int lround (double __x) ; extern long int __lround (double __x) ;
extern long long int llround (double __x) ; extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;


extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;



extern int __fpclassify (double __value)
     ;


extern int __signbit (double __value)
     ;



extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;








extern double scalb (double __x, double __n) ; extern double __scalb (double __x, double __n) ;
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) ; extern float __acosf (float __x) ;

extern float asinf (float __x) ; extern float __asinf (float __x) ;

extern float atanf (float __x) ; extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;


extern float cosf (float __x) ; extern float __cosf (float __x) ;

extern float sinf (float __x) ; extern float __sinf (float __x) ;

extern float tanf (float __x) ; extern float __tanf (float __x) ;




extern float coshf (float __x) ; extern float __coshf (float __x) ;

extern float sinhf (float __x) ; extern float __sinhf (float __x) ;

extern float tanhf (float __x) ; extern float __tanhf (float __x) ;

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) ; extern float __acoshf (float __x) ;

extern float asinhf (float __x) ; extern float __asinhf (float __x) ;

extern float atanhf (float __x) ; extern float __atanhf (float __x) ;







extern float expf (float __x) ; extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;


extern float logf (float __x) ; extern float __logf (float __x) ;


extern float log10f (float __x) ; extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr)
     ;

# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) ; extern float __expm1f (float __x) ;


extern float log1pf (float __x) ; extern float __log1pf (float __x) ;


extern float logbf (float __x) ; extern float __logbf (float __x) ;






extern float exp2f (float __x) ; extern float __exp2f (float __x) ;


extern float log2f (float __x) ; extern float __log2f (float __x) ;








extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;





extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;






extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;








extern float ceilf (float __x) ; extern float __ceilf (float __x) ;


extern float fabsf (float __x) ; extern float __fabsf (float __x) ;


extern float floorf (float __x) ; extern float __floorf (float __x) ;


extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;




extern int __isinff (float __value) ;


extern int __finitef (float __value) ;





extern int isinff (float __value) ;


extern int finitef (float __value) ;


extern float dremf (float __x, float __y) ; extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ; extern float __significandf (float __x) ;





extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;






extern float nanf (__const char *__tagb) ; extern float __nanf (__const char *__tagb) ;





extern int __isnanf (float __value) ;



extern int isnanf (float __value) ;


extern float j0f (float) ; extern float __j0f (float) ;
extern float j1f (float) ; extern float __j1f (float) ;
extern float jnf (int, float) ; extern float __jnf (int, float) ;
extern float y0f (float) ; extern float __y0f (float) ;
extern float y1f (float) ; extern float __y1f (float) ;
extern float ynf (int, float) ; extern float __ynf (int, float) ;






extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;






extern float tgammaf (float) ; extern float __tgammaf (float) ;





extern float gammaf (float) ; extern float __gammaf (float) ;






extern float lgammaf_r (float, int *__signgamp) ; extern float __lgammaf_r (float, int *__signgamp) ;







extern float rintf (float __x) ; extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;



extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;




extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;



extern float roundf (float __x) ; extern float __roundf (float __x) ;



extern float truncf (float __x) ; extern float __truncf (float __x) ;




extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;
extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;
extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;


extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;



extern int __fpclassifyf (float __value)
     ;


extern int __signbitf (float __value)
     ;



extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;








extern float scalbf (float __x, float __n) ; extern float __scalbf (float __x, float __n) ;
# 95 "/usr/include/math.h" 2 3 4
# 146 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;


extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;

extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;

# 87 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;







extern long double expl (long double __x) ; extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;


extern long double logl (long double __x) ; extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr)
     ;

# 128 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;






extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;








extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;





extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;






extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;








extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;


extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;


extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;


extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;




extern int __isinfl (long double __value) ;


extern int __finitel (long double __value) ;





extern int isinfl (long double __value) ;


extern int finitel (long double __value) ;


extern long double dreml (long double __x, long double __y) ; extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ; extern long double __significandl (long double __x) ;





extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;






extern long double nanl (__const char *__tagb) ; extern long double __nanl (__const char *__tagb) ;





extern int __isnanl (long double __value) ;



extern int isnanl (long double __value) ;


extern long double j0l (long double) ; extern long double __j0l (long double) ;
extern long double j1l (long double) ; extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; extern long double __y0l (long double) ;
extern long double y1l (long double) ; extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; extern long double __ynl (int, long double) ;






extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;






extern long double tgammal (long double) ; extern long double __tgammal (long double) ;





extern long double gammal (long double) ; extern long double __gammal (long double) ;






extern long double lgammal_r (long double, int *__signgamp) ; extern long double __lgammal_r (long double, int *__signgamp) ;







extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;



extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;




extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;



extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;




extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;
extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;
extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;


extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;



extern int __fpclassifyl (long double __value)
     ;


extern int __signbitl (long double __value)
     ;



extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;








extern long double scalbl (long double __x, long double __n) ; extern long double __scalbl (long double __x, long double __n) ;
# 147 "/usr/include/math.h" 2 3 4
# 162 "/usr/include/math.h" 3 4
extern int signgam;
# 203 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 296 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 321 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 483 "/usr/include/math.h" 3 4

# 37 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


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




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 132 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
# 33 "/usr/include/libio.h" 2 3 4
# 172 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 182 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 205 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 273 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

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
# 321 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 330 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 366 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 418 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 462 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
# 492 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;
# 76 "/usr/include/stdio.h" 2 3 4
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 165 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 166 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) ;

extern int rename (__const char *__old, __const char *__new) ;




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) ;








extern FILE *tmpfile (void) ;
# 210 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) ;





extern char *tmpnam_r (char *__s) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 253 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 267 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 296 "/usr/include/stdio.h" 3 4

# 307 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) ;
# 320 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     ;

# 418 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     ;








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) ;
# 449 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf")

                      ;
# 469 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     ;
# 500 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



     ;
# 528 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 556 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 567 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 600 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 662 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 734 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 770 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 789 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 812 "/usr/include/stdio.h" 3 4

# 821 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (__const char *__s);






# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 851 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
# 870 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
# 910 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;
# 940 "/usr/include/stdio.h" 3 4

# 39 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/i386-linux-gnu/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS ;
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) ;




extern double atof (__const char *__nptr)
     ;

extern int atoi (__const char *__nptr)
     ;

extern long int atol (__const char *__nptr)
     ;





__extension__ extern long long int atoll (__const char *__nptr)
     ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) ;


extern long int a64l (__const char *__s)
     ;




# 1 "/usr/include/i386-linux-gnu/sys/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4
# 147 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 148 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;
# 220 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/select.h" 1 3 4
# 31 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/select.h" 1 3 4
# 32 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/sigset.h" 1 3 4
# 24 "/usr/include/i386-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 31 "/usr/include/i386-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 65 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 97 "/usr/include/i386-linux-gnu/sys/select.h" 3 4

# 107 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 119 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 132 "/usr/include/i386-linux-gnu/sys/select.h" 3 4

# 221 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;
# 64 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4

# 224 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 271 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
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

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
     ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) ;






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) ;






extern char *getenv (__const char *__name) ;




extern char *__secure_getenv (__const char *__name)
     ;





extern int putenv (char *__string) ;





extern int setenv (__const char *__name, __const char *__value, int __replace)
     ;


extern int unsetenv (__const char *__name) ;






extern int clearenv (void) ;
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) ;
extern long int labs (long int __x) ;



__extension__ extern long long int llabs (long long int __x)
     ;







extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;







extern int mblen (__const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (__const char *__response) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     ;
# 964 "/usr/include/stdlib.h" 3 4

# 40 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     ;


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     ;






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     ;





extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     ;
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      ;


# 126 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     ;

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     ;


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     ;

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) ;


extern int strcmp (__const char *__s1, __const char *__s2)
     ;

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     ;


extern int strcoll (__const char *__s1, __const char *__s2)
     ;

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     ;






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     ;

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) ;





extern char *strdup (__const char *__s)
     ;






extern char *strndup (__const char *__string, size_t __n)
     ;
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     ;
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     ;


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     ;


extern size_t strspn (__const char *__s, __const char *__accept)
     ;
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     ;
# 342 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
     ;




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     ;




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     ;

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     ;
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     ;





extern size_t strnlen (__const char *__string, size_t __maxlen)
     ;





extern char *strerror (int __errnum) ;

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                                       ;
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) ;





extern void __bzero (void *__s, size_t __n) ;



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     ;


extern void bzero (void *__s, size_t __n) ;


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     ;
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     ;
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     ;




extern int ffs (int __i) ;
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     ;


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     ;
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     ;
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     ;



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     ;
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     ;
# 646 "/usr/include/string.h" 3 4

# 41 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2


# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/version.h" 1
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/version.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/macros.h" 1
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/version.h" 2
# 44 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avconfig.h" 1
# 45 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 96 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 1
# 97 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2


 int av_log2(unsigned v);



 int av_log2_16bit(unsigned v);
# 113 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline int av_clip_c(int a, int amin, int amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}
# 130 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline int64_t av_clip64_c(int64_t a, int64_t amin, int64_t amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}






static inline uint8_t av_clip_uint8_c(int a)
{
    if (a&(~0xFF)) return (-a)>>31;
    else return a;
}






static inline int8_t av_clip_int8_c(int a)
{
    if ((a+0x80U) & ~0xFF) return (a>>31) ^ 0x7F;
    else return a;
}






static inline uint16_t av_clip_uint16_c(int a)
{
    if (a&(~0xFFFF)) return (-a)>>31;
    else return a;
}






static inline int16_t av_clip_int16_c(int a)
{
    if ((a+0x8000U) & ~0xFFFF) return (a>>31) ^ 0x7FFF;
    else return a;
}






static inline int32_t av_clipl_int32_c(int64_t a)
{
    if ((a+0x80000000u) & ~0xFFFFFFFFULL) return (int32_t)((a>>63) ^ 0x7FFFFFFF);
    else return (int32_t)a;
}







static inline int av_clip_intp2_c(int a, int p)
{
    if ((a + (1 << p)) & ~((2 << p) - 1))
        return (a >> 31) ^ ((1 << p) - 1);
    else
        return a;
}







static inline unsigned av_clip_uintp2_c(int a, int p)
{
    if (a & ~((1<<p) - 1)) return -a >> 31 & ((1<<p) - 1);
    else return a;
}







static inline unsigned av_mod_uintp2_c(unsigned a, unsigned p)
{
    return a & ((1 << p) - 1);
}
# 239 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline int av_sat_add32_c(int a, int b)
{
    return av_clipl_int32_c((int64_t)a + b);
}
# 251 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline int av_sat_dadd32_c(int a, int b)
{
    return av_sat_add32_c(a, av_sat_add32_c(b, b));
}
# 263 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline float av_clipf_c(float a, float amin, float amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}
# 280 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
static inline double av_clipd_c(double a, double amin, double amax)
{



    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}





static inline int av_ceil_log2_c(int x)
{
    return av_log2((x - 1) << 1);
}






static inline int av_popcount_c(uint32_t x)
{
    x -= (x >> 1) & 0x55555555;
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = (x + (x >> 4)) & 0x0F0F0F0F;
    x += x >> 8;
    return (x + (x >> 16)) & 0x3F;
}






static inline int av_popcount64_c(uint64_t x)
{
    return av_popcount_c((uint32_t)x) + av_popcount_c((uint32_t)(x >> 32));
}
# 445 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h" 1
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include-fixed/limits.h" 1 3 4
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h" 2



# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h" 1
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h"
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h" 2
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h" 2
# 97 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h"
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
# 109 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/error.h"
static inline char *av_make_error_string(char *errbuf, size_t errbuf_size, int errnum)
{
    av_strerror(errnum, errbuf, errbuf_size);
    return errbuf;
}
# 34 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 1
# 35 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h" 2
# 83 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_malloc(size_t size) ;
# 93 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
 static inline void *av_malloc_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_malloc(nmemb * size);
}
# 118 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_realloc(void *ptr, size_t size) ;
# 128 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize);
# 147 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
int av_reallocp(void *ptr, size_t size);
# 166 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
 void *av_realloc_array(void *ptr, size_t nmemb, size_t size);
# 185 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
 int av_reallocp_array(void *ptr, size_t nmemb, size_t size);
# 195 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void av_free(void *ptr);
# 205 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_mallocz(size_t size) ;
# 217 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_calloc(size_t nmemb, size_t size) ;
# 228 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
 static inline void *av_mallocz_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_mallocz(nmemb * size);
}







char *av_strdup(const char *s) ;
# 251 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
char *av_strndup(const char *s, size_t len) ;







void *av_memdup(const void *p, size_t size);
# 269 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void av_freep(void *ptr);
# 292 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void av_dynarray_add(void *tab_ptr, int *nb_ptr, void *elem);
# 307 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
int av_dynarray_add_nofree(void *tab_ptr, int *nb_ptr, void *elem);
# 330 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void *av_dynarray2_add(void **tab_ptr, int *nb_ptr, size_t elem_size,
                       const uint8_t *elem_data);





static inline int av_size_mult(size_t a, size_t b, size_t *r)
{
    size_t t = a * b;


    if ((a | b) >= ((size_t)1 << (sizeof(size_t) * 4)) && a && t / a != b)
        return (-(22));
    *r = t;
    return 0;
}




void av_max_alloc(size_t max);
# 362 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);






void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
# 383 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mem.h"
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
# 446 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 2
# 289 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 2




# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h" 1
# 28 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/intfloat.h" 1
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/intfloat.h"
union av_intfloat32 {
    uint32_t i;
    float f;
};

union av_intfloat64 {
    uint64_t i;
    double f;
};




static inline float av_int2float(uint32_t i)
{
    union av_intfloat32 v;
    v.i = i;
    return v.f;
}




static inline uint32_t av_float2int(float f)
{
    union av_intfloat32 v;
    v.f = f;
    return v.i;
}




static inline double av_int2double(uint64_t i)
{
    union av_intfloat64 v;
    v.i = i;
    return v.f;
}




static inline uint64_t av_double2int(double f)
{
    union av_intfloat64 v;
    v.f = f;
    return v.i;
}
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h" 2
# 70 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
enum AVRounding {
    AV_ROUND_ZERO = 0,
    AV_ROUND_INF = 1,
    AV_ROUND_DOWN = 2,
    AV_ROUND_UP = 3,
    AV_ROUND_NEAR_INF = 5,
    AV_ROUND_PASS_MINMAX = 8192,
};






int64_t av_gcd(int64_t a, int64_t b);





int64_t av_rescale(int64_t a, int64_t b, int64_t c) ;
# 99 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) ;




int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) ;







int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
                         enum AVRounding) ;







int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
# 133 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod);
# 144 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts, AVRational fs_tb, int duration, int64_t *last, AVRational out_tb);
# 157 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/mathematics.h"
int64_t av_add_stable(AVRational ts_tb, int64_t ts, AVRational inc_tb, int64_t inc);
# 294 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h" 1
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
typedef enum {
    AV_CLASS_CATEGORY_NA = 0,
    AV_CLASS_CATEGORY_INPUT,
    AV_CLASS_CATEGORY_OUTPUT,
    AV_CLASS_CATEGORY_MUXER,
    AV_CLASS_CATEGORY_DEMUXER,
    AV_CLASS_CATEGORY_ENCODER,
    AV_CLASS_CATEGORY_DECODER,
    AV_CLASS_CATEGORY_FILTER,
    AV_CLASS_CATEGORY_BITSTREAM_FILTER,
    AV_CLASS_CATEGORY_SWSCALER,
    AV_CLASS_CATEGORY_SWRESAMPLER,
    AV_CLASS_CATEGORY_DEVICE_VIDEO_OUTPUT = 40,
    AV_CLASS_CATEGORY_DEVICE_VIDEO_INPUT,
    AV_CLASS_CATEGORY_DEVICE_AUDIO_OUTPUT,
    AV_CLASS_CATEGORY_DEVICE_AUDIO_INPUT,
    AV_CLASS_CATEGORY_DEVICE_OUTPUT,
    AV_CLASS_CATEGORY_DEVICE_INPUT,
    AV_CLASS_CATEGORY_NB,
}AVClassCategory;
# 60 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
struct AVOptionRanges;






typedef struct AVClass {




    const char* class_name;





    const char* (*item_name)(void* ctx);






    const struct AVOption *option;







    int version;





    int log_level_offset_offset;
# 108 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
    int parent_log_context_offset;




    void* (*child_next)(void *obj, void *prev);
# 123 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
    const struct AVClass* (*child_class_next)(const struct AVClass *prev);






    AVClassCategory category;





    AVClassCategory (*get_category)(void* ctx);





    int (*query_ranges)(struct AVOptionRanges **, void *obj, const char *key, int flags);
} AVClass;
# 234 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log(void *avcl, int level, const char *fmt, ...) ;
# 252 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_vlog(void *avcl, int level, const char *fmt, va_list vl);
# 261 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
int av_log_get_level(void);
# 270 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log_set_level(int level);
# 282 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log_set_callback(void (*callback)(void*, int, const char*, va_list));
# 297 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log_default_callback(void *avcl, int level, const char *fmt,
                             va_list vl);
# 307 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
const char* av_default_item_name(void* ctx);
AVClassCategory av_default_get_category(void *ptr);
# 317 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
                        char *line, int line_size, int *print_prefix);
# 352 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h"
void av_log_set_flags(int arg);
int av_log_get_flags(void);
# 295 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h" 1
# 61 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h"
enum AVPixelFormat {
    AV_PIX_FMT_NONE = -1,
    AV_PIX_FMT_YUV420P,
    AV_PIX_FMT_YUYV422,
    AV_PIX_FMT_RGB24,
    AV_PIX_FMT_BGR24,
    AV_PIX_FMT_YUV422P,
    AV_PIX_FMT_YUV444P,
    AV_PIX_FMT_YUV410P,
    AV_PIX_FMT_YUV411P,
    AV_PIX_FMT_GRAY8,
    AV_PIX_FMT_MONOWHITE,
    AV_PIX_FMT_MONOBLACK,
    AV_PIX_FMT_PAL8,
    AV_PIX_FMT_YUVJ420P,
    AV_PIX_FMT_YUVJ422P,
    AV_PIX_FMT_YUVJ444P,

    AV_PIX_FMT_XVMC_MPEG2_MC,
    AV_PIX_FMT_XVMC_MPEG2_IDCT,


    AV_PIX_FMT_UYVY422,
    AV_PIX_FMT_UYYVYY411,
    AV_PIX_FMT_BGR8,
    AV_PIX_FMT_BGR4,
    AV_PIX_FMT_BGR4_BYTE,
    AV_PIX_FMT_RGB8,
    AV_PIX_FMT_RGB4,
    AV_PIX_FMT_RGB4_BYTE,
    AV_PIX_FMT_NV12,
    AV_PIX_FMT_NV21,

    AV_PIX_FMT_ARGB,
    AV_PIX_FMT_RGBA,
    AV_PIX_FMT_ABGR,
    AV_PIX_FMT_BGRA,

    AV_PIX_FMT_GRAY16BE,
    AV_PIX_FMT_GRAY16LE,
    AV_PIX_FMT_YUV440P,
    AV_PIX_FMT_YUVJ440P,
    AV_PIX_FMT_YUVA420P,

    AV_PIX_FMT_VDPAU_H264,
    AV_PIX_FMT_VDPAU_MPEG1,
    AV_PIX_FMT_VDPAU_MPEG2,
    AV_PIX_FMT_VDPAU_WMV3,
    AV_PIX_FMT_VDPAU_VC1,

    AV_PIX_FMT_RGB48BE,
    AV_PIX_FMT_RGB48LE,

    AV_PIX_FMT_RGB565BE,
    AV_PIX_FMT_RGB565LE,
    AV_PIX_FMT_RGB555BE,
    AV_PIX_FMT_RGB555LE,

    AV_PIX_FMT_BGR565BE,
    AV_PIX_FMT_BGR565LE,
    AV_PIX_FMT_BGR555BE,
    AV_PIX_FMT_BGR555LE,




    AV_PIX_FMT_VAAPI_MOCO,
    AV_PIX_FMT_VAAPI_IDCT,
    AV_PIX_FMT_VAAPI_VLD,

    AV_PIX_FMT_VAAPI = AV_PIX_FMT_VAAPI_VLD,
# 140 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h"
    AV_PIX_FMT_YUV420P16LE,
    AV_PIX_FMT_YUV420P16BE,
    AV_PIX_FMT_YUV422P16LE,
    AV_PIX_FMT_YUV422P16BE,
    AV_PIX_FMT_YUV444P16LE,
    AV_PIX_FMT_YUV444P16BE,

    AV_PIX_FMT_VDPAU_MPEG4,

    AV_PIX_FMT_DXVA2_VLD,

    AV_PIX_FMT_RGB444LE,
    AV_PIX_FMT_RGB444BE,
    AV_PIX_FMT_BGR444LE,
    AV_PIX_FMT_BGR444BE,
    AV_PIX_FMT_YA8,

    AV_PIX_FMT_Y400A = AV_PIX_FMT_YA8,
    AV_PIX_FMT_GRAY8A= AV_PIX_FMT_YA8,

    AV_PIX_FMT_BGR48BE,
    AV_PIX_FMT_BGR48LE,






    AV_PIX_FMT_YUV420P9BE,
    AV_PIX_FMT_YUV420P9LE,
    AV_PIX_FMT_YUV420P10BE,
    AV_PIX_FMT_YUV420P10LE,
    AV_PIX_FMT_YUV422P10BE,
    AV_PIX_FMT_YUV422P10LE,
    AV_PIX_FMT_YUV444P9BE,
    AV_PIX_FMT_YUV444P9LE,
    AV_PIX_FMT_YUV444P10BE,
    AV_PIX_FMT_YUV444P10LE,
    AV_PIX_FMT_YUV422P9BE,
    AV_PIX_FMT_YUV422P9LE,
    AV_PIX_FMT_VDA_VLD,
    AV_PIX_FMT_GBRP,
    AV_PIX_FMT_GBRP9BE,
    AV_PIX_FMT_GBRP9LE,
    AV_PIX_FMT_GBRP10BE,
    AV_PIX_FMT_GBRP10LE,
    AV_PIX_FMT_GBRP16BE,
    AV_PIX_FMT_GBRP16LE,
    AV_PIX_FMT_YUVA422P,
    AV_PIX_FMT_YUVA444P,
    AV_PIX_FMT_YUVA420P9BE,
    AV_PIX_FMT_YUVA420P9LE,
    AV_PIX_FMT_YUVA422P9BE,
    AV_PIX_FMT_YUVA422P9LE,
    AV_PIX_FMT_YUVA444P9BE,
    AV_PIX_FMT_YUVA444P9LE,
    AV_PIX_FMT_YUVA420P10BE,
    AV_PIX_FMT_YUVA420P10LE,
    AV_PIX_FMT_YUVA422P10BE,
    AV_PIX_FMT_YUVA422P10LE,
    AV_PIX_FMT_YUVA444P10BE,
    AV_PIX_FMT_YUVA444P10LE,
    AV_PIX_FMT_YUVA420P16BE,
    AV_PIX_FMT_YUVA420P16LE,
    AV_PIX_FMT_YUVA422P16BE,
    AV_PIX_FMT_YUVA422P16LE,
    AV_PIX_FMT_YUVA444P16BE,
    AV_PIX_FMT_YUVA444P16LE,

    AV_PIX_FMT_VDPAU,

    AV_PIX_FMT_XYZ12LE,
    AV_PIX_FMT_XYZ12BE,
    AV_PIX_FMT_NV16,
    AV_PIX_FMT_NV20LE,
    AV_PIX_FMT_NV20BE,

    AV_PIX_FMT_RGBA64BE,
    AV_PIX_FMT_RGBA64LE,
    AV_PIX_FMT_BGRA64BE,
    AV_PIX_FMT_BGRA64LE,

    AV_PIX_FMT_YVYU422,

    AV_PIX_FMT_VDA,

    AV_PIX_FMT_YA16BE,
    AV_PIX_FMT_YA16LE,

    AV_PIX_FMT_GBRAP,
    AV_PIX_FMT_GBRAP16BE,
    AV_PIX_FMT_GBRAP16LE,




    AV_PIX_FMT_QSV,




    AV_PIX_FMT_MMAL,

    AV_PIX_FMT_D3D11VA_VLD,

    AV_PIX_FMT_0RGB=0x123+4,
    AV_PIX_FMT_RGB0,
    AV_PIX_FMT_0BGR,
    AV_PIX_FMT_BGR0,

    AV_PIX_FMT_YUV420P12BE,
    AV_PIX_FMT_YUV420P12LE,
    AV_PIX_FMT_YUV420P14BE,
    AV_PIX_FMT_YUV420P14LE,
    AV_PIX_FMT_YUV422P12BE,
    AV_PIX_FMT_YUV422P12LE,
    AV_PIX_FMT_YUV422P14BE,
    AV_PIX_FMT_YUV422P14LE,
    AV_PIX_FMT_YUV444P12BE,
    AV_PIX_FMT_YUV444P12LE,
    AV_PIX_FMT_YUV444P14BE,
    AV_PIX_FMT_YUV444P14LE,
    AV_PIX_FMT_GBRP12BE,
    AV_PIX_FMT_GBRP12LE,
    AV_PIX_FMT_GBRP14BE,
    AV_PIX_FMT_GBRP14LE,
    AV_PIX_FMT_YUVJ411P,

    AV_PIX_FMT_BAYER_BGGR8,
    AV_PIX_FMT_BAYER_RGGB8,
    AV_PIX_FMT_BAYER_GBRG8,
    AV_PIX_FMT_BAYER_GRBG8,
    AV_PIX_FMT_BAYER_BGGR16LE,
    AV_PIX_FMT_BAYER_BGGR16BE,
    AV_PIX_FMT_BAYER_RGGB16LE,
    AV_PIX_FMT_BAYER_RGGB16BE,
    AV_PIX_FMT_BAYER_GBRG16LE,
    AV_PIX_FMT_BAYER_GBRG16BE,
    AV_PIX_FMT_BAYER_GRBG16LE,
    AV_PIX_FMT_BAYER_GRBG16BE,



    AV_PIX_FMT_YUV440P10LE,
    AV_PIX_FMT_YUV440P10BE,
    AV_PIX_FMT_YUV440P12LE,
    AV_PIX_FMT_YUV440P12BE,
    AV_PIX_FMT_AYUV64LE,
    AV_PIX_FMT_AYUV64BE,

    AV_PIX_FMT_VIDEOTOOLBOX,

    AV_PIX_FMT_NB,
};
# 372 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h"
enum AVColorPrimaries {
    AVCOL_PRI_RESERVED0 = 0,
    AVCOL_PRI_BT709 = 1,
    AVCOL_PRI_UNSPECIFIED = 2,
    AVCOL_PRI_RESERVED = 3,
    AVCOL_PRI_BT470M = 4,

    AVCOL_PRI_BT470BG = 5,
    AVCOL_PRI_SMPTE170M = 6,
    AVCOL_PRI_SMPTE240M = 7,
    AVCOL_PRI_FILM = 8,
    AVCOL_PRI_BT2020 = 9,
    AVCOL_PRI_SMPTEST428_1= 10,
    AVCOL_PRI_NB,
};




enum AVColorTransferCharacteristic {
    AVCOL_TRC_RESERVED0 = 0,
    AVCOL_TRC_BT709 = 1,
    AVCOL_TRC_UNSPECIFIED = 2,
    AVCOL_TRC_RESERVED = 3,
    AVCOL_TRC_GAMMA22 = 4,
    AVCOL_TRC_GAMMA28 = 5,
    AVCOL_TRC_SMPTE170M = 6,
    AVCOL_TRC_SMPTE240M = 7,
    AVCOL_TRC_LINEAR = 8,
    AVCOL_TRC_LOG = 9,
    AVCOL_TRC_LOG_SQRT = 10,
    AVCOL_TRC_IEC61966_2_4 = 11,
    AVCOL_TRC_BT1361_ECG = 12,
    AVCOL_TRC_IEC61966_2_1 = 13,
    AVCOL_TRC_BT2020_10 = 14,
    AVCOL_TRC_BT2020_12 = 15,
    AVCOL_TRC_SMPTEST2084 = 16,
    AVCOL_TRC_SMPTEST428_1 = 17,
    AVCOL_TRC_NB,
};




enum AVColorSpace {
    AVCOL_SPC_RGB = 0,
    AVCOL_SPC_BT709 = 1,
    AVCOL_SPC_UNSPECIFIED = 2,
    AVCOL_SPC_RESERVED = 3,
    AVCOL_SPC_FCC = 4,
    AVCOL_SPC_BT470BG = 5,
    AVCOL_SPC_SMPTE170M = 6,
    AVCOL_SPC_SMPTE240M = 7,
    AVCOL_SPC_YCOCG = 8,
    AVCOL_SPC_BT2020_NCL = 9,
    AVCOL_SPC_BT2020_CL = 10,
    AVCOL_SPC_NB,
};






enum AVColorRange {
    AVCOL_RANGE_UNSPECIFIED = 0,
    AVCOL_RANGE_MPEG = 1,
    AVCOL_RANGE_JPEG = 2,
    AVCOL_RANGE_NB,
};
# 458 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h"
enum AVChromaLocation {
    AVCHROMA_LOC_UNSPECIFIED = 0,
    AVCHROMA_LOC_LEFT = 1,
    AVCHROMA_LOC_CENTER = 2,
    AVCHROMA_LOC_TOPLEFT = 3,
    AVCHROMA_LOC_TOP = 4,
    AVCHROMA_LOC_BOTTOMLEFT = 5,
    AVCHROMA_LOC_BOTTOM = 6,
    AVCHROMA_LOC_NB,
};
# 296 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 2




static inline void *av_x_if_null(const void *p, const void *x)
{
    return (void *)(intptr_t)(p ? p : x);
}
# 313 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
unsigned av_int_list_length_for_size(unsigned elsize,
                                     const void *list, uint64_t term) ;
# 331 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h"
FILE *av_fopen_utf8(const char *path, const char *mode);




AVRational av_get_time_base_q(void);
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h" 1
# 82 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
typedef struct AVDictionaryEntry {
    char *key;
    char *value;
} AVDictionaryEntry;

typedef struct AVDictionary AVDictionary;
# 104 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
AVDictionaryEntry *av_dict_get(const AVDictionary *m, const char *key,
                               const AVDictionaryEntry *prev, int flags);







int av_dict_count(const AVDictionary *m);
# 128 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags);







int av_dict_set_int(AVDictionary **pm, const char *key, int64_t value, int flags);
# 154 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
int av_dict_parse_string(AVDictionary **pm, const char *str,
                         const char *key_val_sep, const char *pairs_sep,
                         int flags);
# 166 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
void av_dict_copy(AVDictionary **dst, const AVDictionary *src, int flags);





void av_dict_free(AVDictionary **m);
# 189 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h"
int av_dict_get_string(const AVDictionary *m, char **buffer,
                       const char key_val_sep, const char pairs_sep);
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h" 2


# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h" 1
# 59 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
enum AVSampleFormat {
    AV_SAMPLE_FMT_NONE = -1,
    AV_SAMPLE_FMT_U8,
    AV_SAMPLE_FMT_S16,
    AV_SAMPLE_FMT_S32,
    AV_SAMPLE_FMT_FLT,
    AV_SAMPLE_FMT_DBL,

    AV_SAMPLE_FMT_U8P,
    AV_SAMPLE_FMT_S16P,
    AV_SAMPLE_FMT_S32P,
    AV_SAMPLE_FMT_FLTP,
    AV_SAMPLE_FMT_DBLP,

    AV_SAMPLE_FMT_NB
};





const char *av_get_sample_fmt_name(enum AVSampleFormat sample_fmt);





enum AVSampleFormat av_get_sample_fmt(const char *name);







enum AVSampleFormat av_get_alt_sample_fmt(enum AVSampleFormat sample_fmt, int planar);
# 105 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
# 116 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
# 130 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);
# 139 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);







int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
# 159 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
                               enum AVSampleFormat sample_fmt, int align);
# 201 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
                           const uint8_t *buf,
                           int nb_channels, int nb_samples,
                           enum AVSampleFormat sample_fmt, int align);
# 225 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
                     int nb_samples, enum AVSampleFormat sample_fmt, int align);
# 237 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_alloc_array_and_samples(uint8_t ***audio_data, int *linesize, int nb_channels,
                                       int nb_samples, enum AVSampleFormat sample_fmt, int align);
# 251 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
                    int src_offset, int nb_samples, int nb_channels,
                    enum AVSampleFormat sample_fmt);
# 264 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h"
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
                           int nb_channels, enum AVSampleFormat sample_fmt);
# 36 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h" 2
# 221 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
enum AVOptionType{
    AV_OPT_TYPE_FLAGS,
    AV_OPT_TYPE_INT,
    AV_OPT_TYPE_INT64,
    AV_OPT_TYPE_DOUBLE,
    AV_OPT_TYPE_FLOAT,
    AV_OPT_TYPE_STRING,
    AV_OPT_TYPE_RATIONAL,
    AV_OPT_TYPE_BINARY,
    AV_OPT_TYPE_DICT,
    AV_OPT_TYPE_CONST = 128,
    AV_OPT_TYPE_IMAGE_SIZE = (('E') | (('Z') << 8) | (('I') << 16) | ((unsigned)('S') << 24)),
    AV_OPT_TYPE_PIXEL_FMT = (('T') | (('M') << 8) | (('F') << 16) | ((unsigned)('P') << 24)),
    AV_OPT_TYPE_SAMPLE_FMT = (('T') | (('M') << 8) | (('F') << 16) | ((unsigned)('S') << 24)),
    AV_OPT_TYPE_VIDEO_RATE = (('T') | (('A') << 8) | (('R') << 16) | ((unsigned)('V') << 24)),
    AV_OPT_TYPE_DURATION = ((' ') | (('R') << 8) | (('U') << 16) | ((unsigned)('D') << 24)),
    AV_OPT_TYPE_COLOR = (('R') | (('L') << 8) | (('O') << 16) | ((unsigned)('C') << 24)),
    AV_OPT_TYPE_CHANNEL_LAYOUT = (('A') | (('L') << 8) | (('H') << 16) | ((unsigned)('C') << 24)),
    AV_OPT_TYPE_BOOL = (('L') | (('O') << 8) | (('O') << 16) | ((unsigned)('B') << 24)),
};




typedef struct AVOption {
    const char *name;





    const char *help;





    int offset;
    enum AVOptionType type;




    union {
        int64_t i64;
        double dbl;
        const char *str;

        AVRational q;
    } default_val;
    double min;
    double max;

    int flags;
# 300 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
    const char *unit;
} AVOption;




typedef struct AVOptionRange {
    const char *str;





    double value_min, value_max;




    double component_min, component_max;




    int is_range;
} AVOptionRange;




typedef struct AVOptionRanges {
# 360 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
    AVOptionRange **range;



    int nb_ranges;



    int nb_components;
} AVOptionRanges;
# 380 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_show2(void *obj, void *av_log_obj, int req_flags, int rej_flags);






void av_opt_set_defaults(void *s);
# 398 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
void av_opt_set_defaults2(void *s, int mask, int flags);
# 417 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_set_options_string(void *ctx, const char *opts,
                          const char *key_val_sep, const char *pairs_sep);
# 447 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_set_from_string(void *ctx, const char *opts,
                           const char *const *shorthand,
                           const char *key_val_sep, const char *pairs_sep);



void av_opt_free(void *obj);
# 463 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_flag_is_set(void *obj, const char *field_name, const char *flag_name);
# 479 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_set_dict(void *obj, struct AVDictionary **options);
# 497 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_set_dict2(void *obj, struct AVDictionary **options, int search_flags);
# 518 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_get_key_value(const char **ropts,
                         const char *key_val_sep, const char *pairs_sep,
                         unsigned flags,
                         char **rkey, char **rval);

enum {





    AV_OPT_FLAG_IMPLICIT_KEY = 1,
};
# 546 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_eval_flags (void *obj, const AVOption *o, const char *val, int *flags_out);
int av_opt_eval_int (void *obj, const AVOption *o, const char *val, int *int_out);
int av_opt_eval_int64 (void *obj, const AVOption *o, const char *val, int64_t *int64_out);
int av_opt_eval_float (void *obj, const AVOption *o, const char *val, float *float_out);
int av_opt_eval_double(void *obj, const AVOption *o, const char *val, double *double_out);
int av_opt_eval_q (void *obj, const AVOption *o, const char *val, AVRational *q_out);
# 595 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
const AVOption *av_opt_find(void *obj, const char *name, const char *unit,
                            int opt_flags, int search_flags);
# 619 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
const AVOption *av_opt_find2(void *obj, const char *name, const char *unit,
                             int opt_flags, int search_flags, void **target_obj);
# 631 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
const AVOption *av_opt_next(const void *obj, const AVOption *prev);







void *av_opt_child_next(void *obj, void *prev);







const AVClass *av_opt_child_class_next(const AVClass *parent, const AVClass *prev);
# 675 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_set (void *obj, const char *name, const char *val, int search_flags);
int av_opt_set_int (void *obj, const char *name, int64_t val, int search_flags);
int av_opt_set_double (void *obj, const char *name, double val, int search_flags);
int av_opt_set_q (void *obj, const char *name, AVRational val, int search_flags);
int av_opt_set_bin (void *obj, const char *name, const uint8_t *val, int size, int search_flags);
int av_opt_set_image_size(void *obj, const char *name, int w, int h, int search_flags);
int av_opt_set_pixel_fmt (void *obj, const char *name, enum AVPixelFormat fmt, int search_flags);
int av_opt_set_sample_fmt(void *obj, const char *name, enum AVSampleFormat fmt, int search_flags);
int av_opt_set_video_rate(void *obj, const char *name, AVRational val, int search_flags);
int av_opt_set_channel_layout(void *obj, const char *name, int64_t ch_layout, int search_flags);




int av_opt_set_dict_val(void *obj, const char *name, const AVDictionary *val, int search_flags);
# 726 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_get (void *obj, const char *name, int search_flags, uint8_t **out_val);
int av_opt_get_int (void *obj, const char *name, int search_flags, int64_t *out_val);
int av_opt_get_double (void *obj, const char *name, int search_flags, double *out_val);
int av_opt_get_q (void *obj, const char *name, int search_flags, AVRational *out_val);
int av_opt_get_image_size(void *obj, const char *name, int search_flags, int *w_out, int *h_out);
int av_opt_get_pixel_fmt (void *obj, const char *name, int search_flags, enum AVPixelFormat *out_fmt);
int av_opt_get_sample_fmt(void *obj, const char *name, int search_flags, enum AVSampleFormat *out_fmt);
int av_opt_get_video_rate(void *obj, const char *name, int search_flags, AVRational *out_val);
int av_opt_get_channel_layout(void *obj, const char *name, int search_flags, int64_t *ch_layout);




int av_opt_get_dict_val(void *obj, const char *name, int search_flags, AVDictionary **out_val);
# 751 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
void *av_opt_ptr(const AVClass *avclass, void *obj, const char *name);




void av_opt_freep_ranges(AVOptionRanges **ranges);
# 771 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_query_ranges(AVOptionRanges **, void *obj, const char *key, int flags);
# 783 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_copy(void *dest, const void *src);
# 799 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_query_ranges_default(AVOptionRanges **, void *obj, const char *key, int flags);
# 813 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_is_set_to_default(void *obj, const AVOption *o);
# 825 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_is_set_to_default_by_name(void *obj, const char *name, int search_flags);
# 849 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/opt.h"
int av_opt_serialize(void *obj, int opt_flags, int flags, char **buffer,
                     const char key_val_sep, const char pairs_sep);
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h" 1
# 23 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h" 1
# 31 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/common.h" 1
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/dict.h" 1
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/log.h" 1
# 34 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/version.h" 1
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/version.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/version.h" 1
# 31 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/version.h" 2
# 36 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h" 2
# 50 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
typedef struct AVIOInterruptCB {
    int (*callback)(void*);
    void *opaque;
} AVIOInterruptCB;




enum AVIODirEntryType {
    AVIO_ENTRY_UNKNOWN,
    AVIO_ENTRY_BLOCK_DEVICE,
    AVIO_ENTRY_CHARACTER_DEVICE,
    AVIO_ENTRY_DIRECTORY,
    AVIO_ENTRY_NAMED_PIPE,
    AVIO_ENTRY_SYMBOLIC_LINK,
    AVIO_ENTRY_SOCKET,
    AVIO_ENTRY_FILE,
    AVIO_ENTRY_SERVER,
    AVIO_ENTRY_SHARE,
    AVIO_ENTRY_WORKGROUP,
};







typedef struct AVIODirEntry {
    char *name;
    int type;
    int utf8;

    int64_t size;
    int64_t modification_timestamp;

    int64_t access_timestamp;

    int64_t status_change_timestamp;

    int64_t user_id;
    int64_t group_id;
    int64_t filemode;
} AVIODirEntry;

typedef struct AVIODirContext {
    struct URLContext *url_context;
} AVIODirContext;
# 111 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
typedef struct AVIOContext {
# 124 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
    const AVClass *av_class;
    unsigned char *buffer;
    int buffer_size;
    unsigned char *buf_ptr;
    unsigned char *buf_end;



    void *opaque;

    int (*read_packet)(void *opaque, uint8_t *buf, int buf_size);
    int (*write_packet)(void *opaque, uint8_t *buf, int buf_size);
    int64_t (*seek)(void *opaque, int64_t offset, int whence);
    int64_t pos;
    int must_flush;
    int eof_reached;
    int write_flag;
    int max_packet_size;
    unsigned long checksum;
    unsigned char *checksum_ptr;
    unsigned long (*update_checksum)(unsigned long checksum, const uint8_t *buf, unsigned int size);
    int error;



    int (*read_pause)(void *opaque, int pause);





    int64_t (*read_seek)(void *opaque, int stream_index,
                         int64_t timestamp, int flags);



    int seekable;





    int64_t maxsize;






    int direct;





    int64_t bytes_read;





    int seek_count;





    int writeout_count;






    int orig_buffer_size;





    int short_seek_threshold;
} AVIOContext;
# 216 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
const char *avio_find_protocol_name(const char *url);
# 230 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_check(const char *url, int flags);
# 241 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avpriv_io_move(const char *url_src, const char *url_dst);







int avpriv_io_delete(const char *url);
# 261 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_open_dir(AVIODirContext **s, const char *url, AVDictionary **options);
# 274 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_read_dir(AVIODirContext *s, AVIODirEntry **next);
# 285 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_close_dir(AVIODirContext **s);






void avio_free_directory_entry(AVIODirEntry **entry);
# 315 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
AVIOContext *avio_alloc_context(
                  unsigned char *buffer,
                  int buffer_size,
                  int write_flag,
                  void *opaque,
                  int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int64_t (*seek)(void *opaque, int64_t offset, int whence));

void avio_w8(AVIOContext *s, int b);
void avio_write(AVIOContext *s, const unsigned char *buf, int size);
void avio_wl64(AVIOContext *s, uint64_t val);
void avio_wb64(AVIOContext *s, uint64_t val);
void avio_wl32(AVIOContext *s, unsigned int val);
void avio_wb32(AVIOContext *s, unsigned int val);
void avio_wl24(AVIOContext *s, unsigned int val);
void avio_wb24(AVIOContext *s, unsigned int val);
void avio_wl16(AVIOContext *s, unsigned int val);
void avio_wb16(AVIOContext *s, unsigned int val);





int avio_put_str(AVIOContext *s, const char *str);
# 348 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_put_str16le(AVIOContext *s, const char *str);
# 357 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_put_str16be(AVIOContext *s, const char *str);
# 378 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int64_t avio_seek(AVIOContext *s, int64_t offset, int whence);





int64_t avio_skip(AVIOContext *s, int64_t offset);





static inline int64_t avio_tell(AVIOContext *s)
{
    return avio_seek(s, 0, 1);
}





int64_t avio_size(AVIOContext *s);





int avio_feof(AVIOContext *s);





int url_feof(AVIOContext *s);



int avio_printf(AVIOContext *s, const char *fmt, ...) ;
# 427 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
void avio_flush(AVIOContext *s);





int avio_read(AVIOContext *s, unsigned char *buf, int size);
# 442 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_r8 (AVIOContext *s);
unsigned int avio_rl16(AVIOContext *s);
unsigned int avio_rl24(AVIOContext *s);
unsigned int avio_rl32(AVIOContext *s);
uint64_t avio_rl64(AVIOContext *s);
unsigned int avio_rb16(AVIOContext *s);
unsigned int avio_rb24(AVIOContext *s);
unsigned int avio_rb32(AVIOContext *s);
uint64_t avio_rb64(AVIOContext *s);
# 467 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_get_str(AVIOContext *pb, int maxlen, char *buf, int buflen);







int avio_get_str16le(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16be(AVIOContext *pb, int maxlen, char *buf, int buflen);
# 528 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_open(AVIOContext **s, const char *url, int flags);
# 548 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_open2(AVIOContext **s, const char *url, int flags,
               const AVIOInterruptCB *int_cb, AVDictionary **options);
# 561 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_close(AVIOContext *s);
# 574 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_closep(AVIOContext **s);
# 583 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_open_dyn_buf(AVIOContext **s);
# 594 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_close_dyn_buf(AVIOContext *s, uint8_t **pbuffer);
# 607 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
const char *avio_enum_protocols(void **opaque, int output);
# 616 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_pause(AVIOContext *h, int pause);
# 637 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int64_t avio_seek_time(AVIOContext *h, int stream_index,
                       int64_t timestamp, int flags);


struct AVBPrint;







int avio_read_to_bprint(AVIOContext *h, struct AVBPrint *pb, size_t max_size);
# 658 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_accept(AVIOContext *s, AVIOContext **c);
# 679 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio.h"
int avio_handshake(AVIOContext *c);
# 24 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h" 1
# 37 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
extern const AVClass ffurl_context_class;

typedef struct URLContext {
    const AVClass *av_class;
    struct URLProtocol *prot;
    void *priv_data;
    char *filename;
    int flags;
    int max_packet_size;
    int is_streamed;
    int is_connected;
    AVIOInterruptCB interrupt_callback;
    int64_t rw_timeout;
} URLContext;

typedef struct URLProtocol {
    const char *name;
    int (*url_open)( URLContext *h, const char *url, int flags);





    int (*url_open2)(URLContext *h, const char *url, int flags, AVDictionary **options);
    int (*url_accept)(URLContext *s, URLContext **c);
    int (*url_handshake)(URLContext *c);
# 76 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
    int (*url_read)( URLContext *h, unsigned char *buf, int size);
    int (*url_write)(URLContext *h, const unsigned char *buf, int size);
    int64_t (*url_seek)( URLContext *h, int64_t pos, int whence);
    int (*url_close)(URLContext *h);
    struct URLProtocol *next;
    int (*url_read_pause)(URLContext *h, int pause);
    int64_t (*url_read_seek)(URLContext *h, int stream_index,
                             int64_t timestamp, int flags);
    int (*url_get_file_handle)(URLContext *h);
    int (*url_get_multi_file_handle)(URLContext *h, int **handles,
                                     int *numhandles);
    int (*url_shutdown)(URLContext *h, int flags);
    int priv_data_size;
    const AVClass *priv_data_class;
    int flags;
    int (*url_check)(URLContext *h, int mask);
    int (*url_open_dir)(URLContext *h);
    int (*url_read_dir)(URLContext *h, AVIODirEntry **next);
    int (*url_close_dir)(URLContext *h);
    int (*url_delete)(URLContext *h);
    int (*url_move)(URLContext *h_src, URLContext *h_dst);
} URLProtocol;
# 112 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_alloc(URLContext **puc, const char *filename, int flags,
                const AVIOInterruptCB *int_cb);
# 123 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_connect(URLContext *uc, AVDictionary **options);
# 141 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_open(URLContext **puc, const char *filename, int flags,
               const AVIOInterruptCB *int_cb, AVDictionary **options);
# 151 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_accept(URLContext *s, URLContext **c);
# 165 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_handshake(URLContext *c);
# 176 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_read(URLContext *h, unsigned char *buf, int size);
# 185 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_read_complete(URLContext *h, unsigned char *buf, int size);







int ffurl_write(URLContext *h, const unsigned char *buf, int size);
# 209 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int64_t ffurl_seek(URLContext *h, int64_t pos, int whence);
# 218 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_closep(URLContext **h);
int ffurl_close(URLContext *h);






int64_t ffurl_size(URLContext *h);







int ffurl_get_file_handle(URLContext *h);






int ffurl_get_multi_file_handle(URLContext *h, int **handles, int *numhandles);
# 253 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ffurl_shutdown(URLContext *h, int flags);




int ffurl_register_protocol(URLProtocol *protocol);





int ff_check_interrupt(AVIOInterruptCB *cb);






URLProtocol *ffurl_protocol_next(const URLProtocol *prev);


int ff_udp_set_remote_url(URLContext *h, const char *uri);
int ff_udp_get_local_port(URLContext *h);
# 298 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
int ff_url_join(char *str, int size, const char *proto,
                const char *authorization, const char *hostname,
                int port, const char *fmt, ...) ;
# 310 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/url.h"
void ff_make_absolute_url(char *buf, int size, const char *base,
                          const char *rel);






AVIODirEntry *ff_alloc_dir_entry(void);
# 25 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h" 2



extern const AVClass ff_avio_class;

int ffio_init_context(AVIOContext *s,
                  unsigned char *buffer,
                  int buffer_size,
                  int write_flag,
                  void *opaque,
                  int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int64_t (*seek)(void *opaque, int64_t offset, int whence));
# 55 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_read_indirect(AVIOContext *s, unsigned char *buf, int size, const unsigned char **data);







int ffio_read_partial(AVIOContext *s, unsigned char *buf, int size);

void ffio_fill(AVIOContext *s, int b, int count);

static inline void ffio_wfourcc(AVIOContext *pb, const uint8_t *s)
{
    avio_wl32(pb, ((s[0]) | ((s[1]) << 8) | ((s[2]) << 16) | ((unsigned)(s[3]) << 24)));
}
# 84 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_rewind_with_probe_data(AVIOContext *s, unsigned char **buf, int buf_size);

uint64_t ffio_read_varlen(AVIOContext *bc);






int ffio_read_size(AVIOContext *s, unsigned char *buf, int size);


int ffio_set_buf_size(AVIOContext *s, int buf_size);
# 105 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_ensure_seekback(AVIOContext *s, int64_t buf_size);

int ffio_limit(AVIOContext *s, int size);

void ffio_init_checksum(AVIOContext *s,
                        unsigned long (*update_checksum)(unsigned long c, const uint8_t *p, unsigned int len),
                        unsigned long checksum);
unsigned long ffio_get_checksum(AVIOContext *s);
unsigned long ff_crc04C11DB7_update(unsigned long checksum, const uint8_t *buf,
                                    unsigned int len);
unsigned long ff_crcA001_update(unsigned long checksum, const uint8_t *buf,
                                unsigned int len);
# 127 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_open_dyn_packet_buf(AVIOContext **s, int max_packet_size);
# 140 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_fdopen(AVIOContext **s, URLContext *h);
# 150 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avio_internal.h"
int ffio_open_null_buf(AVIOContext **s);







int ffio_close_null_buf(AVIOContext *s);






void ffio_free_dyn_buf(AVIOContext **s);
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h" 1
# 304 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
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
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
     ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) ;

# 217 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) ;
# 230 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) ;



extern struct tm *localtime (__const time_t *__timer) ;





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) ;



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) ;





extern char *asctime (__const struct tm *__tp) ;


extern char *ctime (__const time_t *__timer) ;







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) ;


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) ;
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) ;
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;
# 417 "/usr/include/time.h" 3 4

# 305 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 1
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/samplefmt.h" 1
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/attributes.h" 1
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/avutil.h" 1
# 34 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h" 1
# 73 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
typedef struct AVBuffer AVBuffer;







typedef struct AVBufferRef {
    AVBuffer *buffer;






    uint8_t *data;



    int size;
} AVBufferRef;






AVBufferRef *av_buffer_alloc(int size);





AVBufferRef *av_buffer_allocz(int size);
# 130 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
AVBufferRef *av_buffer_create(uint8_t *data, int size,
                              void (*free)(void *opaque, uint8_t *data),
                              void *opaque, int flags);






void av_buffer_default_free(void *opaque, uint8_t *data);







AVBufferRef *av_buffer_ref(AVBufferRef *buf);







void av_buffer_unref(AVBufferRef **buf);







int av_buffer_is_writable(const AVBufferRef *buf);




void *av_buffer_get_opaque(const AVBufferRef *buf);

int av_buffer_get_ref_count(const AVBufferRef *buf);
# 181 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
int av_buffer_make_writable(AVBufferRef **buf);
# 198 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
int av_buffer_realloc(AVBufferRef **buf, int size);
# 238 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
typedef struct AVBufferPool AVBufferPool;
# 249 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
AVBufferPool *av_buffer_pool_init(int size, AVBufferRef* (*alloc)(int size));
# 260 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h"
void av_buffer_pool_uninit(AVBufferPool **pool);







AVBufferRef *av_buffer_pool_get(AVBufferPool *pool);
# 35 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/cpu.h" 1
# 74 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/cpu.h"
int av_get_cpu_flags(void);





void av_force_cpu_flags(int flags);
# 89 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/cpu.h"
 void av_set_cpu_flags_mask(int mask);
# 100 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/cpu.h"

int av_parse_cpu_flags(const char *s);






int av_parse_cpu_caps(unsigned *flags, const char *s);




int av_cpu_count(void);
# 36 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h" 1
# 114 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h"
enum AVMatrixEncoding {
    AV_MATRIX_ENCODING_NONE,
    AV_MATRIX_ENCODING_DOLBY,
    AV_MATRIX_ENCODING_DPLII,
    AV_MATRIX_ENCODING_DPLIIX,
    AV_MATRIX_ENCODING_DPLIIZ,
    AV_MATRIX_ENCODING_DOLBYEX,
    AV_MATRIX_ENCODING_DOLBYHEADPHONE,
    AV_MATRIX_ENCODING_NB
};
# 147 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h"
uint64_t av_get_channel_layout(const char *name);
# 156 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h"
void av_get_channel_layout_string(char *buf, int buf_size, int nb_channels, uint64_t channel_layout);

struct AVBPrint;



void av_bprint_channel_layout(struct AVBPrint *bp, int nb_channels, uint64_t channel_layout);




int av_get_channel_layout_nb_channels(uint64_t channel_layout);




int64_t av_get_default_channel_layout(int nb_channels);
# 183 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h"
int av_get_channel_layout_channel_index(uint64_t channel_layout,
                                        uint64_t channel);




uint64_t av_channel_layout_extract_channel(uint64_t channel_layout, int index);






const char *av_get_channel_name(uint64_t channel);







const char *av_get_channel_description(uint64_t channel);
# 215 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/channel_layout.h"
int av_get_standard_channel_layout(unsigned index, uint64_t *layout,
                                   const char **name);
# 37 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h" 1
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/buffer.h" 1
# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h" 2
# 48 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
enum AVFrameSideDataType {



    AV_FRAME_DATA_PANSCAN,





    AV_FRAME_DATA_A53_CC,




    AV_FRAME_DATA_STEREO3D,



    AV_FRAME_DATA_MATRIXENCODING,




    AV_FRAME_DATA_DOWNMIX_INFO,



    AV_FRAME_DATA_REPLAYGAIN,







    AV_FRAME_DATA_DISPLAYMATRIX,




    AV_FRAME_DATA_AFD,






    AV_FRAME_DATA_MOTION_VECTORS,
# 108 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    AV_FRAME_DATA_SKIP_SAMPLES,





    AV_FRAME_DATA_AUDIO_SERVICE_TYPE,
};

enum AVActiveFormatDescription {
    AV_AFD_SAME = 8,
    AV_AFD_4_3 = 9,
    AV_AFD_16_9 = 10,
    AV_AFD_14_9 = 11,
    AV_AFD_4_3_SP_14_9 = 13,
    AV_AFD_16_9_SP_14_9 = 14,
    AV_AFD_SP_4_3 = 15,
};
# 134 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
typedef struct AVFrameSideData {
    enum AVFrameSideDataType type;
    uint8_t *data;
    int size;
    AVDictionary *metadata;
    AVBufferRef *buf;
} AVFrameSideData;
# 171 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
typedef struct AVFrame {
# 182 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    uint8_t *data[8];
# 199 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int linesize[8];
# 215 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    uint8_t **extended_data;




    int width, height;




    int nb_samples;






    int format;




    int key_frame;




    enum AVPictureType pict_type;




    AVRational sample_aspect_ratio;




    int64_t pts;




    int64_t pkt_pts;






    int64_t pkt_dts;




    int coded_picture_number;



    int display_picture_number;




    int quality;




    void *opaque;




    uint64_t error[8];





    int repeat_pict;




    int interlaced_frame;




    int top_field_first;




    int palette_has_changed;
# 320 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int64_t reordered_opaque;




    int sample_rate;




    uint64_t channel_layout;
# 344 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    AVBufferRef *buf[8];
# 358 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    AVBufferRef **extended_buf;



    int nb_extended_buf;

    AVFrameSideData **side_data;
    int nb_side_data;
# 385 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int flags;
# 394 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    enum AVColorRange color_range;

    enum AVColorPrimaries color_primaries;

    enum AVColorTransferCharacteristic color_trc;
# 407 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    enum AVColorSpace colorspace;

    enum AVChromaLocation chroma_location;
# 418 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int64_t best_effort_timestamp;
# 427 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int64_t pkt_pos;
# 437 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int64_t pkt_duration;
# 446 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    AVDictionary *metadata;
# 457 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int decode_error_flags;
# 468 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int channels;
# 478 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
    int pkt_size;






   
    int8_t *qscale_table;




   
    int qstride;

   
    int qscale_type;




    AVBufferRef *qp_table_buf;

} AVFrame;






int64_t av_frame_get_best_effort_timestamp(const AVFrame *frame);
void av_frame_set_best_effort_timestamp(AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_duration (const AVFrame *frame);
void av_frame_set_pkt_duration (AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_pos (const AVFrame *frame);
void av_frame_set_pkt_pos (AVFrame *frame, int64_t val);
int64_t av_frame_get_channel_layout (const AVFrame *frame);
void av_frame_set_channel_layout (AVFrame *frame, int64_t val);
int av_frame_get_channels (const AVFrame *frame);
void av_frame_set_channels (AVFrame *frame, int val);
int av_frame_get_sample_rate (const AVFrame *frame);
void av_frame_set_sample_rate (AVFrame *frame, int val);
AVDictionary *av_frame_get_metadata (const AVFrame *frame);
void av_frame_set_metadata (AVFrame *frame, AVDictionary *val);
int av_frame_get_decode_error_flags (const AVFrame *frame);
void av_frame_set_decode_error_flags (AVFrame *frame, int val);
int av_frame_get_pkt_size(const AVFrame *frame);
void av_frame_set_pkt_size(AVFrame *frame, int val);
AVDictionary **avpriv_frame_get_metadatap(AVFrame *frame);

int8_t *av_frame_get_qp_table(AVFrame *f, int *stride, int *type);
int av_frame_set_qp_table(AVFrame *f, AVBufferRef *buf, int stride, int type);

enum AVColorSpace av_frame_get_colorspace(const AVFrame *frame);
void av_frame_set_colorspace(AVFrame *frame, enum AVColorSpace val);
enum AVColorRange av_frame_get_color_range(const AVFrame *frame);
void av_frame_set_color_range(AVFrame *frame, enum AVColorRange val);





const char *av_get_colorspace_name(enum AVColorSpace val);
# 553 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
AVFrame *av_frame_alloc(void);
# 562 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
void av_frame_free(AVFrame **frame);
# 575 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_ref(AVFrame *dst, const AVFrame *src);
# 584 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
AVFrame *av_frame_clone(const AVFrame *src);




void av_frame_unref(AVFrame *frame);




void av_frame_move_ref(AVFrame *dst, AVFrame *src);
# 613 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_get_buffer(AVFrame *frame, int align);
# 627 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_is_writable(AVFrame *frame);
# 640 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_make_writable(AVFrame *frame);
# 653 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_copy(AVFrame *dst, const AVFrame *src);
# 663 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
int av_frame_copy_props(AVFrame *dst, const AVFrame *src);
# 673 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
AVBufferRef *av_frame_get_plane_buffer(AVFrame *frame, int plane);
# 684 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/frame.h"
AVFrameSideData *av_frame_new_side_data(AVFrame *frame,
                                        enum AVFrameSideDataType type,
                                        int size);





AVFrameSideData *av_frame_get_side_data(const AVFrame *frame,
                                        enum AVFrameSideDataType type);





void av_frame_remove_side_data(AVFrame *frame, enum AVFrameSideDataType type);




const char *av_frame_side_data_name(enum AVFrameSideDataType type);
# 39 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/pixfmt.h" 1
# 41 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavutil/rational.h" 1
# 42 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2

# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/version.h" 1
# 44 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h" 2
# 101 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
enum AVCodecID {
    AV_CODEC_ID_NONE,


    AV_CODEC_ID_MPEG1VIDEO,
    AV_CODEC_ID_MPEG2VIDEO,

    AV_CODEC_ID_MPEG2VIDEO_XVMC,

    AV_CODEC_ID_H261,
    AV_CODEC_ID_H263,
    AV_CODEC_ID_RV10,
    AV_CODEC_ID_RV20,
    AV_CODEC_ID_MJPEG,
    AV_CODEC_ID_MJPEGB,
    AV_CODEC_ID_LJPEG,
    AV_CODEC_ID_SP5X,
    AV_CODEC_ID_JPEGLS,
    AV_CODEC_ID_MPEG4,
    AV_CODEC_ID_RAWVIDEO,
    AV_CODEC_ID_MSMPEG4V1,
    AV_CODEC_ID_MSMPEG4V2,
    AV_CODEC_ID_MSMPEG4V3,
    AV_CODEC_ID_WMV1,
    AV_CODEC_ID_WMV2,
    AV_CODEC_ID_H263P,
    AV_CODEC_ID_H263I,
    AV_CODEC_ID_FLV1,
    AV_CODEC_ID_SVQ1,
    AV_CODEC_ID_SVQ3,
    AV_CODEC_ID_DVVIDEO,
    AV_CODEC_ID_HUFFYUV,
    AV_CODEC_ID_CYUV,
    AV_CODEC_ID_H264,
    AV_CODEC_ID_INDEO3,
    AV_CODEC_ID_VP3,
    AV_CODEC_ID_THEORA,
    AV_CODEC_ID_ASV1,
    AV_CODEC_ID_ASV2,
    AV_CODEC_ID_FFV1,
    AV_CODEC_ID_4XM,
    AV_CODEC_ID_VCR1,
    AV_CODEC_ID_CLJR,
    AV_CODEC_ID_MDEC,
    AV_CODEC_ID_ROQ,
    AV_CODEC_ID_INTERPLAY_VIDEO,
    AV_CODEC_ID_XAN_WC3,
    AV_CODEC_ID_XAN_WC4,
    AV_CODEC_ID_RPZA,
    AV_CODEC_ID_CINEPAK,
    AV_CODEC_ID_WS_VQA,
    AV_CODEC_ID_MSRLE,
    AV_CODEC_ID_MSVIDEO1,
    AV_CODEC_ID_IDCIN,
    AV_CODEC_ID_8BPS,
    AV_CODEC_ID_SMC,
    AV_CODEC_ID_FLIC,
    AV_CODEC_ID_TRUEMOTION1,
    AV_CODEC_ID_VMDVIDEO,
    AV_CODEC_ID_MSZH,
    AV_CODEC_ID_ZLIB,
    AV_CODEC_ID_QTRLE,
    AV_CODEC_ID_TSCC,
    AV_CODEC_ID_ULTI,
    AV_CODEC_ID_QDRAW,
    AV_CODEC_ID_VIXL,
    AV_CODEC_ID_QPEG,
    AV_CODEC_ID_PNG,
    AV_CODEC_ID_PPM,
    AV_CODEC_ID_PBM,
    AV_CODEC_ID_PGM,
    AV_CODEC_ID_PGMYUV,
    AV_CODEC_ID_PAM,
    AV_CODEC_ID_FFVHUFF,
    AV_CODEC_ID_RV30,
    AV_CODEC_ID_RV40,
    AV_CODEC_ID_VC1,
    AV_CODEC_ID_WMV3,
    AV_CODEC_ID_LOCO,
    AV_CODEC_ID_WNV1,
    AV_CODEC_ID_AASC,
    AV_CODEC_ID_INDEO2,
    AV_CODEC_ID_FRAPS,
    AV_CODEC_ID_TRUEMOTION2,
    AV_CODEC_ID_BMP,
    AV_CODEC_ID_CSCD,
    AV_CODEC_ID_MMVIDEO,
    AV_CODEC_ID_ZMBV,
    AV_CODEC_ID_AVS,
    AV_CODEC_ID_SMACKVIDEO,
    AV_CODEC_ID_NUV,
    AV_CODEC_ID_KMVC,
    AV_CODEC_ID_FLASHSV,
    AV_CODEC_ID_CAVS,
    AV_CODEC_ID_JPEG2000,
    AV_CODEC_ID_VMNC,
    AV_CODEC_ID_VP5,
    AV_CODEC_ID_VP6,
    AV_CODEC_ID_VP6F,
    AV_CODEC_ID_TARGA,
    AV_CODEC_ID_DSICINVIDEO,
    AV_CODEC_ID_TIERTEXSEQVIDEO,
    AV_CODEC_ID_TIFF,
    AV_CODEC_ID_GIF,
    AV_CODEC_ID_DXA,
    AV_CODEC_ID_DNXHD,
    AV_CODEC_ID_THP,
    AV_CODEC_ID_SGI,
    AV_CODEC_ID_C93,
    AV_CODEC_ID_BETHSOFTVID,
    AV_CODEC_ID_PTX,
    AV_CODEC_ID_TXD,
    AV_CODEC_ID_VP6A,
    AV_CODEC_ID_AMV,
    AV_CODEC_ID_VB,
    AV_CODEC_ID_PCX,
    AV_CODEC_ID_SUNRAST,
    AV_CODEC_ID_INDEO4,
    AV_CODEC_ID_INDEO5,
    AV_CODEC_ID_MIMIC,
    AV_CODEC_ID_RL2,
    AV_CODEC_ID_ESCAPE124,
    AV_CODEC_ID_DIRAC,
    AV_CODEC_ID_BFI,
    AV_CODEC_ID_CMV,
    AV_CODEC_ID_MOTIONPIXELS,
    AV_CODEC_ID_TGV,
    AV_CODEC_ID_TGQ,
    AV_CODEC_ID_TQI,
    AV_CODEC_ID_AURA,
    AV_CODEC_ID_AURA2,
    AV_CODEC_ID_V210X,
    AV_CODEC_ID_TMV,
    AV_CODEC_ID_V210,
    AV_CODEC_ID_DPX,
    AV_CODEC_ID_MAD,
    AV_CODEC_ID_FRWU,
    AV_CODEC_ID_FLASHSV2,
    AV_CODEC_ID_CDGRAPHICS,
    AV_CODEC_ID_R210,
    AV_CODEC_ID_ANM,
    AV_CODEC_ID_BINKVIDEO,
    AV_CODEC_ID_IFF_ILBM,
    AV_CODEC_ID_IFF_BYTERUN1,
    AV_CODEC_ID_KGV1,
    AV_CODEC_ID_YOP,
    AV_CODEC_ID_VP8,
    AV_CODEC_ID_PICTOR,
    AV_CODEC_ID_ANSI,
    AV_CODEC_ID_A64_MULTI,
    AV_CODEC_ID_A64_MULTI5,
    AV_CODEC_ID_R10K,
    AV_CODEC_ID_MXPEG,
    AV_CODEC_ID_LAGARITH,
    AV_CODEC_ID_PRORES,
    AV_CODEC_ID_JV,
    AV_CODEC_ID_DFA,
    AV_CODEC_ID_WMV3IMAGE,
    AV_CODEC_ID_VC1IMAGE,
    AV_CODEC_ID_UTVIDEO,
    AV_CODEC_ID_BMV_VIDEO,
    AV_CODEC_ID_VBLE,
    AV_CODEC_ID_DXTORY,
    AV_CODEC_ID_V410,
    AV_CODEC_ID_XWD,
    AV_CODEC_ID_CDXL,
    AV_CODEC_ID_XBM,
    AV_CODEC_ID_ZEROCODEC,
    AV_CODEC_ID_MSS1,
    AV_CODEC_ID_MSA1,
    AV_CODEC_ID_TSCC2,
    AV_CODEC_ID_MTS2,
    AV_CODEC_ID_CLLC,
    AV_CODEC_ID_MSS2,
    AV_CODEC_ID_VP9,
    AV_CODEC_ID_AIC,
    AV_CODEC_ID_ESCAPE130,
    AV_CODEC_ID_G2M,
    AV_CODEC_ID_WEBP,
    AV_CODEC_ID_HNM4_VIDEO,
    AV_CODEC_ID_HEVC,

    AV_CODEC_ID_FIC,
    AV_CODEC_ID_ALIAS_PIX,
    AV_CODEC_ID_BRENDER_PIX,
    AV_CODEC_ID_PAF_VIDEO,
    AV_CODEC_ID_EXR,
    AV_CODEC_ID_VP7,
    AV_CODEC_ID_SANM,
    AV_CODEC_ID_SGIRLE,
    AV_CODEC_ID_MVC1,
    AV_CODEC_ID_MVC2,
    AV_CODEC_ID_HQX,
    AV_CODEC_ID_TDSC,
    AV_CODEC_ID_HQ_HQA,
    AV_CODEC_ID_HAP,
    AV_CODEC_ID_DDS,
    AV_CODEC_ID_DXV,

    AV_CODEC_ID_Y41P = 0x8000,
    AV_CODEC_ID_AVRP,
    AV_CODEC_ID_012V,
    AV_CODEC_ID_AVUI,
    AV_CODEC_ID_AYUV,
    AV_CODEC_ID_TARGA_Y216,
    AV_CODEC_ID_V308,
    AV_CODEC_ID_V408,
    AV_CODEC_ID_YUV4,
    AV_CODEC_ID_AVRN,
    AV_CODEC_ID_CPIA,
    AV_CODEC_ID_XFACE,
    AV_CODEC_ID_SNOW,
    AV_CODEC_ID_SMVJPEG,
    AV_CODEC_ID_APNG,


    AV_CODEC_ID_FIRST_AUDIO = 0x10000,
    AV_CODEC_ID_PCM_S16LE = 0x10000,
    AV_CODEC_ID_PCM_S16BE,
    AV_CODEC_ID_PCM_U16LE,
    AV_CODEC_ID_PCM_U16BE,
    AV_CODEC_ID_PCM_S8,
    AV_CODEC_ID_PCM_U8,
    AV_CODEC_ID_PCM_MULAW,
    AV_CODEC_ID_PCM_ALAW,
    AV_CODEC_ID_PCM_S32LE,
    AV_CODEC_ID_PCM_S32BE,
    AV_CODEC_ID_PCM_U32LE,
    AV_CODEC_ID_PCM_U32BE,
    AV_CODEC_ID_PCM_S24LE,
    AV_CODEC_ID_PCM_S24BE,
    AV_CODEC_ID_PCM_U24LE,
    AV_CODEC_ID_PCM_U24BE,
    AV_CODEC_ID_PCM_S24DAUD,
    AV_CODEC_ID_PCM_ZORK,
    AV_CODEC_ID_PCM_S16LE_PLANAR,
    AV_CODEC_ID_PCM_DVD,
    AV_CODEC_ID_PCM_F32BE,
    AV_CODEC_ID_PCM_F32LE,
    AV_CODEC_ID_PCM_F64BE,
    AV_CODEC_ID_PCM_F64LE,
    AV_CODEC_ID_PCM_BLURAY,
    AV_CODEC_ID_PCM_LXF,
    AV_CODEC_ID_S302M,
    AV_CODEC_ID_PCM_S8_PLANAR,
    AV_CODEC_ID_PCM_S24LE_PLANAR,
    AV_CODEC_ID_PCM_S32LE_PLANAR,
    AV_CODEC_ID_PCM_S16BE_PLANAR,





    AV_CODEC_ID_ADPCM_IMA_QT = 0x11000,
    AV_CODEC_ID_ADPCM_IMA_WAV,
    AV_CODEC_ID_ADPCM_IMA_DK3,
    AV_CODEC_ID_ADPCM_IMA_DK4,
    AV_CODEC_ID_ADPCM_IMA_WS,
    AV_CODEC_ID_ADPCM_IMA_SMJPEG,
    AV_CODEC_ID_ADPCM_MS,
    AV_CODEC_ID_ADPCM_4XM,
    AV_CODEC_ID_ADPCM_XA,
    AV_CODEC_ID_ADPCM_ADX,
    AV_CODEC_ID_ADPCM_EA,
    AV_CODEC_ID_ADPCM_G726,
    AV_CODEC_ID_ADPCM_CT,
    AV_CODEC_ID_ADPCM_SWF,
    AV_CODEC_ID_ADPCM_YAMAHA,
    AV_CODEC_ID_ADPCM_SBPRO_4,
    AV_CODEC_ID_ADPCM_SBPRO_3,
    AV_CODEC_ID_ADPCM_SBPRO_2,
    AV_CODEC_ID_ADPCM_THP,
    AV_CODEC_ID_ADPCM_IMA_AMV,
    AV_CODEC_ID_ADPCM_EA_R1,
    AV_CODEC_ID_ADPCM_EA_R3,
    AV_CODEC_ID_ADPCM_EA_R2,
    AV_CODEC_ID_ADPCM_IMA_EA_SEAD,
    AV_CODEC_ID_ADPCM_IMA_EA_EACS,
    AV_CODEC_ID_ADPCM_EA_XAS,
    AV_CODEC_ID_ADPCM_EA_MAXIS_XA,
    AV_CODEC_ID_ADPCM_IMA_ISS,
    AV_CODEC_ID_ADPCM_G722,
    AV_CODEC_ID_ADPCM_IMA_APC,
    AV_CODEC_ID_ADPCM_VIMA,

    AV_CODEC_ID_VIMA = AV_CODEC_ID_ADPCM_VIMA,


    AV_CODEC_ID_ADPCM_AFC = 0x11800,
    AV_CODEC_ID_ADPCM_IMA_OKI,
    AV_CODEC_ID_ADPCM_DTK,
    AV_CODEC_ID_ADPCM_IMA_RAD,
    AV_CODEC_ID_ADPCM_G726LE,
    AV_CODEC_ID_ADPCM_THP_LE,


    AV_CODEC_ID_AMR_NB = 0x12000,
    AV_CODEC_ID_AMR_WB,


    AV_CODEC_ID_RA_144 = 0x13000,
    AV_CODEC_ID_RA_288,


    AV_CODEC_ID_ROQ_DPCM = 0x14000,
    AV_CODEC_ID_INTERPLAY_DPCM,
    AV_CODEC_ID_XAN_DPCM,
    AV_CODEC_ID_SOL_DPCM,


    AV_CODEC_ID_MP2 = 0x15000,
    AV_CODEC_ID_MP3,
    AV_CODEC_ID_AAC,
    AV_CODEC_ID_AC3,
    AV_CODEC_ID_DTS,
    AV_CODEC_ID_VORBIS,
    AV_CODEC_ID_DVAUDIO,
    AV_CODEC_ID_WMAV1,
    AV_CODEC_ID_WMAV2,
    AV_CODEC_ID_MACE3,
    AV_CODEC_ID_MACE6,
    AV_CODEC_ID_VMDAUDIO,
    AV_CODEC_ID_FLAC,
    AV_CODEC_ID_MP3ADU,
    AV_CODEC_ID_MP3ON4,
    AV_CODEC_ID_SHORTEN,
    AV_CODEC_ID_ALAC,
    AV_CODEC_ID_WESTWOOD_SND1,
    AV_CODEC_ID_GSM,
    AV_CODEC_ID_QDM2,
    AV_CODEC_ID_COOK,
    AV_CODEC_ID_TRUESPEECH,
    AV_CODEC_ID_TTA,
    AV_CODEC_ID_SMACKAUDIO,
    AV_CODEC_ID_QCELP,
    AV_CODEC_ID_WAVPACK,
    AV_CODEC_ID_DSICINAUDIO,
    AV_CODEC_ID_IMC,
    AV_CODEC_ID_MUSEPACK7,
    AV_CODEC_ID_MLP,
    AV_CODEC_ID_GSM_MS,
    AV_CODEC_ID_ATRAC3,

    AV_CODEC_ID_VOXWARE,

    AV_CODEC_ID_APE,
    AV_CODEC_ID_NELLYMOSER,
    AV_CODEC_ID_MUSEPACK8,
    AV_CODEC_ID_SPEEX,
    AV_CODEC_ID_WMAVOICE,
    AV_CODEC_ID_WMAPRO,
    AV_CODEC_ID_WMALOSSLESS,
    AV_CODEC_ID_ATRAC3P,
    AV_CODEC_ID_EAC3,
    AV_CODEC_ID_SIPR,
    AV_CODEC_ID_MP1,
    AV_CODEC_ID_TWINVQ,
    AV_CODEC_ID_TRUEHD,
    AV_CODEC_ID_MP4ALS,
    AV_CODEC_ID_ATRAC1,
    AV_CODEC_ID_BINKAUDIO_RDFT,
    AV_CODEC_ID_BINKAUDIO_DCT,
    AV_CODEC_ID_AAC_LATM,
    AV_CODEC_ID_QDMC,
    AV_CODEC_ID_CELT,
    AV_CODEC_ID_G723_1,
    AV_CODEC_ID_G729,
    AV_CODEC_ID_8SVX_EXP,
    AV_CODEC_ID_8SVX_FIB,
    AV_CODEC_ID_BMV_AUDIO,
    AV_CODEC_ID_RALF,
    AV_CODEC_ID_IAC,
    AV_CODEC_ID_ILBC,
    AV_CODEC_ID_OPUS,
    AV_CODEC_ID_COMFORT_NOISE,
    AV_CODEC_ID_TAK,
    AV_CODEC_ID_METASOUND,
    AV_CODEC_ID_PAF_AUDIO,
    AV_CODEC_ID_ON2AVC,
    AV_CODEC_ID_DSS_SP,

    AV_CODEC_ID_FFWAVESYNTH = 0x15800,
    AV_CODEC_ID_SONIC,
    AV_CODEC_ID_SONIC_LS,
    AV_CODEC_ID_EVRC,
    AV_CODEC_ID_SMV,
    AV_CODEC_ID_DSD_LSBF,
    AV_CODEC_ID_DSD_MSBF,
    AV_CODEC_ID_DSD_LSBF_PLANAR,
    AV_CODEC_ID_DSD_MSBF_PLANAR,
    AV_CODEC_ID_4GV,


    AV_CODEC_ID_FIRST_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVD_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVB_SUBTITLE,
    AV_CODEC_ID_TEXT,
    AV_CODEC_ID_XSUB,
    AV_CODEC_ID_SSA,
    AV_CODEC_ID_MOV_TEXT,
    AV_CODEC_ID_HDMV_PGS_SUBTITLE,
    AV_CODEC_ID_DVB_TELETEXT,
    AV_CODEC_ID_SRT,

    AV_CODEC_ID_MICRODVD = 0x17800,
    AV_CODEC_ID_EIA_608,
    AV_CODEC_ID_JACOSUB,
    AV_CODEC_ID_SAMI,
    AV_CODEC_ID_REALTEXT,
    AV_CODEC_ID_STL,
    AV_CODEC_ID_SUBVIEWER1,
    AV_CODEC_ID_SUBVIEWER,
    AV_CODEC_ID_SUBRIP,
    AV_CODEC_ID_WEBVTT,
    AV_CODEC_ID_MPL2,
    AV_CODEC_ID_VPLAYER,
    AV_CODEC_ID_PJS,
    AV_CODEC_ID_ASS,
    AV_CODEC_ID_HDMV_TEXT_SUBTITLE,


    AV_CODEC_ID_FIRST_UNKNOWN = 0x18000,
    AV_CODEC_ID_TTF = 0x18000,

    AV_CODEC_ID_BINTEXT = 0x18800,
    AV_CODEC_ID_XBIN,
    AV_CODEC_ID_IDF,
    AV_CODEC_ID_OTF,
    AV_CODEC_ID_SMPTE_KLV,
    AV_CODEC_ID_DVD_NAV,
    AV_CODEC_ID_TIMED_ID3,
    AV_CODEC_ID_BIN_DATA,


    AV_CODEC_ID_PROBE = 0x19000,

    AV_CODEC_ID_MPEG2TS = 0x20000,

    AV_CODEC_ID_MPEG4SYSTEMS = 0x20001,

    AV_CODEC_ID_FFMETADATA = 0x21000,
};






typedef struct AVCodecDescriptor {
    enum AVCodecID id;
    enum AVMediaType type;





    const char *name;



    const char *long_name;



    int props;






    const char *const *mime_types;
} AVCodecDescriptor;
# 646 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
enum Motion_Est_ID {
    ME_ZERO = 1,
    ME_FULL,
    ME_LOG,
    ME_PHODS,
    ME_EPZS,
    ME_X1,
    ME_HEX,
    ME_UMH,
    ME_TESA,
    ME_ITER=50,
};





enum AVDiscard{


    AVDISCARD_NONE =-16,
    AVDISCARD_DEFAULT = 0,
    AVDISCARD_NONREF = 8,
    AVDISCARD_BIDIR = 16,
    AVDISCARD_NONINTRA= 24,
    AVDISCARD_NONKEY = 32,
    AVDISCARD_ALL = 48,
};

enum AVAudioServiceType {
    AV_AUDIO_SERVICE_TYPE_MAIN = 0,
    AV_AUDIO_SERVICE_TYPE_EFFECTS = 1,
    AV_AUDIO_SERVICE_TYPE_VISUALLY_IMPAIRED = 2,
    AV_AUDIO_SERVICE_TYPE_HEARING_IMPAIRED = 3,
    AV_AUDIO_SERVICE_TYPE_DIALOGUE = 4,
    AV_AUDIO_SERVICE_TYPE_COMMENTARY = 5,
    AV_AUDIO_SERVICE_TYPE_EMERGENCY = 6,
    AV_AUDIO_SERVICE_TYPE_VOICE_OVER = 7,
    AV_AUDIO_SERVICE_TYPE_KARAOKE = 8,
    AV_AUDIO_SERVICE_TYPE_NB ,
};




typedef struct RcOverride{
    int start_frame;
    int end_frame;
    int qscale;
    float quality_factor;
} RcOverride;
# 1153 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
typedef struct AVPanScan{





    int id;






    int width;
    int height;






    int16_t position[3][2];
}AVPanScan;
# 1195 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
enum AVPacketSideDataType {
    AV_PKT_DATA_PALETTE,
    AV_PKT_DATA_NEW_EXTRADATA,
# 1214 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_PARAM_CHANGE,
# 1235 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_H263_MB_INFO,





    AV_PKT_DATA_REPLAYGAIN,
# 1250 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_DISPLAYMATRIX,





    AV_PKT_DATA_STEREO3D,





    AV_PKT_DATA_AUDIO_SERVICE_TYPE,
# 1274 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_QUALITY_STATS,
# 1285 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_SKIP_SAMPLES=70,
# 1295 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_JP_DUALMONO,





    AV_PKT_DATA_STRINGS_METADATA,
# 1312 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AV_PKT_DATA_SUBTITLE_POSITION,







    AV_PKT_DATA_MATROSKA_BLOCKADDITIONAL,




    AV_PKT_DATA_WEBVTT_IDENTIFIER,





    AV_PKT_DATA_WEBVTT_SETTINGS,






    AV_PKT_DATA_METADATA_UPDATE,
};



typedef struct AVPacketSideData {
    uint8_t *data;
    int size;
    enum AVPacketSideDataType type;
} AVPacketSideData;
# 1371 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
typedef struct AVPacket {





    AVBufferRef *buf;
# 1387 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int64_t pts;





    int64_t dts;
    uint8_t *data;
    int size;
    int stream_index;



    int flags;




    AVPacketSideData *side_data;
    int side_data_elems;





    int duration;

    int64_t pos;
# 1433 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int64_t convergence_duration;
} AVPacket;



enum AVSideDataParamChangeFlags {
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT = 0x0001,
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT = 0x0002,
    AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE = 0x0004,
    AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS = 0x0008,
};




struct AVCodecInternal;

enum AVFieldOrder {
    AV_FIELD_UNKNOWN,
    AV_FIELD_PROGRESSIVE,
    AV_FIELD_TT,
    AV_FIELD_BB,
    AV_FIELD_TB,
    AV_FIELD_BT,
};
# 1468 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
typedef struct AVCodecContext {




    const AVClass *av_class;
    int log_level_offset;

    enum AVMediaType codec_type;
    const struct AVCodec *codec;




   
    char codec_name[32];

    enum AVCodecID codec_id;
# 1500 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    unsigned int codec_tag;





   
    unsigned int stream_codec_tag;


    void *priv_data;







    struct AVCodecInternal *internal;






    void *opaque;







    int bit_rate;







    int bit_rate_tolerance;







    int global_quality;





    int compression_level;







    int flags;






    int flags2;
# 1583 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint8_t *extradata;
    int extradata_size;
# 1597 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AVRational time_base;
# 1606 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int ticks_per_frame;
# 1630 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int delay;
# 1647 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int width, height;
# 1662 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int coded_width, coded_height;
# 1673 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int gop_size;
# 1688 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    enum AVPixelFormat pix_fmt;






    int me_method;
# 1721 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[8],
                            int y, int type, int height);
# 1738 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    enum AVPixelFormat (*get_format)(struct AVCodecContext *s, const enum AVPixelFormat * fmt);







    int max_b_frames;
# 1755 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    float b_quant_factor;



    int rc_strategy;



    int b_frame_strategy;






    float b_quant_offset;







    int has_b_frames;






    int mpeg_quant;
# 1794 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    float i_quant_factor;






    float i_quant_offset;






    float lumi_masking;






    float temporal_cplx_masking;






    float spatial_cplx_masking;






    float p_masking;






    float dark_masking;






    int slice_count;





     int prediction_method;
# 1859 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int *slice_offset;
# 1868 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AVRational sample_aspect_ratio;






    int me_cmp;





    int me_sub_cmp;





    int mb_cmp;





    int ildct_cmp;
# 1916 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int dia_size;






    int last_predictor_count;






    int pre_me;






    int me_pre_cmp;






    int pre_dia_size;






    int me_subpel_quality;
# 1963 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int dtg_active_format;
# 1980 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int me_range;





    int intra_quant_bias;





    int inter_quant_bias;







    int slice_flags;
# 2012 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int xvmc_acceleration;







    int mb_decision;
# 2030 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint16_t *intra_matrix;






    uint16_t *inter_matrix;







    int scenechange_threshold;






    int noise_reduction;





   
    int me_threshold;




   
    int mb_threshold;







    int intra_dc_precision;






    int skip_top;






    int skip_bottom;





   
    float border_masking;







    int mb_lmin;






    int mb_lmax;






    int me_penalty_compensation;






    int bidir_refine;






    int brd_scale;






    int keyint_min;






    int refs;






    int chromaoffset;







    int scenechange_factor;
# 2168 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int mv0_threshold;






    int b_sensitivity;






    enum AVColorPrimaries color_primaries;






    enum AVColorTransferCharacteristic color_trc;






    enum AVColorSpace colorspace;






    enum AVColorRange color_range;






    enum AVChromaLocation chroma_sample_location;
# 2219 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int slices;





    enum AVFieldOrder field_order;


    int sample_rate;
    int channels;






    enum AVSampleFormat sample_fmt;
# 2248 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int frame_size;
# 2259 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int frame_number;





    int block_align;






    int cutoff;






    uint64_t channel_layout;






    uint64_t request_channel_layout;






    enum AVAudioServiceType audio_service_type;







    enum AVSampleFormat request_sample_fmt;
# 2383 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*get_buffer2)(struct AVCodecContext *s, AVFrame *frame, int flags);
# 2396 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int refcounted_frames;


    float qcompress;
    float qblur;






    int qmin;






    int qmax;






    int max_qdiff;





   
    float rc_qsquish;

   
    float rc_qmod_amp;
   
    int rc_qmod_freq;







    int rc_buffer_size;






    int rc_override_count;
    RcOverride *rc_override;





   
    const char *rc_eq;







    int rc_max_rate;






    int rc_min_rate;





   
    float rc_buffer_aggressivity;

   
    float rc_initial_cplx;







    float rc_max_available_vbv_use;






    float rc_min_vbv_overflow_use;






    int rc_initial_buffer_occupancy;
# 2517 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int coder_type;






    int context_model;





   
    int lmin;




   
    int lmax;







    int frame_skip_threshold;






    int frame_skip_factor;






    int frame_skip_exp;






    int frame_skip_cmp;






    int trellis;





    int min_prediction_order;





    int max_prediction_order;






    int64_t timecode_frame_start;







    void (*rtp_callback)(struct AVCodecContext *avctx, void *data, int size, int mb_nb);

    int rtp_payload_size;







    int mv_bits;
    int header_bits;
    int i_tex_bits;
    int p_tex_bits;
    int i_count;
    int p_count;
    int skip_count;
    int misc_bits;






    int frame_bits;






    char *stats_out;







    char *stats_in;






    int workaround_bugs;
# 2680 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int strict_std_compliance;
# 2692 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int error_concealment;
# 2702 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int debug;
# 2739 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int debug_mv;
# 2750 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int err_recognition;
# 2775 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int64_t reordered_opaque;






    struct AVHWAccel *hwaccel;
# 2794 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    void *hwaccel_context;






    uint64_t error[8];






    int dct_algo;
# 2821 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int idct_algo;
# 2856 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
     int bits_per_coded_sample;






    int bits_per_raw_sample;
# 2873 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
     int lowres;
# 2884 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AVFrame *coded_frame;
# 2893 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int thread_count;
# 2903 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int thread_type;
# 2912 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int active_thread_type;
# 2922 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int thread_safe_callbacks;
# 2933 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);
# 2953 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);






     int nsse_weight;






     int profile;
# 3056 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
     int level;







    enum AVDiscard skip_loop_filter;






    enum AVDiscard skip_idct;






    enum AVDiscard skip_frame;
# 3088 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint8_t *subtitle_header;
    int subtitle_header_size;






   
    int error_rate;
# 3106 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint64_t vbv_delay;
# 3121 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int side_data_only_packets;
# 3138 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int initial_padding;







    AVRational framerate;






    enum AVPixelFormat sw_pix_fmt;
# 3162 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    AVRational pkt_timebase;
# 3171 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    const AVCodecDescriptor *codec_descriptor;
# 3189 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int64_t pts_correction_num_faulty_pts;
    int64_t pts_correction_num_faulty_dts;
    int64_t pts_correction_last_pts;
    int64_t pts_correction_last_dts;






    char *sub_charenc;







    int sub_charenc_mode;
# 3225 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int skip_alpha;






    int seek_preroll;
# 3253 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint16_t *chroma_intra_matrix;
# 3263 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    uint8_t *dump_separator;







    char *codec_whitelist;







    unsigned properties;


} AVCodecContext;

AVRational av_codec_get_pkt_timebase (const AVCodecContext *avctx);
void av_codec_set_pkt_timebase (AVCodecContext *avctx, AVRational val);

const AVCodecDescriptor *av_codec_get_codec_descriptor(const AVCodecContext *avctx);
void av_codec_set_codec_descriptor(AVCodecContext *avctx, const AVCodecDescriptor *desc);

unsigned av_codec_get_codec_properties(const AVCodecContext *avctx);

int av_codec_get_lowres(const AVCodecContext *avctx);
void av_codec_set_lowres(AVCodecContext *avctx, int val);

int av_codec_get_seek_preroll(const AVCodecContext *avctx);
void av_codec_set_seek_preroll(AVCodecContext *avctx, int val);

uint16_t *av_codec_get_chroma_intra_matrix(const AVCodecContext *avctx);
void av_codec_set_chroma_intra_matrix(AVCodecContext *avctx, uint16_t *val);




typedef struct AVProfile {
    int profile;
    const char *name;
} AVProfile;

typedef struct AVCodecDefault AVCodecDefault;

struct AVSubtitle;




typedef struct AVCodec {






    const char *name;




    const char *long_name;
    enum AVMediaType type;
    enum AVCodecID id;




    int capabilities;
    const AVRational *supported_framerates;
    const enum AVPixelFormat *pix_fmts;
    const int *supported_samplerates;
    const enum AVSampleFormat *sample_fmts;
    const uint64_t *channel_layouts;
    uint8_t max_lowres;
    const AVClass *priv_class;
    const AVProfile *profiles;
# 3352 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int priv_data_size;
    struct AVCodec *next;
# 3363 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*init_thread_copy)(AVCodecContext *);







    int (*update_thread_context)(AVCodecContext *dst, const AVCodecContext *src);





    const AVCodecDefault *defaults;




    void (*init_static_data)(struct AVCodec *codec);

    int (*init)(AVCodecContext *);
    int (*encode_sub)(AVCodecContext *, uint8_t *buf, int buf_size,
                      const struct AVSubtitle *sub);
# 3397 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*encode2)(AVCodecContext *avctx, AVPacket *avpkt, const AVFrame *frame,
                   int *got_packet_ptr);
    int (*decode)(AVCodecContext *, void *outdata, int *outdata_size, AVPacket *avpkt);
    int (*close)(AVCodecContext *);




    void (*flush)(AVCodecContext *);




    int caps_internal;
} AVCodec;

int av_codec_get_max_lowres(const AVCodec *codec);

struct MpegEncContext;





typedef struct AVHWAccel {





    const char *name;






    enum AVMediaType type;






    enum AVCodecID id;






    enum AVPixelFormat pix_fmt;





    int capabilities;
# 3463 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    struct AVHWAccel *next;




    int (*alloc_frame)(AVCodecContext *avctx, AVFrame *frame);
# 3484 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3498 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
# 3509 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*end_frame)(AVCodecContext *avctx);
# 3518 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int frame_priv_data_size;
# 3529 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    void (*decode_mb)(struct MpegEncContext *s);
# 3538 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int (*init)(AVCodecContext *avctx);







    int (*uninit)(AVCodecContext *avctx);





    int priv_data_size;
} AVHWAccel;
# 3588 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
typedef struct AVPicture {
    uint8_t *data[8];
    int linesize[8];
} AVPicture;





enum AVSubtitleType {
    SUBTITLE_NONE,

    SUBTITLE_BITMAP,





    SUBTITLE_TEXT,





    SUBTITLE_ASS,
};



typedef struct AVSubtitleRect {
    int x;
    int y;
    int w;
    int h;
    int nb_colors;





    AVPicture pict;
    enum AVSubtitleType type;

    char *text;






    char *ass;

    int flags;
} AVSubtitleRect;

typedef struct AVSubtitle {
    uint16_t format;
    uint32_t start_display_time;
    uint32_t end_display_time;
    unsigned num_rects;
    AVSubtitleRect **rects;
    int64_t pts;
} AVSubtitle;






AVCodec *av_codec_next(const AVCodec *c);




unsigned avcodec_version(void);




const char *avcodec_configuration(void);




const char *avcodec_license(void);
# 3682 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_register(AVCodec *codec);
# 3694 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_register_all(void);
# 3710 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);





void avcodec_free_context(AVCodecContext **avctx);
# 3727 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);







const AVClass *avcodec_get_class(void);







const AVClass *avcodec_get_frame_class(void);







const AVClass *avcodec_get_subtitle_rect_class(void);
# 3764 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);
# 3805 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
# 3816 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_close(AVCodecContext *avctx);






void avsubtitle_free(AVSubtitle *sub);
# 3842 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_init_packet(AVPacket *pkt);
# 3852 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_new_packet(AVPacket *pkt, int size);







void av_shrink_packet(AVPacket *pkt, int size);







int av_grow_packet(AVPacket *pkt, int grow_by);
# 3883 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size);





int av_dup_packet(AVPacket *pkt);






int av_copy_packet(AVPacket *dst, const AVPacket *src);






int av_copy_packet_side_data(AVPacket *dst, const AVPacket *src);






void av_free_packet(AVPacket *pkt);
# 3920 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int size);
# 3931 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                               int size);
# 3942 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int *size);

int av_packet_merge_side_data(AVPacket *pkt);

int av_packet_split_side_data(AVPacket *pkt);

const char *av_packet_side_data_name(enum AVPacketSideDataType type);
# 3958 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
uint8_t *av_packet_pack_dictionary(AVDictionary *dict, int *size);
# 3967 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_packet_unpack_dictionary(const uint8_t *data, int size, AVDictionary **dict);
# 3976 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_packet_free_side_data(AVPacket *pkt);
# 3994 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_packet_ref(AVPacket *dst, const AVPacket *src);
# 4004 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_packet_unref(AVPacket *pkt);
# 4014 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_packet_move_ref(AVPacket *dst, AVPacket *src);
# 4028 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_packet_copy_props(AVPacket *dst, const AVPacket *src);
# 4041 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_packet_rescale_ts(AVPacket *pkt, AVRational tb_src, AVRational tb_dst);
# 4058 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
AVCodec *avcodec_find_decoder(enum AVCodecID id);







AVCodec *avcodec_find_decoder_by_name(const char *name);






int avcodec_default_get_buffer2(AVCodecContext *s, AVFrame *frame, int flags);
# 4086 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

unsigned avcodec_get_edge_width(void);
# 4097 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
# 4106 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[8]);
# 4118 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_enum_to_chroma_pos(int *xpos, int *ypos, enum AVChromaLocation pos);
# 4129 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
enum AVChromaLocation avcodec_chroma_pos_to_enum(int xpos, int ypos);
# 4182 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
                          int *got_frame_ptr, const AVPacket *avpkt);
# 4228 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                         int *got_picture_ptr,
                         const AVPacket *avpkt);
# 4259 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
                            int *got_sub_ptr,
                            AVPacket *avpkt);






enum AVPictureStructure {
    AV_PICTURE_STRUCTURE_UNKNOWN,
    AV_PICTURE_STRUCTURE_TOP_FIELD,
    AV_PICTURE_STRUCTURE_BOTTOM_FIELD,
    AV_PICTURE_STRUCTURE_FRAME,
};

typedef struct AVCodecParserContext {
    void *priv_data;
    struct AVCodecParser *parser;
    int64_t frame_offset;
    int64_t cur_offset;

    int64_t next_frame_offset;

    int pict_type;
# 4293 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int repeat_pict;
    int64_t pts;
    int64_t dts;


    int64_t last_pts;
    int64_t last_dts;
    int fetch_timestamp;


    int cur_frame_start_index;
    int64_t cur_frame_offset[4];
    int64_t cur_frame_pts[4];
    int64_t cur_frame_dts[4];

    int flags;






    int64_t offset;
    int64_t cur_frame_end[4];







    int key_frame;
# 4343 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int64_t convergence_duration;
# 4355 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int dts_sync_point;
# 4370 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int dts_ref_dts_delta;
# 4384 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int pts_dts_delta;






    int64_t cur_frame_pos[4];




    int64_t pos;




    int64_t last_pos;






    int duration;

    enum AVFieldOrder field_order;
# 4420 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    enum AVPictureStructure picture_structure;







    int output_picture_number;




    int width;
    int height;




    int coded_width;
    int coded_height;
# 4450 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
    int format;
} AVCodecParserContext;

typedef struct AVCodecParser {
    int codec_ids[5];
    int priv_data_size;
    int (*parser_init)(AVCodecParserContext *s);


    int (*parser_parse)(AVCodecParserContext *s,
                        AVCodecContext *avctx,
                        const uint8_t **poutbuf, int *poutbuf_size,
                        const uint8_t *buf, int buf_size);
    void (*parser_close)(AVCodecParserContext *s);
    int (*split)(AVCodecContext *avctx, const uint8_t *buf, int buf_size);
    struct AVCodecParser *next;
} AVCodecParser;

AVCodecParser *av_parser_next(const AVCodecParser *c);

void av_register_codec_parser(AVCodecParser *parser);
AVCodecParserContext *av_parser_init(int codec_id);
# 4501 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_parser_parse2(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size,
                     int64_t pts, int64_t dts,
                     int64_t pos);





int av_parser_change(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size, int keyframe);
void av_parser_close(AVCodecParserContext *s);
# 4534 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
AVCodec *avcodec_find_encoder(enum AVCodecID id);







AVCodec *avcodec_find_encoder_by_name(const char *name);
# 4583 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
# 4620 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);

int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);
# 4639 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
struct ReSampleContext;
struct AVResampleContext;

typedef struct ReSampleContext ReSampleContext;
# 4660 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
                                        int output_rate, int input_rate,
                                        enum AVSampleFormat sample_fmt_out,
                                        enum AVSampleFormat sample_fmt_in,
                                        int filter_length, int log2_phase_count,
                                        int linear, double cutoff);


int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples);








void audio_resample_close(ReSampleContext *s);
# 4690 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
# 4702 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
# 4718 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);

void av_resample_close(struct AVResampleContext *c);
# 4747 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);
# 4756 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avpicture_free(AVPicture *picture);
# 4781 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
                   enum AVPixelFormat pix_fmt, int width, int height);
# 4802 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avpicture_layout(const AVPicture *src, enum AVPixelFormat pix_fmt,
                     int width, int height,
                     unsigned char *dest, int dest_size);
# 4818 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);




void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum AVPixelFormat pix_fmt, int width, int height);




int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum AVPixelFormat pix_fmt, int top_band, int left_band);




int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
            int padtop, int padbottom, int padleft, int padright, int *color);
# 4873 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);






unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);




int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
                             int has_alpha);
# 4905 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(const enum AVPixelFormat *pix_fmt_list,
                                            enum AVPixelFormat src_pix_fmt,
                                            int has_alpha, int *loss_ptr);




enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
                                            enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);







enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
                                            enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);



enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);
# 4936 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
# 4949 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);

void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
# 4960 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
const char *av_get_profile_name(const AVCodec *codec, int profile);

int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
# 4989 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
                             enum AVSampleFormat sample_fmt, const uint8_t *buf,
                             int buf_size, int align);
# 5002 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void avcodec_flush_buffers(AVCodecContext *avctx);







int av_get_bits_per_sample(enum AVCodecID codec_id);







enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be);
# 5028 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
# 5038 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes);


typedef struct AVBitStreamFilterContext {
    void *priv_data;
    struct AVBitStreamFilter *filter;
    AVCodecParserContext *parser;
    struct AVBitStreamFilterContext *next;
} AVBitStreamFilterContext;


typedef struct AVBitStreamFilter {
    const char *name;
    int priv_data_size;
    int (*filter)(AVBitStreamFilterContext *bsfc,
                  AVCodecContext *avctx, const char *args,
                  uint8_t **poutbuf, int *poutbuf_size,
                  const uint8_t *buf, int buf_size, int keyframe);
    void (*close)(AVBitStreamFilterContext *bsfc);
    struct AVBitStreamFilter *next;
} AVBitStreamFilter;
# 5069 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_register_bitstream_filter(AVBitStreamFilter *bsf);
# 5081 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name);
# 5111 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
                               AVCodecContext *avctx, const char *args,
                               uint8_t **poutbuf, int *poutbuf_size,
                               const uint8_t *buf, int buf_size, int keyframe);







void av_bitstream_filter_close(AVBitStreamFilterContext *bsf);
# 5132 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
AVBitStreamFilter *av_bitstream_filter_next(const AVBitStreamFilter *f);
# 5143 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);





void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size);
# 5158 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
# 5174 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

void av_log_missing_feature(void *avc, const char *feature, int want_sample);
# 5186 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"

void av_log_ask_for_sample(void *avc, const char *msg, ...) ;





void av_register_hwaccel(AVHWAccel *hwaccel);






AVHWAccel *av_hwaccel_next(const AVHWAccel *hwaccel);





enum AVLockOp {
  AV_LOCK_CREATE,
  AV_LOCK_OBTAIN,
  AV_LOCK_RELEASE,
  AV_LOCK_DESTROY,
};
# 5236 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));




enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);





const char *avcodec_get_name(enum AVCodecID id);





int avcodec_is_open(AVCodecContext *s);




int av_codec_is_encoder(const AVCodec *codec);




int av_codec_is_decoder(const AVCodec *codec);




const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
# 5277 "/media/01CDF70B3FE14040/FFmpeg-master/libavcodec/avcodec.h"
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);





const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
# 307 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h" 2






struct AVFormatContext;

struct AVDeviceInfoList;
struct AVDeviceCapabilitiesQuery;
# 408 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_get_packet(AVIOContext *s, AVPacket *pkt, int size);
# 425 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_append_packet(AVIOContext *s, AVPacket *pkt, int size);
# 435 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVFrac {
    int64_t val, num, den;
} AVFrac;





struct AVCodecTag;




typedef struct AVProbeData {
    const char *filename;
    unsigned char *buf;
    int buf_size;
    const char *mime_type;
} AVProbeData;
# 499 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVOutputFormat {
    const char *name;





    const char *long_name;
    const char *mime_type;
    const char *extensions;

    enum AVCodecID audio_codec;
    enum AVCodecID video_codec;
    enum AVCodecID subtitle_codec;






    int flags;





    const struct AVCodecTag * const *codec_tag;


    const AVClass *priv_class;
# 537 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    struct AVOutputFormat *next;



    int priv_data_size;

    int (*write_header)(struct AVFormatContext *);







    int (*write_packet)(struct AVFormatContext *, AVPacket *pkt);
    int (*write_trailer)(struct AVFormatContext *);



    int (*interleave_packet)(struct AVFormatContext *, AVPacket *out,
                             AVPacket *in, int flush);







    int (*query_codec)(enum AVCodecID id, int std_compliance);

    void (*get_output_timestamp)(struct AVFormatContext *s, int stream,
                                 int64_t *dts, int64_t *wall);



    int (*control_message)(struct AVFormatContext *s, int type,
                           void *data, size_t data_size);
# 583 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int (*write_uncoded_frame)(struct AVFormatContext *, int stream_index,
                               AVFrame **frame, unsigned flags);




    int (*get_device_list)(struct AVFormatContext *s, struct AVDeviceInfoList *device_list);




    int (*create_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);




    int (*free_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
    enum AVCodecID data_codec;
} AVOutputFormat;
# 610 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVInputFormat {




    const char *name;






    const char *long_name;






    int flags;






    const char *extensions;

    const struct AVCodecTag * const *codec_tag;

    const AVClass *priv_class;






    const char *mime_type;
# 656 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    struct AVInputFormat *next;




    int raw_codec_id;




    int priv_data_size;






    int (*read_probe)(AVProbeData *);






    int (*read_header)(struct AVFormatContext *);
# 691 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int (*read_packet)(struct AVFormatContext *, AVPacket *pkt);





    int (*read_close)(struct AVFormatContext *);
# 707 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int (*read_seek)(struct AVFormatContext *,
                     int stream_index, int64_t timestamp, int flags);





    int64_t (*read_timestamp)(struct AVFormatContext *s, int stream_index,
                              int64_t *pos, int64_t pos_limit);





    int (*read_play)(struct AVFormatContext *);





    int (*read_pause)(struct AVFormatContext *);







    int (*read_seek2)(struct AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);





    int (*get_device_list)(struct AVFormatContext *s, struct AVDeviceInfoList *device_list);





    int (*create_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);





    int (*free_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
} AVInputFormat;




enum AVStreamParseType {
    AVSTREAM_PARSE_NONE,
    AVSTREAM_PARSE_FULL,
    AVSTREAM_PARSE_HEADERS,
    AVSTREAM_PARSE_TIMESTAMPS,
    AVSTREAM_PARSE_FULL_ONCE,
    AVSTREAM_PARSE_FULL_RAW=((0) | (('R') << 8) | (('A') << 16) | ((unsigned)('W') << 24)),


};

typedef struct AVIndexEntry {
    int64_t pos;
    int64_t timestamp;






    int flags:2;
    int size:30;
    int min_distance;
} AVIndexEntry;
# 829 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVStream {
    int index;





    int id;
# 848 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVCodecContext *codec;
    void *priv_data;





   
    struct AVFrac pts;
# 871 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVRational time_base;
# 881 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t start_time;






    int64_t duration;

    int64_t nb_frames;

    int disposition;

    enum AVDiscard discard;






    AVRational sample_aspect_ratio;

    AVDictionary *metadata;
# 912 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVRational avg_frame_rate;
# 921 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVPacket attached_pic;
# 941 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVPacketSideData *side_data;



    int nb_side_data;






    int event_flags;
# 967 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    struct {
        int64_t last_dts;
        int64_t duration_gcd;
        int duration_count;
        int64_t rfps_duration_sum;
        double (*duration_error)[2][(30*12+7+6)];
        int64_t codec_info_duration;
        int64_t codec_info_duration_fields;






        int found_decoder;

        int64_t last_duration;




        int64_t fps_first_dts;
        int fps_first_dts_idx;
        int64_t fps_last_dts;
        int fps_last_dts_idx;

    } *info;

    int pts_wrap_bits;
# 1005 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t first_dts;
    int64_t cur_dts;
    int64_t last_IP_pts;
    int last_IP_duration;




    int probe_packets;




    int codec_info_nb_frames;


    enum AVStreamParseType need_parsing;
    struct AVCodecParserContext *parser;




    struct AVPacketList *last_in_packet_buffer;
    AVProbeData probe_data;

    int64_t pts_buffer[16 +1];

    AVIndexEntry *index_entries;

    int nb_index_entries;
    unsigned int index_entries_allocated_size;
# 1048 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVRational r_frame_rate;






    int stream_identifier;

    int64_t interleaver_chunk_size;
    int64_t interleaver_chunk_duration;
# 1067 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int request_probe;




    int skip_to_keyframe;




    int skip_samples;
# 1086 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t start_skip_samples;







    int64_t first_discard_sample;






    int64_t last_discard_sample;





    int nb_decoded_frames;





    int64_t mux_ts_offset;




    int64_t pts_wrap_reference;
# 1130 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int pts_wrap_behavior;




    int update_initial_durations_done;




    int64_t pts_reorder_error[16 +1];
    uint8_t pts_reorder_error_count[16 +1];




    int64_t last_dts_for_order_check;
    uint8_t dts_ordered;
    uint8_t dts_misordered;




    int inject_global_side_data;






    char *recommended_encoder_configuration;






    AVRational display_aspect_ratio;

    struct FFFrac *priv_pts;
} AVStream;

AVRational av_stream_get_r_frame_rate(const AVStream *s);
void av_stream_set_r_frame_rate(AVStream *s, AVRational r);
struct AVCodecParserContext *av_stream_get_parser(const AVStream *s);
char* av_stream_get_recommended_encoder_configuration(const AVStream *s);
void av_stream_set_recommended_encoder_configuration(AVStream *s, char *configuration);






int64_t av_stream_get_end_pts(const AVStream *st);
# 1193 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVProgram {
    int id;
    int flags;
    enum AVDiscard discard;
    unsigned int *stream_index;
    unsigned int nb_stream_indexes;
    AVDictionary *metadata;

    int program_num;
    int pmt_pid;
    int pcr_pid;
# 1212 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t start_time;
    int64_t end_time;

    int64_t pts_wrap_reference;
    int pts_wrap_behavior;
} AVProgram;




typedef struct AVChapter {
    int id;
    AVRational time_base;
    int64_t start, end;
    AVDictionary *metadata;
} AVChapter;





typedef int (*av_format_control_message)(struct AVFormatContext *s, int type,
                                         void *data, size_t data_size);

typedef int (*AVOpenCallback)(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
                              const AVIOInterruptCB *int_cb, AVDictionary **options);





enum AVDurationEstimationMethod {
    AVFMT_DURATION_FROM_PTS,
    AVFMT_DURATION_FROM_STREAM,
    AVFMT_DURATION_FROM_BITRATE
};

typedef struct AVFormatInternal AVFormatInternal;
# 1259 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
typedef struct AVFormatContext {




    const AVClass *av_class;






    struct AVInputFormat *iformat;






    struct AVOutputFormat *oformat;
# 1287 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    void *priv_data;
# 1301 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVIOContext *pb;






    int ctx_flags;






    unsigned int nb_streams;
# 1327 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVStream **streams;







    char filename[1024];
# 1344 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t start_time;
# 1354 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t duration;






    int bit_rate;

    unsigned int packet_size;
    int max_delay;





    int flags;
# 1398 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    unsigned int probesize;




   
    int max_analyze_duration;


    const uint8_t *key;
    int keylen;

    unsigned int nb_programs;
    AVProgram **programs;





    enum AVCodecID video_codec_id;





    enum AVCodecID audio_codec_id;





    enum AVCodecID subtitle_codec_id;
# 1441 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    unsigned int max_index_size;





    unsigned int max_picture_buffer;
# 1460 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    unsigned int nb_chapters;
    AVChapter **chapters;
# 1471 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVDictionary *metadata;
# 1484 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t start_time_realtime;






    int fps_probe_size;






    int error_recognition;
# 1509 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    AVIOInterruptCB interrupt_callback;




    int debug;
# 1533 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t max_interleave_delta;





    int strict_std_compliance;






    int event_flags;






    int max_ts_probe;
# 1562 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int avoid_negative_ts;
# 1571 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int ts_id;







    int audio_preload;







    int max_chunk_duration;







    int max_chunk_size;







    int use_wallclock_as_timestamps;






    int avio_flags;







    enum AVDurationEstimationMethod duration_estimation_method;






    int64_t skip_initial_bytes;






    unsigned int correct_ts_overflow;






    int seek2any;






    int flush_packets;
# 1655 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int probe_score;






    int format_probesize;







    char *codec_whitelist;







    char *format_whitelist;





    AVFormatInternal *internal;







    int io_repositioned;







    AVCodec *video_codec;







    AVCodec *audio_codec;







    AVCodec *subtitle_codec;







    AVCodec *data_codec;






    int metadata_header_padding;






    void *opaque;




    av_format_control_message control_message_cb;





    int64_t output_ts_offset;
# 1759 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t max_analyze_duration2;
# 1771 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int64_t probesize2;
# 1784 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    uint8_t *dump_separator;





    enum AVCodecID data_codec_id;
# 1807 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
    int (*open_cb)(struct AVFormatContext *s, AVIOContext **p, const char *url, int flags, const AVIOInterruptCB *int_cb, AVDictionary **options);
} AVFormatContext;

int av_format_get_probe_score(const AVFormatContext *s);
AVCodec * av_format_get_video_codec(const AVFormatContext *s);
void av_format_set_video_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_audio_codec(const AVFormatContext *s);
void av_format_set_audio_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_subtitle_codec(const AVFormatContext *s);
void av_format_set_subtitle_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_data_codec(const AVFormatContext *s);
void av_format_set_data_codec(AVFormatContext *s, AVCodec *c);
int av_format_get_metadata_header_padding(const AVFormatContext *s);
void av_format_set_metadata_header_padding(AVFormatContext *s, int c);
void * av_format_get_opaque(const AVFormatContext *s);
void av_format_set_opaque(AVFormatContext *s, void *opaque);
av_format_control_message av_format_get_control_message_cb(const AVFormatContext *s);
void av_format_set_control_message_cb(AVFormatContext *s, av_format_control_message callback);
AVOpenCallback av_format_get_open_cb(const AVFormatContext *s);
void av_format_set_open_cb(AVFormatContext *s, AVOpenCallback callback);





void av_format_inject_global_side_data(AVFormatContext *s);






enum AVDurationEstimationMethod av_fmt_ctx_get_duration_estimation_method(const AVFormatContext* ctx);

typedef struct AVPacketList {
    AVPacket pkt;
    struct AVPacketList *next;
} AVPacketList;
# 1859 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
unsigned avformat_version(void);




const char *avformat_configuration(void);




const char *avformat_license(void);
# 1879 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_register_all(void);

void av_register_input_format(AVInputFormat *format);
void av_register_output_format(AVOutputFormat *format);
# 1892 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_network_init(void);




int avformat_network_deinit(void);






AVInputFormat *av_iformat_next(const AVInputFormat *f);






AVOutputFormat *av_oformat_next(const AVOutputFormat *f);






AVFormatContext *avformat_alloc_context(void);





void avformat_free_context(AVFormatContext *s);







const AVClass *avformat_get_class(void);
# 1953 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c);
# 1963 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
uint8_t *av_stream_get_side_data(AVStream *stream,
                                 enum AVPacketSideDataType type, int *size);

AVProgram *av_new_program(AVFormatContext *s, int id);
# 1989 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_alloc_output_context2(AVFormatContext **ctx, AVOutputFormat *oformat,
                                   const char *format_name, const char *filename);
# 2000 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVInputFormat *av_find_input_format(const char *short_name);
# 2009 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened);
# 2023 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max);
# 2032 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVInputFormat *av_probe_input_format3(AVProbeData *pd, int is_opened, int *score_ret);
# 2050 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_probe_input_buffer2(AVIOContext *pb, AVInputFormat **fmt,
                           const char *filename, void *logctx,
                           unsigned int offset, unsigned int max_probe_size);




int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
                          const char *filename, void *logctx,
                          unsigned int offset, unsigned int max_probe_size);
# 2080 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_open_input(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options);


int av_demuxer_open(AVFormatContext *ic);
# 2106 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options);
# 2118 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVProgram *av_find_program_from_stream(AVFormatContext *ic, AVProgram *last, int s);
# 2144 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_find_best_stream(AVFormatContext *ic,
                        enum AVMediaType type,
                        int wanted_stream_nb,
                        int related_stream,
                        AVCodec **decoder_ret,
                        int flags);
# 2175 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_read_frame(AVFormatContext *s, AVPacket *pkt);
# 2190 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp,
                  int flags);
# 2221 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_seek_file(AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
# 2239 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_flush(AVFormatContext *s);





int av_read_play(AVFormatContext *s);






int av_read_pause(AVFormatContext *s);





void avformat_close_input(AVFormatContext **s);
# 2287 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_write_header(AVFormatContext *s, AVDictionary **options);
# 2319 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_write_frame(AVFormatContext *s, AVPacket *pkt);
# 2354 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_interleaved_write_frame(AVFormatContext *s, AVPacket *pkt);
# 2364 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_write_uncoded_frame(AVFormatContext *s, int stream_index,
                           AVFrame *frame);
# 2383 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_interleaved_write_uncoded_frame(AVFormatContext *s, int stream_index,
                                       AVFrame *frame);







int av_write_uncoded_frame_query(AVFormatContext *s, int stream_index);
# 2403 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_write_trailer(AVFormatContext *s);
# 2417 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVOutputFormat *av_guess_format(const char *short_name,
                                const char *filename,
                                const char *mime_type);




enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
                            const char *filename, const char *mime_type,
                            enum AVMediaType type);
# 2443 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_get_output_timestamp(struct AVFormatContext *s, int stream,
                            int64_t *dts, int64_t *wall);
# 2470 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_hex_dump(FILE *f, const uint8_t *buf, int size);
# 2484 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_hex_dump_log(void *avcl, int level, const uint8_t *buf, int size);
# 2494 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_pkt_dump2(FILE *f, const AVPacket *pkt, int dump_payload, const AVStream *st);
# 2508 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_pkt_dump_log2(void *avcl, int level, const AVPacket *pkt, int dump_payload,
                      const AVStream *st);
# 2519 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
enum AVCodecID av_codec_get_id(const struct AVCodecTag * const *tags, unsigned int tag);
# 2529 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
unsigned int av_codec_get_tag(const struct AVCodecTag * const *tags, enum AVCodecID id);
# 2540 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_codec_get_tag2(const struct AVCodecTag * const *tags, enum AVCodecID id,
                      unsigned int *tag);

int av_find_default_stream_index(AVFormatContext *s);
# 2556 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_index_search_timestamp(AVStream *st, int64_t timestamp, int flags);







int av_add_index_entry(AVStream *st, int64_t pos, int64_t timestamp,
                       int size, int distance, int flags);
# 2587 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_url_split(char *proto, int proto_size,
                  char *authorization, int authorization_size,
                  char *hostname, int hostname_size,
                  int *port_ptr,
                  char *path, int path_size,
                  const char *url);
# 2605 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
void av_dump_format(AVFormatContext *ic,
                    int index,
                    const char *url,
                    int is_output);
# 2622 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_get_frame_filename(char *buf, int buf_size,
                          const char *path, int number);







int av_filename_number_test(const char *filename);
# 2650 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size);
# 2659 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int av_match_ext(const char *filename, const char *extensions);
# 2671 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_query_codec(const AVOutputFormat *ofmt, enum AVCodecID codec_id,
                         int std_compliance);
# 2689 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
const struct AVCodecTag *avformat_get_riff_video_tags(void);



const struct AVCodecTag *avformat_get_riff_audio_tags(void);



const struct AVCodecTag *avformat_get_mov_video_tags(void);



const struct AVCodecTag *avformat_get_mov_audio_tags(void);
# 2724 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVRational av_guess_sample_aspect_ratio(AVFormatContext *format, AVStream *stream, AVFrame *frame);
# 2734 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
AVRational av_guess_frame_rate(AVFormatContext *ctx, AVStream *stream, AVFrame *frame);
# 2749 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/avformat.h"
int avformat_match_stream_specifier(AVFormatContext *s, AVStream *st,
                                    const char *spec);

int avformat_queue_attached_pictures(AVFormatContext *s);
# 30 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h" 1
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h" 1
# 26 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/os_support.h" 1
# 32 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/os_support.h"
# 1 "/usr/include/i386-linux-gnu/sys/stat.h" 1 3 4
# 105 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/i386-linux-gnu/bits/stat.h" 1 3 4
# 39 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;

    __ino_t st_ino;



    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
# 73 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 88 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;



  };
# 108 "/usr/include/i386-linux-gnu/sys/stat.h" 2 3 4
# 211 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) ;



extern int fstat (int __fd, struct stat *__buf) ;
# 240 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     ;
# 265 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) ;
# 286 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int chmod (__const char *__file, __mode_t __mode)
     ;





extern int lchmod (__const char *__file, __mode_t __mode)
     ;




extern int fchmod (int __fd, __mode_t __mode) ;





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     ;






extern __mode_t umask (__mode_t __mask) ;
# 323 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int mkdir (__const char *__path, __mode_t __mode)
     ;





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     ;






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     ;





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) ;





extern int mkfifo (__const char *__path, __mode_t __mode)
     ;





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     ;





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     ;




extern int futimens (int __fd, __const struct timespec __times[2]) ;
# 401 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     ;
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) ;
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) ;
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     ;
# 444 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) ;

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     ;
# 536 "/usr/include/i386-linux-gnu/sys/stat.h" 3 4

# 33 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/os_support.h" 2
# 70 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/os_support.h"
static inline int is_dos_path(const char *path)
{




    return 0;
}
# 27 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h" 2
# 42 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
typedef struct AVCodecTag {
    enum AVCodecID id;
    unsigned int tag;
} AVCodecTag;

typedef struct CodecMime{
    char str[32];
    enum AVCodecID id;
} CodecMime;
# 59 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
typedef struct FFFrac {
    int64_t val, num, den;
} FFFrac;


struct AVFormatInternal {




    int nb_interleaved_streams;






    struct AVPacketList *packet_buffer;
    struct AVPacketList *packet_buffer_end;


    int64_t data_offset;







    struct AVPacketList *raw_packet_buffer;
    struct AVPacketList *raw_packet_buffer_end;



    struct AVPacketList *parse_queue;
    struct AVPacketList *parse_queue_end;




    int raw_packet_buffer_remaining_size;






    int64_t offset;




    AVRational offset_timebase;

    int inject_global_side_data;

    int avoid_negative_ts_use_pts;
};
# 133 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
struct tm *ff_brktimegm(time_t secs, struct tm *tm);

char *ff_data_to_hex(char *buf, const uint8_t *src, int size, int lowercase);
# 145 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_hex_to_data(uint8_t *data, const char *p);

void ff_program_add_stream_index(AVFormatContext *ac, int progid, unsigned int idx);






int ff_interleave_add_packet(AVFormatContext *s, AVPacket *pkt,
                             int (*compare)(AVFormatContext *, AVPacket *, AVPacket *));

void ff_read_frame_flush(AVFormatContext *s);





uint64_t ff_ntp_time(void);
# 183 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
void ff_sdp_write_media(char *buff, int size, AVStream *st, int idx,
                        const char *dest_addr, const char *dest_type,
                        int port, int ttl, AVFormatContext *fmt);
# 199 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_write_chained(AVFormatContext *dst, int dst_stream, AVPacket *pkt,
                     AVFormatContext *src, int interleave);




int ff_get_v_length(uint64_t val);




void ff_put_v(AVIOContext *bc, uint64_t val);
# 223 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_get_line(AVIOContext *s, char *buf, int maxlen);
# 237 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
typedef void (*ff_parse_key_val_cb)(void *context, const char *key,
                                    int key_len, char **dest, int *dest_len);
# 248 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
void ff_parse_key_value(const char *str, ff_parse_key_val_cb callback_get_buf,
                        void *context);





int ff_find_stream_index(AVFormatContext *s, int id);




int ff_index_search_timestamp(const AVIndexEntry *entries, int nb_entries,
                              int64_t wanted_timestamp, int flags);




int ff_add_index_entry(AVIndexEntry **index_entries,
                       int *nb_index_entries,
                       unsigned int *index_entries_allocated_size,
                       int64_t pos, int64_t timestamp, int size, int distance, int flags);

void ff_configure_buffers_for_index(AVFormatContext *s, int64_t time_tolerance);
# 284 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
AVChapter *avpriv_new_chapter(AVFormatContext *s, int id, AVRational time_base,
                              int64_t start, int64_t end, const char *title);






void ff_reduce_index(AVFormatContext *s, int stream_index);

enum AVCodecID ff_guess_image2_codec(const char *filename);




int64_t ff_iso8601_to_unix_time(const char *datestr);
# 308 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_seek_frame_binary(AVFormatContext *s, int stream_index,
                         int64_t target_ts, int flags);
# 319 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
void ff_update_cur_dts(AVFormatContext *s, AVStream *ref_st, int64_t timestamp);

int ff_find_last_ts(AVFormatContext *s, int stream_index, int64_t *ts, int64_t *pos,
                    int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ));







int64_t ff_gen_search(AVFormatContext *s, int stream_index,
                      int64_t target_ts, int64_t pos_min,
                      int64_t pos_max, int64_t pos_limit,
                      int64_t ts_min, int64_t ts_max,
                      int flags, int64_t *ts_ret,
                      int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ));
# 349 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
void avpriv_set_pts_info(AVStream *s, int pts_wrap_bits,
                         unsigned int pts_num, unsigned int pts_den);





int ff_add_param_change(AVPacket *pkt, int32_t channels,
                        uint64_t channel_layout, int32_t sample_rate,
                        int32_t width, int32_t height);





int ff_framehash_write_header(AVFormatContext *s);
# 373 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_read_packet(AVFormatContext *s, AVPacket *pkt);
# 390 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_interleave_packet_per_dts(AVFormatContext *s, AVPacket *out,
                                 AVPacket *pkt, int flush);

void ff_free_stream(AVFormatContext *s, AVStream *st);




void ff_compute_frame_duration(AVFormatContext *s, int *pnum, int *pden, AVStream *st,
                               AVCodecParserContext *pc, AVPacket *pkt);

unsigned int ff_codec_get_tag(const AVCodecTag *tags, enum AVCodecID id);

enum AVCodecID ff_codec_get_id(const AVCodecTag *tags, unsigned int tag);
# 418 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
enum AVCodecID ff_get_pcm_codec_id(int bps, int flt, int be, int sflags);
# 427 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
AVRational ff_choose_timebase(AVFormatContext *s, AVStream *st, int min_precision);




enum AVChromaLocation ff_choose_chroma_location(AVFormatContext *s, AVStream *st);





int ff_generate_avci_extradata(AVStream *st);
# 447 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
static inline int ff_rename(const char *oldpath, const char *newpath, void *logctx)
{
    int ret = 0;
    if (rename(oldpath, newpath) == -1) {
        ret = (-((*__errno_location ())));
        if (logctx)
            av_log(logctx, 16, "failed to rename file %s to %s\n", oldpath, newpath);
    }
    return ret;
}





uint8_t *ff_stream_new_side_data(AVStream *st, enum AVPacketSideDataType type,
                                 int size);
# 472 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_alloc_extradata(AVCodecContext *avctx, int size);
# 481 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/internal.h"
int ff_get_extradata(AVCodecContext *avctx, AVIOContext *pb, int size);







int ff_rfps_add_frame(AVFormatContext *ic, AVStream *st, int64_t dts);

void ff_rfps_calculate(AVFormatContext *ic);




enum AVWriteUncodedFrameFlags {





    AV_WRITE_UNCODED_FRAME_QUERY = 0x0001,

};




int ff_copy_whitelists(AVFormatContext *dst, AVFormatContext *src);

int ffio_open2_wrapper(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
                       const AVIOInterruptCB *int_cb, AVDictionary **options);
# 28 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h" 2
# 1 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/metadata.h" 1
# 34 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/metadata.h"
typedef struct AVMetadataConv {
    const char *native;
    const char *generic;
} AVMetadataConv;

void ff_metadata_conv(AVDictionary **pm, const AVMetadataConv *d_conv,
                                       const AVMetadataConv *s_conv);
void ff_metadata_conv_ctx(AVFormatContext *ctx, const AVMetadataConv *d_conv,
                                                const AVMetadataConv *s_conv);
# 29 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h" 2
# 42 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h"
enum ID3v2Encoding {
    ID3v2_ENCODING_ISO8859 = 0,
    ID3v2_ENCODING_UTF16BOM = 1,
    ID3v2_ENCODING_UTF16BE = 2,
    ID3v2_ENCODING_UTF8 = 3,
};

typedef struct ID3v2EncContext {
    int version;
    int64_t size_pos;
    int len;
} ID3v2EncContext;

typedef struct ID3v2ExtraMeta {
    const char *tag;
    void *data;
    struct ID3v2ExtraMeta *next;
} ID3v2ExtraMeta;

typedef struct ID3v2ExtraMetaGEOB {
    uint32_t datasize;
    uint8_t *mime_type;
    uint8_t *file_name;
    uint8_t *description;
    uint8_t *data;
} ID3v2ExtraMetaGEOB;

typedef struct ID3v2ExtraMetaAPIC {
    AVBufferRef *buf;
    const char *type;
    uint8_t *description;
    enum AVCodecID id;
} ID3v2ExtraMetaAPIC;

typedef struct ID3v2ExtraMetaPRIV {
    uint8_t *owner;
    uint8_t *data;
    uint32_t datasize;
} ID3v2ExtraMetaPRIV;







int ff_id3v2_match(const uint8_t *buf, const char *magic);






int ff_id3v2_tag_len(const uint8_t *buf);
# 106 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h"
void ff_id3v2_read_dict(AVIOContext *pb, AVDictionary **metadata, const char *magic, ID3v2ExtraMeta **extra_meta);
# 117 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/id3v2.h"
void ff_id3v2_read(AVFormatContext *s, const char *magic, ID3v2ExtraMeta **extra_meta,
                   unsigned int max_search_size);




void ff_id3v2_start(ID3v2EncContext *id3, AVIOContext *pb, int id3v2_version,
                    const char *magic);




int ff_id3v2_write_metadata(AVFormatContext *s, ID3v2EncContext *id3);




int ff_id3v2_write_apic(AVFormatContext *s, ID3v2EncContext *id3, AVPacket *pkt);




void ff_id3v2_finish(ID3v2EncContext *id3, AVIOContext *pb, int padding_bytes);







int ff_id3v2_write_simple(struct AVFormatContext *s, int id3v2_version, const char *magic);





void ff_id3v2_free_extra_meta(ID3v2ExtraMeta **extra_meta);





int ff_id3v2_parse_apic(AVFormatContext *s, ID3v2ExtraMeta **extra_meta);

extern const AVMetadataConv ff_id3v2_34_metadata_conv[];
extern const AVMetadataConv ff_id3v2_4_metadata_conv[];






extern const char ff_id3v2_tags[][4];




extern const char ff_id3v2_4_tags[][4];




extern const char ff_id3v2_3_tags[][4];

extern const CodecMime ff_id3v2_mime_tags[];

extern const char *ff_id3v2_picture_types[21];
# 31 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c" 2
# 39 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c"
static AVInputFormat *first_iformat = ((void *)0);

static AVOutputFormat *first_oformat = ((void *)0);

static AVInputFormat **last_iformat = &first_iformat;
static AVOutputFormat **last_oformat = &first_oformat;

AVInputFormat *av_iformat_next(const AVInputFormat *f)
{
    if (f)
        return f->next;
    else
        return first_iformat;
}

AVOutputFormat *av_oformat_next(const AVOutputFormat *f)
{
    if (f)
        return f->next;
    else
        return first_oformat;
}

void av_register_input_format(AVInputFormat *format)
{
    AVInputFormat **p = last_iformat;

    format->next = ((void *)0);
    while(*p || atomic_ptr_cas_gcc((void * volatile *)p, ((void *)0), format))
        p = &(*p)->next;
    last_iformat = &format->next;
}

void av_register_output_format(AVOutputFormat *format)
{
    AVOutputFormat **p = last_oformat;

    format->next = ((void *)0);
    while(*p || atomic_ptr_cas_gcc((void * volatile *)p, ((void *)0), format))
        p = &(*p)->next;
    last_oformat = &format->next;
}

int av_match_ext(const char *filename, const char *extensions)
{
    const char *ext;

    if (!filename)
        return 0;

    ext = strrchr(filename, '.');
    if (ext)
        return av_match_name(ext + 1, extensions);
    return 0;
}

AVOutputFormat *av_guess_format(const char *short_name, const char *filename,
                                const char *mime_type)
{
    AVOutputFormat *fmt = ((void *)0), *fmt_found;
    int score_max, score;



    if (!short_name && filename &&
        av_filename_number_test(filename) &&
        ff_guess_image2_codec(filename) != AV_CODEC_ID_NONE) {
        return av_guess_format("image2", ((void *)0), ((void *)0));
    }


    fmt_found = ((void *)0);
    score_max = 0;
    while ((fmt = av_oformat_next(fmt))) {
        score = 0;
        if (fmt->name && short_name && av_match_name(short_name, fmt->name))
            score += 100;
        if (fmt->mime_type && mime_type && !strcmp(fmt->mime_type, mime_type))
            score += 10;
        if (filename && fmt->extensions &&
            av_match_ext(filename, fmt->extensions)) {
            score += 5;
        }
        if (score > score_max) {
            score_max = score;
            fmt_found = fmt;
        }
    }
    return fmt_found;
}

enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
                              const char *filename, const char *mime_type,
                              enum AVMediaType type)
{
    if (av_match_name("segment", fmt->name) || av_match_name("ssegment", fmt->name)) {
        AVOutputFormat *fmt2 = av_guess_format(((void *)0), filename, ((void *)0));
        if (fmt2)
            fmt = fmt2;
    }

    if (type == AVMEDIA_TYPE_VIDEO) {
        enum AVCodecID codec_id = AV_CODEC_ID_NONE;


        if (!strcmp(fmt->name, "image2") || !strcmp(fmt->name, "image2pipe")) {
            codec_id = ff_guess_image2_codec(filename);
        }

        if (codec_id == AV_CODEC_ID_NONE)
            codec_id = fmt->video_codec;
        return codec_id;
    } else if (type == AVMEDIA_TYPE_AUDIO)
        return fmt->audio_codec;
    else if (type == AVMEDIA_TYPE_SUBTITLE)
        return fmt->subtitle_codec;
    else if (type == AVMEDIA_TYPE_DATA)
        return fmt->data_codec;
    else
        return AV_CODEC_ID_NONE;
}

AVInputFormat *av_find_input_format(const char *short_name)
{
    AVInputFormat *fmt = ((void *)0);
    while ((fmt = av_iformat_next(fmt)))
        if (av_match_name(short_name, fmt->name))
            return fmt;
    return ((void *)0);
}

AVInputFormat *av_probe_input_format3(AVProbeData *pd, int is_opened,
                                      int *score_ret)
{
    AVProbeData lpd = *pd;
    AVInputFormat *fmt1 = ((void *)0), *fmt;
    int score, nodat = 0, score_max = 0;
    const static uint8_t zerobuffer[32];

    if (!lpd.buf)
        lpd.buf = zerobuffer;

    if (lpd.buf_size > 10 && ff_id3v2_match(lpd.buf, "ID3")) {
        int id3len = ff_id3v2_tag_len(lpd.buf);
        if (lpd.buf_size > id3len + 16) {
            lpd.buf += id3len;
            lpd.buf_size -= id3len;
        } else if (id3len >= (1 << 20)) {
            nodat = 2;
        } else
            nodat = 1;
    }

    fmt = ((void *)0);
    while ((fmt1 = av_iformat_next(fmt1))) {
        if (!is_opened == !(fmt1->flags & 0x0001) && strcmp(fmt1->name, "image2"))
            continue;
        score = 0;
        if (fmt1->read_probe) {
            score = fmt1->read_probe(&lpd);
            if (score)
                av_log(((void *)0), 56, "Probing %s score:%d size:%d\n", fmt1->name, score, lpd.buf_size);
            if (fmt1->extensions && av_match_ext(lpd.filename, fmt1->extensions)) {
                if (nodat == 0) score = ((score) > (1) ? (score) : (1));
                else if (nodat == 1) score = ((score) > (50 / 2 - 1) ? (score) : (50 / 2 - 1));
                else score = ((score) > (50) ? (score) : (50));
            }
        } else if (fmt1->extensions) {
            if (av_match_ext(lpd.filename, fmt1->extensions))
                score = 50;
        }
        if (av_match_name(lpd.mime_type, fmt1->mime_type))
            score = ((score) > (75) ? (score) : (75));
        if (score > score_max) {
            score_max = score;
            fmt = fmt1;
        } else if (score == score_max)
            fmt = ((void *)0);
    }
    if (nodat == 1)
        score_max = ((50 / 2 - 1) > (score_max) ? (score_max) : (50 / 2 - 1));
    *score_ret = score_max;

    return fmt;
}

AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max)
{
    int score_ret;
    AVInputFormat *fmt = av_probe_input_format3(pd, is_opened, &score_ret);
    if (score_ret > *score_max) {
        *score_max = score_ret;
        return fmt;
    } else
        return ((void *)0);
}

AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened)
{
    int score = 0;
    return av_probe_input_format2(pd, is_opened, &score);
}

int av_probe_input_buffer2(AVIOContext *pb, AVInputFormat **fmt,
                          const char *filename, void *logctx,
                          unsigned int offset, unsigned int max_probe_size)
{
    AVProbeData pd = { filename ? filename : "" };
    uint8_t *buf = ((void *)0);
    int ret = 0, probe_size, buf_offset = 0;
    int score = 0;
    int ret2;

    if (!max_probe_size)
        max_probe_size = (1 << 20);
    else if (max_probe_size < 2048) {
        av_log(logctx, 16,
               "Specified probe size value %u cannot be < %u\n", max_probe_size, 2048);
        return (-(22));
    }

    if (offset >= max_probe_size)
        return (-(22));

    if (pb->av_class) {
        uint8_t *mime_type_opt = ((void *)0);
        char* semi;
        av_opt_get(pb, "mime_type", 0x0001, &mime_type_opt);
        pd.mime_type = (const char *)mime_type_opt;
        semi = pd.mime_type?strchr(pd.mime_type, ';'):((void *)0);
        if (semi) {
            *semi='\0';
        }
    }
# 282 "/media/01CDF70B3FE14040/FFmpeg-master/libavformat/format.c"
    for (probe_size = 2048; probe_size <= max_probe_size && !*fmt;
         probe_size = ((probe_size << 1) > (((max_probe_size) > (probe_size + 1) ? (max_probe_size) : (probe_size + 1))) ? (((max_probe_size) > (probe_size + 1) ? (max_probe_size) : (probe_size + 1))) : (probe_size << 1))
                                                                  ) {
        score = probe_size < max_probe_size ? (100/4) : 0;


        if ((ret = av_reallocp(&buf, probe_size + 32)) < 0)
            goto fail;
        if ((ret = avio_read(pb, buf + buf_offset,
                             probe_size - buf_offset)) < 0) {

            if (ret != (-(int)(('E') | (('O') << 8) | (('F') << 16) | ((unsigned)(' ') << 24))))
                goto fail;

            score = 0;
            ret = 0;
        }
        buf_offset += ret;
        if (buf_offset < offset)
            continue;
        pd.buf_size = buf_offset - offset;
        pd.buf = &buf[offset];

        memset(pd.buf + pd.buf_size, 0, 32);


        *fmt = av_probe_input_format2(&pd, 1, &score);
        if (*fmt) {

            if (score <= (100/4)) {
                av_log(logctx, 24,
                       "Format %s detected only with low score of %d, "
                       "misdetection possible!\n", (*fmt)->name, score);
            } else
                av_log(logctx, 48,
                       "Format %s probed with size=%d and score=%d\n",
                       (*fmt)->name, probe_size, score);





        }
    }

    if (!*fmt)
        ret = (-(int)(('I') | (('N') << 8) | (('D') << 16) | ((unsigned)('A') << 24)));

fail:

    ret2 = ffio_rewind_with_probe_data(pb, &buf, buf_offset);
    if (ret >= 0)
        ret = ret2;

    av_freep(&pd.mime_type);
    return ret < 0 ? ret : score;
}

int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
                          const char *filename, void *logctx,
                          unsigned int offset, unsigned int max_probe_size)
{
    int ret = av_probe_input_buffer2(pb, fmt, filename, logctx, offset, max_probe_size);
    return ret < 0 ? ret : 0;
}
