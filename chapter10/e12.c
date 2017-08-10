#include <stdio.h>
void show(const double ar[], int n);
void show2(const double ar[][3], int n);
int main(void)
{
    double *pt1;
    double (*pt2)[3];
    pt1 = (double [4]){ 8, 3, 9, 2 };
    pt2 = (double [2][3]){ {8, 3, 9}, { 5,4, 1 } };
    show(pt1, 4);
    show2(pt2,2);
    return 0;
}

void show(const double ar[], int n)
{
    int index;
    for (index = 0; index < n; index++)
	printf("%f\n", *(ar + index));

}

void show2(const double ar[][3], int n)
{
    int index;
    int j;
    for (index = 0; index < n; index++)
	for (j = 0; j < 3; j++)
	    printf("%f\n", ar[index][j]);

}
