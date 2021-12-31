#include<stdio.h>

struct student {
	char *name;
	char *s_number;
	char *score;
	char *major;
	char *career;
};

void print_result(struct student P[10]);

int main(void){
	struct student person[10] = {
		{"김영국", "9952203", "4.2", "전자상거래", "공무원" },
		{"강미연", "9952123", "3.5", "전자상거래", "회사원"},
		{"송은혜", "9952108", "3.2", "전자상거래", "회사원"},
		{"박보현", "9952115", "3.0", "전자상거래", "프로게이머"},
		{"김미경", "0052025", "4.1", "전자상거래", "웹마스터"},
		{"김형근", "0052026", "4.2", "전자상거래", "웹디자이너"},
		{"배태준", "0052030", "4.3", "전자상거래", "군인"},
	    {"김보름", "0052031", "4.3", "전자상거래", "웹디자이너"},
		{"서정숙", "0052032", "3.5", "전자상거래", "웹마스터"},
		{"최종욱", "0052033", "3.7", "전자상거래", "DB관리자"}
	};

	print_result(person);

	return 0;
}

void print_result(struct student person[10])
{
	int i;
	printf("	이  름	 학   번  학 점    학  과     진  로\n");
	for (i = 0; i < 10; i++){
		printf("	%s   %s   %s   %s   %s   \n", person[i].name, person[i].s_number, person[i].score, person[i].major, person[i].career);
	}
}