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

func_stmt : func_info OPEN_CURLY_PAR stmts CLOSE_CURLY_PAR {
                                                            delete_loc_sym_tab_map();
                                                            delete_loc_sym_tab_map();
                                                            scope=0;
                                                            fprintf(cpp_fp,"}\n");
                                                            }
          ;
func_info:func_name d_type COLON OPEN_CIR_PAR argument CLOSE_CIR_PAR{ 
                                                                        if(!search_fn_sym_tab($1)){ 
                                                                                if(string($1)=="main"){
                                                                                    if($<d_type_arg.ret_datatype>2!=1){
                                                                                      yyerror("main function must return int");
                                                                                    }
                                                                                    else if($<d_type_arg.ret_type_bool>2!=false){
                                                                                      yyerror("main function must return int");
                                                                                    }
                                                                                    else if(argmnt_list.size()!=0){
                                                                                      yyerror("main should not have parameters");
                                                                                    }
                                                                                    main_check=1;
                                                                                    // cout<<"main_checkkerrrrrrrr insert"<<main_check<<endl;
                                                                                }    
                                                                                // cout<<scope<<"scope"<<endl;                                                                          
                                                                                return_type.first=$2.ret_datatype;
                                                                                return_type.second=$2.ret_type_bool;
                                                                                insert_fn_sym_tab($1,return_type,argmnt_list);
                                                                                scope++;
                                                                                create_loc_sym_tab_map();
                                                                                insert_param_into_loc(argmnt_list);
                                                                                argmnt_list.clear();
                                                                                scope++;
                                                                                create_loc_sym_tab_map();
                                                                        }
                                                                        else{
                                                                                yyerror("Function already declared");
                                                                        }
                                                                        fprintf(cpp_fp,"%s %s(%s) {\n",$<d_type_arg.name>2, $1, $5);

                                                                    }   
                                                                    
        ;
func_name: ID  {$$=$1;}
     ;
d_type : data_type data_type_arr { $<d_type_arg.ret_type_bool>$=$2;
                                   $<d_type_arg.ret_datatype>$=$1;
                                   char *dtype;
                                        if($1 == 0)
                                        dtype = string_to_char("void ");
                                        else if($1 == 1)
                                        dtype = string_to_char("int ");
                                        else if($1 == 2)
                                        dtype = string_to_char("pair<int, int> ");
                                        else if($1 == 3)
                                        dtype = string_to_char("double ");
                                        else if($1 == 4)
                                        dtype = string_to_char("pair<double,double> ");
                                    if($2 == true){
                                        char*temp1=string_to_char("*");
                                        $<d_type_arg.name>$=concater(dtype,temp1);
                                    }
                                    else{
                                        $<d_type_arg.name>$=dtype;
                                    }
                              }
       ;

data_type :VOID{$$=0;  }| INT {$$=1; } | CINT {$$=2; } | DOUBLE {$$=3; } | CDOUBLE {$$=4; }
          ;
data_type_arr : OPEN_SQUARE_PAR CLOSE_SQUARE_PAR {$$=true;}
              | /* epsilon*/ {$$=false;}
              ;

if_stmt_scope1 : CHOICE OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR OPEN_CURLY_PAR { 
                                            scope++;
                                            create_loc_sym_tab_map(); 
                                            cout<<"qwerty===="<<$<exp_rhs_attr.name>3<<endl;
                                            fprintf(cpp_fp,"if(%s) {\n",$<exp_rhs_attr.name>3);
                                        }
               ;
elseif_stmt_scope1 : ALT OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR OPEN_CURLY_PAR{ 
                                            scope++;
                                            create_loc_sym_tab_map(); 

                                            fprintf(cpp_fp,"else if(%s) {\n",$<exp_rhs_attr.name>3);
                                        }
               ;
if_body: stmts CLOSE_CURLY_PAR{ scope--; delete_loc_sym_tab_map(); fprintf(cpp_fp,"}");}
            ;
if_stmt :  if_stmt_scope1 if_body elif_stmt {  }
        |  if_stmt_scope1 if_body elif_stmt else_stmt stmts CLOSE_CURLY_PAR {delete_loc_sym_tab_map();scope--;
                                                                                        fprintf(cpp_fp,"}");}
        // | CHOICE OPEN_CIR_PAR predicate CLOSE_CIR_PAR OPEN_CURLY_PAR stmt_types CLOSE_CURLY_PAR elif_stmt
        ;
/* special case of else if statements */
elif_stmt : elseif_stmt_scope1 if_body elif_stmt //{delete_loc_sym_tab_map();}// delete_loc_sym_tab_map(); }
          | /* Epsilon */
          ;
else_stmt : DEFAULT OPEN_CURLY_PAR { scope++; create_loc_sym_tab_map(); 
                                    fprintf(cpp_fp,"else{\n");}
           ;
           /*roh */
inc_stmt : inc_stmt_lhs inc_stmt_rhs {if($1!=2 && $1!=4) yyerror("invalid operation");}
         | inc_stmt_lhs INC {if($1!=1 && $1!=3 && $1!=5) yyerror("invalid operation");  fprintf(cpp_fp,"++");}
         | inc_stmt_lhs DEC {if($1!=1 && $1!=3 && $1!=5) yyerror("invalid operation");  fprintf(cpp_fp,"--");}
         ;
inc_stmt_rhs : REAL_INC {fprintf(cpp_fp,".first++");}
            | IMAG_INC {fprintf(cpp_fp,".second++");}
            | REAL_DEC {fprintf(cpp_fp,".first--");}
            | IMAG_DEC {fprintf(cpp_fp,".second--");}
             ;
inc_stmt_lhs:ID { args* sp;
                sp=search_id_loc_sym_tab($1,scope);
                if(!sp) yyerror("variable not declared");
                  if(sp->dat_type.second == 0){
                        $$=sp->dat_type.first;
                  }
                  else yyerror("invalid operation");
                //   $<exp_rhs_attr.type>$=false;
                fprintf(cpp_fp,"%s",$1);
                }
            | ID OPEN_SQUARE_PAR exp_rhs CLOSE_SQUARE_PAR { 
                                                        if($<exp_rhs_attr.data_type>3==1 || $<exp_rhs_attr.data_type>3==5){
                                                            args* sp=new args;
                                                            sp=search_id_loc_sym_tab($1,scope);
                                                            if(!sp) yyerror("variable not declared");
                                                            else{
                                                                if(sp->dat_type.second == 0){
                                                                $$=sp->dat_type.first;
                                                                }
                                                                else yyerror("invalid operation");
                                                            }
                                                        }
                                                        else yyerror("Array index must be integer");
                                                        fprintf(cpp_fp,"%s[%s]",$1,$<exp_rhs_attr.name>3);
                                                        }
            ;

all_exp_rhs : exp_rhs { $<exp_rhs_attr.data_type>$=$<exp_rhs_attr.data_type>1;
                        $<exp_rhs_attr.type>$=$<exp_rhs_attr.type>1;
                        $<exp_rhs_attr.name>$=$<exp_rhs_attr.name>1;
                        }
            | MINUS exp_rhs { $<exp_rhs_attr.data_type>$=$<exp_rhs_attr.data_type>2;
                        $<exp_rhs_attr.type>$=$<exp_rhs_attr.type>2;
                        char*temporary=string_to_char("-");
                        $<exp_rhs_attr.name>$=concater(temporary,$<exp_rhs_attr.name>2);
                        }
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
