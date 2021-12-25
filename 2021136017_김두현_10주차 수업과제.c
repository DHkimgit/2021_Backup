#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float num; // ���� ��ȣ�� �����ϴ� ��������

void menu()
{

	printf("==============\n");
	printf("MENU\n");
	printf("==============\n");
	printf("1. �� �� ������ �Ÿ� ���ϱ�\n");
	printf("2. 1���� ���ڸ� �Է¹޾� �Ҽ����� Ȯ��\n");
	printf("3. ���� ���� �� ����\n");
	printf("������ ��ȣ�� �Է��Ͻÿ� ?  ");

}

int roundk(double a)
{
	if (a >= 0.5)
	{
		a = a + 0.5;
		return a;
	}
	else if (a >= 0 && a < 0.5)
	{
		a = 0;
		return a;
	}
	else
	{
		a = -a;
		a = a + 0.5;
		return a;
	}
}

void junctions() 
{
	for (; ;)
	{
		scanf_s("%f", &num);
		if (num == 0)
			break;
		else if (num / 1.0 == (int)num)
		{
			printf("�Ǽ��� �Է��ϼ���\n");
			menu();
		}
		else
			if (roundk(num) == 1)
			{
				printf("�� �� ������ �Ÿ� ���ϱ�\n");
				first_game();
				menu();
				continue;
			}
			else if (roundk(num) == 2)
			{
				printf("1���� ���ڸ� �Է¹޾� �Ҽ����� Ȯ��\n");
				second_game();
				menu();
				continue;
			}
			else if (roundk(num) == 3)
			{
				printf("���������� ����\n");
				third_game();
				menu();
				continue;
			}
			else if (roundk(num) == 0)
				break;
			else if (roundk(num) >= 4)
			{
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				menu();
				continue;
			}
	}
}

int first_game()
{
	double x1, y1, x2, y2, result;

	while (1)
	{
		printf("ù ��° ���� x : ");
		scanf_s("%lf", &x1);
		if(x1 == 0)
			break;
		else if (x1 / 1.0 == (int)x1)
		       {
			       printf("�Ǽ��� �Է��Ͻÿ�\n");
			       continue;
		       }
		else
			break;
	}  

	while (1)
	{
		printf("ù ��° ���� y : ");
		scanf_s("%lf", &y1);
		if (y1 == 0)
			break;
		else if (y1 / 1.0 == (int)y1)
		{
			printf("�Ǽ��� �Է��Ͻÿ�\n");
			continue;
		}
		else
			break;
	}

	while (1)
	{
		printf("�� ��° ���� x : ");
		scanf_s("%lf", &x2);
		if (x2 == 0)
			break;
		else if (x2 / 1.0 == (int)x2)
		{
			printf("�Ǽ��� �Է��Ͻÿ�\n");
			continue;
		}
		else
			break;
	}

	while (1)
	{
		printf("�� ��° ���� y : ");
		scanf_s("%lf", &y2);
		if (y2 == 0)
			break;
		else if (y2 / 1.0 == (int)y2)
		{
			printf("�Ǽ��� �Է��Ͻÿ�\n");
			continue;
		}
		else
			break;
	}

	result = sqrt((roundk(x2) - roundk(x1)) * (roundk(x2) - roundk(x1)) + (roundk(y2) - roundk(y1)) * (roundk(y2) - roundk(y1)));
	printf("�Ÿ�: %f\n", result);
	return 0;
}

int second_game()
{
	double k;
	int a = 2;
	int i;
	int  flag = 0;
	while (1)
	{
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%lf", &k);
		if (k / 1.0 == (int)k || k == 0)
		{
			printf("0�� �ƴ� �Ǽ��� �Է��Ͻÿ�\n");
			continue;
		}
		else
			break;
	}
	for (; a <= roundk(k); a++)
	{
		for (i = 2; i <= a; i++)
		{
			if (a % i == 0)
				break;
		}
		if (a == i)
			printf("%d,", a);
	}
	for (i = 2; i < roundk(k); i++)
	{
		if (roundk(k) % i == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if (flag == 0)
		printf("�Ҽ��Դϴ�\n");
	else if(flag == 1)
		printf("�Ҽ��� �ƴմϴ�\n");

	return 0;
}

int third_game()
{
	srand(time(NULL));
	int computer = rand() % 3 + 1;
	int k;
	while (1)
	{
		printf("����(1), ����(2), ��(3)�� �Է��ϼ��� : ");
		scanf_s("%d", &k);
		if (k == 1 || k == 2 || k == 3)
			break;
		else
		{
			printf("1, 2, 3 �� �ϳ��� �Է��ϼ��� !\n");
			continue;
		}
	}
	if (computer == k) printf("�����ϴ� \n");
	else if (computer > (k + 1) % 3) printf("����� �̰���ϴ� \n");
	else printf("��ǻ�Ͱ� �̰���ϴ� \n");
	return 0;
}

int main(void)
{
	menu();
	junctions();
	return 0;
}
//menu �Լ��� �ȳ����� ����ϴ� ������ �Ѵ�.
//junction �Լ��� ��ǻ� main �Լ� ������ �ϵ��� �����ߴ�. ���ڸ� �Է� �ް� �Է� ���� ������ ������ �����ϴ� ������ �Ѵ�.
/*roundk �Լ��� �� ���α׷����� ���� �߿��� ������ �ϴ� �Լ���� �����Ѵ�.
�Ǽ��� �ݿø� �ؼ� ������ �ٲ��ִ� ������ ����Ѵ�.
���� �Ǽ��� ����� �ٲ� �� �ݿø��� ������ ����Ѵ�.*/
/*������ �ֿ��� ������ �ϳ��� ������ �Է��ϸ� "�Ǽ��� �Է��ϼ���" �� ����ϰ� �ٽ� �Ǽ��� �Է��ϰ� �ϴ� ������ �Լ��� ���� �������� �ʾҴ�.
�ش� ������ �ʿ��� ������ while�� �̿��� ���� �ݺ����� 'k / 1.0 == (int)k || k == 0' �� �������� �Ǽ����θ� �Ǵ��ϴ� �ڵ带 ����ߴ�.
�ش� ������ �ʿ��� ��, ������ ��� �ϴ� �ٸ� ���ǵ��� ���� ������ �̷��� �Ǵ��ߴ�.
��Ȯ�� ���ϸ� �Ǽ� ���� �Ǵ� �� �Ǽ��� ������ �ݿø� ����� �ϴµ� �� ������ �Լ��� �����ϱⰡ �����ߴ�.*/
/*�� ��° ���ӿ��� �Ҽ��� ����ϰ� �Ҽ� ���θ� ����϶�� ������ �־��µ� �Ҽ��� ����ϴ� ���� �ݺ������� ���������
�Ҽ� ���� ����� �ѹ��� �ϴ� ����� ���� ���� �� �ٸ� �ݺ����� ���� �Ҽ� ���θ� ����ϰ� �ߴ�.
�� �������� ': �Ҽ��Դϴ�' �� ���·� ��µǰ� ������ ���ߴ�.*/