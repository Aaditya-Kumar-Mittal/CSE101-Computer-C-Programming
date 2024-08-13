#include<stdio.h>

int main(){

    int num, *p, fact=1;

    p=&fact;

    printf("Enter the number: ");

    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        *p=(*p) * i;
    }

    printf("The factorial of %d is %d.",num,*p);

    return 0;
    
}