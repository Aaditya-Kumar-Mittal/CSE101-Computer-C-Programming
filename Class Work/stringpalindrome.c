#include<stdio.h>
#include<string.h>

int main(){

    char s1[30],s2[30];

    printf("Enter the string: ");

    gets(s1);

    strcpy(s2,s1);

    strrev(s1);

    puts(s2);

    puts(s1);

    int c;

    c=strcmp(s1,s2);

    if(c>0)
    {
        printf("Strings are not a palindrome.");
    }
    else if(c<0)
    {
        printf("Strings are not a palindrome.");
    }
    else
    {
        printf("String is a palindorme.");
    }

    return 0;
}