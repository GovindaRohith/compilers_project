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
%left ARITH_OP
%left GT
%left LT
%left EQ
%left NE
%left GE
%left LE
%left AND
%left OR
%left NEG
%%
program : stmts {printf("Hello world\n");}
        ;
stmts : stmt_types stmts
      | /* Epsilon */
      | OPEN_CIR_PAR stmts CLOSE_CIR_PAR
      ;
stmt_types : assign_stmt SEMICOL
           | decl_stmt SEMICOL
           | if_stmt SEMICOL
           | for_stmt 
           | while_stmt 
           | return_stmt SEMICOL      
           ;
if_stmt : CHOICE
        ;
for_stmt: ITER
        ;
while_stmt: UNTIL
          ;
decl_stmt : GET_AREA {/*Note above 4 are wrtitten for testing only*/}
          ;
assign_stmt : ID ASSIGN exp_rhs
            ;
return_stmt : RETURN exp_rhs
            ;
predicate : exp_rhs GT exp_rhs
          | exp_rhs LT exp_rhs
          | exp_rhs EQ exp_rhs
          | exp_rhs NE exp_rhs
          | exp_rhs GE exp_rhs
          | exp_rhs LE exp_rhs
          | exp_rhs AND exp_rhs
          | exp_rhs OR exp_rhs
          | NEG exp_rhs
          ;
exp_rhs : OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
        | exp_rhs ARITH_OP exp_rhs
        | predicate
        | ID 
        | INT_NUM
        | DOUBLE_NUM
        | fn_call
        | ID INC
        | ID DEC
        | INT_NUM INC
        | INT_NUM DEC
        | DOUBLE_NUM INC
        | DOUBLE_NUM DEC
        | ID OPEN_SQUARE_PAR exp_rhs CLOSE_SQUARE_PAR
        | OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR {/*This is doubt for a=(3,3) type*/}
        ;
fn_call : ID OPEN_CIR_PAR fn_args CLOSE_CIR_PAR
        ;
fn_args : exp_rhs COMMA fn_args
        | exp_rhs
        | /* Epsilon */
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