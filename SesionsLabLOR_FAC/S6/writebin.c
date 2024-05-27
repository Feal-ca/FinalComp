#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void Usage(char * param){
	printf("This program needs integer number/s as input parameter/s. It will write binary format.\n");
}
	
int main(int argc, char **argv){
	int i;
	if (argc == 1){
		Usage(argv[0]);
		return 1;
	}
	for (i=2; i<argc; i++){
		if (strcmp(argv[1], "int")){
			int num;
			num = (int) atoi(argv[i]);
			write(1, &num, sizeof(int));
		}
		else if (strcmp(argv[1], "char")){
			char num;
			num = (char) atoi(argv[i]);
			write(1, &num, sizeof(char));
		}
		else if (strcmp(argv[1], "short")){
			short num;
			num = (short) atoi(argv[i]);
			write(1, &num, sizeof(short));
		}
		else if (strcmp(argv[1], "long")){
			long num;
			num = (long) atol(argv[i]);
			write(1, &num, sizeof(long));
		}
		else if (strcmp(argv[1], "longlong")){
			long long num;
			num = (long long) atoll(argv[i]);
			write(1, &num, sizeof(long long));
		}

	}
	return 0;	
}
