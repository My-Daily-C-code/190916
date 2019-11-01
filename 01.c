// TestStringFileCopy.c
#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("file open fail!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("file copy complet!");
	else
		puts("file copy fail");

	fclose(src);
	fclose(des);
	return 0;
}