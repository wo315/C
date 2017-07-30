/* fibonacci.c -- uses recursion to calculate fibonacci */
#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    unsigned long n;
    printf("Enter an integer no more than 10:\n");
    while (scanf("%lu", &n) == 1)
    	printf("The %lu Fibonacci is %lu.\n", n, Fibonacci(n));

    printf("Done.\n");
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
   if (n > 2)
       return (Fibonacci(n - 1) + Fibonacci(n -2));
   else
       return 1;  
}
