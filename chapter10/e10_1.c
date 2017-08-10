#include <stdio.h>
int main(void)
{
    int ref[] = { 8, 4, 0, 2 };
    int *ptr;
    int index;

//    for (index = 0, ptr = ref; index < 4; index++, ptr++)
//	printf("%d, %d\n", ref[index], *ptr);

    printf("%p, %p, %d\n", ref, ref + 1, (*ref));
    ptr = ref;
    printf("%p, %p, %d\n:", ptr, ptr + 1, *(ptr + 1));

    return 0;
}
