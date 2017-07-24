#include <stdio.h>
#define ROW 4
#define COL 8
int main(void)
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {	    
	for (j = 0; j < COL; j++)
	    printf("$");
	printf("\n");	      
    }
    
    return 0;
}
