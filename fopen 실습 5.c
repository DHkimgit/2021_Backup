#include<stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���Ͽ��� ����\n");
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);
	return 0;
}