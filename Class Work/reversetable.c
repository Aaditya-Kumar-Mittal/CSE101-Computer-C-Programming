#include <stdio.h>

int main(){

    int n;

    printf("Enter the number to print table of: ");

    scanf("%d",&n);

    for (int i = 10; i>0; i--)
    {
        printf("%d * %d is %d.\n",n,i,n*i);
    }
    
    return 0;
}