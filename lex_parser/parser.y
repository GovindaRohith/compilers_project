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
%token STRING
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
// S : temp S
//   | /*Epsilon*/
//   ;
// temp :  ITER
//         | UNTIL
//         | RETURN
//         | REM
//         | NEQ
//         | OR
//         | NEG
//         | AND
//         | INT
//         | CINT
//         | DOUBLE
//         | CDOUBLE
//         | STR
//         | BIN
//         | REAL
//         | IMG
//         | POW
//         | POLAR
//         | CONJUGATE
//         | MOD
//         | ARG
//         | ANGLE
//         | DIST
//         | CPRINT
//         | ROTATE
//         | CHOICE
//         | ALT
//         | DEFAULT
//         | GET_LINE
//         | IS_TRIANGLE
//         | GET_CENTROID
//         | GET_CIRCUMCENTER
//         | GET_ORTHOCENTER
//         | GET_INCENTER
//         | GET_EXCENTER
//         | GET_AREA
//         | GET_PERIMETER
//         | ID 
//         | SEMICOL
//         | COMMA
//         | COLON
//         | QUOTE
//         | GT
//         | LT
//         | EQ
//         | NE
//         | INC
//         | DEC
//         | ASSIGN
//         | LE
//         | GE
//         | INT_NUM
//         | DOUBLE_NUM
//         | ARITH_OP
//         | ACCESS_OP1
//         | ACCESS_OP2
//         | INN_PROD
//         | OPEN_CIR_PAR
//         | CLOSE_CIR_PAR
//         | OPEN_CURLY_PAR
//         | CLOSE_CURLY_PAR
//         | OPEN_SQUARE_PAR
//         | CLOSE_SQUARE_PAR
//         ;
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
           | void_fn_calls SEMICOL    
           ;
if_stmt : CHOICE
        ;
for_stmt: iter
        ;
while_stmt: until
          ;
decl_stmt : GET_AREA {/*Note above 4 are wrtitten for testing only*/}
          ;
void_fn_calls : fn_call
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
fn_call : fn_type OPEN_CIR_PAR fn_args CLOSE_CIR_PAR
        | inbuilt_fn
        ;
fn_args : exp_rhs COMMA fn_args
        | exp_rhs
        | /* Epsilon */
        ;
fn_type: ID
       ;


iter:ITER OPEN_CIR_PAR decl_stmt SEMICOL predicate SEMICOL exp_rhs CLOSE_CIR_PAR OPEN_CURLY_PAR stmts CLOSE_CURLY_PAR
    ;
until:UNTIL OPEN_CIR_PAR predicate CLOSE_CIR_PAR OPEN_CURLY_PAR stmts CLOSE_CURLY_PAR
     ;

inbuilt_fn : real_fn
           | img_fn
           | pow_fn
           | polar_fn
           | conjugate_fn
           | mod_fn
           | arg_fn
           | angle_fn
           | dist_fn
           | cprint_fn
           | rotate_fn
           | get_line_fn
           | is_triangle_fn
           | get_centroid_fn
           | get_circumcenter_fn
           | get_orthocenter_fn
           | get_incenter_fn
           | get_excenter_fn
           | get_area_fn
           | get_perimeter_fn
          ;

real_fn : REAL OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
     ;
img_fn : IMG OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
    ;
pow_fn : POW OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR
        ;
polar_fn : POLAR OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
         ;
conjugate_fn : CONJUGATE OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
             ;
mod_fn : MOD OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
        ;
arg_fn : ARG OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR        
       ;
angle_fn : ANGLE OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR
         ;
dist_fn : DIST OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
        ;
cprint_fn : CPRINT OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR
          ;
rotate_fn : ROTATE OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR // doubt in this
          ;
get_line_fn : GET_LINE OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR // doubt in this
            ;
is_triangle_fn : IS_TRIANGLE OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR
               ;
get_centroid_fn : GET_CENTROID OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR
                ;
get_circumcenter_fn : GET_CIRCUMCENTER OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR
                    ;
get_orthocenter_fn : GET_ORTHOCENTER OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
                   ;
get_incenter_fn : GET_INCENTER OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
                ;
get_excenter_fn : GET_EXCENTER OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
                ;
get_area_fn : GET_AREA OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
            ;
get_perimeter_fn : GET_PERIMETER OPEN_CIR_PAR exp_rhs COMMA exp_rhs COMMA exp_rhs CLOSE_CIR_PAR 
                 ;
// show_fn : SHOW OPEN_CIR_PAR show_arg CLOSE_CIR_PAR
//         ;
// show_arg : STRING
//          | ID
//          | INT_NUM
//          | DOUBLE_NUM
//          | exp_rhs

// exp_rhs : exp_rhs
        //  |pow_fn
        //  |conjugate_fn
        //  |rotate_fn
        //  |get_centroid_fn
        //  |get_circumcenter_fn
        //  |get_orthocenter_fn
        //  |get_incenter_fn
        //  |get_excenter_fn
        //  ;


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
//   printf("Enter test case number: ");
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
//   fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
//   printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(parsed_fp);
  return 0;
}