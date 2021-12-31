#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct List{
    int *num;
    char name[10];
    float sc1;
    float sc2;
    float sc_sum;
};

int main()
{
    struct List p[5];
    char buffer[100];

    FILE* fp1 = fopen("list.txt", "r");
    if (fp1 == NULL) printf("리스트 파일 list.txt를 열 수 없습니다.\n");

    FILE* fp2 = fopen("result.txt", "w");
    if (fp2 == NULL) printf("결과 파일을 열 수 없습니다.\n");

    for (int i = 0; i < 5; i++)
    {
        fscanf(fp1, " %d", &p[i].num);
        

        fscanf(fp1, " %s", buffer);
        strcpy(p[i].name, buffer);

        fscanf(fp1, " %s", buffer);
        p[i].sc1 = strtof(buffer, NULL);

        fscanf(fp1, " %s", buffer);
        p[i].sc2 = strtof(buffer, NULL);
        
        p[i].sc_sum = p[i].sc1 + p[i].sc2;
    }
   
    for (int i = 0; i < 5; i++)
    {
        fprintf(fp2, "%d %5s %5.1f %5.1f %5.1f\n", p[i].num, p[i].name, p[i].sc1, p[i].sc2, p[i].sc_sum);
        fprintf(stdout, "%d %5s %5.1f %5.1f %5.1f\n", p[i].num, p[i].name, p[i].sc1, p[i].sc2, p[i].sc_sum);
    }

    fclose(fp2);
    fclose(fp1);

    return 0;
}