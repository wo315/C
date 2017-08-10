/* e6.c */
#include <stdio.h>
int main(void)
{
	char sign = '$';
	printf("%lu", sizeof('$'));
	printf("%lu", sizeof("$"));
	printf("%lu", sizeof(sign));
	return 0;
}
