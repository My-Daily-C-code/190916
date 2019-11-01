// 24-1 문제 답안
#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	FILE * fp = fopen("my story.txt", "wt");
	fputs("#Name: 고휘찬\n", fp);
	fputs("#ID Num: 960803\n", fp);
	fputs("#Phone Num: 010-3327-0064", fp);
	fclose(fp);
	return 0;

}