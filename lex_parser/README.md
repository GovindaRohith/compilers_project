# Command to run
flex lexer.l
yacc parser.y -d -v
gcc  y.tab.c -ll
./a.out < input.txt