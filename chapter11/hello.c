/* hello.c -- 把命令行参数转换为数字 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, times;

	if (argc < 2 || (times = atoi(*(argv+1))) < 1)
		printf("Usage: %s positive-numbers %s\n", *argv, *(argv+1));
	else
		for (i = 0; i < times; i++)
			puts("Hello, good looking!");
//    printf("%s----:", *(argv+1));
	return 0;
}
