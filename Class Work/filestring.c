#include <stdio.h>
int main()
{

    FILE *fp;

    char xy[50], ab[50];
    int i = 0;

    printf("Enter any string: ");
    gets(xy);
    fp = fopen("file5.txt", "w");
    fputs(xy, fp);
    fclose(fp);
    fp = fopen("file5.txt", "r");
    printf("Entered sttring is \n");
    if (fgets(ab, 50, fp) != '\0')
    {
        while (ab[i] != '\0')
        {
            putchar(ab[i]);
            i++;
        }
    }
    fclose(fp);
    return 0;
}