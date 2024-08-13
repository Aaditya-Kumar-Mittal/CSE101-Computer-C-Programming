#include<stdio.h>

int main(){

    int a[5],b[5],i,n1,n2;

    printf("Enter the size of array-1: ");

    scanf("%d",&n1);

    // int sum1=0;

    printf("\nEnter the values of array of size %d.\n",n1);

    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);

        // sum1=sum1+a[i];
        
    }

    printf("Enter the size of array-2: ");

    scanf("%d",&n2);

    // int sum2=0;

    printf("\nEnter the values of array of size %d.\n",n2);

    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);

        // sum2=sum2+b[i];
        
    }

    // int c[2]={sum1,sum2};

    // printf("The sum of array-1 is %d.\n",c[0]);
    // printf("\nThe sum of array-2 is %d.\n",c[1]);

    int c[5];

    for (int i = 0; i < 5; i++)
    {
        c[i]=a[i]+b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nc[%d] = a[%d]+b[%d] = %d",i,i,i,c[i]);
    }
    
    return 0;
}