#include <stdio.h>

int main()
{

    int a = 0, b = 1, sum, n, i;

    printf("Enter the ending limit: ");

    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++)
    {
        sum = a + b;

        printf("%d ", sum);

        a = b;

        b = sum;
        
    }

    return 0;
}
