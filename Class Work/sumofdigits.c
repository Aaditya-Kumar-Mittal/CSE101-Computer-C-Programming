#include <stdio.h>

int main()
{

    int l, sum = 0, n, temp;

    printf("Enter the digits to find the sum of: ");

    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        l = n % 10;
        sum = sum + l;
        n = n / 10;
    }
    
    printf("The sum of the digits of %d is %d", temp, sum);

    return 0;
}