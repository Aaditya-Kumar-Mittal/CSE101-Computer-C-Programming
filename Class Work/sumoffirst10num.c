#include <stdio.h>

// Sum of first 10 numbers

int main()
{
    int sum = 0;
    
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("The sum of first 10 numbers is %d.", sum);

    return 0;
}