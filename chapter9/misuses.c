/* misuses.c -- uses a function incorrectly */
#include <stdio.h>
int imax();

int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(n, m)
int n, m;
{
    if (n > m)
	return n;
    else
	return m;
}