/* e10.c */
#include <stdio.h>
#include <string.h>

int strlength(char * ar);
int main(void)
{
	char *str1 = "I love you";
	int len;
	len = strlength(str1);	
	printf("The str1's length is %d", len);
	printf("The strlen function is %d", strlen(str1));
	return 0;
}

int strlength(char * ar)
{
	int len = 0;
	while (*ar != '\0')
	{
		len++;
		ar++;
	}
	return len;
}

