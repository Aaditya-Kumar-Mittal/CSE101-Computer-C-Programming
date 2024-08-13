#include <stdio.h>

// Sum of first numbers

int main()
{
    int n, sum = 0;

    printf("Enter the number till which you want sum of: ");

    scanf("%d",&n);
    
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    printf("The sum of first %d numbers is %d.",n, sum);

    return 0;
}