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
	a.model = "그랜져GT";
	a.car_owner.personal.name = "홍길동";
	a.car_owner.personal.p_number = "010-1111-2222";
	a.car_owner.personal.adress = "서울시 서초구 양재동";

	printf("	  이름	           종류		주인\n");
	printf("	%s		%s    %s %s %s\n", a.year, a.model, a.car_owner.personal.name, a.car_owner.personal.p_number, a.car_owner.personal.adress);

	
	b.year = "2014 03";
	b.model = "르노삼성 SM";
	b.car_owner.company = "한국기술교육대학교";
	
	printf("	%s		%s    %s \n", b.year, b.model, b.car_owner.company);


}