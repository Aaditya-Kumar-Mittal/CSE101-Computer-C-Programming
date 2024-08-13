#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;

    printf("Enter the number of integers to be entered: ");

    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int)); // malloc() returns void* so we need to typecast with the specific data type

    if (p == NULL)
    {
        printf("Memory not available.\n");

        exit(1);
    }

    else
    {
        printf("\n Mmeory allocation was successful.");

        printf("\nEnter integer values:\n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", p + i); // In place of p+i we can write &p[i](treating it as  ID array)
        }
        for (i = 0; i < n; i++)
        printf("\n%d", *(p + i)); // In place of *(p+i) we can write p[i](treating it as ID array)
    }
    return 0;
}
