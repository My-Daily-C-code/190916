// ���� ������ ���� ���� ��ġ �������� �̵�
#include<stdio.h>
#pragma error(disable: 4996)

int main()
{
	/* ���� ���� */
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/*file �̰��� */
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