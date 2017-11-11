/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "cfg_parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "configuration.h"
#include "foreign/vas.h"
#include "foreign/miniobj.h"
#include "foreign/uthash.h"

extern int yylex (void);
extern int yyparse(hitch_config *);
extern FILE *yyin;
int yyget_lineno(void);

int config_param_validate(char *k, char *v, hitch_config *cfg,
    char *file, int line);
int front_arg_add(hitch_config *cfg, struct front_arg *fa);
struct front_arg *front_arg_new(void);
void front_arg_destroy(struct front_arg *fa);
struct cfg_cert_file *
cfg_cert_file_new(void);
void cfg_cert_file_free(struct cfg_cert_file **cfptr);
int cfg_cert_vfy(struct cfg_cert_file *cf);
void yyerror(hitch_config *, const char *);
void cfg_cert_add(struct cfg_cert_file *cf, struct cfg_cert_file **dst);

static struct front_arg *cur_fa;
static struct cfg_cert_file *cur_pem;
extern char input_line[512];


#line 97 "cfg_parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_CFG_PARSER_H_INCLUDED
# define YY_YY_CFG_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    UINT = 259,
    BOOL = 260,
    STRING = 261,
    TOK_CIPHERS = 262,
    TOK_SSL_ENGINE = 263,
    TOK_PREFER_SERVER_CIPHERS = 264,
    TOK_BACKEND = 265,
    TOK_FRONTEND = 266,
    TOK_WORKERS = 267,
    TOK_BACKLOG = 268,
    TOK_KEEPALIVE = 269,
    TOK_CHROOT = 270,
    TOK_USER = 271,
    TOK_GROUP = 272,
    TOK_QUIET = 273,
    TOK_SYSLOG = 274,
    TOK_SYSLOG_FACILITY = 275,
    TOK_PARAM_SYSLOG_FACILITY = 276,
    TOK_DAEMON = 277,
    TOK_WRITE_IP = 278,
    TOK_WRITE_PROXY = 279,
    TOK_WRITE_PROXY_V1 = 280,
    TOK_WRITE_PROXY_V2 = 281,
    TOK_PEM_FILE = 282,
    TOK_PROXY_PROXY = 283,
    TOK_BACKEND_CONNECT_TIMEOUT = 284,
    TOK_SSL_HANDSHAKE_TIMEOUT = 285,
    TOK_RECV_BUFSIZE = 286,
    TOK_SEND_BUFSIZE = 287,
    TOK_LOG_FILENAME = 288,
    TOK_RING_SLOTS = 289,
    TOK_RING_DATA_LEN = 290,
    TOK_PIDFILE = 291,
    TOK_SNI_NOMATCH_ABORT = 292,
    TOK_SSL = 293,
    TOK_TLS = 294,
    TOK_HOST = 295,
    TOK_PORT = 296,
    TOK_MATCH_GLOBAL = 297,
    TOK_PB_CERT = 298,
    TOK_PB_OCSP_FILE = 299,
    TOK_OCSP_VERIFY = 300,
    TOK_OCSP_DIR = 301,
    TOK_OCSP_RESP_TMO = 302,
    TOK_OCSP_CONN_TMO = 303,
    TOK_ALPN_PROTOS = 304,
    TOK_TLS_PROTOS = 305,
    TOK_SSLv3 = 306,
    TOK_TLSv1_0 = 307,
    TOK_TLSv1_1 = 308,
    TOK_TLSv1_2 = 309
  };
#endif
/* Tokens.  */
#define INT 258
#define UINT 259
#define BOOL 260
#define STRING 261
#define TOK_CIPHERS 262
#define TOK_SSL_ENGINE 263
#define TOK_PREFER_SERVER_CIPHERS 264
#define TOK_BACKEND 265
#define TOK_FRONTEND 266
#define TOK_WORKERS 267
#define TOK_BACKLOG 268
#define TOK_KEEPALIVE 269
#define TOK_CHROOT 270
#define TOK_USER 271
#define TOK_GROUP 272
#define TOK_QUIET 273
#define TOK_SYSLOG 274
#define TOK_SYSLOG_FACILITY 275
#define TOK_PARAM_SYSLOG_FACILITY 276
#define TOK_DAEMON 277
#define TOK_WRITE_IP 278
#define TOK_WRITE_PROXY 279
#define TOK_WRITE_PROXY_V1 280
#define TOK_WRITE_PROXY_V2 281
#define TOK_PEM_FILE 282
#define TOK_PROXY_PROXY 283
#define TOK_BACKEND_CONNECT_TIMEOUT 284
#define TOK_SSL_HANDSHAKE_TIMEOUT 285
#define TOK_RECV_BUFSIZE 286
#define TOK_SEND_BUFSIZE 287
#define TOK_LOG_FILENAME 288
#define TOK_RING_SLOTS 289
#define TOK_RING_DATA_LEN 290
#define TOK_PIDFILE 291
#define TOK_SNI_NOMATCH_ABORT 292
#define TOK_SSL 293
#define TOK_TLS 294
#define TOK_HOST 295
#define TOK_PORT 296
#define TOK_MATCH_GLOBAL 297
#define TOK_PB_CERT 298
#define TOK_PB_OCSP_FILE 299
#define TOK_OCSP_VERIFY 300
#define TOK_OCSP_DIR 301
#define TOK_OCSP_RESP_TMO 302
#define TOK_OCSP_CONN_TMO 303
#define TOK_ALPN_PROTOS 304
#define TOK_TLS_PROTOS 305
#define TOK_SSLv3 306
#define TOK_TLSv1_0 307
#define TOK_TLSv1_1 308
#define TOK_TLSv1_2 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "cfg_parser.y" /* yacc.c:355  */

	int	i;
	char	*s;

#line 250 "cfg_parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (hitch_config *cfg);

#endif /* !YY_YY_CFG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 267 "cfg_parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   100,   107,   106,   119,   121,
     122,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   138,   148,   150,   153,   154,   158,   159,   160,   163,
     165,   171,   179,   187,   192,   197,   213,   212,   229,   231,
     236,   252,   268,   268,   279,   279,   281,   282,   283,   284,
     285,   286,   291,   293,   295,   297,   299,   314,   329,   329,
     338,   338,   340,   341,   342,   343,   345,   347,   352,   359,
     366,   373,   372,   394,   395,   397,   402,   404,   411,   418,
     420,   422,   427,   432,   434,   441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "UINT", "BOOL", "STRING",
  "TOK_CIPHERS", "TOK_SSL_ENGINE", "TOK_PREFER_SERVER_CIPHERS",
  "TOK_BACKEND", "TOK_FRONTEND", "TOK_WORKERS", "TOK_BACKLOG",
  "TOK_KEEPALIVE", "TOK_CHROOT", "TOK_USER", "TOK_GROUP", "TOK_QUIET",
  "TOK_SYSLOG", "TOK_SYSLOG_FACILITY", "TOK_PARAM_SYSLOG_FACILITY",
  "TOK_DAEMON", "TOK_WRITE_IP", "TOK_WRITE_PROXY", "TOK_WRITE_PROXY_V1",
  "TOK_WRITE_PROXY_V2", "TOK_PEM_FILE", "TOK_PROXY_PROXY",
  "TOK_BACKEND_CONNECT_TIMEOUT", "TOK_SSL_HANDSHAKE_TIMEOUT",
  "TOK_RECV_BUFSIZE", "TOK_SEND_BUFSIZE", "TOK_LOG_FILENAME",
  "TOK_RING_SLOTS", "TOK_RING_DATA_LEN", "TOK_PIDFILE",
  "TOK_SNI_NOMATCH_ABORT", "TOK_SSL", "TOK_TLS", "TOK_HOST", "TOK_PORT",
  "TOK_MATCH_GLOBAL", "TOK_PB_CERT", "TOK_PB_OCSP_FILE", "TOK_OCSP_VERIFY",
  "TOK_OCSP_DIR", "TOK_OCSP_RESP_TMO", "TOK_OCSP_CONN_TMO",
  "TOK_ALPN_PROTOS", "TOK_TLS_PROTOS", "TOK_SSLv3", "TOK_TLSv1_0",
  "TOK_TLSv1_1", "TOK_TLSv1_2", "'='", "'{'", "'}'", "$accept", "CFG",
  "CFG_RECORDS", "CFG_RECORD", "FRONTEND_REC", "$@1", "FRONTEND_BLK",
  "FB_RECS", "FB_REC", "FB_HOST", "FB_PORT", "PEM_BLK", "PB_RECS",
  "PB_REC", "PB_CERT", "PB_OCSP_RESP_FILE", "OCSP_VERIFY", "OCSP_DIR",
  "OCSP_RESP_TMO", "OCSP_CONN_TMO", "FB_CERT", "$@2", "FB_MATCH_GLOBAL",
  "FB_SNI_NOMATCH_ABORT", "FB_TLS", "FB_SSL", "FB_TLS_PROTOS", "$@3",
  "FB_TLS_PROTOS_LIST", "FB_TLS_PROTO", "FB_CIPHERS", "FB_PREF_SRV_CIPH",
  "QUIET_REC", "WORKERS_REC", "BACKLOG_REC", "KEEPALIVE_REC", "TLS_REC",
  "SSL_REC", "TLS_PROTOS_REC", "$@4", "TLS_PROTOS_LIST", "TLS_PROTO",
  "SSL_ENGINE_REC", "PREFER_SERVER_CIPHERS_REC", "CHROOT_REC",
  "BACKEND_REC", "PEM_FILE_REC", "$@5", "SYSLOG_REC", "DAEMON_REC",
  "SNI_NOMATCH_ABORT_REC", "CIPHERS_REC", "USER_REC", "GROUP_REC",
  "WRITE_IP_REC", "WRITE_PROXY_REC", "WRITE_PROXY_V1_REC",
  "WRITE_PROXY_V2_REC", "PROXY_PROXY_REC", "ALPN_PROTOS_REC",
  "SYSLOG_FACILITY_REC", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    61,   123,   125
};
# endif

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -52,   -37,   -29,   -28,   -26,   -24,   -22,    13,    14,
      15,    17,    18,    19,    20,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    33,    34,    35,    36,    37,    38,
     -59,    41,    -3,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,    43,    51,    71,    81,    -6,    73,
      90,    91,    92,    93,    94,    96,    97,    98,   100,   101,
     102,   103,   104,    -5,   105,   106,   107,   108,   109,   110,
      99,   111,   112,    42,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -14,    21,    22,
     -59,   -59,   -59,   -59,   -14,   -59,    62,    64,    65,    66,
      67,    68,    69,    70,    72,   -59,    39,    21,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,    74,
      75,    76,    22,   -59,   -59,   -59,   -59,   -59,   120,   123,
      -4,   126,   127,   129,   130,   131,   133,    80,   -59,   -59,
     134,   135,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     2,   -59,   -59,    22,   -59,   -59,
     -59,   -59,     2,   -59,    82,   -59,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     2,     3,     5,    31,    34,    32,    33,    20,
      14,    15,    16,     9,    10,    11,    13,    12,    17,     6,
       7,    21,    23,    30,     8,    18,    19,    24,    25,    26,
      27,    28,    29,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     4,   106,    96,    97,    99,
      35,    36,    83,    84,    85,    98,   107,   108,    82,   103,
     115,   104,   109,   110,   111,   112,   100,   101,   113,   105,
      87,    86,    61,    62,    63,    64,   114,     0,     0,     0,
      92,    93,    94,    95,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,    38,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,    53,    54,    56,    57,    58,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    40,
       0,     0,   102,    55,    80,    81,    65,    66,    69,    71,
      70,    51,    52,    68,     0,    59,    60,     0,    76,    77,
      78,    79,    73,    74,     0,    75,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,   113,   -59,   -59,   -59,   -59,    -1,   -59,
     -59,   -55,   -59,   -19,   -59,   -59,    32,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -58,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,    16,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,    34,   128,   146,   147,   148,   149,
     150,   161,   162,   163,   164,   165,   166,    36,    37,    38,
     151,   197,   152,   153,   154,   155,   156,   177,   202,   203,
     157,   158,    39,    40,    41,    42,    43,    44,    45,    93,
     134,   135,    46,    47,    48,    49,    50,   129,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,   116,   186,    64,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    65,    15,
      16,    17,    18,    19,    20,    21,    66,    67,   136,    68,
     137,    69,    35,    70,    22,    23,    24,   130,   131,   132,
     133,    94,    25,    26,    27,    28,    29,    30,   138,    96,
     101,   117,   187,   198,   199,   200,   201,    97,   139,   140,
     141,   142,   143,   144,    35,   159,   160,    25,    71,    72,
      73,   145,    74,    75,    76,    77,    98,   102,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    99,    87,    88,
      89,    90,    91,    92,   103,   104,   178,   127,   105,   106,
     107,   108,   109,   124,   110,   111,   112,   113,   114,   115,
     118,   119,   120,   121,   122,   125,   123,   168,   126,   169,
     170,   171,   172,   173,   174,   175,   184,   176,   185,   180,
     181,   188,   189,   182,   190,   194,   191,   192,   193,   206,
     195,   196,   204,   183,   205,    95,   179,     0,     0,     0,
     167
};

static const yytype_int16 yycheck[] =
{
       6,     6,     6,    55,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    55,    22,
      23,    24,    25,    26,    27,    28,    55,    55,     7,    55,
       9,    55,     0,    55,    37,    38,    39,    51,    52,    53,
      54,     0,    45,    46,    47,    48,    49,    50,    27,     6,
      56,    56,    56,    51,    52,    53,    54,     6,    37,    38,
      39,    40,    41,    42,    32,    43,    44,    45,    55,    55,
      55,    50,    55,    55,    55,    55,     5,     4,    55,    55,
      55,    55,    55,    55,    55,    55,    55,     6,    55,    55,
      55,    55,    55,    55,     4,     4,    57,    55,     6,     6,
       6,     5,     5,     4,     6,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     4,     6,    55,     6,    55,
      55,    55,    55,    55,    55,    55,     6,    55,     5,    55,
      55,     5,     5,    57,     5,    55,     6,     6,     5,    57,
       6,     6,   197,   162,   202,    32,   147,    -1,    -1,    -1,
     134
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    37,    38,    39,    45,    46,    47,    48,    49,
      50,    59,    60,    61,    62,    74,    75,    76,    77,    90,
      91,    92,    93,    94,    95,    96,   100,   101,   102,   103,
     104,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    97,     0,    61,     6,     6,     5,     6,
       6,    56,     4,     4,     4,     6,     6,     6,     5,     5,
       6,     5,     5,     5,     5,     5,     6,    56,     5,     5,
       5,     5,     5,     6,     4,     4,     6,    55,    63,   105,
      51,    52,    53,    54,    98,    99,     7,     9,    27,    37,
      38,    39,    40,    41,    42,    50,    64,    65,    66,    67,
      68,    78,    80,    81,    82,    83,    84,    88,    89,    43,
      44,    69,    70,    71,    72,    73,    74,    99,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    85,    57,    66,
      55,    55,    57,    71,     6,     5,     6,    56,     5,     5,
       5,     6,     6,     5,    55,     6,     6,    79,    51,    52,
      53,    54,    86,    87,    69,    87,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    63,    62,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    68,    69,    70,    70,    71,    71,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    78,    80,    81,
      82,    83,    85,    84,    86,    86,    87,    87,    87,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    97,    96,
      98,    98,    99,    99,    99,    99,   100,   101,   102,   103,
     104,   105,   104,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     6,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     0,     6,     3,     3,
       3,     3,     0,     4,     1,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     4,
       1,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     0,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (cfg, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, cfg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, hitch_config *cfg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (cfg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, hitch_config *cfg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, cfg);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, hitch_config *cfg)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , cfg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, cfg); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, hitch_config *cfg)
{
  YYUSE (yyvaluep);
  YYUSE (cfg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (hitch_config *cfg)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 35:
#line 101 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("frontend", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1510 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "cfg_parser.y" /* yacc.c:1646  */
    {
	/* NB: Mid-rule action */
	AZ(cur_fa);
	cur_fa = front_arg_new();
}
#line 1520 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 113 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (front_arg_add(cfg, cur_fa) != 1)
		YYABORT;
	cur_fa = NULL;
}
#line 1530 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s)) {
		if (strcmp((yyvsp[0].s), "*"))
			cur_fa->ip = NULL;
		else
			cur_fa->ip = strdup((yyvsp[0].s));
	}
}
#line 1543 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 148 "cfg_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].s)) cur_fa->port = strdup((yyvsp[0].s)); }
#line 1549 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "cfg_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].s)) cur_pem->filename = strdup((yyvsp[0].s)); }
#line 1555 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 166 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s))
		cur_pem->ocspfn = strdup((yyvsp[0].s));
}
#line 1564 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cur_pem != NULL)
		cur_pem->ocsp_vfy = (yyvsp[0].i);
	else
		cfg->OCSP_VFY = (yyvsp[0].i);
}
#line 1575 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 180 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s))
		cfg->OCSP_DIR = strdup((yyvsp[0].s));
	else
		cfg->OCSP_DIR = NULL;
}
#line 1586 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->OCSP_RESP_TMO = (yyvsp[0].i);
}
#line 1594 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 193 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->OCSP_CONN_TMO = (yyvsp[0].i);
}
#line 1602 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 198 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) != NULL) {
		int r;
		struct cfg_cert_file *cert;
		cert = cfg_cert_file_new();
		cert->filename = strdup((yyvsp[0].s));
		r = cfg_cert_vfy(cert);
		if (r == 0) {
			cfg_cert_file_free(&cert);
			YYABORT;
		}
		cfg_cert_add(cert, &cur_fa->certs);
	}
}
#line 1621 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "cfg_parser.y" /* yacc.c:1646  */
    {
	/* NB: Mid-rule action */
	AZ(cur_pem);
	cur_pem = cfg_cert_file_new();
}
#line 1631 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cfg_cert_vfy(cur_pem) != 0)
		cfg_cert_add(cur_pem, &cur_fa->certs);
	else {
		cfg_cert_file_free(&cur_pem);
		YYABORT;
	}
	cur_pem = NULL;
}
#line 1645 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 229 "cfg_parser.y" /* yacc.c:1646  */
    { cur_fa->match_global_certs = (yyvsp[0].i); }
#line 1651 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 232 "cfg_parser.y" /* yacc.c:1646  */
    {
		cur_fa->sni_nomatch_abort = (yyvsp[0].i);
}
#line 1659 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 236 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cur_fa->selected_protos != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify tls after ssl,"
		    " tls or tls-protos.\n",
		    __func__, __FILE__, __LINE__);
		front_arg_destroy(cur_fa);
		cur_fa = NULL;
		YYABORT;
	}
	if ((yyvsp[0].i))
		cur_fa->selected_protos = TLS_OPTION_PROTOS;
	else
		fprintf(stderr,
		    "Warning: tls = off is deprecated and has no effect.\n");
}
#line 1680 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 252 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cur_fa->selected_protos != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify ssl after ssl,"
		    " tls or tls-protos.\n",
		    __func__, __FILE__, __LINE__);
		front_arg_destroy(cur_fa);
		cur_fa = NULL;
		YYABORT;
	}
	if ((yyvsp[0].i))
		cur_fa->selected_protos = SSL_OPTION_PROTOS;
	else
		fprintf(stderr,
		    "Warning: ssl = off is deprecated and has no effect.\n");
}
#line 1701 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 268 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cur_fa->selected_protos != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify tls-protos after"
		    " ssl, tls or tls-protos\nSelected before was %d\n",
		    __func__, __FILE__, __LINE__, cur_fa->selected_protos);
		front_arg_destroy(cur_fa);
		cur_fa = NULL;
		YYABORT;
	}
}
#line 1717 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 281 "cfg_parser.y" /* yacc.c:1646  */
    { cur_fa->selected_protos |= SSLv3_PROTO; }
#line 1723 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "cfg_parser.y" /* yacc.c:1646  */
    { cur_fa->selected_protos |= TLSv1_0_PROTO; }
#line 1729 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 283 "cfg_parser.y" /* yacc.c:1646  */
    { cur_fa->selected_protos |= TLSv1_1_PROTO; }
#line 1735 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 284 "cfg_parser.y" /* yacc.c:1646  */
    { cur_fa->selected_protos |= TLSv1_2_PROTO; }
#line 1741 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 285 "cfg_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].s)) cur_fa->ciphers = strdup((yyvsp[0].s)); }
#line 1747 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 287 "cfg_parser.y" /* yacc.c:1646  */
    {
	cur_fa->prefer_server_ciphers = (yyvsp[0].i);
}
#line 1755 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 291 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->QUIET = (yyvsp[0].i); }
#line 1761 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 293 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->NCORES = (yyvsp[0].i); }
#line 1767 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 295 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->BACKLOG = (yyvsp[0].i); }
#line 1773 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 297 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->TCP_KEEPALIVE_TIME = (yyvsp[0].i); }
#line 1779 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 299 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cfg->SELECTED_TLS_PROTOS != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify tls after ssl,"
		    " tls or tls-protos\n",
		    __func__, __FILE__, __LINE__);
		YYABORT;
	}
	if ((yyvsp[0].i))
		cfg->SELECTED_TLS_PROTOS = TLS_OPTION_PROTOS;
	else
		fprintf(stderr,
		    "Warning: tls = off is deprecated and has no effect.\n");
}
#line 1798 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 314 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cfg->SELECTED_TLS_PROTOS != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify ssl after ssl,"
		    " tls or tls-protos.\n",
		    __func__, __FILE__, __LINE__);
		YYABORT;
	}
	if ((yyvsp[0].i))
		cfg->SELECTED_TLS_PROTOS = SSL_OPTION_PROTOS;
	else
		fprintf(stderr,
		    "Warning: ssl = off is deprecated and has no effect.\n");
}
#line 1817 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 329 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cfg->SELECTED_TLS_PROTOS != 0) {
		fprintf(stderr, "%s (%s, line %d):"
		    " It is illegal to specify tls-protos after"
		    " ssl, tls or tls-protos\n",
		    __func__, __FILE__, __LINE__);
		YYABORT;
	}
}
#line 1831 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 340 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->SELECTED_TLS_PROTOS |= SSLv3_PROTO; }
#line 1837 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 341 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->SELECTED_TLS_PROTOS |= TLSv1_0_PROTO; }
#line 1843 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 342 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->SELECTED_TLS_PROTOS |= TLSv1_1_PROTO; }
#line 1849 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 343 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->SELECTED_TLS_PROTOS |= TLSv1_2_PROTO; }
#line 1855 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 345 "cfg_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].s)) cfg->ENGINE = strdup((yyvsp[0].s)); }
#line 1861 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 348 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->PREFER_SERVER_CIPHERS = (yyvsp[0].i);
}
#line 1869 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 353 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("chroot", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1879 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 360 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("backend", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1889 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 367 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("pem-file", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1899 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 373 "cfg_parser.y" /* yacc.c:1646  */
    {
	/* NB: Mid-rule action */
	AZ(cur_pem);
	cur_pem = cfg_cert_file_new();
}
#line 1909 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 379 "cfg_parser.y" /* yacc.c:1646  */
    {
	if (cfg_cert_vfy(cur_pem) != 0) {
		if (cfg->CERT_DEFAULT != NULL) {
			struct cfg_cert_file *tmp = cfg->CERT_DEFAULT;
			cfg_cert_add(tmp, &cfg->CERT_FILES);
		}
		cfg->CERT_DEFAULT = cur_pem;
	} else {
		cfg_cert_file_free(&cur_pem);
		YYABORT;
	}
	cur_pem = NULL;
}
#line 1927 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 394 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->SYSLOG = (yyvsp[0].i); }
#line 1933 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 395 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->DAEMONIZE = (yyvsp[0].i); }
#line 1939 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 398 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->SNI_NOMATCH_ABORT = (yyvsp[0].i);
}
#line 1947 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 402 "cfg_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].s)) cfg->CIPHER_SUITE = strdup((yyvsp[0].s)); }
#line 1953 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 405 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("user", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1963 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 412 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("group", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 1973 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 418 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->WRITE_IP_OCTET = (yyvsp[0].i); }
#line 1979 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 420 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->WRITE_PROXY_LINE_V2 = (yyvsp[0].i); }
#line 1985 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 423 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->WRITE_PROXY_LINE_V1 = (yyvsp[0].i);
}
#line 1993 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 428 "cfg_parser.y" /* yacc.c:1646  */
    {
	cfg->WRITE_PROXY_LINE_V2 = (yyvsp[0].i);
}
#line 2001 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 432 "cfg_parser.y" /* yacc.c:1646  */
    { cfg->PROXY_PROXY_LINE = (yyvsp[0].i); }
#line 2007 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 435 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) && config_param_validate("alpn-protos", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 2017 "cfg_parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 442 "cfg_parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].s) &&
	    config_param_validate("syslog-facility", (yyvsp[0].s), cfg, /* XXX: */ "",
	    yyget_lineno()) != 0)
		YYABORT;
}
#line 2028 "cfg_parser.c" /* yacc.c:1646  */
    break;


#line 2032 "cfg_parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (cfg, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (cfg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, cfg);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, cfg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (cfg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, cfg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, cfg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 449 "cfg_parser.y" /* yacc.c:1906  */


void
yyerror(hitch_config *cfg, const char *s)
{
	(void) cfg;

	/* Clean up if FRONTEND_BLK parsing failed */
	if (cur_fa != NULL)
		FREE_OBJ(cur_fa);

	fprintf(stderr, "Parsing error in line %d: %s\n", yyget_lineno(), s);
	if (strlen(input_line) > 0)
		fprintf(stderr, "'%s'", input_line);
}
