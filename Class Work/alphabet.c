#include <stdio.h>
int main()
{

    printf("Hello World!\n");

    char a;

    printf("Taking character as an input: ");

    scanf("%c", &a);

    if (a >= "a" || a <= "z")

    {
        printf("%c is a lowercase alphabet.", a);
    }
    else if (a >= "A" || a <= "Z")

    {
        printf("%c is a uppercase alphabet.", a);
    }

    else

    {

        printf("%c is not an alphabet.", a);
    }

    return 0;
}