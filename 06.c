// 텍스트 데이터와 바이너리 데이터를 동시에 입출력 하기
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
		printf("이름,성별,나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // 버퍼에 남아있는 \n의 소멸을 위해 사용
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);

	return 0;
}