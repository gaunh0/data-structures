

main: main.o linked_list.o
	gcc -o main main.o linked_list.o

linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c

main.o: main.c linked_list.c
	gcc -c main.c