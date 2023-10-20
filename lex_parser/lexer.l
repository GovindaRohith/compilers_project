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
