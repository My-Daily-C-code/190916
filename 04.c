// 24-2 문제 답안
#include <stdio.h>
//#pragma error (disable: 4996)
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	FILE * fp = fopen("my story.txt", "at");
	fputs("#favorit food: steak\n", fp);
	fputs("#hobby: book\n",fp);
	fclose(fp);
	return 0;
}