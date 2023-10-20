%{
#include <stdio.h>
#include <ctype.h>
char *arr;
int l_no=1;
FILE *parsed_fp;
int ret_no;
%}

%token ITER
%token UNTIL
%token RETURN
%token REM
%token NEQ
%token OR
%token NEG
%token AND
%token INT
%token CINT
%token DOUBLE
%token CDOUBLE
%token STR
%token BIN
%token REAL
%token IMG
%token POW
%token POLAR
%token CONJUGATE
%token MOD
%token ARG
%token ANGLE
%token DIST
%token CPRINT
%token ROTATE
%token CHOICE
%token ALT
%token DEFAULT
%token GET_LINE
%token IS_TRIANGLE
%token GET_CENTROID
%token GET_CIRCUMCENTER
%token GET_ORTHOCENTER
%token GET_INCENTER
%token GET_EXCENTER
%token GET_AREA
%token GET_PERIMETER
%token ID 
%token SEMICOL
%token COMMA
%token COLON
%token QUOTE
%token GT
%token LT
%token EQ
%token NE
%token INC
%token DEC
%token ASSIGN
%token LE
%token GE
%token INT_NUM
%token DOUBLE_NUM
%token ARITH_OP
%token ACCESS_OP1
%token ACCESS_OP2
%token INN_PROD
%token OPEN_CIR_PAR
%token CLOSE_CIR_PAR
%token OPEN_CURLY_PAR
%token CLOSE_CURLY_PAR
%token OPEN_SQUARE_PAR
%token CLOSE_SQUARE_PAR

%%
program : temp program {printf("Hello world\n");}
        | /* Epsilon */
        ;
temp: ITER
    | UNTIL
    | RETURN
    | NEQ
    | NEG
    | INT
    | CINT
    | DOUBLE
    | CDOUBLE
    | STR
    | BIN
    | REAL
    | IMG
    | POW
    | POLAR
    | CONJUGATE
    | MOD
    | ARG
    | ANGLE
    | DIST
    | CPRINT
    | ROTATE
    | CHOICE
    | ALT
    | DEFAULT
    | GET_LINE
    | IS_TRIANGLE
    | GET_CENTROID
    | GET_CIRCUMCENTER
    | GET_ORTHOCENTER
    | GET_INCENTER
    | GET_EXCENTER
    | GET_AREA
    | GET_PERIMETER
    | ID
    | INT_NUM
    | DOUBLE_NUM
    | SEMICOL
    | COMMA
    | COLON
    | QUOTE
    |GT
    |LT
    |EQ
    |NE
    |INC
    |DEC
    |REM
    |AND
    |OR
    |ASSIGN
    |LE
    |GE
    |ARITH_OP
    |ACCESS_OP1
    |ACCESS_OP2
    |INN_PROD
    |OPEN_CIR_PAR
    |CLOSE_CIR_PAR
    |OPEN_CURLY_PAR
    |CLOSE_CURLY_PAR
    |OPEN_SQUARE_PAR
    |CLOSE_SQUARE_PAR
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
  fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
//   printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(parsed_fp);
  return 0;
}