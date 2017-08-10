#include <stdio.h>
int main(void)
{
    int ar[100];
    ar[99] = -1;
    int arr100[100] = { [5] = 101, [10] = 101, 101, 101, 101 };

    printf("%d %d %d %d\n", ar[99], arr100[5], arr100[11], arr100[12]);
    return 0;
}

