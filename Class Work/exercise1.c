#include <stdio.h>

int main()
{
    printf("INPUT:\n");
    printf("Enter the digit whose table you want to print: ");
    int k;
    scanf("%d", &k);
    printf("\nOUTPUT:");
    printf("\nHere's the table of %d :-", k);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d is %d. ", k, i, k * i);
    }
    return 0;
}