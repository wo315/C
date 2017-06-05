/* pound.c --  定义一个带参数的函数 */
#include <stdio.h>
void pound(int n);//ANSI 函数原型申明
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}