#include <stdio.h>
int main(void)
{
    int p, q;
    scanf("%d", &p);
    while (p > 0)
    {
	printf("%d\n", p);
	scanf("%d", &q);
	while (q > 0)
	{
	    printf("%d\n", p * q);
	    if (p > 100)
		break;
	    scanf("%d", &q);
	}
	if (p > 100)
	    break;
	scanf("%d", &p);
    }
    return 0;
}
