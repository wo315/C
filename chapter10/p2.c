/* p2.c -- uses four method to represent the array */
#include <stdio.h>
void copy_arr(double *, double *, int n);
void copy_ptr(double *, double *, int n);
void copy_ptrs(double *, double * start, double * end);
int main(void)
{
	double sources[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	
	copy_arr(target1, sources, 5);
	int i;
/*	for (i = 0; i < 5; i++)
**		printf("%.1f ", target1[i]);
*/  printf("\n");
	copy_ptr(target2, sources, 5);
	for (i = 0; i < 5; i++)
		printf("%.1f ", target2[i]);
	printf("\n");
	
	copy_ptrs(target3, sources, sources + 5);
	for (i = 0; i < 5; i++)
		printf("%.1f ", target3[i]);
	printf("\n");
	return 0;
}

void copy_ptrs(double * tg3, double * start, double * end)
{
	while (start < end)
	{
		*tg3++ = *start++;
	   // printf("%.1f ", *(tg3++));
	}
}
void copy_arr(double * tg1, double * sr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		tg1[i] = sr[i];
	    printf("%.1f ", tg1[i]);
	}
}

void copy_ptr(double * tg2, double * sr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		tg2[i] = *(sr + i);
}

