output:final
	gcc main.c -o main libmath.a
final:makestatic
	ar -rcs libmath.a *.o
makestatic:add.o mul.o sub.o div.o main.o header.h
	gcc add.o sub.o mul.o main.o -o makestatic
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
mul.o:mul.c
	gcc -c mul.c 
sub.o:sub.c
	gcc -c sub.c
div.o:div.c
	gcc -c div.c
clean: 
	rm *.o makestatic
