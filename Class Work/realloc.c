#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i, m = 0;

    printf("Enter the number of elelments to be stored: ");

    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    if (p == NULL)
    {
        printf("Memeory allocation unsuccessful\n");
    }
    else
    {
        printf("Memory allocatio successful\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements: ");

        scanf("%d", &p[i]);
    }

    printf("Entered elements are: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }

    m = n;

    printf("Enter the amount of new elements: ");

    scanf("%d", &n);

    p = (int *)realloc(p, (m + n) * sizeof(int));

    for (i = m; i < (m + n); i++)
    {
        printf("Enter the elements: ");

        scanf("%d", &p[i]);
    }

    printf("Entered elemements after reallocation are: \n");

    for (i = 0; i < (m + n); i++)
    {
        printf("%d\n", p[i]);
    }

    return 0;
}
