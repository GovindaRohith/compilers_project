%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
FILE *token_fp;
FILE *parsed_fp;
%}


/*Regular defintions*/
blanks (" ")+
letter [A-Za-z]
digit [0-9]+
id {letter}({letter}|{digit}|"_")*

%%
"//".* {/*To address comments*/}
"\n" {l_no++;fprintf(parsed_fp,"\n");}
{blanks} {fprintf(parsed_fp,"%s",yytext);}

"mod" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 fprintf(parsed_fp,"%s",yytext);
 return COMP_OP;
}
"iter" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return ITER;
}
"until" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return UNTIL;
}
"return" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return RETURN;
}
"rem" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return REM;
}
"eq" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return EQ;
}
"neq" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return NEQ;
}
"and" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return AND;
}
"or" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return OR;
}
"neg" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return NEG;
}
"and" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return AND;
}
"or" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return OR;
}
"int" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return INT;
}
"cint" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return CINT;
}
"double" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return DOUBLE;
}
"cdouble" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return CDOUBLE;
}
"str" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return STR;
}
"bin" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return BIN;
}
"real" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return REAL;
}
"img" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return IMG;
}
"pow" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return POW;
}
"polar" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return POLAR;
}
"conjugate" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    return CONJUGATE;
}
. { 
    fprintf (stderr, "Lexical Error ,At line no : %d\n",l_no);
    exit(0);
 return MOD;
}

"arg" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return ARG;
}

"angle" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return ANGLE;
}
"dist" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return DIST;
}
"cprint" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return CPRINTF;
}

"rotate" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return ROTATE;
}

"choice" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return CHOICE;
}

"alt" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return ALT;
}

"default" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return DEFAULT;
}

"get_line" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_LINE;
}

"is_triangle" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return IS_TRIANGLE;
}

"get_centroid" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_CENTROID;
}

"get_circumcenter" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_CIRCUMCENTER;
}

"get_orthocenter" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_ORTHOCENTER;
}

"get_incenter" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_INCENTER;
}

"get_excenter" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_EXCENTER;
}

"get_area" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_AREA;
}

"get_perimeter" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 return GET_PERIMETER;
}
%%
