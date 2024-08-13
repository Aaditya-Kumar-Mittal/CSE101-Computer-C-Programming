#include <stdio.h>

int main(){

    char name[30]="Aaditya Kumar";
    printf("%s",name);

    char name1[30]={'A','a','d','i','t','y','a','\0'};
    printf("\n%s",name1);

    char name2[30];
    printf("\nEnter name: ");
    scanf("%s",name2);
    printf("%s",name2);

    fflush(stdin);

    char name3[30];
    printf("\nEnter name: ");
    gets(name3);
    printf("%s",name3);

    fflush(stdin);

    char name4[30];
    printf("\nEnter name: ");
    gets(name4);
    printf("%s",name4);
    printf("\n%.5s",name4);
    printf("\n%10.5s",name4);
    puts(name4);
    puts(name4);





    return 0;

}