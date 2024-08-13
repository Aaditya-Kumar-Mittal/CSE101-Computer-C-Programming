#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[10];
    int x;
    printf("\n Enter first string:");
    gets(str1);
    printf("\n Enter second string:");
    gets(str2);
    x = strcmp(str1, str2);
    if (x == 0)
    {
        printf("\n Strings are equal");
    }
    else if (x > 0)
    {
        printf("\nFirst string is greater than the second string.");
    }
    else
    {
        printf("\n First string is less than than the second string.");
    }
    return 0;
}