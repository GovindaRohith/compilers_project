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
