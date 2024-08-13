#include <stdio.h>

int main()
{
    // important question for placement

    int n;

    printf("Enter the end: ");

    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int j;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                printf("%d is not prime.\n", i);
                break;
            }
        }
        if (i == j)
        {
            printf("%d is prime.\n", i);
        }
    }

    return 0;
}