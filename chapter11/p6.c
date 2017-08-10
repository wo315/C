/* programming exercise 11.6 */
#include <stdio.h>
#include <string.h>
#define SIZE 80
_Bool is_within(const char * str, char c);
char * s_gets(char * str, int n);

int main(void)
{
	char input[SIZE];
	char ch;
	int found;

	printf("Enter a string: ");
	while (s_gets(input, SIZE) && input[0] != '\0')
	{
		printf("Please a character: ");
		ch = getchar();
		while (getchar() != '\n')
			continue;
		found = is_within(input, ch);
		if (found == 0)
			printf("not %c found in the string.\n", ch);
		else
			printf("%c found in the %s\n", ch, input);
		printf("Next string: ");	
	}

	puts("Done.\n");
	return 0;
}

_Bool is_within(const char * str, char c)
{
	while ( *str != c && *str != '\0')
		str++;
	return *str;
}

char * s_gets(char * str, int n)
{
	char * ret_val;
	char * find;
	if (ret_val)
	ret_val = fgets(str, n, stdin);
	{
		find = strchr(str, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}


	return ret_val;
}
