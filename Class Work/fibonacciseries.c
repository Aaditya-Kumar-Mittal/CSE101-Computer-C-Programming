#include <stdio.h>

int main(){

    // Fibonacci Series

    int a=0,b=1,sum,n,i;

    printf("Enter the end limit: ");

    scanf("%d", &n);

    printf("%d %d ",a,b);             
    for ( i=1; i <=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }

    return 0;
    
}