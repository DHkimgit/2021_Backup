#include<stdio.h>

int main(void)
{
	char a = 65;

	while (a < 91)
	{
		printf("���� : %c, 8���� : %o, 16���� : %x, 10���� : %d\n", a, a, a, a);
		a += 1;
	}

	return 0;
}