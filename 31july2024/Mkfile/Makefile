obj= main.o add.o sub.o mul.o div.o
final: $(obj)  header.h
	gcc main.o add.o mul.o sub.o -o final
	@echo "make completed"
	
main.o: main.c
	gcc -c main.c
add.o: add.c
	gcc -c add.c
mul.o: mul.c
	gcc -c mul.c 
sub.o: sub.c
	gcc -c sub.c
clean: 
	rm *.o
	@echo "$(obj) files are removed"
