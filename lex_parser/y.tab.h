/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
