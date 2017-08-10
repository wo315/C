/* p8.c */
#include <stdio.h>
#include <string.h>
char *str(char *str1, char *str2);
int main(void)
{
	char *str1 = "transportation";
	char *str2 = "port";
	char *st;
	st = str(str1, str2);
	if (st)
		puts(st);
	else
		puts("failed.\n");
	char *str3 = "part";
	st = str(str1, str3);
	if (st)
		puts(st);
	else
		puts("failed.\n");

	return 0;
}

char *str(char *str1, char * str2)
{
	int nomatch = 1;
	int lens = strlen(str2);
	int try = strlen(str1) + 1 - lens;
	if (try)
		while ((nomatch = strncmp(str1, str2, lens)) && try--)
			str1++;
	if (nomatch)
		return NULL;
	else
		return str1;
}	

