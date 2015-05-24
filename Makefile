y.tab.out: 	lex.yy.o 	y.tab.o
	gcc -o y.tab.out lex.yy.o y.tab.o

lex.yy.c: 	pascal.l 
	flex pascal.l

lex.yy.o: 	lex.yy.c 	y.tab.h
	gcc -c lex.yy.c

y.tab.h y.tab.c: 		pascal.y
	yacc -d pascal.y

y.tab.o: 	y.tab.c 		lex.yy.h
	gcc -c y.tab.c

clean:
	rm -rf *.o
