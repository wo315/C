/* e4.c */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char goldwyn[40] = "art of it all ";
	char samuel[40] = "I read p";
	const char * quote = "the way through";
	strcat(goldwyn, quote);
	strcat(samuel, goldwyn);
	puts(samuel);
	printf("%s", quote + 3);
	return 0;

}
