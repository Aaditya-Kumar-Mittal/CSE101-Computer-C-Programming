#include <stdio.h>

int main()
{

    int a[3][3];
    
    int i, j;

    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 3 - 1)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("The sum of anti-diognal element in the matrix is %d.", sum);

    return 0;
}