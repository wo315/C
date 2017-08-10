/* max_double -- return the difference betweent two float numbers */
#include <stdio.h>
#define LEN 6
double max(double * ar, int num);
double min(double * ar, int num);
int main(void)
{
	double max1, min1;
	double ar[LEN] = {1.1, 22, 3.3, 4.4, 5.5, 6.6};
	double df;
	max1 = max(ar, LEN);
	min1 = min(ar, LEN);
	df = max1 - min1;
	printf("The maximum value is %.1f and the minimum value is %.1f", max1, min1);
	printf("\nThe difference is %.1f", df);
	puts("\n");
}

double max(double ar[], int num)
{
	double max = ar[0];
	int i;
	for (i = 0; i < LEN; i++)
		if (max < *(ar + i))
			max = *(ar + i);
	return max;
}

double min(double *ar, int num)
{
	double min = ar[0];
	int i;
	for (i = 0; i < LEN; i++)
		if (min > ar[i])
			min = ar[i];
	return min;
}
