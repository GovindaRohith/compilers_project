# Command to run
flex lexer.l
yacc parser.y -d -v
gcc  y.tab.c -ll
./a.out < input.txt

# Note : Prohibited
You can intiliase like cint a(3) --> a=3i
but a= (3) is invalid
but a= (3,4) is valid ==>a=3+4i
for pure complex intialise a=(0,3) ->a=3i

TBD:
check exp_rhs for a=(3,true or fale) //what to do here??

stmt_types : assign_stmt SEMICOL
           | decl_stmt SEMICOL
           | if_stmt SEMICOL
           | for_stmt 
           | while_stmt 
           | return_stmt SEMICOL      
           ;

predicate : exp_rhs GT exp_rhs
          | exp_rhs LT exp_rhs
          | exp_rhs EQ exp_rhs
          | exp_rhs NE exp_rhs
          | exp_rhs GE exp_rhs
          | exp_rhs LE exp_rhs
          | exp_rhs AND exp_rhs
          | exp_rhs OR exp_rhs
          | NEG predicate
          | OPEN_CIR_PAR predicate CLOSE_CIR_PAR
          ;
temp :  ITER
        | UNTIL
        | RETURN
        | REM
        | NEQ
        | OR
        | NEG
        | AND
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
        | SEMICOL
        | COMMA
        | COLON
        | QUOTE
        | GT
        | LT
        | EQ
        | NE
        | INC
        | DEC
        | ASSIGN
        | LE
        | GE
        | INT_NUM
        | DOUBLE_NUM
        | ARITH_OP
        | ACCESS_OP1
        | ACCESS_OP2
        | INN_PROD
        | OPEN_CIR_PAR
        | CLOSE_CIR_PAR
        | OPEN_CURLY_PAR
        | CLOSE_CURLY_PAR
        | OPEN_SQUARE_PAR
        | CLOSE_SQUARE_PAR
        ;