#include <stdio.h>
#include <conio.h>
int main()
{
    struct student
    {
        int rn;
        char name[10];
    } s[3];

    FILE *fp;

    int i, n;

    fp = fopen("file2.txt", "w");

    printf("How many records you want to store? ");

    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {
        printf("\nEnter student's roll number, name: ");

        scanf("%d %s", &s[i].rn, s[i].name);

    }

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    fp = fopen("file2.txt", "r");

    while (!feof(fp))
    {
        fread(&s, sizeof(s), 1, fp);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent's roll no., name is: ");

        printf("%d, %s", s[i].rn, s[i].name);
    }
    fclose(fp);

    return 0;
}