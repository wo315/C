/* test_fit.c -- 使用缩短字符串长度 */
#include <stdio.h>
#include <string.h>

void fit(char * string, unsigned int);
int main(void)
{
    char mesg[] = "Things should be as simple as possible, but not simpler.";
    puts(mesg);
    printf("%c\n", *(mesg+38));
    fit(mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 40);

    return 0;
}

void fit(char * string, unsigned int size)
{
     if (strlen(string) > size)
	 string[size] = '\0';
}
