/* p8.c 从7个元素的素组中选出第3到第5个的元素 */
#include <stdio.h>
void sel1(double * ar, double * tag1,  int n);
void sel2(double ar[], double * tag2,  int n);
void sel3(double *, double *, int);
int main(void)
{
	double arr[7] = { 5, 6, 7, 8, 9, 10, 11 };
	double target1[3];
	double target2[3];
	double target3[3];
	sel1(arr, target1, 3);
	sel2(arr, target2, 3);
	sel3(arr, target3, 3);
	int i;
	for (i = 0; i < 3; i++)
		printf("target1: %f, target2: %f, target3: %f\n", target1[i], target2[i], target3[i]);
	putchar('\n');

	return 0;
}

void sel1(double * ar, double * tag1, int n)
{
	int i;
	for (i = 0; i < n; i++)
		tag1[i] = ar[i+2];

}

void sel2(double ar[], double * tag2, int n)
{
	int i;
	for (i = 0; i < n; i++)
		tag2[i] = *(ar+i+2);
}

void sel3(double * ar, double * tag3, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(tag3 + i) = *(ar+i+2);
}

