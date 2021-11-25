CC=gcc
AR=ar
FLAGS= -Wall -g

all: libmymat.a mains connections
mains: main.o libmymat.a
	$(CC) $(FLAGS) -o mains main.o libmymat.a
libmymat.a: my_mat.o
	$(AR) -rcs libmymat.a my_mat.o
connections: main.o libmymat.a
		$(CC) $(FLAGS) -o connections main.o libmymat.a
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c
	$(CC) $(FLAGS) -c main.c
.PHONY: clean all

clean:
	rm -f *.o *.so mains