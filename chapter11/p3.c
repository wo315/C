/* p3.c */
#include <stdio.h>
#include <ctype.h>

#define STLEN 80
char  * getnchar(char * str);

int main(void)
{
	char input[STLEN];

	while (getnchar(input) != NULL)
		puts(input);
	puts("Done.\n");

	return 0;
}

char * getnchar(char * str)
{
	int ch;
	char * orig = str;
	while ((ch = getchar()) != EOF && isspace(ch))
		continue;
	if (ch == EOF)
		return NULL;
	else
		*(str++) = ch;

	while ((ch = getchar()) != EOF && !isspace(ch))
		*str++ = ch;
	*str = '\0';
	if (ch == EOF)
		return NULL;
	else
		while (ch != '\n')
		{
			ch = getchar();
        	return orig;
		}
}
