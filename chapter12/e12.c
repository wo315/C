/* e12.c */
#include <stdio.h>
#include <string.h>
char *nilfoo(char *str);
int main(void)
{
	char *str1 = "I love you.";
	char *str2 = "ILOVEYOU.";
	char *chk1;
	char *chk2;
	chk1 = nilfoo(str1);
	chk2 = nilfoo(str2);
	printf("The first pointer %p.\n", chk1);
	printf("The second pointer %p.\n", chk2);
	printf("%p\n", str1 + 1);
	printf("%p\n", "I love you." + 1);
	return 0;
}

char *nilfoo(char *str)
{
	while (*str != ' ' && *str != '\0')
		str++;
	if (*str == '\0')
		return NULL;
	else
		return str;
}
