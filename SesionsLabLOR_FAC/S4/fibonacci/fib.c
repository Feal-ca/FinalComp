#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// https://ca.wikipedia.org/wiki/Leonardo_de_Pisa
unsigned long fibonacci(unsigned long n)
{
   if ((n == 0) || (n == 1)) return n;
   return fibonacci(n-1) + fibonacci(n-2);
}
