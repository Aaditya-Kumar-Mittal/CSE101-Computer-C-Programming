#include<stdio.h>

int main(){

    char s1[30],s2[30];

    printf("Enter the string: ");

    gets(s1);

    printf("The string is: %s.",s1);

    int length=0;

    for (int i = 0; s1[i]!='\0'; i++)
    {
        length++;
    }
    
    return 0;
}