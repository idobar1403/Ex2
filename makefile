CC=gcc
FLAGS= -Wall -g

#make all
all: connections my_lib
.PHONY: clean
#make clean
clean: 
	rm -f *.o *.a *.so connections
# make loops
connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a -lm
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 
# make recursives
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
my_lib: my_mat.a
my_mat.a: my_mat.o
	ar -rcs my_mat.a my_mat.o 