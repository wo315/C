/* when.c -- 何时退出 */
#include <stdio.h>
int main(void)
{	
	int n = 5;

	while (n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("Now n = %d\n", n);
	}
	printf("This loop has finished!");
	return 0;
}