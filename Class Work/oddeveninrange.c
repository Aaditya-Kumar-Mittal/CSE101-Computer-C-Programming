#include <stdio.h>

int main(){

    int n;

    printf("Enter the end: ");

    scanf("%d",&n);

    if (1)
    {
        printf("Even numbers are: ");
        for (int i = 0; i <=n; i+=2)
        {
            printf("%d ",i);
        }
        
    }
    if(1)
    {
        printf("\nOdd numbers are: ");
        for (int i = 1; i <=n; i+=2)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}