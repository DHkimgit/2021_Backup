#include<stdio.h>

struct person {
	char *name;
	char *p_number;
	char *adress;
};

union owner {
	struct person personal;
	char *company;
};

struct car {
	char *year;
	char *model;
	union owner car_owner;
	};

struct car a;
struct car b;

int main(void)
{
	
	a.year = "2020 09";
	a.model = "�׷���GT";
	a.car_owner.personal.name = "ȫ�浿";
	a.car_owner.personal.p_number = "010-1111-2222";
	a.car_owner.personal.adress = "����� ���ʱ� ���絿";

	printf("	  �̸�	           ����		����\n");
	printf("	%s		%s    %s %s %s\n", a.year, a.model, a.car_owner.personal.name, a.car_owner.personal.p_number, a.car_owner.personal.adress);

	
	b.year = "2014 03";
	b.model = "����Ｚ SM";
	b.car_owner.company = "�ѱ�����������б�";
	
	printf("	%s		%s    %s \n", b.year, b.model, b.car_owner.company);


}