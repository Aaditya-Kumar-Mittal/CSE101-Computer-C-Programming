#include <stdio.h>

void sum(int, int);

int main()
{

    int a, b;

    scanf("%d", &a);

    scanf("%d", &b);

    sum(a, b);

    return 0;
}

void sum(int x, int y)
{

    int s;

    s = x + y;
    
    printf("Sum=%d", s);

    return;
}