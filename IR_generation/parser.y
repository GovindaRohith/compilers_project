%{
#include<bits/stdc++.h>
#include "sym_table.h"
using namespace std;
char *arr;
int ret_no;
extern int yylex(void);
extern int yylineno;
void yyerror(const char *s);
extern FILE* yyin;
extern FILE *token_fp;
extern FILE *cpp_fp;
extern int l_no;
list <args> argmnt_list;
list <pair<short int, bool>> argmnt_chck_list; 
pair<short int,bool> return_type;
int scope=0;
char *global_int = string_to_char("");
char *global_double = string_to_char("");
char *global_cint = string_to_char("");
char *global_cdouble = string_to_char("");
int main_check=0;
int p_check=0;
%}

%union {
    
    char* name;
    bool type;
    short int datatype;
    struct {
        bool ret_type_bool;
        short int ret_datatype;
    } ret_type;
    struct{
        char* arg_name;
        bool arg_type_bool;
    }arg_name_type;
    struct{
        char* name1;
        short int datatype;
        bool arr_type;
    }datatype_arg;
    struct{
        short int data_type;
        bool type;
        char * name;
    } exp_rhs_attr;
    struct{
        short int data_type;
        bool type;
        char * name;
    } exp_lhs_attr;
    struct{
        short int data_type;
        bool type;
        char*name;
    } assign_rhs_attr;
        struct {
        short int data_type;
        char *name;
    } pred_struct;
    struct {
        bool ret_type_bool;
        short int ret_datatype;
        char *name;        
    } d_type_arg;
}
%token REAL_DEC IMAG_DEC ITER PRINT UNTIL RETURN REM NEQ OR NEG AND
%token INT CINT CDOUBLE  DOUBLE STR  BIN VOID
%token CHOICE ALT DEFAULT
%token <name> ID STRING
%token SEMICOL COMMA COLON QUOTE ACCESS_OP2
%token GT LT EQ NE INC DEC ASSIGN LE GE
%token <name> INT_NUM DOUBLE_NUM ARITH_OP MINUS
%token INN_PROD IMAG_INC REAL_INC
%token OPEN_CIR_PAR CLOSE_CIR_PAR OPEN_CURLY_PAR CLOSE_CURLY_PAR OPEN_SQUARE_PAR CLOSE_SQUARE_PAR
%left ARITH_OP GT LT EQ NE GE LE AND OR NEG MINUS
%type <type> data_type_arr
%type <datatype> data_type
%type <name> func_name
%type <d_type_arg> d_type
%type <datatype_arg> T
%type <arg_name_type> L
%type <datatype_arg> int_id_type
%type <datatype_arg> double_id_type
%type <exp_rhs_attr> exp_rhs
%type <exp_rhs_attr> all_exp_rhs fn_args
%type <exp_rhs_attr> fn_call
%type <datatype> assign_stmt 
%type <datatype> inc_stmt_lhs
%type <datatype> print_fn
%type <pred_struct> predicate
%type <exp_lhs_attr> exp_lhs
%type <assign_rhs_attr> assign_rhs
%type <name> int_part
%type <name> double_part
%type <name> cint_part
%type <name> cdouble_part
%type <name> argument print_arg
%%
program : func_stmt program
        | /*Epsilon*/
        ;
stmts : stmt_types stmts
      | /* Epsilon */
      ;
stmt_types : assign_stmt SEMICOL 
           | decl_stmt SEMICOL
           | if_stmt
           | for_stmt 
           | while_stmt 
           | return_stmt SEMICOL  
           | void_fn_calls SEMICOL    
           | inc_stmt SEMICOL{fprintf(cpp_fp,";");}
           | print_fn SEMICOL 
           ;

argument : argument_list { $$ = $<arg_name_type.arg_name>1; }
         | argument_list COMMA argument { char*temporary1=string_to_char(", ");
                                            $$ = concater($<arg_name_type.arg_name>1, temporary1, $3);  }
         ;
argument_list : T L{    args arg_attr;
                            arg_attr.name=$<arg_name_type.arg_name>2;
                            arg_attr.dat_type.first=$<datatype_arg.datatype>1;
                            arg_attr.dat_type.second=$<arg_name_type.arg_type_bool>2;
                            argmnt_list.push_back(arg_attr);
                            char *x;
                            if($<arg_name_type.arg_type_bool>2==0){
                                x=string_to_char("");
                            }
                            else{
                                x=string_to_char("*");
                            }
                            $<arg_name_type.arg_name>$=concater($<datatype_arg.name1>1, x, $<arg_name_type.arg_name>2);
                            }
         |{$<arg_name_type.arg_name>$=string_to_char("");}
         ;
        //  datatype_arg
T : INT{$<datatype_arg.datatype>$=1; $<datatype_arg.name1>$=string_to_char("int ");}
 |  CINT {$<datatype_arg.datatype>$=2; $<datatype_arg.name1>$=string_to_char("pair<int, int> ");}
 |  DOUBLE {$<datatype_arg.datatype>$=3; $<datatype_arg.name1>$=string_to_char("double "); }
 |  CDOUBLE {$<datatype_arg.datatype>$=4;  $<datatype_arg.name1>$ = string_to_char("pair<double, double> ");}
 ;
L : ID {$<arg_name_type.arg_name>$=$1;
        $<arg_name_type.arg_type_bool>$=0;}
  | ID OPEN_SQUARE_PAR CLOSE_SQUARE_PAR{$<arg_name_type.arg_name>$=$1;
        $<arg_name_type.arg_type_bool>$=1;}
  ;

int main(int argc,char** argv)
{
    // if(argc==0) return 0;
  ret_no=0;
  arr=(char *)calloc(1000,sizeof(char));
  int t;
  init_inbuilt();
//   #include <bits/stdc++.h>
// #include "inbuilt_functions.cpp"
// using namespace std;
  // printf("Enter test case number: ");
  // scanf("%d",&t);
//   yyparse();
//   return 0;
  char input_file[100];
  int i;
  for(i=0;i<strlen(argv[1]);i++)
  {
    input_file[i]=argv[1][i];
  }
  input_file[i]='\0';
  l_no=1;
  yyin = fopen(input_file, "r"); //open input file
  token_fp=convert_str(input_file); //open token file
  cpp_fp=cpp_convert_str(input_file);//open token file
fprintf(cpp_fp,"#include <bits/stdc++.h>\n#include \"../inbuilt_functions.cpp\"\nusing namespace std;\n");
  if(yyin==NULL||token_fp==NULL||cpp_fp==NULL) 
  {
      printf("Error opening file s\n");
      return 0;
  }


//   fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
  if(main_check!=1)yyerror("main function not declared");
  printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(cpp_fp);
  return 0;
}
void yyerror(const char * s)
{  
 fprintf (cpp_fp, "\ninvalid statement\n");
 fprintf (stderr, "error: %s ,At line no : %d\n", s,l_no);
 exit(0);
}
