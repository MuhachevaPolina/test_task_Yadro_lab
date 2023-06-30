all: task1 task2

task1: file1.o utilities.o
	gcc file1.o utilities.o -o task1

task2: file2.o utilities.o
	gcc file2.o utilities.o -o task2

file1.o: file1.c
	gcc -c file1.c

file2.o: file2.c
	gcc -c file2.c

utilities.o: utilities.c
	gcc -c utilities.c

clean:
	rm -rf *.o task1 task2