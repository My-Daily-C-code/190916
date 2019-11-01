// 임의 접근을 위한 파일 위치 지시자의 이동
#include<stdio.h>
#pragma error(disable: 4996)

int main()
{
	/* 파일 생성 */
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/*file 미개방 */
	fp = fopen("text.txt", "rt");

	/*SEEK_END */
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK _CUR test*/
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;

}