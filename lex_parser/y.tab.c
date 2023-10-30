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
    ITER = 258,                    /* ITER  */
    UNTIL = 259,                   /* UNTIL  */
    RETURN = 260,                  /* RETURN  */
    REM = 261,                     /* REM  */
    NEQ = 262,                     /* NEQ  */
    OR = 263,                      /* OR  */
    NEG = 264,                     /* NEG  */
    AND = 265,                     /* AND  */
    INT = 266,                     /* INT  */
    CINT = 267,                    /* CINT  */
    DOUBLE = 268,                  /* DOUBLE  */
    CDOUBLE = 269,                 /* CDOUBLE  */
    STR = 270,                     /* STR  */
    STRING = 271,                  /* STRING  */
    BIN = 272,                     /* BIN  */
    REAL = 273,                    /* REAL  */
    IMG = 274,                     /* IMG  */
    POW = 275,                     /* POW  */
    POLAR = 276,                   /* POLAR  */
    CONJUGATE = 277,               /* CONJUGATE  */
    MOD = 278,                     /* MOD  */
    ARG = 279,                     /* ARG  */
    ANGLE = 280,                   /* ANGLE  */
    DIST = 281,                    /* DIST  */
    CPRINT = 282,                  /* CPRINT  */
    ROTATE = 283,                  /* ROTATE  */
    CHOICE = 284,                  /* CHOICE  */
    ALT = 285,                     /* ALT  */
    DEFAULT = 286,                 /* DEFAULT  */
    GET_LINE = 287,                /* GET_LINE  */
    IS_TRIANGLE = 288,             /* IS_TRIANGLE  */
    GET_CENTROID = 289,            /* GET_CENTROID  */
    GET_CIRCUMCENTER = 290,        /* GET_CIRCUMCENTER  */
    GET_ORTHOCENTER = 291,         /* GET_ORTHOCENTER  */
    GET_INCENTER = 292,            /* GET_INCENTER  */
    GET_EXCENTER = 293,            /* GET_EXCENTER  */
    GET_AREA = 294,                /* GET_AREA  */
    GET_PERIMETER = 295,           /* GET_PERIMETER  */
    ID = 296,                      /* ID  */
    SEMICOL = 297,                 /* SEMICOL  */
    COMMA = 298,                   /* COMMA  */
    COLON = 299,                   /* COLON  */
    QUOTE = 300,                   /* QUOTE  */
    GT = 301,                      /* GT  */
    LT = 302,                      /* LT  */
    EQ = 303,                      /* EQ  */
    NE = 304,                      /* NE  */
    INC = 305,                     /* INC  */
    DEC = 306,                     /* DEC  */
    ASSIGN = 307,                  /* ASSIGN  */
    LE = 308,                      /* LE  */
    GE = 309,                      /* GE  */
    INT_NUM = 310,                 /* INT_NUM  */
    DOUBLE_NUM = 311,              /* DOUBLE_NUM  */
    ARITH_OP = 312,                /* ARITH_OP  */
    ACCESS_OP1 = 313,              /* ACCESS_OP1  */
    ACCESS_OP2 = 314,              /* ACCESS_OP2  */
    INN_PROD = 315,                /* INN_PROD  */
    OPEN_CIR_PAR = 316,            /* OPEN_CIR_PAR  */
    CLOSE_CIR_PAR = 317,           /* CLOSE_CIR_PAR  */
    OPEN_CURLY_PAR = 318,          /* OPEN_CURLY_PAR  */
    CLOSE_CURLY_PAR = 319,         /* CLOSE_CURLY_PAR  */
    OPEN_SQUARE_PAR = 320,         /* OPEN_SQUARE_PAR  */
    CLOSE_SQUARE_PAR = 321         /* CLOSE_SQUARE_PAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ITER 258
#define UNTIL 259
#define RETURN 260
#define REM 261
#define NEQ 262
#define OR 263
#define NEG 264
#define AND 265
#define INT 266
#define CINT 267
#define DOUBLE 268
#define CDOUBLE 269
#define STR 270
#define STRING 271
#define BIN 272
#define REAL 273
#define IMG 274
#define POW 275
#define POLAR 276
#define CONJUGATE 277
#define MOD 278
#define ARG 279
#define ANGLE 280
#define DIST 281
#define CPRINT 282
#define ROTATE 283
#define CHOICE 284
#define ALT 285
#define DEFAULT 286
#define GET_LINE 287
#define IS_TRIANGLE 288
#define GET_CENTROID 289
#define GET_CIRCUMCENTER 290
#define GET_ORTHOCENTER 291
#define GET_INCENTER 292
#define GET_EXCENTER 293
#define GET_AREA 294
#define GET_PERIMETER 295
#define ID 296
#define SEMICOL 297
#define COMMA 298
#define COLON 299
#define QUOTE 300
#define GT 301
#define LT 302
#define EQ 303
#define NE 304
#define INC 305
#define DEC 306
#define ASSIGN 307
#define LE 308
#define GE 309
#define INT_NUM 310
#define DOUBLE_NUM 311
#define ARITH_OP 312
#define ACCESS_OP1 313
#define ACCESS_OP2 314
#define INN_PROD 315
#define OPEN_CIR_PAR 316
#define CLOSE_CIR_PAR 317
#define OPEN_CURLY_PAR 318
#define CLOSE_CURLY_PAR 319
#define OPEN_SQUARE_PAR 320
#define CLOSE_SQUARE_PAR 321

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
  YYSYMBOL_ITER = 3,                       /* ITER  */
  YYSYMBOL_UNTIL = 4,                      /* UNTIL  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_REM = 6,                        /* REM  */
  YYSYMBOL_NEQ = 7,                        /* NEQ  */
  YYSYMBOL_OR = 8,                         /* OR  */
  YYSYMBOL_NEG = 9,                        /* NEG  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_CINT = 12,                      /* CINT  */
  YYSYMBOL_DOUBLE = 13,                    /* DOUBLE  */
  YYSYMBOL_CDOUBLE = 14,                   /* CDOUBLE  */
  YYSYMBOL_STR = 15,                       /* STR  */
  YYSYMBOL_STRING = 16,                    /* STRING  */
  YYSYMBOL_BIN = 17,                       /* BIN  */
  YYSYMBOL_REAL = 18,                      /* REAL  */
  YYSYMBOL_IMG = 19,                       /* IMG  */
  YYSYMBOL_POW = 20,                       /* POW  */
  YYSYMBOL_POLAR = 21,                     /* POLAR  */
  YYSYMBOL_CONJUGATE = 22,                 /* CONJUGATE  */
  YYSYMBOL_MOD = 23,                       /* MOD  */
  YYSYMBOL_ARG = 24,                       /* ARG  */
  YYSYMBOL_ANGLE = 25,                     /* ANGLE  */
  YYSYMBOL_DIST = 26,                      /* DIST  */
  YYSYMBOL_CPRINT = 27,                    /* CPRINT  */
  YYSYMBOL_ROTATE = 28,                    /* ROTATE  */
  YYSYMBOL_CHOICE = 29,                    /* CHOICE  */
  YYSYMBOL_ALT = 30,                       /* ALT  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_GET_LINE = 32,                  /* GET_LINE  */
  YYSYMBOL_IS_TRIANGLE = 33,               /* IS_TRIANGLE  */
  YYSYMBOL_GET_CENTROID = 34,              /* GET_CENTROID  */
  YYSYMBOL_GET_CIRCUMCENTER = 35,          /* GET_CIRCUMCENTER  */
  YYSYMBOL_GET_ORTHOCENTER = 36,           /* GET_ORTHOCENTER  */
  YYSYMBOL_GET_INCENTER = 37,              /* GET_INCENTER  */
  YYSYMBOL_GET_EXCENTER = 38,              /* GET_EXCENTER  */
  YYSYMBOL_GET_AREA = 39,                  /* GET_AREA  */
  YYSYMBOL_GET_PERIMETER = 40,             /* GET_PERIMETER  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_SEMICOL = 42,                   /* SEMICOL  */
  YYSYMBOL_COMMA = 43,                     /* COMMA  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_QUOTE = 45,                     /* QUOTE  */
  YYSYMBOL_GT = 46,                        /* GT  */
  YYSYMBOL_LT = 47,                        /* LT  */
  YYSYMBOL_EQ = 48,                        /* EQ  */
  YYSYMBOL_NE = 49,                        /* NE  */
  YYSYMBOL_INC = 50,                       /* INC  */
  YYSYMBOL_DEC = 51,                       /* DEC  */
  YYSYMBOL_ASSIGN = 52,                    /* ASSIGN  */
  YYSYMBOL_LE = 53,                        /* LE  */
  YYSYMBOL_GE = 54,                        /* GE  */
  YYSYMBOL_INT_NUM = 55,                   /* INT_NUM  */
  YYSYMBOL_DOUBLE_NUM = 56,                /* DOUBLE_NUM  */
  YYSYMBOL_ARITH_OP = 57,                  /* ARITH_OP  */
  YYSYMBOL_ACCESS_OP1 = 58,                /* ACCESS_OP1  */
  YYSYMBOL_ACCESS_OP2 = 59,                /* ACCESS_OP2  */
  YYSYMBOL_INN_PROD = 60,                  /* INN_PROD  */
  YYSYMBOL_OPEN_CIR_PAR = 61,              /* OPEN_CIR_PAR  */
  YYSYMBOL_CLOSE_CIR_PAR = 62,             /* CLOSE_CIR_PAR  */
  YYSYMBOL_OPEN_CURLY_PAR = 63,            /* OPEN_CURLY_PAR  */
  YYSYMBOL_CLOSE_CURLY_PAR = 64,           /* CLOSE_CURLY_PAR  */
  YYSYMBOL_OPEN_SQUARE_PAR = 65,           /* OPEN_SQUARE_PAR  */
  YYSYMBOL_CLOSE_SQUARE_PAR = 66,          /* CLOSE_SQUARE_PAR  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_stmts = 69,                     /* stmts  */
  YYSYMBOL_stmt_types = 70,                /* stmt_types  */
  YYSYMBOL_func_stmt = 71,                 /* func_stmt  */
  YYSYMBOL_stmts1 = 72,                    /* stmts1  */
  YYSYMBOL_data_type = 73,                 /* data_type  */
  YYSYMBOL_if_stmt = 74,                   /* if_stmt  */
  YYSYMBOL_elif_stmt = 75,                 /* elif_stmt  */
  YYSYMBOL_for_stmt = 76,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 77,                /* while_stmt  */
  YYSYMBOL_decl_stmt = 78,                 /* decl_stmt  */
  YYSYMBOL_void_fn_calls = 79,             /* void_fn_calls  */
  YYSYMBOL_assign_stmt = 80,               /* assign_stmt  */
  YYSYMBOL_return_stmt = 81,               /* return_stmt  */
  YYSYMBOL_predicate = 82,                 /* predicate  */
  YYSYMBOL_exp_rhs = 83,                   /* exp_rhs  */
  YYSYMBOL_fn_call = 84,                   /* fn_call  */
  YYSYMBOL_fn_args = 85,                   /* fn_args  */
  YYSYMBOL_fn_type = 86,                   /* fn_type  */
  YYSYMBOL_iter = 87,                      /* iter  */
  YYSYMBOL_until = 88,                     /* until  */
  YYSYMBOL_inbuilt_fn = 89,                /* inbuilt_fn  */
  YYSYMBOL_real_fn = 90,                   /* real_fn  */
  YYSYMBOL_img_fn = 91,                    /* img_fn  */
  YYSYMBOL_pow_fn = 92,                    /* pow_fn  */
  YYSYMBOL_polar_fn = 93,                  /* polar_fn  */
  YYSYMBOL_conjugate_fn = 94,              /* conjugate_fn  */
  YYSYMBOL_mod_fn = 95,                    /* mod_fn  */
  YYSYMBOL_arg_fn = 96,                    /* arg_fn  */
  YYSYMBOL_angle_fn = 97,                  /* angle_fn  */
  YYSYMBOL_dist_fn = 98,                   /* dist_fn  */
  YYSYMBOL_cprint_fn = 99,                 /* cprint_fn  */
  YYSYMBOL_rotate_fn = 100,                /* rotate_fn  */
  YYSYMBOL_get_line_fn = 101,              /* get_line_fn  */
  YYSYMBOL_is_triangle_fn = 102,           /* is_triangle_fn  */
  YYSYMBOL_get_centroid_fn = 103,          /* get_centroid_fn  */
  YYSYMBOL_get_circumcenter_fn = 104,      /* get_circumcenter_fn  */
  YYSYMBOL_get_orthocenter_fn = 105,       /* get_orthocenter_fn  */
  YYSYMBOL_get_incenter_fn = 106,          /* get_incenter_fn  */
  YYSYMBOL_get_excenter_fn = 107,          /* get_excenter_fn  */
  YYSYMBOL_get_area_fn = 108,              /* get_area_fn  */
  YYSYMBOL_get_perimeter_fn = 109,         /* get_perimeter_fn  */
  YYSYMBOL_var_decl = 110,                 /* var_decl  */
  YYSYMBOL_real_decl = 111,                /* real_decl  */
  YYSYMBOL_int_part = 112,                 /* int_part  */
  YYSYMBOL_int_id_type = 113,              /* int_id_type  */
  YYSYMBOL_double_part = 114,              /* double_part  */
  YYSYMBOL_double_id_type = 115,           /* double_id_type  */
  YYSYMBOL_comp_decl = 116,                /* comp_decl  */
  YYSYMBOL_cint_part = 117,                /* cint_part  */
  YYSYMBOL_cint_id_type = 118,             /* cint_id_type  */
  YYSYMBOL_cdouble_part = 119,             /* cdouble_part  */
  YYSYMBOL_cdouble_id_type = 120           /* cdouble_id_type  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1029

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   152,   152,   153,   156,   157,   159,   160,   161,   162,
     163,   164,   165,   167,   168,   169,   172,   172,   172,   172,
     176,   177,   181,   182,   184,   186,   188,   190,   192,   194,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   222,   223,   225,   226,   227,   229,
     233,   235,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   260,   262,   264,   266,   268,   270,   272,   274,
     276,   278,   280,   282,   284,   286,   288,   290,   292,   294,
     296,   298,   301,   302,   304,   305,   307,   308,   310,   311,
     312,   313,   315,   316,   318,   319,   320,   321,   323,   324,
     326,   327,   329,   330,   331,   332,   333,   334,   336,   337,
     339,   340,   341,   342,   343,   344
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
  "\"end of file\"", "error", "\"invalid token\"", "ITER", "UNTIL",
  "RETURN", "REM", "NEQ", "OR", "NEG", "AND", "INT", "CINT", "DOUBLE",
  "CDOUBLE", "STR", "STRING", "BIN", "REAL", "IMG", "POW", "POLAR",
  "CONJUGATE", "MOD", "ARG", "ANGLE", "DIST", "CPRINT", "ROTATE", "CHOICE",
  "ALT", "DEFAULT", "GET_LINE", "IS_TRIANGLE", "GET_CENTROID",
  "GET_CIRCUMCENTER", "GET_ORTHOCENTER", "GET_INCENTER", "GET_EXCENTER",
  "GET_AREA", "GET_PERIMETER", "ID", "SEMICOL", "COMMA", "COLON", "QUOTE",
  "GT", "LT", "EQ", "NE", "INC", "DEC", "ASSIGN", "LE", "GE", "INT_NUM",
  "DOUBLE_NUM", "ARITH_OP", "ACCESS_OP1", "ACCESS_OP2", "INN_PROD",
  "OPEN_CIR_PAR", "CLOSE_CIR_PAR", "OPEN_CURLY_PAR", "CLOSE_CURLY_PAR",
  "OPEN_SQUARE_PAR", "CLOSE_SQUARE_PAR", "$accept", "program", "stmts",
  "stmt_types", "func_stmt", "stmts1", "data_type", "if_stmt", "elif_stmt",
  "for_stmt", "while_stmt", "decl_stmt", "void_fn_calls", "assign_stmt",
  "return_stmt", "predicate", "exp_rhs", "fn_call", "fn_args", "fn_type",
  "iter", "until", "inbuilt_fn", "real_fn", "img_fn", "pow_fn", "polar_fn",
  "conjugate_fn", "mod_fn", "arg_fn", "angle_fn", "dist_fn", "cprint_fn",
  "rotate_fn", "get_line_fn", "is_triangle_fn", "get_centroid_fn",
  "get_circumcenter_fn", "get_orthocenter_fn", "get_incenter_fn",
  "get_excenter_fn", "get_area_fn", "get_perimeter_fn", "var_decl",
  "real_decl", "int_part", "int_id_type", "double_part", "double_id_type",
  "comp_decl", "cint_part", "cint_id_type", "cdouble_part",
  "cdouble_id_type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-283)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,    23,     6,   -20,  -283,  -283,  -283,  -283,   -26,  -283,
    -283,   157,   -17,    -9,     7,    26,   -54,  -283,  -283,  -283,
     -23,  -283,    29,    21,  -283,    32,    16,  -283,    46,    70,
    -283,    89,   988,    83,    96,    97,   -17,    99,   105,    -9,
       8,   106,   111,     7,   109,   118,    26,   100,   113,   600,
     119,   120,   124,   126,   128,   134,   135,   140,   143,   156,
     158,   159,   160,   161,   162,   163,   164,   169,   170,   174,
     179,   127,   988,   142,  -283,  -283,  -283,   199,   201,   202,
     203,  -283,   185,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,   189,   181,  -283,
     -31,   186,  -283,  -283,   191,   188,  -283,   -29,   204,  -283,
     157,   600,   600,   -35,    73,    90,   600,  -283,   941,  -283,
     600,   600,   600,   600,   600,   600,   600,   600,   600,   600,
     600,   600,   600,   600,   600,   600,   600,   600,   600,   600,
     600,   600,  -283,  -283,  -283,  -283,  -283,  -283,   600,   190,
    -283,   212,   192,  -283,   206,  -283,   216,   214,  -283,   226,
     221,   941,  -283,  -283,  -283,   600,  -283,  -283,  -283,  -283,
      12,   600,   600,   600,   600,   600,   600,   600,   600,   600,
      68,   110,   605,   129,   180,   228,   240,   621,   634,   270,
     655,   222,   676,   689,   705,   718,   731,   747,   760,   773,
     789,   941,   802,   229,   237,   233,   244,   245,   239,   249,
     600,   242,    -3,   600,  -283,  -283,   298,   145,    31,     3,
      17,    39,     9,    80,  -283,  -283,   600,  -283,  -283,  -283,
    -283,   600,   600,  -283,   600,   246,   600,   600,   600,   600,
     600,   600,   600,   600,   600,   600,  -283,   241,   255,   248,
     256,   260,   262,   268,   988,  -283,   288,   305,   323,   347,
     815,   988,   365,   831,   844,   857,   873,   886,   899,   915,
     928,  -283,  -283,   266,  -283,  -283,   271,  -283,   600,   247,
     988,  -283,  -283,  -283,  -283,   600,   265,  -283,   600,   600,
     600,   600,   600,   600,   600,   600,   264,   272,   382,  -283,
    -283,   400,   309,   424,   442,   459,   477,   501,   519,   536,
     554,  -283,  -283,   277,  -283,   282,   313,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,   988,   600,   283,   284,   285,
     988,  -283,   286,   292,   988,  -283,   296,   309,  -283
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,    16,    17,    18,    19,     0,     1,
       2,     0,     0,     0,     0,     0,     0,    26,   102,   103,
     108,   104,   106,   122,   118,   120,   114,   105,   112,   130,
     119,   128,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    15,     0,     8,     9,    10,     0,     0,     0,
       0,    27,     0,    24,    25,    55,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   109,     0,     0,   107,
       0,     0,   121,   115,     0,     0,   113,     0,     0,   129,
       0,     0,     0,    42,    43,    44,     0,    41,    29,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    13,     7,    12,     6,    11,    58,     0,
     110,     0,   123,   125,     0,   116,     0,   131,   133,     0,
      41,     0,    38,    46,    47,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    37,    36,    30,    31,    32,
      33,    35,    34,    40,    82,    83,     0,    85,    86,    87,
      88,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    54,     0,   124,     0,
       0,   132,     0,    41,     5,    52,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,   111,     0,   126,   117,     0,   134,     0,     0,
       5,    53,    84,    89,    90,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       4,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   135,     0,    92,     0,    20,    94,    95,    96,
      97,    98,    99,   100,   101,     5,     0,     0,     0,    41,
      15,    60,     0,     0,    15,    21,     0,    23,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,   358,  -282,  -262,  -283,   -71,  -283,  -283,    18,  -283,
    -283,    -7,  -283,  -283,  -283,  -118,   -39,   -32,   108,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,   328,  -283,   325,  -283,  -283,
     327,  -283,   332,  -283
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   289,    72,     3,    73,     8,    74,   326,    75,
      76,    77,    78,    79,    80,   127,   171,   129,   213,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    17,    18,    21,    22,    27,    28,    19,
      24,    25,    30,    31
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,   152,   290,   170,    16,   181,     9,   182,   310,    32,
     128,   181,   161,   182,   166,   173,   174,   181,    11,   182,
     181,     1,   182,   201,    20,   181,   -59,   182,   290,    33,
     175,   162,    23,   167,     4,     5,     6,     7,    34,   181,
      81,   182,    35,   183,   184,   185,   186,   181,    26,   182,
     187,   188,   186,   338,   189,   223,   187,   188,   183,   184,
     185,   186,   187,   265,   113,   187,   188,    29,    40,   189,
     187,   188,    36,   290,   224,    39,   181,    41,   182,   185,
     186,    42,    37,   172,   187,   188,    38,   180,   181,    43,
     182,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   263,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   169,   183,   184,   185,   186,   181,   212,
     182,   187,   188,   176,   177,   189,   183,   184,   185,   186,
     234,    44,    46,   187,   188,    45,   222,   181,   106,   182,
     178,   179,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   107,   108,   181,   110,   182,   183,   184,   185,   186,
     111,   120,   114,   187,   188,   117,   115,   189,    12,    13,
      14,    15,   235,   118,   121,   183,   184,   185,   186,   151,
     130,   131,   187,   188,   266,   132,   189,   133,   181,   134,
     182,   237,   184,   185,   186,   135,   136,   267,   187,   188,
     296,   137,   268,   269,   138,   270,   153,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   212,   139,   339,   140,
     141,   142,   143,   144,   145,   146,   183,   184,   185,   186,
     147,   148,    81,   187,   188,   149,   181,   189,   182,    81,
     150,   154,   238,   155,   156,   157,   158,   160,   181,   308,
     182,   159,   163,   164,   165,   214,   311,   216,    81,   313,
     314,   315,   316,   317,   318,   319,   320,   215,   220,   343,
     168,   217,   218,   346,   183,   184,   185,   186,   181,   219,
     182,   187,   188,   221,   245,   189,   183,   184,   185,   186,
     239,   256,   257,   187,   188,   258,   181,   189,   182,   259,
     260,   261,   240,    81,   262,   264,   181,   282,    81,   271,
     288,   309,    81,   181,   284,   182,   183,   184,   185,   186,
     283,   306,   285,   187,   188,   286,   307,   189,   287,   312,
     321,   181,   243,   182,   183,   184,   185,   186,   322,   325,
     335,   187,   188,   336,   337,   189,   340,   342,   341,   344,
     291,   183,   184,   185,   186,   181,   345,   182,   187,   188,
     347,    10,   189,   281,   109,   348,   112,   292,   116,   183,
     184,   185,   186,   181,     0,   182,   187,   188,   119,     0,
     189,     0,     0,     0,     0,   293,     0,     0,     0,     0,
     181,     0,   182,   183,   184,   185,   186,     0,     0,     0,
     187,   188,     0,     0,   189,     0,     0,     0,   181,   294,
     182,   183,   184,   185,   186,     0,     0,     0,   187,   188,
       0,     0,   189,     0,     0,     0,     0,   297,   183,   184,
     185,   186,   181,     0,   182,   187,   188,     0,     0,   189,
       0,     0,     0,     0,   323,     0,   183,   184,   185,   186,
     181,     0,   182,   187,   188,     0,     0,   189,     0,     0,
       0,     0,   324,     0,     0,     0,     0,   181,     0,   182,
     183,   184,   185,   186,     0,     0,     0,   187,   188,     0,
       0,   189,     0,     0,     0,   181,   327,   182,   183,   184,
     185,   186,     0,     0,     0,   187,   188,     0,     0,   189,
       0,     0,     0,     0,   328,   183,   184,   185,   186,   181,
       0,   182,   187,   188,     0,     0,   189,     0,     0,     0,
       0,   329,     0,   183,   184,   185,   186,   181,     0,   182,
     187,   188,     0,     0,   189,     0,     0,     0,     0,   330,
       0,     0,     0,     0,   181,     0,   182,   183,   184,   185,
     186,     0,     0,     0,   187,   188,     0,     0,   189,     0,
       0,     0,   181,   331,   182,   183,   184,   185,   186,     0,
       0,     0,   187,   188,     0,     0,   189,     0,     0,     0,
       0,   332,   183,   184,   185,   186,     0,     0,     0,   187,
     188,     0,     0,   189,     0,     0,     0,     0,   333,     0,
     183,   184,   185,   186,     0,     0,     0,   187,   188,   122,
       0,   189,     0,   181,     0,   182,   334,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   181,
       0,   182,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   123,   181,     0,   182,     0,     0,     0,   236,     0,
       0,   183,   184,   185,   186,   124,   125,     0,   187,   188,
       0,   126,   189,   181,   241,   182,     0,   183,   184,   185,
     186,     0,     0,     0,   187,   188,     0,   242,   189,     0,
     183,   184,   185,   186,   181,     0,   182,   187,   188,     0,
       0,   189,     0,     0,     0,     0,     0,   181,   244,   182,
       0,   183,   184,   185,   186,     0,     0,     0,   187,   188,
       0,     0,   189,   181,     0,   182,     0,     0,     0,   246,
       0,     0,   183,   184,   185,   186,   181,     0,   182,   187,
     188,     0,   247,   189,     0,   183,   184,   185,   186,   181,
       0,   182,   187,   188,     0,     0,   189,     0,   248,     0,
       0,   183,   184,   185,   186,   181,     0,   182,   187,   188,
       0,   249,   189,     0,   183,   184,   185,   186,   181,     0,
     182,   187,   188,     0,   250,   189,     0,   183,   184,   185,
     186,   181,     0,   182,   187,   188,     0,     0,   189,     0,
     251,     0,     0,   183,   184,   185,   186,   181,     0,   182,
     187,   188,     0,   252,   189,     0,   183,   184,   185,   186,
     181,     0,   182,   187,   188,     0,   253,   189,     0,   183,
     184,   185,   186,   181,     0,   182,   187,   188,     0,     0,
     189,     0,   254,     0,     0,   183,   184,   185,   186,   181,
       0,   182,   187,   188,     0,   255,   189,     0,   183,   184,
     185,   186,   181,     0,   182,   187,   188,     0,   295,   189,
       0,   183,   184,   185,   186,   181,     0,   182,   187,   188,
       0,     0,   189,     0,   298,     0,     0,   183,   184,   185,
     186,   181,     0,   182,   187,   188,     0,   299,   189,     0,
     183,   184,   185,   186,   181,     0,   182,   187,   188,     0,
     300,   189,     0,   183,   184,   185,   186,   181,     0,   182,
     187,   188,     0,     0,   189,     0,   301,     0,     0,   183,
     184,   185,   186,   181,     0,   182,   187,   188,     0,   302,
     189,     0,   183,   184,   185,   186,   181,     0,   182,   187,
     188,     0,   303,   189,     0,   183,   184,   185,   186,   181,
       0,   182,   187,   188,     0,     0,   189,     0,   304,     0,
       0,   183,   184,   185,   186,     0,     0,     0,   187,   188,
       0,   305,   189,     0,   183,   184,   185,   186,     0,     0,
       0,   187,   188,     0,     0,   189,     0,   183,   184,   185,
     186,    47,    48,    49,   187,   188,     0,     0,   189,    12,
      13,    14,    15,     0,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71
};

static const yytype_int16 yycheck[] =
{
      32,    72,   264,   121,    11,     8,     0,    10,   290,    63,
      49,     8,    43,    10,    43,    50,    51,     8,    44,    10,
       8,    41,    10,   141,    41,     8,    61,    10,   290,    52,
      65,    62,    41,    62,    11,    12,    13,    14,    61,     8,
      72,    10,    65,    46,    47,    48,    49,     8,    41,    10,
      53,    54,    49,   335,    57,    43,    53,    54,    46,    47,
      48,    49,    53,    66,    56,    53,    54,    41,    52,    57,
      53,    54,    43,   335,    62,    43,     8,    61,    10,    48,
      49,    65,    61,   122,    53,    54,    65,   126,     8,    43,
      10,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   220,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   120,    46,    47,    48,    49,     8,   158,
      10,    53,    54,    50,    51,    57,    46,    47,    48,    49,
      62,    61,    43,    53,    54,    65,   175,     8,    55,    10,
      50,    51,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    55,    55,     8,    55,    10,    46,    47,    48,    49,
      55,    61,    56,    53,    54,    56,    55,    57,    11,    12,
      13,    14,    62,    55,    61,    46,    47,    48,    49,    52,
      61,    61,    53,    54,   223,    61,    57,    61,     8,    61,
      10,    62,    47,    48,    49,    61,    61,   236,    53,    54,
     271,    61,   241,   242,    61,   244,    64,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    61,   336,    61,
      61,    61,    61,    61,    61,    61,    46,    47,    48,    49,
      61,    61,   264,    53,    54,    61,     8,    57,    10,   271,
      61,    42,    62,    42,    42,    42,    61,    66,     8,   288,
      10,    62,    66,    62,    66,    65,   295,    65,   290,   298,
     299,   300,   301,   302,   303,   304,   305,    55,    42,   340,
      66,    65,    56,   344,    46,    47,    48,    49,     8,    65,
      10,    53,    54,    62,    62,    57,    46,    47,    48,    49,
      62,    62,    55,    53,    54,    62,     8,    57,    10,    55,
      55,    62,    62,   335,    55,    63,     8,    66,   340,    63,
      42,    64,   344,     8,    66,    10,    46,    47,    48,    49,
      65,    55,    66,    53,    54,    65,    55,    57,    66,    64,
      66,     8,    62,    10,    46,    47,    48,    49,    66,    30,
      63,    53,    54,    61,    31,    57,    63,    62,    64,    63,
      62,    46,    47,    48,    49,     8,    64,    10,    53,    54,
      64,     3,    57,   255,    36,   347,    39,    62,    43,    46,
      47,    48,    49,     8,    -1,    10,    53,    54,    46,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
       8,    -1,    10,    46,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,     8,    62,
      10,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    46,    47,
      48,    49,     8,    -1,    10,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    46,    47,    48,    49,
       8,    -1,    10,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,     8,    -1,    10,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,     8,    62,    10,    46,    47,
      48,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    46,    47,    48,    49,     8,
      -1,    10,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    46,    47,    48,    49,     8,    -1,    10,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,     8,    -1,    10,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,     8,    62,    10,    46,    47,    48,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,     9,
      -1,    57,    -1,     8,    -1,    10,    62,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     8,
      -1,    10,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     8,    -1,    10,    -1,    -1,    -1,    43,    -1,
      -1,    46,    47,    48,    49,    55,    56,    -1,    53,    54,
      -1,    61,    57,     8,    43,    10,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    43,    57,    -1,
      46,    47,    48,    49,     8,    -1,    10,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,     8,    43,    10,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,     8,    -1,    10,    -1,    -1,    -1,    43,
      -1,    -1,    46,    47,    48,    49,     8,    -1,    10,    53,
      54,    -1,    43,    57,    -1,    46,    47,    48,    49,     8,
      -1,    10,    53,    54,    -1,    -1,    57,    -1,    43,    -1,
      -1,    46,    47,    48,    49,     8,    -1,    10,    53,    54,
      -1,    43,    57,    -1,    46,    47,    48,    49,     8,    -1,
      10,    53,    54,    -1,    43,    57,    -1,    46,    47,    48,
      49,     8,    -1,    10,    53,    54,    -1,    -1,    57,    -1,
      43,    -1,    -1,    46,    47,    48,    49,     8,    -1,    10,
      53,    54,    -1,    43,    57,    -1,    46,    47,    48,    49,
       8,    -1,    10,    53,    54,    -1,    43,    57,    -1,    46,
      47,    48,    49,     8,    -1,    10,    53,    54,    -1,    -1,
      57,    -1,    43,    -1,    -1,    46,    47,    48,    49,     8,
      -1,    10,    53,    54,    -1,    43,    57,    -1,    46,    47,
      48,    49,     8,    -1,    10,    53,    54,    -1,    43,    57,
      -1,    46,    47,    48,    49,     8,    -1,    10,    53,    54,
      -1,    -1,    57,    -1,    43,    -1,    -1,    46,    47,    48,
      49,     8,    -1,    10,    53,    54,    -1,    43,    57,    -1,
      46,    47,    48,    49,     8,    -1,    10,    53,    54,    -1,
      43,    57,    -1,    46,    47,    48,    49,     8,    -1,    10,
      53,    54,    -1,    -1,    57,    -1,    43,    -1,    -1,    46,
      47,    48,    49,     8,    -1,    10,    53,    54,    -1,    43,
      57,    -1,    46,    47,    48,    49,     8,    -1,    10,    53,
      54,    -1,    43,    57,    -1,    46,    47,    48,    49,     8,
      -1,    10,    53,    54,    -1,    -1,    57,    -1,    43,    -1,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    43,    57,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    46,    47,    48,
      49,     3,     4,     5,    53,    54,    -1,    -1,    57,    11,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    68,    71,    11,    12,    13,    14,    73,     0,
      68,    44,    11,    12,    13,    14,    78,   110,   111,   116,
      41,   112,   113,    41,   117,   118,    41,   114,   115,    41,
     119,   120,    63,    52,    61,    65,    43,    61,    65,    43,
      52,    61,    65,    43,    61,    65,    43,     3,     4,     5,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    70,    72,    74,    76,    77,    78,    79,    80,
      81,    84,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    55,    55,    55,   112,
      55,    55,   117,    56,    56,    55,   114,    56,    55,   119,
      61,    61,     9,    41,    55,    56,    61,    82,    83,    84,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    52,    72,    64,    42,    42,    42,    42,    61,    62,
      66,    43,    62,    66,    62,    66,    43,    62,    66,    78,
      82,    83,    83,    50,    51,    65,    50,    51,    50,    51,
      83,     8,    10,    46,    47,    48,    49,    53,    54,    57,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    85,    65,    55,    65,    65,    56,    65,
      42,    62,    83,    43,    62,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    62,    62,    43,    62,    62,    62,
      62,    43,    43,    62,    43,    62,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    62,    55,    62,    55,
      55,    62,    55,    82,    63,    66,    83,    83,    83,    83,
      83,    63,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    85,    66,    65,    66,    66,    65,    66,    42,    69,
      70,    62,    62,    62,    62,    43,    72,    62,    43,    43,
      43,    43,    43,    43,    43,    43,    55,    55,    83,    64,
      69,    83,    64,    83,    83,    83,    83,    83,    83,    83,
      83,    66,    66,    62,    62,    30,    75,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    61,    31,    69,    82,
      63,    64,    62,    72,    63,    64,    72,    64,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    76,    77,    78,    79,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   120,   120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     2,     2,     1,     1,
       1,     2,     2,     7,     2,     0,     1,     1,     1,     1,
       8,    12,     8,     0,     1,     1,     1,     1,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     4,     5,     4,     1,     3,     1,     0,     1,
      11,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     6,     4,     4,     4,     4,     6,
       6,     4,     8,     6,     8,     8,     8,     8,     8,     8,
       8,     8,     1,     1,     2,     2,     1,     3,     1,     3,
       4,     7,     1,     3,     1,     3,     4,     7,     2,     2,
       1,     3,     1,     4,     6,     4,     7,     9,     1,     3,
       1,     4,     6,     4,     7,     9
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
  case 26: /* decl_stmt: var_decl  */
#line 188 "parser.y"
                     {/*Note above 4 are wrtitten for testing only*/}
#line 1727 "y.tab.c"
    break;

  case 53: /* exp_rhs: OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR  */
#line 220 "parser.y"
                                                           {/*This is doubt for a=(3,3) type*/}
#line 1733 "y.tab.c"
    break;


#line 1737 "y.tab.c"

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

#line 362 "parser.y"

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
//   printf("Enter test case number: ");
  // scanf("%d",&t);
  char input_file[100];
  char token_file[100];
  char parsed_file[100];
  sprintf(input_file,"./input.txt");
  sprintf(token_file,"./out_token.txt");
  sprintf(parsed_file,"./parser.txt");
  yyin = fopen(input_file, "r"); //open input file
  token_fp=fopen(token_file,"w"); //open token file
  parsed_fp=fopen(parsed_file,"w"); //open token file
  if(yyin==NULL||token_fp==NULL||parsed_fp==NULL) 
  {
      printf("Error opening file s\n");
      return 0;
  }
//   fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
//   printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(parsed_fp);
  return 0;
}
