/* put1.c */
#include <stdio.h>
void put1(const char * string)
{
     while (*string != '\0')
	 putchar(*string++);

}

int main(void)
{
    const char * str1 = "I am wangyang";
    put1(str1);
    return 0;

}
