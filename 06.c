// �ؽ�Ʈ �����Ϳ� ���̳ʸ� �����͸� ���ÿ� ����� �ϱ�
#include <stdio.h>
#pragma error(disable:4996)

int main()
{
	char name[10];
	char sex;
	int age;

	FILE *fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸�,����,���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // ���ۿ� �����ִ� \n�� �Ҹ��� ���� ���
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);

	return 0;
}