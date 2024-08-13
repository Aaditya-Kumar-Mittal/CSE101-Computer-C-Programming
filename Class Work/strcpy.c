// strcpy() function
#include <stdio.h>

#include <string.h>

int main()
{
    // strcpy function

    char ori[20], dup[20];

    char *z;

    printf("\nEnter your name:");

    gets(ori);

    z = strcpy(dup, ori);

    printf("Original String is: %s.", ori);

    printf("\nDuplicate String: %s.", dup);

    printf("\nValue of z is: %s.", z);

    return 0;
}