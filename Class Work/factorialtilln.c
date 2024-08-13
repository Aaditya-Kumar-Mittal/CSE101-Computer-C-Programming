#include <stdio.h>

int main()
{

    // Factorial program in c till n limit

    int n;

    printf("Enter the number to find the factorial of: ");

    scanf("%d", &n);

    for (int j = 0; j <= n; j++)
    {
        int product = 1;

        for (int i = 1; i <= j; i++)

        {
            product = product * i;
        }
        printf("%d! is %d.\n", j,product);
    }

    return 0;
}