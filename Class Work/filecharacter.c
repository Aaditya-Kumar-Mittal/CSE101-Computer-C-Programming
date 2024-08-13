#include <stdio.h>
int main()
{

    FILE *fp;

    char c;

    printf("Enter any character: ");
    c=getchar();
    fp = fopen("file4.txt", "w");
    putc(c, fp);
    fclose(fp);
    fp = fopen("file4.txt", "r");
    c=getc(fp);
    printf("Entered charcter is %c.",c);
    fclose(fp);
    return 0;
}