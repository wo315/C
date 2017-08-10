/* p10.c */
#include <stdio.h>
#define SIZE 80
int delspace(char *st);
char *s_gets(char *st, int n);
int main(void)
{
	char string[SIZE];
	char *orig;
	
	printf("Please eneter a string (empty line to quit!)\n");
	while (s_gets(string, SIZE) && string[0] != '\0')
	{
		delspace(string);
		printf("%s\n", string);
		printf("Please enter next string (empty line to quit!)\n");
	}
	s_gets(string, SIZE);
	return 0;

}

int delspace(char *st)
{
	char *string;
	while (*st)
	{
		if (*st == ' ')
		{
			string = st;
			do
			{
				*string = *(string + 1);
				//puts(string);
				string++;
				puts(string);
			} while (*string);
		}
		else
			st++;
	}
}


char *s_gets(char *st, int n)
{
	char *ret_val;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
