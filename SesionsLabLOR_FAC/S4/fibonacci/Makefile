all: fibonacci fibonacci.o assembly fibonacci-orig.c

fibonacci: fibonacci.o fib.o
	gcc -o fibonacci fibonacci.o fib.o

fibonacci.o: fibonacci.c
	gcc -c -o fibonacci.o fibonacci.c 

fibonacci: libfib.so
	gcc -L. -lfib fibonacci.c -o fibonacci 

libfib.so: fib.o
	gcc -shared -o libfib.so fib.o
	
fib.o: fib.c
	gcc -c -fpic -o fib.o fib.c

fibonacci-orig.o: fibonacci-orig.c
	gcc -c -o fibonacci-orig.o fibonacci-orig.c

assembly: fibonacci.c fibonacci-orig.c
	gcc -S fibonacci.c
	gcc -S fibonacci-orig.c

clean:
	rm fibonacci fibonacci.o fib.o libfib.so fibonacci.s fibonacci-orig.s fibonacci-orig.o
