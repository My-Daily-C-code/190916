//24-3문제 해답
#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	char str[100];
	FILE * fp = fopen("my story.txt","rt");

	while (fgets(str, sizeof(str), fp) != NULL)
		printf("str");
	fclose(fp);

	return 0;
}