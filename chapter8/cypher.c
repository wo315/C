/* cypher.c -- inputs */
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();
    while ((ch = getchar()) != '\n')
    {
	if (ch == SPACE)
	    putchar(ch);
        else
	    putchar(ch + 1);
//	ch = getchar();
    }
    return 0;
}
