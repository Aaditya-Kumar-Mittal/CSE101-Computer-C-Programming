#include <stdio.h>

int main(){

    // Method-1

    char c;

    printf("Enter the character to check: ");

    scanf("%c",&c);

    if (c=='a' ||c=='A' ||c=='e' ||c=='E' ||c=='i'||c=='I' ||c=='o' ||c=='O' ||c=='u'||c=='U'){

        printf("%c is a vowel.",c);
    }
    else
    {
        printf("%c is a consonant.",c);
    }
    
    return 0;

}