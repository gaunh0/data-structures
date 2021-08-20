
main: main.o double_linked_list.o
	gcc -o main main.o double_linked_list.o

double_linked_list.o: double_linked_list.c double_linked_list.h
	gcc -c double_linked_list.c

main.o: main.c double_linked_list.c
	gcc -c main.c