#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char buffer[100];
    int character = 0, word = 0, line = 0;

    FILE* fp = fopen("김두현.txt", "r");
    if (fp == NULL) printf("file open error\n");

    while (!feof(fp))
    {
        fgets(buffer, 100, fp);
        for (int i = 0; buffer[i]; i++)
        {
            if (isalpha(buffer[i]))  character++;
        }
        char* cut = strtok(buffer, " .,\n\t\r'");
        while (cut)
        {
            word++;
            cut = strtok(NULL, " .,\n\t\r");
        }
        line++;
    }

    printf("문자 수 : %d\n", character);
    printf("단어 수 : %d\n", word);
    printf("라인 수 : %d\n", line);

    fclose(fp);

    return 0;
}