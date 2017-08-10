/* p12.c */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	char c;
	int lower_num = 0;
	int upper_num = 0;
	int punct_num = 0;
	int digit_num = 0;
	int words_num = 0;
	bool inword = false;
	printf("Enter text to be analyzed (EOF to terminated):\n");
	while ((c = getchar()) != EOF)
	{
		if (islower(c))
			lower_num++;
		else if (isupper(c))
			upper_num++;
		else if (isdigit(c))
			digit_num++;
		else if (ispunct(c))
			punct_num++;

		if (!isspace(c) && !inword)
		{
			inword = true;
			words_num++;
		}
		if (isspace(c) && inword)
			inword = false;
	}
	printf("\nwords = %d, lowercase = %d, digit = %d, punctuation = %d\n", words_num, lower_num, digit_num, punct_num);
	return 0;
}
