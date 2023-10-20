# Command to run
flex exp.l
yacc translate.y -d -v
gcc  y.tab.c -ll
./a.out 