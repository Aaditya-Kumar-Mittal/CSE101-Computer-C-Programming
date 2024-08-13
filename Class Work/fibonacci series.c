#include <stdio.h>

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}


int main()
{
    printf("Hello World!\n");

    int n, i;
    printf("Enter the number of terms you want to print: ");

    scanf("%d", &n);

    printf("Fibonacci series\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", fib(i));
    }

    return 0;
}