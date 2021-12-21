#include<stdio.h>
#include<string.h>
int main(void)
{
	int n = 1260;
	int count = 0;

	int coin_types[4] = { 500, 100, 50, 10 };

	for (int i = 0; i <= 3; i++)
	{
		count += n / coin_types[i];
		n %= coin_types[i];
	}

	printf("%d", count);

	return 0;
}