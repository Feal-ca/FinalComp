all: mem-heap mem-stack mem-stack2 mem-heap-loop1

mem-heap: mem-heap-orig.c
	gcc -o mem-heap mem-heap-orig.c

mem-stack: mem-stack.c
	gcc -o mem-stack mem-stack.c

mem-stack2: mem-stack2.c
	gcc -o mem-stack2 mem-stack2.c

mem-heap-loop1: mem-heap-loop1.c
	gcc -o mem-heap-loop1 mem-heap-loop1.c

clear:
	rm mem-heap mem-stack mem-stack2 mem-heap-loop1
