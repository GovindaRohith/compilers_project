%{
#include <stdio.h>
#include <ctype.h>
char *arr;
int l_no=1;
FILE *parsed_fp;
int ret_no;
%}

%token ID_TOKEN 
%token INT_TOKEN 
%token DOUBLE_TOKEN 
%token SEMI_TOKEN 
%token COMMA_TOKEN 
%token COLON_TOKEN
%token QUOTE_TOKEN 


%%
program : temp program
        | /* Epsilon */
        ;
temp: ID_T
    | CONST_T
    | STR_T
    | CHAR_T
    | COMP_OP
    ;
%%
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
