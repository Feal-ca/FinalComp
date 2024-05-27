#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char**argv){
    FILE *fp;
    int N = 1000000;
    int num[N];
    fp = fopen("output.dat", "rw"); //opens the file
    while(fread(&num, sizeof(num), 1, fp)){
        fwrite(&num, sizeof(num), 1, stdout);
    }
    fclose(fp);
    return 0;
}
