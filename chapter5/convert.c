/* convert.c -- 自动类型转换 */
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107;
	printf("Now ch = %c\n", ch);
	ch = 80.89;
	int mice;
	mice = 1.6 + 1.7;
	printf("%d\n", mice);
	printf("%d\n", (int)1.6+(int)1.7);
	printf("Now ch = %c\n", ch);

	return 0;
}