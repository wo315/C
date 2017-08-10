/* e5.c */
#include <stdio.h>
char *pr(char * str);
int main(void)
{
	char * string = "Ho Ho Ho!";
	char * x;
	x = pr(string);
}

char *pr(char * str)
{
	char * pr;
	pr = str;
	while (*pr)
	{
		putchar(*pr++);
	}
	do
	{
		putchar(*--pr);
	} while (pr - str);
}


