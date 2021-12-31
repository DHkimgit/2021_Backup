#include<stdio.h>

int main(void)
{
	char a = 65;

	while (a < 91)
	{
		printf("문자 : %c, 8진수 : %o, 16진수 : %x, 10진수 : %d\n", a, a, a, a);
		a += 1;
	}

	return 0;
}