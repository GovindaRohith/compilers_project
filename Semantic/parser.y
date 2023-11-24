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
extern FILE *parsed_fp;
extern int l_no;
list <args> argmnt_list;
list <pair<short int, bool>> argmnt_chck_list; 
pair<short int,bool> return_type;
int scope=0;
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
    } exp_rhs_attr;
    struct{
        short int data_type;
        bool type;
    } exp_lhs_attr;
    struct{
        short int data_type;
        bool type;
    } assign_rhs_attr;
}
%token REAL_DEC IMAG_DEC ITER PRINT UNTIL RETURN REM NEQ OR NEG AND
%token INT CINT CDOUBLE MINUS DOUBLE STR STRING BIN VOID
%token CHOICE ALT DEFAULT
%token <name> ID 
%token SEMICOL COMMA COLON QUOTE
%token GT LT EQ NE INC DEC ASSIGN LE GE
%token INT_NUM DOUBLE_NUM ARITH_OP ACCESS_OP1 ACCESS_OP2
%token INN_PROD IMAG_INC REAL_INC
%token OPEN_CIR_PAR CLOSE_CIR_PAR OPEN_CURLY_PAR CLOSE_CURLY_PAR OPEN_SQUARE_PAR CLOSE_SQUARE_PAR
%left ARITH_OP GT LT EQ NE GE LE AND OR NEG MINUS
%type <type> data_type_arr
%type <datatype> data_type
%type <name> func_name
%type <ret_type> d_type
%type <datatype> T
%type <arg_name_type> L
%type <datatype_arg> int_id_type
%type <exp_rhs_attr> exp_rhs
%type <exp_rhs_attr> all_exp_rhs
%type <exp_rhs_attr> fn_call
%type <datatype> assign_stmt 
%type <datatype> inc_stmt_lhs
%type <datatype> print_fn
%type <datatype> predicate
%type <exp_lhs_attr> exp_lhs
%type <assign_rhs_attr> assign_rhs

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
           | inc_stmt SEMICOL
           | print_fn SEMICOL 
           ;
  

predicate : exp_rhs GT exp_rhs {
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(only_real_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers but found complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs LT exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(only_real_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers but found complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs EQ exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(same_type_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers or both complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs NE exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(same_type_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers or both complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs GE exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(only_real_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers but found complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs LE exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(only_real_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers but found complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs AND exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(same_type_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers or both complex numbers");
                                        }
                                    }
                                    }
          | exp_rhs OR exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        if(same_type_comp($<exp_rhs_attr.data_type>1,$<exp_rhs_attr.data_type>3)){
                                            $$=5;
                                        }
                                        else{
                                            yyerror("Invalid datatypes for comparison, expected both to be real numbers or both complex numbers");
                                        }
                                    }
                                    }
          | NEG exp_rhs{
                                    if($<exp_rhs_attr.type>1==true) yyerror("Expected ID but found array");
                                    else {
                                        $$=$<exp_rhs_attr.data_type>2;
                                    }
                                    }
          ;
exp_rhs : OPEN_CIR_PAR exp_rhs CLOSE_CIR_PAR {$<exp_rhs_attr.data_type>$=$<exp_rhs_attr.data_type>2;
                                                $<exp_rhs_attr.type>$=$<exp_rhs_attr.type>2;
                                                }
        | OPEN_CIR_PAR MINUS exp_rhs CLOSE_CIR_PAR {$<exp_rhs_attr.data_type>$=$<exp_rhs_attr.data_type>3;
                                                $<exp_rhs_attr.type>$=$<exp_rhs_attr.type>3;
                                                }
        | exp_rhs ARITH_OP exp_rhs {
                                        if($<exp_rhs_attr.data_type>1==0 || $<exp_rhs_attr.data_type>1==6 || $<exp_rhs_attr.data_type>3==0 || $<exp_rhs_attr.data_type>3==6)
                                        {
                                            yyerror("invalid operation");
                                        }
                                        else if($<exp_rhs_attr.type>1==1 || $<exp_rhs_attr.type>3==1){
                                            yyerror("invalid operation");
                                        }
                                        else{
                                            if($<exp_rhs_attr.data_type>1==4 || $<exp_rhs_attr.data_type>3==4)
                                            {
                                                $<exp_rhs_attr.data_type>$=4;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==2 && $<exp_rhs_attr.data_type>3==3)||($<exp_rhs_attr.data_type>1==3 && $<exp_rhs_attr.data_type>3==2)){
                                                $<exp_rhs_attr.data_type>$=4;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==2)||($<exp_rhs_attr.data_type>3==2)){
                                                $<exp_rhs_attr.data_type>$=2;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==3)||($<exp_rhs_attr.data_type>3==3)){
                                                $<exp_rhs_attr.data_type>$=3;
                                            }    
                                            else{
                                                $<exp_rhs_attr.data_type>$=1;
                                            }
                                        }
                                        $<exp_rhs_attr.type>$=false;
                                }
        | exp_rhs MINUS exp_rhs {    
                                        if($<exp_rhs_attr.data_type>1==0 || $<exp_rhs_attr.data_type>1==6 || $<exp_rhs_attr.data_type>3==0 || $<exp_rhs_attr.data_type>3==6)
                                        {
                                            yyerror("invalid operation");
                                        }
                                        else if($<exp_rhs_attr.type>1==1 || $<exp_rhs_attr.type>3==1){
                                            yyerror("invalid operation");
                                        }
                                        else{
                                            if($<exp_rhs_attr.data_type>1==4 || $<exp_rhs_attr.data_type>3==4)
                                            {
                                                $<exp_rhs_attr.data_type>$=4;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==2 && $<exp_rhs_attr.data_type>3==3)||($<exp_rhs_attr.data_type>1==3 && $<exp_rhs_attr.data_type>3==2)){
                                                $<exp_rhs_attr.data_type>$=4;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==2)||($<exp_rhs_attr.data_type>3==2)){
                                                $<exp_rhs_attr.data_type>$=2;
                                            }
                                            else if(($<exp_rhs_attr.data_type>1==3)||($<exp_rhs_attr.data_type>3==3)){
                                                $<exp_rhs_attr.data_type>$=3;
                                            }    
                                            else{
                                                $<exp_rhs_attr.data_type>$=1;
                                            }
                                        }
                                        $<exp_rhs_attr.type>$=false;
                                    }
        | predicate {$<exp_rhs_attr.data_type>$=5;
                        $<exp_rhs_attr.type>$=false;}
        | ID { 
                // cout<<$1<<"-=-"<<endl;
                args* sp=new args;
                sp=search_id_loc_sym_tab($1,scope);
                // cout << "++++++ "<<sp<<endl;
                if(!sp) yyerror("variable not declared");
                $<exp_rhs_attr.data_type>$=sp->dat_type.first;
                $<exp_rhs_attr.type>$=sp->dat_type.second;
                }
        | INT_NUM {$<exp_rhs_attr.data_type>$=1;
                        $<exp_rhs_attr.type>$=false;}
        
        | DOUBLE_NUM {$<exp_rhs_attr.data_type>$=3; 
                        $<exp_rhs_attr.type>$=false;}
        | fn_call {$<exp_rhs_attr.data_type>$=$<exp_rhs_attr.data_type>1;
                        $<exp_rhs_attr.type>$=$<exp_rhs_attr.type>1;}
        | ID INC {  args* sp;
                sp=search_id_loc_sym_tab($1,scope);
                  if(sp->dat_type.second == 0){
                        $<exp_rhs_attr.data_type>$=sp->dat_type.first;
                  }
                  else yyerror("invalid operation");
                  $<exp_rhs_attr.type>$=false; }

        | ID DEC {args* sp;
                sp=search_id_loc_sym_tab($1,scope);
                  if(sp->dat_type.second == 0){
                        $<exp_rhs_attr.data_type>$=sp->dat_type.first;
                  }
                  else yyerror("invalid operation");
                  $<exp_rhs_attr.type>$=false;}
        | INT_NUM INC {$<exp_rhs_attr.data_type>$=1;
                        $<exp_rhs_attr.type>$=false;}
        | INT_NUM DEC {$<exp_rhs_attr.data_type>$=1;
                        $<exp_rhs_attr.type>$=false;}
        | DOUBLE_NUM INC {$<exp_rhs_attr.data_type>$=3;
                            $<exp_rhs_attr.type>$=false;}
        | DOUBLE_NUM DEC {$<exp_rhs_attr.data_type>$=3;
                        $<exp_rhs_attr.type>$=false;}
        | ID OPEN_SQUARE_PAR exp_rhs CLOSE_SQUARE_PAR { //cout<<$1<<"-=--"<<scope<<endl;
                                                        if($<exp_rhs_attr.data_type>3!=1){
                                                            yyerror("Not integer");
                                                        }
                                                        args* sp;
                                                        sp=search_id_loc_sym_tab($1,scope);
                                                        if(sp->dat_type.second == 1){
                                                            $<exp_rhs_attr.data_type>$=sp->dat_type.first;
                                                        }
                                                        else yyerror("invalid operation");
                                                        $<exp_rhs_attr.type>$=false;
                                                        }
        | OPEN_CIR_PAR exp_rhs COMMA exp_rhs CLOSE_CIR_PAR {if($<exp_rhs_attr.data_type>2 != 6 && $<exp_rhs_attr.data_type>4 != 6){
                                                              if(($<exp_rhs_attr.data_type>2 == 3 || $<exp_rhs_attr.data_type>2 == 4) || ($<exp_rhs_attr.data_type>4 == 3 || $<exp_rhs_attr.data_type>4 == 4)) $<exp_rhs_attr.data_type>$ = 4;
                                                              else $<exp_rhs_attr.data_type>$ = 2;
                                                            }
                                                            else{
                                                                yyerror("invalid operation");
                                                            }
                                                            $<exp_rhs_attr.type>$=false;
                                                            }
        
        ;

%%
  
int main(int argc,char** argv)
{
    // if(argc==0) return 0;
  ret_no=0;
  arr=(char *)calloc(1000,sizeof(char));
  int t;
  init_inbuilt();
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
  char parsed_file[100];
  l_no=1;
//   scanf("%s",input_file);
//   cout<<"HEllo bissj________________ "<<input_file<<"sinnss"<<endl;
//   sprintf(input_file,"./testcases/");
  sprintf(parsed_file,"./parser.txt");
  yyin = fopen(input_file, "r"); //open input file
  token_fp=convert_str(input_file); //open token file
  parsed_fp=fopen(parsed_file,"w"); //open token file
  if(yyin==NULL||token_fp==NULL||parsed_fp==NULL) 
  {
      printf("Error opening file s\n");
      return 0;
  }
//   fprintf(token_fp,"Name: Yoligi Govinda Rohith\nID: CS21BTECH11062\nInput file: public_test_%d.clike\n",t);
  yyparse();
  printf("Syntactically correct!\n");
  fclose(token_fp);
  fclose(parsed_fp);
  return 0;
}
void yyerror(const char * s)
{  
 fprintf (parsed_fp, "\ninvalid statement\n");
 fprintf (stderr, "error: %s ,At line no : %d\n", s,l_no);
 exit(0);
}
