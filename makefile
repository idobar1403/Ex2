CC=gcc
FLAGS= -Wall -g

#make all
all: connections
.PHONY: clean
#make clean
clean: 
	rm -f *.o *.a *.so connections
# make loops
connections: main.o my_mat.o
	$(CC) $(FLAGS) -o connections main.o my_mat.o
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 
# make recursives
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 