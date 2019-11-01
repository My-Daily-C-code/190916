// BinaryFileCopy.c
#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	FILE * src = fopen("src.bin", "rb");
	FILE * des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src==NULL || des == NULL)
	{
		puts("file open fail!");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("file copy complet");
				break;
			}
			else
				puts("file copy fail");
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	return 0;
}