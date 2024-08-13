#include<stdio.h>

int main(){

    int n;

    printf("Enter the ending limit of the range: ");

    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("Even numbers are:\n%d\n",i);
        }
        else
        {
            printf("Odd numbers are:\n%d\n",i);
        }
        
        
    }
    
    return 0;
}