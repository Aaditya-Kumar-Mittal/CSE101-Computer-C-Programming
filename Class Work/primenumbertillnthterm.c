#include <stdio.h>

int main()
{

    int n;

    printf("Enter the end limit: ");

    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int j;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                printf("");
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
        }
    }

    return 0;
}