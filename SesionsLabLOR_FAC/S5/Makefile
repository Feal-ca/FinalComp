all: fib0 fib1 fib2 fib3

fib0: fib.c fibonacci.c
	gcc -o fib0 -O0 fib.c fibonacci.c
fib1: fib.c fibonacci.c
	gcc -o fib1 -O1 fib.c fibonacci.c
fib2: fib.c fibonacci.c
	gcc -o fib2 -O2 fib.c fibonacci.c
fib3: fib.c fibonacci.c
	gcc -o fib3 -O3 fib.c fibonacci.c

clean:
	rm fib0 fib1 fib2 fib3
