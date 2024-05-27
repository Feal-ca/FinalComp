#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){
	int i=0;
	int num;
	if (strcmp(argv[1], "char")){
		while(read(0, &num, sizeof(char))){
		printf("value: %c (%d decimal value)\n", num, num);
		}
	}
	else if (strcmp(argv[1], "int")){
		while(read(0, &num, sizeof(int))){
		printf("value: %c (%d decimal value)\n", num, num);
		}
	}
	else if (strcmp(argv[1], "short")){
		while(read(0, &num, sizeof(short))){
		printf("value: %c (%d decimal value)\n", num, num);
		}
	}
	else if (strcmp(argv[1], "long")){
		while(read(0, &num, sizeof(long))){
		printf("value: %c (%d decimal value)\n", num, num);
		}
	}
	else if (strcmp(argv[1], "longlong")){
		while(read(0, &num, sizeof(long long))){
		printf("value: %c (%d decimal value)\n", num, num);
		}
	}
	return 0;
}
