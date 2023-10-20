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

"lt"|"leq"|"geq"|"gt"|"ne"|"and"|"or" {
 fprintf(token_fp,"reserved keyword: %s\n",yytext);
 fprintf(parsed_fp,"%s",yytext);
 return COMP_OP;
}
"neg" {fprintf(token_fp,"reserved keyword: %s\n",yytext);fprintf(parsed_fp,"%s",yytext);return NEG_OP;}
"postincr"|"postdecr" {
    //to identify unary stmts
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return UNARY_OP;
}
"add"|"sub"|"mul"|"div" {
    //return token for arth_ops
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return ARTH_OP;
}
"true"|"false" {
    //return token for true and false
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return TF_TOKEN;
}

"return" {
    //return TOKEN
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return RETURN_TOKEN;
}
"global"|"local" {
    //SCOPE TOKEN return 
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return SCOPE_TOKEN;
}
"class" {
    //return TOKEN for class keyword
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return CLASS_TOKEN;
}
"declare" {
    //return TOKEN for declare keyword
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return DECLARE_TOKEN;
}
"expr" {
    //return TOKEN for expr 
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return EXPR_TOKEN;
}
"call" {
    //return TOKEN for call keyword
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return CALL_TOKEN;
}
"this" {
    fprintf(token_fp,"reserved keyword: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return THIS_TOKEN;
}
"for" {
    fprintf(token_fp,"reserved keyword: for\n");
    fprintf(parsed_fp,"%s",yytext);
    return FOR_TOKEN;
    }
"loop"{blanks}"while" {
    //Eliminating white spaces and returning loop_while token
    fprintf(token_fp,"reserved keyword: loop\n");
    fprintf(token_fp,"reserved keyword: while\n");
    fprintf(parsed_fp,"loop while ");
    return LOOP_WHILE;
    }
"in"{blanks}"case"{blanks}"that" {
    //Eliminating white spaces and returning loop_while token
    fprintf(token_fp,"reserved keyword: in case that\n");
    fprintf(parsed_fp,"in case that");
    return IF_TOKEN;
    }
"do" {
    fprintf(token_fp,"reserved keyword: do\n");
    fprintf(parsed_fp,"%s",yytext);
    return DO_TOKEN;
}
"otherwise" {
    fprintf(token_fp,"reserved keyword: otherwise\n");
    fprintf(parsed_fp,"%s",yytext);
    return ELSE_TOKEN;
    }

"->" {
    fprintf(token_fp,"special symbol: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return ARROW_TOKEN;
}

"("|"["|"{" {
    fprintf(token_fp,"special symbol: %s\n",yytext);
    //Sort the brackets accordinlgy below
    fprintf(parsed_fp,"%s",yytext);
    if(yytext[0]=='(')return OPARAN_TOKEN;
    else if(yytext[0]=='[') return OSQ_TOKEN;
    else return OBRACE_TOKEN;
    }
")"|"]"|"}" {
    fprintf(token_fp,"special symbol: %s\n",yytext);
    //Sort the brackets accordinlgy below
    fprintf(parsed_fp,"%s",yytext);
    if(yytext[0]==')')return CPARAN_TOKEN;
    else if(yytext[0]==']') return CSQ_TOKEN;
    else return CBRACE_TOKEN;
}
";" {
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return SEMI_TOKEN;
    }
"," {
    fprintf(token_fp,"punctuation: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return COMMA_TOKEN;
    }
"int"|"char"|"string"|"bool" {
    fprintf(token_fp,"datatype: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return DTYPE_TOKEN;
}
"void" {
    fprintf(token_fp,"datatype: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return VOID_TOKEN;
}

"=" {
    fprintf(token_fp,"operator: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return EQ_TOKEN;
    }
{id} {
    //to print ID's
    fprintf(token_fp,"ID: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return ID_T;
    }

"-"?{digit} {
    //to identify integer literals (including negative numbers)
    fprintf(token_fp,"constant: %s\n",yytext);
    fprintf(parsed_fp,"%s",yytext);
    return CONST_T;
    }

\"(.*)+\" {
    /*To identify strings*/
    yytext++; //skip first quote 
    yytext[strlen(yytext)-1]='\0'; //skip last quote
    fprintf(token_fp,"punctuation: \"\nconstant: %s\npunctuation: \"\n",yytext);
    fprintf(parsed_fp,"\"%s\"",yytext);
    return STR_T;
}

\'(.)\' {
    /*To identify chars */
    yytext++; //skip first quote
    yytext[strlen(yytext)-1]='\0'; //skip last quote
    fprintf(token_fp,"punctuation: \'\nconstant: %s\npunctuation: \'\n",yytext);
    fprintf(parsed_fp,"\'%s\'",yytext);
    return CHAR_T;
    }

. { 
    fprintf (stderr, "Lexical Error ,At line no : %d\n",l_no);
    exit(0);
}


%%
