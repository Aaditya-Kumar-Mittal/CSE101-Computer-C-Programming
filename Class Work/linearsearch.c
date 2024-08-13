#include <stdio.h>

int main()
{

    int a[5];
    int n, ele, status;

    printf("Enter the number of elemnts you want to enter: ");

    scanf("%d", &n);

    printf("Enter the array elemnts: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements to search: ");

    scanf("%d", &ele);

    for (int i = 0; i < n; i++)
    {
        if (ele == a[i])
        {
            status = i++;
        }
    }

    if (status >= 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }

    return 0;
}