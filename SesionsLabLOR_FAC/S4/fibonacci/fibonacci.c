#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fib.h"

unsigned long result;

int main(int argc, char * argv[])
{
   char c;
   unsigned long num;
   
   if (argc != 2) {
      fprintf(stderr, "Us: %s <number>\n"
  "   where <number> is the number from which to compute fibonacci(number).\n",
       argv[0]);
      exit(1);
   }

   num = strtol(argv[1], NULL, 0);
   result = fibonacci(num);
   printf ("fibonacci(%lu) = %lu\n", num, result);

   return 0;
}
