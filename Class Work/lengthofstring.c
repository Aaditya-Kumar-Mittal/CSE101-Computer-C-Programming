#include <stdio.h>
#include <string.h>

int main()
{

    char name[10];

    int count=0,i;

    printf("Enter name: ");

    gets(name);

    printf("%s", name);

    printf("\nThe length of name entered is: %d", strlen(name));
    // strlen return unsigned int

    fflush(stdin);

    while(name[i]=='\0'){
        count++;
        i++;
    }

    printf("\nThe length of name entered is: %d.",count);

    return 0;
}