#include <stdio.h>

int main()
{
    char buffer[100];
    FILE* fp1 = fopen("Before.txt", "r");
    FILE* fp2 = fopen("After.txt", "w");

    if (fp1 == NULL) printf("파일을 열 수 없습니다.\n");

    while (!feof(fp1))
    {
        fgets(buffer, 100, fp1);
        printf("%s\n", buffer);
        for (int i = 0; buffer[i]; i++)
        {
            if (islower(buffer[i])) 
                buffer[i] = toupper(buffer[i]);
            else if (isupper(buffer[i]))
                buffer[i] = tolower(buffer[i]);
        }
        fputs(buffer, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    FILE *fp3 = fopen("After.txt", "r");
    if (fp3 == NULL) printf("파일을 열 수 없습니다.\n");

    while (!feof(fp3))
    {
        fgets(buffer, 100, fp3);
        printf("%s", buffer);
    }

    fclose(fp3);
    
    return 0;
}
