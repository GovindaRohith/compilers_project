/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
char *arr;
int l_no=1;
FILE *parsed_fp;
int ret_no;

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID_T = 258,                    /* ID_T  */
    CONST_T = 259,                 /* CONST_T  */
    STR_T = 260,                   /* STR_T  */
    CHAR_T = 261,                  /* CHAR_T  */
    COMP_OP = 262,                 /* COMP_OP  */
    NEG_OP = 263,                  /* NEG_OP  */
    UNARY_OP = 264,                /* UNARY_OP  */
    ARTH_OP = 265,                 /* ARTH_OP  */
    TF_TOKEN = 266,                /* TF_TOKEN  */
    RETURN_TOKEN = 267,            /* RETURN_TOKEN  */
    SCOPE_TOKEN = 268,             /* SCOPE_TOKEN  */
    CLASS_TOKEN = 269,             /* CLASS_TOKEN  */
    DECLARE_TOKEN = 270,           /* DECLARE_TOKEN  */
    EXPR_TOKEN = 271,              /* EXPR_TOKEN  */
    CALL_TOKEN = 272,              /* CALL_TOKEN  */
    THIS_TOKEN = 273,              /* THIS_TOKEN  */
    LOOP_WHILE = 274,              /* LOOP_WHILE  */
    IF_TOKEN = 275,                /* IF_TOKEN  */
    ELSE_TOKEN = 276,              /* ELSE_TOKEN  */
    ARROW_TOKEN = 277,             /* ARROW_TOKEN  */
    DTYPE_TOKEN = 278,             /* DTYPE_TOKEN  */
    EQ_TOKEN = 279,                /* EQ_TOKEN  */
    DO_TOKEN = 280,                /* DO_TOKEN  */
    FOR_TOKEN = 281,               /* FOR_TOKEN  */
    SEMI_TOKEN = 282,              /* SEMI_TOKEN  */
    COMMA_TOKEN = 283,             /* COMMA_TOKEN  */
    OPARAN_TOKEN = 284,            /* OPARAN_TOKEN  */
    CPARAN_TOKEN = 285,            /* CPARAN_TOKEN  */
    OSQ_TOKEN = 286,               /* OSQ_TOKEN  */
    CSQ_TOKEN = 287,               /* CSQ_TOKEN  */
    OBRACE_TOKEN = 288,            /* OBRACE_TOKEN  */
    CBRACE_TOKEN = 289,            /* CBRACE_TOKEN  */
    VOID_TOKEN = 290               /* VOID_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID_T 258
#define CONST_T 259
#define STR_T 260
#define CHAR_T 261
#define COMP_OP 262
#define NEG_OP 263
#define UNARY_OP 264
#define ARTH_OP 265
#define TF_TOKEN 266
#define RETURN_TOKEN 267
#define SCOPE_TOKEN 268
#define CLASS_TOKEN 269
#define DECLARE_TOKEN 270
#define EXPR_TOKEN 271
#define CALL_TOKEN 272
#define THIS_TOKEN 273
#define LOOP_WHILE 274
#define IF_TOKEN 275
#define ELSE_TOKEN 276
#define ARROW_TOKEN 277
#define DTYPE_TOKEN 278
#define EQ_TOKEN 279
#define DO_TOKEN 280
#define FOR_TOKEN 281
#define SEMI_TOKEN 282
#define COMMA_TOKEN 283
#define OPARAN_TOKEN 284
#define CPARAN_TOKEN 285
#define OSQ_TOKEN 286
#define CSQ_TOKEN 287
#define OBRACE_TOKEN 288
#define CBRACE_TOKEN 289
#define VOID_TOKEN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID_T = 3,                       /* ID_T  */
  YYSYMBOL_CONST_T = 4,                    /* CONST_T  */
  YYSYMBOL_STR_T = 5,                      /* STR_T  */
  YYSYMBOL_CHAR_T = 6,                     /* CHAR_T  */
  YYSYMBOL_COMP_OP = 7,                    /* COMP_OP  */
  YYSYMBOL_NEG_OP = 8,                     /* NEG_OP  */
  YYSYMBOL_UNARY_OP = 9,                   /* UNARY_OP  */
  YYSYMBOL_ARTH_OP = 10,                   /* ARTH_OP  */
  YYSYMBOL_TF_TOKEN = 11,                  /* TF_TOKEN  */
  YYSYMBOL_RETURN_TOKEN = 12,              /* RETURN_TOKEN  */
  YYSYMBOL_SCOPE_TOKEN = 13,               /* SCOPE_TOKEN  */
  YYSYMBOL_CLASS_TOKEN = 14,               /* CLASS_TOKEN  */
  YYSYMBOL_DECLARE_TOKEN = 15,             /* DECLARE_TOKEN  */
  YYSYMBOL_EXPR_TOKEN = 16,                /* EXPR_TOKEN  */
  YYSYMBOL_CALL_TOKEN = 17,                /* CALL_TOKEN  */
  YYSYMBOL_THIS_TOKEN = 18,                /* THIS_TOKEN  */
  YYSYMBOL_LOOP_WHILE = 19,                /* LOOP_WHILE  */
  YYSYMBOL_IF_TOKEN = 20,                  /* IF_TOKEN  */
  YYSYMBOL_ELSE_TOKEN = 21,                /* ELSE_TOKEN  */
  YYSYMBOL_ARROW_TOKEN = 22,               /* ARROW_TOKEN  */
  YYSYMBOL_DTYPE_TOKEN = 23,               /* DTYPE_TOKEN  */
  YYSYMBOL_EQ_TOKEN = 24,                  /* EQ_TOKEN  */
  YYSYMBOL_DO_TOKEN = 25,                  /* DO_TOKEN  */
  YYSYMBOL_FOR_TOKEN = 26,                 /* FOR_TOKEN  */
  YYSYMBOL_SEMI_TOKEN = 27,                /* SEMI_TOKEN  */
  YYSYMBOL_COMMA_TOKEN = 28,               /* COMMA_TOKEN  */
  YYSYMBOL_OPARAN_TOKEN = 29,              /* OPARAN_TOKEN  */
  YYSYMBOL_CPARAN_TOKEN = 30,              /* CPARAN_TOKEN  */
  YYSYMBOL_OSQ_TOKEN = 31,                 /* OSQ_TOKEN  */
  YYSYMBOL_CSQ_TOKEN = 32,                 /* CSQ_TOKEN  */
  YYSYMBOL_OBRACE_TOKEN = 33,              /* OBRACE_TOKEN  */
  YYSYMBOL_CBRACE_TOKEN = 34,              /* CBRACE_TOKEN  */
  YYSYMBOL_VOID_TOKEN = 35,                /* VOID_TOKEN  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_type = 38,                      /* type  */
  YYSYMBOL_cust_dtype = 39,                /* cust_dtype  */
  YYSYMBOL_fn_foo = 40,                    /* fn_foo  */
  YYSYMBOL_func_decl = 41,                 /* func_decl  */
  YYSYMBOL_fn_name = 42,                   /* fn_name  */
  YYSYMBOL_params = 43,                    /* params  */
  YYSYMBOL_params_list = 44,               /* params_list  */
  YYSYMBOL_params_decl = 45,               /* params_decl  */
  YYSYMBOL_param_temp = 46,                /* param_temp  */
  YYSYMBOL_stmts = 47,                     /* stmts  */
  YYSYMBOL_id_list = 48,                   /* id_list  */
  YYSYMBOL_stmt_types = 49,                /* stmt_types  */
  YYSYMBOL_decl_stmt = 50,                 /* decl_stmt  */
  YYSYMBOL_expr_stmt = 51,                 /* expr_stmt  */
  YYSYMBOL_call_params = 52,               /* call_params  */
  YYSYMBOL_fn_tempy = 53,                  /* fn_tempy  */
  YYSYMBOL_fn_call_stmt = 54,              /* fn_call_stmt  */
  YYSYMBOL_if_this = 55,                   /* if_this  */
  YYSYMBOL_class_call_stmt = 56,           /* class_call_stmt  */
  YYSYMBOL_if_foo = 57,                    /* if_foo  */
  YYSYMBOL_else_foo = 58,                  /* else_foo  */
  YYSYMBOL_cond_stmt = 59,                 /* cond_stmt  */
  YYSYMBOL_loop_foo = 60,                  /* loop_foo  */
  YYSYMBOL_loop_stmt = 61,                 /* loop_stmt  */
  YYSYMBOL_cust_unary = 62,                /* cust_unary  */
  YYSYMBOL_in_for = 63,                    /* in_for  */
  YYSYMBOL_in_for_fpart = 64,              /* in_for_fpart  */
  YYSYMBOL_predicate = 65,                 /* predicate  */
  YYSYMBOL_for_foo = 66,                   /* for_foo  */
  YYSYMBOL_for_loop_stmt = 67,             /* for_loop_stmt  */
  YYSYMBOL_ret_stmt = 68,                  /* ret_stmt  */
  YYSYMBOL_ret_type = 69,                  /* ret_type  */
  YYSYMBOL_unary_stmt = 70,                /* unary_stmt  */
  YYSYMBOL_exp_rhs = 71,                   /* exp_rhs  */
  YYSYMBOL_class_foo = 72,                 /* class_foo  */
  YYSYMBOL_class_decl = 73,                /* class_decl  */
  YYSYMBOL_body = 74,                      /* body  */
  YYSYMBOL_class_fun = 75                  /* class_fun  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    48,    50,    51,    53,    54,    57,    59,
      64,    65,    68,    69,    71,    73,    74,    76,    77,    80,
      81,    82,    85,    86,    87,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   101,   102,   105,   107,   108,   110,
     111,   114,   116,   117,   121,   125,   127,   129,   130,   134,
     136,   139,   140,   142,   144,   145,   146,   149,   150,   151,
     152,   153,   156,   158,   162,   164,   165,   167,   168,   169,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   187,   189,   191,   192,   194,   195
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID_T", "CONST_T",
  "STR_T", "CHAR_T", "COMP_OP", "NEG_OP", "UNARY_OP", "ARTH_OP",
  "TF_TOKEN", "RETURN_TOKEN", "SCOPE_TOKEN", "CLASS_TOKEN",
  "DECLARE_TOKEN", "EXPR_TOKEN", "CALL_TOKEN", "THIS_TOKEN", "LOOP_WHILE",
  "IF_TOKEN", "ELSE_TOKEN", "ARROW_TOKEN", "DTYPE_TOKEN", "EQ_TOKEN",
  "DO_TOKEN", "FOR_TOKEN", "SEMI_TOKEN", "COMMA_TOKEN", "OPARAN_TOKEN",
  "CPARAN_TOKEN", "OSQ_TOKEN", "CSQ_TOKEN", "OBRACE_TOKEN", "CBRACE_TOKEN",
  "VOID_TOKEN", "$accept", "program", "type", "cust_dtype", "fn_foo",
  "func_decl", "fn_name", "params", "params_list", "params_decl",
  "param_temp", "stmts", "id_list", "stmt_types", "decl_stmt", "expr_stmt",
  "call_params", "fn_tempy", "fn_call_stmt", "if_this", "class_call_stmt",
  "if_foo", "else_foo", "cond_stmt", "loop_foo", "loop_stmt", "cust_unary",
  "in_for", "in_for_fpart", "predicate", "for_foo", "for_loop_stmt",
  "ret_stmt", "ret_type", "unary_stmt", "exp_rhs", "class_foo",
  "class_decl", "body", "class_fun", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,    41,    69,    11,  -104,  -104,  -104,    74,    55,    57,
      52,    62,    57,  -104,    52,    95,  -104,    83,  -104,    95,
    -104,    71,    88,   117,    13,    34,   141,     7,   119,   120,
     121,    95,   124,    95,  -104,   128,  -104,   129,  -104,   126,
    -104,  -104,   133,   130,   148,    -6,    42,   112,  -104,  -104,
    -104,    88,   134,   135,  -104,  -104,    88,  -104,   143,  -104,
     159,    88,  -104,   140,   159,     3,     3,   145,  -104,    96,
     144,   146,    88,   127,     4,   142,    86,  -104,  -104,   137,
     147,    95,  -104,  -104,    41,  -104,  -104,  -104,   171,   172,
     149,  -104,   150,   152,  -104,    88,    88,     8,   173,    88,
      19,  -104,    54,     3,  -104,  -104,    88,  -104,  -104,    20,
      88,   127,    22,   170,   179,     4,   153,   157,  -104,  -104,
      95,    95,   151,  -104,  -104,  -104,  -104,    42,  -104,    50,
      36,    77,  -104,    52,  -104,  -104,  -104,     3,   156,   102,
    -104,  -104,    37,    39,   127,  -104,    88,   163,   158,  -104,
     127,   155,   160,  -104,  -104,  -104,  -104,  -104,     6,  -104,
      88,   161,  -104,  -104,  -104,  -104,  -104,  -104,    88,  -104,
     115,   174,  -104,    88,  -104,    56,    50,   159,   111,  -104,
     164,  -104,  -104,  -104,   111,  -104,  -104,    95,   162,   165,
    -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     2,     6,     7,     0,     0,     3,
      11,     0,     3,     1,    11,    20,     5,     0,    82,    20,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    20,    25,     0,    27,     0,    28,     0,
      29,    30,     0,     0,    87,     0,    13,    75,    76,    77,
      78,     0,     0,     0,    79,    42,     0,    80,     0,    81,
      68,     0,    65,     0,    66,     0,     0,     0,    26,    11,
       0,     0,     0,    61,    55,     0,     0,     9,    19,     0,
       0,    20,    31,    10,     0,    85,    83,    84,     0,     0,
       0,    12,    18,     0,    73,     0,     0,     0,     0,     0,
       0,    64,     0,     0,    35,    34,     0,    32,    33,     0,
       0,    61,     0,     0,     0,    55,     0,     0,    21,    69,
      20,    20,     0,    86,    16,    15,     8,     0,    14,     0,
       0,     0,    70,    11,    74,    67,    24,     0,     0,     0,
      49,    57,     0,     0,    61,    45,     0,     0,     0,    62,
      61,     0,     0,    63,    17,    40,    39,    41,     0,    72,
       0,     0,    22,    23,    36,    59,    60,    58,     0,    56,
       0,    48,    50,     0,    38,     0,     0,    54,    52,    46,
       0,    37,    71,    44,     0,    53,    51,    20,     0,     0,
      47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,   114,  -104,  -104,  -104,   107,    -5,  -104,    66,  -104,
    -104,   -19,   -64,  -104,  -104,  -104,    23,    24,   175,  -104,
     176,  -104,  -104,  -104,  -104,  -104,  -104,  -104,    89,  -103,
    -104,  -104,  -104,  -104,   -27,   -21,  -104,  -104,  -104,   166
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     7,     8,     9,    93,    90,    91,    92,
     128,    32,   104,    33,    34,    68,   156,   157,    57,    58,
      59,    35,   180,    36,    37,    38,   185,   116,   117,   112,
      39,    40,    41,    63,    42,   113,    11,    12,    45,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    60,   105,    64,    76,    18,   102,    84,   142,    21,
      69,    13,    75,    99,    78,    99,    47,    48,    49,    50,
     114,    51,    52,    53,    54,    55,    99,    99,    86,   144,
      94,    55,   103,   115,   173,    97,   174,    65,   132,   138,
     100,   166,    56,    99,   144,    88,   146,   170,    62,   135,
     140,   109,   145,    47,    48,    49,    50,    66,    51,    52,
      53,    54,   122,    99,     5,    89,   159,   165,    55,   132,
       1,     2,    10,   162,   130,   131,     6,    14,   134,    56,
     155,   136,   137,    17,    99,   139,   182,    43,    15,   141,
     143,    47,    48,    49,    50,    19,    51,    52,    53,    54,
      46,   151,   152,    22,    23,   160,    55,    24,   158,    99,
      25,    26,    27,    82,    28,    29,   119,    56,   -43,    22,
      23,    30,   144,    16,    31,   167,    20,    17,   161,   164,
      47,    48,    49,    50,   -43,   110,    52,    53,    54,   175,
     184,   -11,   178,    17,    67,    55,    61,   177,    72,    73,
      74,   186,   158,    79,    80,   158,   111,   188,    77,    81,
      82,    84,    83,    95,    96,    98,    99,   101,   189,   106,
     120,   107,   118,   108,   124,   125,   133,   146,   127,   126,
     121,   129,   147,   149,   150,   153,   163,   168,   169,   171,
     176,   123,   119,   154,   172,   179,   181,   187,     0,   190,
     183,     0,    70,    71,   148,     0,     0,     0,     0,     0,
       0,    87
};

static const yytype_int16 yycheck[] =
{
      19,    22,    66,    24,    31,    10,     3,    13,   111,    14,
       3,     0,    31,     7,    33,     7,     3,     4,     5,     6,
      16,     8,     9,    10,    11,    18,     7,     7,    34,     7,
      51,    18,    29,    29,    28,    56,    30,     3,    30,   103,
      61,   144,    29,     7,     7,     3,     7,   150,    35,    30,
      30,    72,    30,     3,     4,     5,     6,    23,     8,     9,
      10,    11,    81,     7,    23,    23,    30,    30,    18,    30,
      13,    14,     3,   137,    95,    96,    35,     3,    99,    29,
      30,    27,    28,    31,     7,   106,    30,     4,    33,   110,
     111,     3,     4,     5,     6,    33,     8,     9,    10,    11,
      29,   120,   121,     8,     9,    28,    18,    12,   129,     7,
      15,    16,    17,    27,    19,    20,    30,    29,    22,     8,
       9,    26,     7,     9,    29,   146,    12,    31,   133,    27,
       3,     4,     5,     6,    22,     8,     9,    10,    11,   160,
      29,    29,    27,    31,     3,    18,    29,   168,    29,    29,
      29,   178,   173,    25,    25,   176,    29,   184,    34,    33,
      27,    13,    32,    29,    29,    22,     7,    27,   187,    24,
      33,    27,    30,    27,     3,     3,     3,     7,    28,    30,
      33,    29,     3,    30,    27,    34,    30,    24,    30,    34,
      29,    84,    30,   127,    34,    21,   173,    33,    -1,    34,
     176,    -1,    27,    27,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    14,    37,    38,    23,    35,    39,    40,    41,
       3,    72,    73,     0,     3,    33,    37,    31,    42,    33,
      37,    42,     8,     9,    12,    15,    16,    17,    19,    20,
      26,    29,    47,    49,    50,    57,    59,    60,    61,    66,
      67,    68,    70,     4,    47,    74,    29,     3,     4,     5,
       6,     8,     9,    10,    11,    18,    29,    54,    55,    56,
      71,    29,    35,    69,    71,     3,    23,     3,    51,     3,
      54,    56,    29,    29,    29,    47,    70,    34,    47,    25,
      25,    33,    27,    32,    13,    75,    34,    75,     3,    23,
      43,    44,    45,    42,    71,    29,    29,    71,    22,     7,
      71,    27,     3,    29,    48,    48,    24,    27,    27,    71,
       8,    29,    65,    71,    16,    29,    63,    64,    30,    30,
      33,    33,    47,    41,     3,     3,    30,    28,    46,    29,
      71,    71,    30,     3,    71,    30,    27,    28,    48,    71,
      30,    71,    65,    71,     7,    30,     7,     3,    64,    30,
      27,    47,    47,    34,    44,    30,    52,    53,    71,    30,
      28,    42,    48,    30,    27,    30,    65,    71,    24,    30,
      65,    34,    34,    28,    30,    71,    29,    71,    27,    21,
      58,    52,    30,    53,    29,    62,    70,    33,    70,    47,
      34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    40,    41,
      42,    42,    43,    43,    44,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    55,    55,    56,    57,    58,    59,    59,    60,
      61,    62,    62,    63,    64,    64,    64,    65,    65,    65,
      65,    65,    66,    67,    68,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    73,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     3,     1,     1,     6,     4,
       3,     0,     1,     0,     2,     2,     2,     2,     0,     2,
       0,     3,     3,     3,     2,     1,     2,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     4,     3,     2,     1,
       1,     4,     1,     1,     6,     4,     1,     9,     5,     4,
       5,     1,     0,     5,     4,     0,     3,     2,     3,     3,
       3,     0,     4,     4,     3,     1,     1,     4,     2,     3,
       3,     6,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     2,     2,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 8: /* fn_foo: cust_dtype ID_T fn_name OPARAN_TOKEN params CPARAN_TOKEN  */
#line 57 "parser.y"
                                                                 {fprintf(parsed_fp," : function definiton");ret_no=0;}
#line 1384 "y.tab.c"
    break;

  case 9: /* func_decl: fn_foo OBRACE_TOKEN stmts CBRACE_TOKEN  */
#line 59 "parser.y"
                                                  {
        if(ret_no==0) yyerror("Atleast one return statement expected");
}
#line 1392 "y.tab.c"
    break;

  case 25: /* stmt_types: decl_stmt  */
#line 90 "parser.y"
                        {fprintf(parsed_fp," : declaration statement");}
#line 1398 "y.tab.c"
    break;

  case 26: /* stmt_types: EXPR_TOKEN expr_stmt  */
#line 91 "parser.y"
                                   {fprintf(parsed_fp," : expression statement");}
#line 1404 "y.tab.c"
    break;

  case 30: /* stmt_types: ret_stmt  */
#line 95 "parser.y"
                      {fprintf(parsed_fp," : return statement");ret_no++;}
#line 1410 "y.tab.c"
    break;

  case 31: /* stmt_types: unary_stmt SEMI_TOKEN  */
#line 96 "parser.y"
                                    {fprintf(parsed_fp," : call statement");}
#line 1416 "y.tab.c"
    break;

  case 32: /* stmt_types: CALL_TOKEN fn_call_stmt SEMI_TOKEN  */
#line 97 "parser.y"
                                                 {fprintf(parsed_fp," : call statement");}
#line 1422 "y.tab.c"
    break;

  case 33: /* stmt_types: CALL_TOKEN class_call_stmt SEMI_TOKEN  */
#line 98 "parser.y"
                                                    {fprintf(parsed_fp," : call statement with object");}
#line 1428 "y.tab.c"
    break;

  case 45: /* if_foo: IF_TOKEN OPARAN_TOKEN predicate CPARAN_TOKEN  */
#line 125 "parser.y"
                                                       {fprintf(parsed_fp," : conditional statement");}
#line 1434 "y.tab.c"
    break;

  case 46: /* else_foo: ELSE_TOKEN  */
#line 127 "parser.y"
                       {fprintf(parsed_fp," : conditional statement");}
#line 1440 "y.tab.c"
    break;

  case 49: /* loop_foo: LOOP_WHILE OPARAN_TOKEN exp_rhs CPARAN_TOKEN  */
#line 134 "parser.y"
                                                        {fprintf(parsed_fp," : loop");}
#line 1446 "y.tab.c"
    break;

  case 62: /* for_foo: FOR_TOKEN OPARAN_TOKEN in_for CPARAN_TOKEN  */
#line 156 "parser.y"
                                                     {fprintf(parsed_fp," : loop");}
#line 1452 "y.tab.c"
    break;

  case 82: /* class_foo: ID_T fn_name  */
#line 187 "parser.y"
                         {fprintf(parsed_fp," : class definition");}
#line 1458 "y.tab.c"
    break;


#line 1462 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 198 "parser.y"

#include "lex.yy.c"

void yyerror(char * s)
/* yacc error handler */
{  
 fprintf (parsed_fp, "\ninvalid statement\n");
 fprintf (stderr, "Error: %s ,At line no : %d\n", s,l_no);
 exit(0);
}
  
int main()
{
  ret_no=0;
  arr=(char *)calloc(1000,sizeof(char));
  int t;
  printf("Enter test case number: ");
  scanf("%d",&t);
  char input_file[100];
  char token_file[100];
  char parsed_file[100];
  sprintf(input_file,"./TPP/public_test_%d.clike",t);
  sprintf(token_file,"./TPP/TPPO/seq_tokens_%d.txt",t);
  sprintf(parsed_file,"./TPP/TPPO/parser_%d.parsed",t);
  yyin = fopen(input_file, "r"); //open input file
  token_fp=fopen(token_file,"w"); //open token file
  parsed_fp=fopen(parsed_file,"w"); //open token file
  if(yyin==NULL||token_fp==NULL||parsed_fp==NULL) 
  {
      printf("Error opening file s\n");
      return 0;
  }
  fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
//   printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(parsed_fp);
  return 0;
}
