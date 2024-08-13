#include <stdio.h>

int main()
{

    int a[3][3];

    printf("Enter array elements: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d] element: ", i, j);

            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("The sum of diognal ements is: %d.", sum);

    return 0;
}