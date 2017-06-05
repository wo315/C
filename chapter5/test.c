#include <stdio.h>
int main(void)
{
	int guests = 0;
	while (++guests < 10)
		printf("%d\n", guests);

	return 0;
}