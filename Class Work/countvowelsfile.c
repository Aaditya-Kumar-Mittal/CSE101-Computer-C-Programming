#include <stdio.h>
int main()
{

    FILE *fp;

    char name[50], ab[50];

    int i = 0, count = 0;

    printf("Enter your name: ");

    gets(name);

    fp = fopen("file6.txt", "w");

    fputs(name, fp);

    fclose(fp);

    fp = fopen("file6.txt", "r");

    printf("Entered string vowel count is: \n");

    while (fgets(ab, 50, fp) != '\0')
    {
        if (ab[i] =='a' || ab[i] =='e' || ab[i] =='i' || ab[i] =='o' || ab[i] =='u' || ab[i] == 'A' || ab[i] == 'E' || ab[i] == 'I' || ab[i] == 'O' || ab[i] == 'U')
        {

            printf("ab[%d]=%d\n",i,count++);

        }
        i++;
    }
    printf("%d", count);

    fclose(fp);

    return 0;
}