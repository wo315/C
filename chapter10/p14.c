/* p14.c */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void store(double *ar, int n);
double average2d(double ar[], int n);
double average(int rows, int cols, double ar[rows][cols]);
double max(double (*ar)[COLS], int rows);
int main(void)
{
	printf("Please input 3 rows, 5 double elements in per rows\n");
	double stuff[ROWS][COLS];
	int row;
	for (row = 0; row < ROWS; row++)
	{
		printf("Enter %d numbers for row %d\n", COLS, row + 1);
		store(stuff[row], COLS);
	}

	double avg = 0.0;
	for (row = 0; row < ROWS; row++)
	{
		avg = average2d(stuff[row], COLS);
		printf("The #%d row's average is %f\n", row + 1, avg);
	}
	double avg_tot = 0.0;
	avg_tot = average(ROWS, COLS, stuff);
	printf("%lf\n", avg_tot);
	double max1 = 0.0;
	max1 = max(stuff, ROWS);
	printf("%lf\n", max1);
	return 0;
}

double max(double (*ar)[COLS], int rows)
{
	double max = (*ar)[0];
	printf("啦啦啦啦，我爱你啦%lf\n", max);
	int i,j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < COLS; j++)
			if (max <= *(*(ar + i) + j))
				max = (*(ar + i))[j];

	return max;
}

double average(int rows, int cols, double ar[rows][cols])
{
	double avg = 0.0;
	double total = 0.0;
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			total += ar[i][j];
	return total / (rows * cols);
}

double average2d(double ar[], int n)
{
	double average = 0.0;
	double total = 0.0;
	int i;
	for (i = 0; i < n; i++)
		total += *(ar + i);
	average = total / n;
	return average;
}

void store(double *ar, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Please enter value #%d:", i + 1);
		scanf("%lf", &ar[i]);
	}
}

