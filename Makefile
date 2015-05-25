y.tab.out: 	lex.yy.o 	y.tab.o
	gcc -o y.tab.out lex.yy.o y.tab.o

lex.yy.c: 	pascal.l 
	flex pascal.l

lex.yy.o: 	lex.yy.c 	y.tab.h
	gcc -c lex.yy.c

y.tab.h y.tab.c: 		pascal.y
	yacc -dvt pascal.y

y.tab.o: 	y.tab.c 		lex.yy.h
	gcc -c y.tab.c

clean_o:
	rm -rf *.o

clean:
	rm -rf *.o y.tab.c lex.yy.c y.tab.out lex.yy.out *~ y.output

test_lex: lex.yy.o test_lex.c
	gcc -c test_lex.c
	gcc test_lex.o lex.yy.o -o lex.yy.out

test:
	./lex.yy.out < sample/test.pas | tools/token.py ./y.tab.h