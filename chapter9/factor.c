/* factor.c -- uses loops and recursion to calculate factorials */
#include <stdio.h>
long fact(int n);
long rfact(int n);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit)");
    while (scanf("%d", &num) == 1)
    {
	if (num < 0)
	    printf("No negative numbers, please.\n");
        else if (num > 13)
	    printf("Keep input under 13.\n");
        else
	{
	    printf("loop: %d factional = %ld\n", num, fact(num));
	    printf("recursion: %d factional = %ld\n", num, rfact(num));
	}	
	printf("Enter a value in range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");
    return 0;
}

long fact(int n)
{
    long ans;
    ans = 1;
    int i;
    for (i = 1; i <= n; i ++)
	 ans *= i;

    return ans;
}

long rfact(int n)
{
     long ans;
     ans = n;
     if (n > 1)
	 ans *= rfact(n - 1);

     return ans;
}
