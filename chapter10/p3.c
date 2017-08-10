/* p3.c -- retrun maximum value in an array */
#include <stdio.h>
int maximum(int *, int num);
int main(void)
{
	int max;
	int ar[6] = { 5, 7, 9, 2, 8, 6 };

	max = maximum(ar, 6);
	printf("The maximum value of the array is: %d\n", max);
	return 0;
}

int maximum(int * ar, int num)
{
    int max = ar[0];
	int i;
    for (i = 0; i < num; i++)
        if (max < ar[i])
			max = ar[i];

	return max;
}

