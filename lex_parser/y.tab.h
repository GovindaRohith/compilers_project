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
    BIN = 271,                     /* BIN  */
    REAL = 272,                    /* REAL  */
    IMG = 273,                     /* IMG  */
    POW = 274,                     /* POW  */
    POLAR = 275,                   /* POLAR  */
    CONJUGATE = 276,               /* CONJUGATE  */
    MOD = 277,                     /* MOD  */
    ARG = 278,                     /* ARG  */
    ANGLE = 279,                   /* ANGLE  */
    DIST = 280,                    /* DIST  */
    CPRINT = 281,                  /* CPRINT  */
    ROTATE = 282,                  /* ROTATE  */
    CHOICE = 283,                  /* CHOICE  */
    ALT = 284,                     /* ALT  */
    DEFAULT = 285,                 /* DEFAULT  */
    GET_LINE = 286,                /* GET_LINE  */
    IS_TRIANGLE = 287,             /* IS_TRIANGLE  */
    GET_CENTROID = 288,            /* GET_CENTROID  */
    GET_CIRCUMCENTER = 289,        /* GET_CIRCUMCENTER  */
    GET_ORTHOCENTER = 290,         /* GET_ORTHOCENTER  */
    GET_INCENTER = 291,            /* GET_INCENTER  */
    GET_EXCENTER = 292,            /* GET_EXCENTER  */
    GET_AREA = 293,                /* GET_AREA  */
    GET_PERIMETER = 294,           /* GET_PERIMETER  */
    ID = 295,                      /* ID  */
    SEMICOL = 296,                 /* SEMICOL  */
    COMMA = 297,                   /* COMMA  */
    COLON = 298,                   /* COLON  */
    QUOTE = 299,                   /* QUOTE  */
    GT = 300,                      /* GT  */
    LT = 301,                      /* LT  */
    EQ = 302,                      /* EQ  */
    NE = 303,                      /* NE  */
    INC = 304,                     /* INC  */
    DEC = 305,                     /* DEC  */
    ASSIGN = 306,                  /* ASSIGN  */
    LE = 307,                      /* LE  */
    GE = 308,                      /* GE  */
    INT_NUM = 309,                 /* INT_NUM  */
    DOUBLE_NUM = 310,              /* DOUBLE_NUM  */
    ARITH_OP = 311,                /* ARITH_OP  */
    ACCESS_OP1 = 312,              /* ACCESS_OP1  */
    ACCESS_OP2 = 313,              /* ACCESS_OP2  */
    INN_PROD = 314,                /* INN_PROD  */
    OPEN_CIR_PAR = 315,            /* OPEN_CIR_PAR  */
    CLOSE_CIR_PAR = 316,           /* CLOSE_CIR_PAR  */
    OPEN_CURLY_PAR = 317,          /* OPEN_CURLY_PAR  */
    CLOSE_CURLY_PAR = 318,         /* CLOSE_CURLY_PAR  */
    OPEN_SQUARE_PAR = 319,         /* OPEN_SQUARE_PAR  */
    CLOSE_SQUARE_PAR = 320         /* CLOSE_SQUARE_PAR  */
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
#define BIN 271
#define REAL 272
#define IMG 273
#define POW 274
#define POLAR 275
#define CONJUGATE 276
#define MOD 277
#define ARG 278
#define ANGLE 279
#define DIST 280
#define CPRINT 281
#define ROTATE 282
#define CHOICE 283
#define ALT 284
#define DEFAULT 285
#define GET_LINE 286
#define IS_TRIANGLE 287
#define GET_CENTROID 288
#define GET_CIRCUMCENTER 289
#define GET_ORTHOCENTER 290
#define GET_INCENTER 291
#define GET_EXCENTER 292
#define GET_AREA 293
#define GET_PERIMETER 294
#define ID 295
#define SEMICOL 296
#define COMMA 297
#define COLON 298
#define QUOTE 299
#define GT 300
#define LT 301
#define EQ 302
#define NE 303
#define INC 304
#define DEC 305
#define ASSIGN 306
#define LE 307
#define GE 308
#define INT_NUM 309
#define DOUBLE_NUM 310
#define ARITH_OP 311
#define ACCESS_OP1 312
#define ACCESS_OP2 313
#define INN_PROD 314
#define OPEN_CIR_PAR 315
#define CLOSE_CIR_PAR 316
#define OPEN_CURLY_PAR 317
#define CLOSE_CURLY_PAR 318
#define OPEN_SQUARE_PAR 319
#define CLOSE_SQUARE_PAR 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
