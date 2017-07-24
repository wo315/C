#include <stdio.h>
int main(void)
{
    int quack = 2;
    printf("%d\n", quack);
    quack += 5;
    printf("%5d\n", quack);
    quack *= 10;
    printf("%2d\n", quack);
    quack -= 6;
    printf("%5d\n", quack);
    quack /= 8;
    printf("%3d\n", quack);
    quack %= 3;
    printf("%d\n", quack);

    return 0;
}
