#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float num; // 게임 번호를 저장하는 전역변수

void menu()
{

	printf("==============\n");
	printf("MENU\n");
	printf("==============\n");
	printf("1. 두 점 사이의 거리 구하기\n");
	printf("2. 1개의 숫자를 입력받아 소수인지 확인\n");
	printf("3. 가위 바위 보 게임\n");
	printf("실행할 번호를 입력하시오 ?  ");

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
			printf("실수를 입력하세요\n");
			menu();
		}
		else
			if (roundk(num) == 1)
			{
				printf("두 점 사이의 거리 구하기\n");
				first_game();
				menu();
				continue;
			}
			else if (roundk(num) == 2)
			{
				printf("1개의 숫자를 입력받아 소수인지 확인\n");
				second_game();
				menu();
				continue;
			}
			else if (roundk(num) == 3)
			{
				printf("가위바위보 게임\n");
				third_game();
				menu();
				continue;
			}
			else if (roundk(num) == 0)
				break;
			else if (roundk(num) >= 4)
			{
				printf("잘못 입력하셨습니다.\n");
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
		printf("첫 번째 점의 x : ");
		scanf_s("%lf", &x1);
		if(x1 == 0)
			break;
		else if (x1 / 1.0 == (int)x1)
		       {
			       printf("실수를 입력하시오\n");
			       continue;
		       }
		else
			break;
	}  

	while (1)
	{
		printf("첫 번째 점의 y : ");
		scanf_s("%lf", &y1);
		if (y1 == 0)
			break;
		else if (y1 / 1.0 == (int)y1)
		{
			printf("실수를 입력하시오\n");
			continue;
		}
		else
			break;
	}

	while (1)
	{
		printf("두 번째 점의 x : ");
		scanf_s("%lf", &x2);
		if (x2 == 0)
			break;
		else if (x2 / 1.0 == (int)x2)
		{
			printf("실수를 입력하시오\n");
			continue;
		}
		else
			break;
	}

	while (1)
	{
		printf("두 번째 점의 y : ");
		scanf_s("%lf", &y2);
		if (y2 == 0)
			break;
		else if (y2 / 1.0 == (int)y2)
		{
			printf("실수를 입력하시오\n");
			continue;
		}
		else
			break;
	}

	result = sqrt((roundk(x2) - roundk(x1)) * (roundk(x2) - roundk(x1)) + (roundk(y2) - roundk(y1)) * (roundk(y2) - roundk(y1)));
	printf("거리: %f\n", result);
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
		printf("수를 입력하시오 : ");
		scanf_s("%lf", &k);
		if (k / 1.0 == (int)k || k == 0)
		{
			printf("0이 아닌 실수를 입력하시오\n");
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
		printf("소수입니다\n");
	else if(flag == 1)
		printf("소수가 아닙니다\n");

	return 0;
}

int third_game()
{
	srand(time(NULL));
	int computer = rand() % 3 + 1;
	int k;
	while (1)
	{
		printf("가위(1), 바위(2), 보(3)를 입력하세요 : ");
		scanf_s("%d", &k);
		if (k == 1 || k == 2 || k == 3)
			break;
		else
		{
			printf("1, 2, 3 중 하나만 입력하세요 !\n");
			continue;
		}
	}
	if (computer == k) printf("비겼습니다 \n");
	else if (computer > (k + 1) % 3) printf("당신이 이겼습니다 \n");
	else printf("컴퓨터가 이겼습니다 \n");
	return 0;
}

int main(void)
{
	menu();
	junctions();
	return 0;
}
//menu 함수는 안내문을 출력하는 역할을 한다.
//junction 함수가 사실상 main 함수 역할을 하도록 설계했다. 숫자를 입력 받고 입력 받은 숫자의 게임을 실행하는 역할을 한다.
/*roundk 함수는 이 프로그램에서 가장 중요한 역할을 하는 함수라고 생각한다.
실수를 반올림 해서 정수로 바꿔주는 역할을 담당한다.
음의 실수는 양수로 바꾼 뒤 반올림해 정수로 출력한다.*/
/*문제의 주요한 조건중 하나인 정수를 입력하면 "실수를 입력하세요" 를 출력하고 다시 실수를 입력하게 하는 역할은 함수를 따로 구성하지 않았다.
해당 조건이 필요할 때마다 while을 이용한 무한 반복문과 'k / 1.0 == (int)k || k == 0' 이 조건으로 실수여부를 판단하는 코드를 사용했다.
해당 조건이 필요할 때, 생각해 줘야 하는 다른 조건들이 많아 보여서 이렇게 판단했다.
정확히 말하면 실수 여부 판단 후 실수면 정수로 반올림 해줘야 하는데 이 과정을 함수로 구현하기가 복잡했다.*/
/*두 번째 게임에서 소수를 출력하고 소수 여부를 출력하라는 조건이 있었는데 소수를 출력하는 것은 반복문으로 출력했지만
소수 여부 출력을 한번에 하는 방법을 몰라 따로 또 다른 반복문을 만들어서 소수 여부를 출력하게 했다.
이 과정에서 ': 소수입니다' 의 형태로 출력되게 만들지 못했다.*/