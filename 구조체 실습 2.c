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
		{"�迵��", "9952203", "4.2", "���ڻ�ŷ�", "������" },
		{"���̿�", "9952123", "3.5", "���ڻ�ŷ�", "ȸ���"},
		{"������", "9952108", "3.2", "���ڻ�ŷ�", "ȸ���"},
		{"�ں���", "9952115", "3.0", "���ڻ�ŷ�", "���ΰ��̸�"},
		{"��̰�", "0052025", "4.1", "���ڻ�ŷ�", "��������"},
		{"������", "0052026", "4.2", "���ڻ�ŷ�", "�������̳�"},
		{"������", "0052030", "4.3", "���ڻ�ŷ�", "����"},
	    {"�躸��", "0052031", "4.3", "���ڻ�ŷ�", "�������̳�"},
		{"������", "0052032", "3.5", "���ڻ�ŷ�", "��������"},
		{"������", "0052033", "3.7", "���ڻ�ŷ�", "DB������"}
	};

	print_result(person);

	return 0;
}

void print_result(struct student person[10])
{
	int i;
	printf("	��  ��	 ��   ��  �� ��    ��  ��     ��  ��\n");
	for (i = 0; i < 10; i++){
		printf("	%s   %s   %s   %s   %s   \n", person[i].name, person[i].s_number, person[i].score, person[i].major, person[i].career);
	}
}