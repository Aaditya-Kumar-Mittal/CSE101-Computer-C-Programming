#include <stdio.h>
int main()
{
    char op;

    printf("Enter the operation: ");

    scanf("%c", &op);

    int a, b;

    printf("Enter the integer-1: ");

    scanf("%d", &a);

    printf("Enter the integer-2: ");

    scanf("%d", &b);

    switch (op)
    {

    case '+':

        printf("Sum is: %d", a + b);

        break;

    case '-':

        printf("Difference is: %d", a - b);

        break;

    case '*':

        printf("Product is: %d", a * b);

        break;

    default:

        break;

    }

    return 0;
}