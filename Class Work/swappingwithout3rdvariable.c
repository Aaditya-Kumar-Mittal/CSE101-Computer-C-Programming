#include<stdio.h>
int main(){
    printf("Hello World!\n");

    // Swapping without 3rd variable
    int a, b;
    printf("Enter the 1st number (a): ");

    scanf("%d",&a);

    printf("Enter the 2nd number (b): ");

    scanf("%d",&b);

    printf("Numbers before swapping: a: %d & b: %d.",a,b);

    a=a+b;

    b=a-b;

    a=a-b;

    printf("\nNumbers after swapping: a: %d & b: %d.",a,b);



    return 0;
}