#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the count value: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}