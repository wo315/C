/* 6.6.c */
#include <stdio.h>
int main(void)
{
    float x = 5.0, y = 6.0;
    float z;
    int p;
    z = x / y;
    p = 3 % 2;
    printf("%f %d", z, p);
    return 0;
}
