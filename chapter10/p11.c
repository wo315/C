/* problem 11 */
#include <stdio.h>
void print(int ar[][5], int n);
void multiply2(int ar[][5],int ar1[][5], int n);
int main(void)
{
    int arr[][5] = {{1,2,3,4,5}, {6,7,8,9,0},{1,3,5,7,9}};
    int (*ptr)[5];
    
    print(arr, 3);
    multiply2(arr, ptr, 3);    
    print(ptr, 3);

    return 0;
}

void print(int ar[][5], int n) 
{
    int i, j;
/*
    int (*ptr)[5];
    ptr = ar;
*/
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < 5; j++)
	    printf("%4d", *(*(ar + i) + j));
        putchar('\n');
    }
}

void multiply2(int ar[][5], int ar1[][5], int n) 
{
    int i, j;
    for (i = 0; i < n; i++)
	for (j = 0; j < 5; j++)
	    ar1[i][j] = 2 * ar[i][j];
    
}
