// 6.7.c
#include <stdio.h>
int main(void)
{
    int x, y;
    x = (100, 5);
    y = x % 3;
    printf("%d  %d", x, y);
    return 0;
}
