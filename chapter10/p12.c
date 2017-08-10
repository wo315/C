/* p12.c -- modify the rain.c uses functions */
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
float total_rain(const float ar[][MONTHS], int rows);
float total_each_month(const float (*ar)[MONTHS], int rows);
float average_total(float , int rows);
float average_month(float , int rows);
int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
	{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
	{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
	{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
	{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
	{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
    };
    float tot_y, mon_y;
    tot_y = total_rain(rain, YEARS);
    mon_y =  total_each_month(rain, YEARS); 
    printf("The yearly average is %.1f inches\n\n", tot_y / YEARS);
    
    return 0;
}

float total_rain(const float ar[][MONTHS], int rows)
{
    float total, subtot;
    int i, j;
    total = 0.0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0, subtot = 0.0 ; j < MONTHS; j++)
	    subtot += ar[i][j];
        printf("%4d    %.1f\n", 2010 + i, subtot);
	total += subtot;

    }
    return total;
}

float total_each_month(const float (*ar)[MONTHS], int rows)
{
    float total;
    int i, j;
    for (i = 0; i < MONTHS; i++)
    {
	for (j = 0, total = 0.0; j < rows; j++)
	    total += ar[j][i];
//	printf("\nMONTHLY AVERAGES:\n");
	printf("%4.1f\n", total / rows);
    }
    return total;
}

float average_total(float total, int rows)
{
    float average;
    average = total / rows;
    return average;
}

float average_month(float total, int rows)
{
    float average;
    average = total / rows;
    return average;
}

