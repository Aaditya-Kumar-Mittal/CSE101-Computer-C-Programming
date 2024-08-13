#include <stdio.h>
int main()
{
    int j, i, n, k;
    printf("Enter the count-1 value: ");
    scanf("%d", &n);
    printf("Enter the count-2 value: ");
    scanf("%d", &k);
    // little problem
    for (i = 0; j = 0, i < n, j < k; i++)
    {
        printf("%d %d\n", i, j);
        j++;
    }

    return 0;
}
