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
int -?digit+
double -?digit+(\.digit+)

%%
"//".* {/*To address comments*/}
"\n" {l_no++;fprintf(parsed_fp,"\n");}
{blanks} {fprintf(parsed_fp,"%s",yytext);}

{id} {
    //to print ID's
    fprintf(token_fp,"ID: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return ID_TOKEN;
    }

{int} {
    //to print int
    fprintf(token_fp,"int: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return INT_TOKEN;
    }
{double} {
    //to print double
    fprintf(token_fp,"double: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return DOUBLE_TOKEN;
    }

";" {//Punctuations
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return SEMI_TOKEN;
    }
"," {
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return COMMA_TOKEN;
    }
":" {
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return COLON_TOKEN;
    }
"\"" {
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return QUOTE_TOKEN;
    }

%%
