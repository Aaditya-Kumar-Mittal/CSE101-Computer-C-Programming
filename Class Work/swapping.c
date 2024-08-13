#include <stdio.h>
int main()
{
    printf("Hello World!\n");

    // Swapping of two numbers

    int a, b, c;

    printf("Enter the 1st number (a): ");

    scanf("%d",&a);

    printf("Enter the 2nd number (b): ");

    scanf("%d",&b);

    printf("Numbers before swapping: a: %d & b: %d.",a,b);

    c=b;

    b=a;

    printf("\nNumbers after swapping: a: %d & b: %d.",c,b);
    
    return 0;
}