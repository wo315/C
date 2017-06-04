#include <stdio.h>
#define B "War and Peace"

int main(void)
{   
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of %s sells for $%.2f.\n", B, cost);
	printf("That is %.0f%% of list.\n", percent);
	printf("%-7.5s", "wangyang i love");
	return 0;
}