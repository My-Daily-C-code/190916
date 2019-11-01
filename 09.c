//StructFileWriteRead
#include <stdio.h>
#pragma error(disable: 4996)

typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;

int main()
{
	FILE * fp;
	Friend myfren1;
	Friend myfren2;

	/*   fiel write     */
	fp = fopen("friend.bin", "wo");
	printf("Insert the name,sex,age: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);

	/*file read*/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return 0;
}