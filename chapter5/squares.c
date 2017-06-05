/* squares.c -- 计算1~20的平方 */
#include <stdio.h>
int main(void)
{
	int n = 1;
	//n = 1;
	while (n < 21)
	{
		printf("%4d %6d\n", n, n * n);
		n += 1;
	}
	return 0;
}