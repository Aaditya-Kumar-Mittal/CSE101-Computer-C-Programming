#include<stdio.h>
int main(){
    printf("Hello World!\n");

    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if (c=='a' || c=='A' ||c=='e' ||c=='E' ||c=='u' ||c=='U' ||c=='i' ||c=='I' ||c=='O' ||c=='o')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}