#include<stdio.h>

int main(){
    int a[5],n,i,sum;

    printf("Enter the number of digits to be entered in an array: ");

    scanf("%d",&n);
    
    printf("\nEnter the elemnts of array: ");

    for ( i = 0; i < n ; i++)
    {
        scanf("%d ",&a[i]);

        sum=sum+a[i];
    }
    printf("\nDispalying the array: ");

    for ( i = 0; i < n ; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

    printf("\nThe sum of array elemnts is: %d.",sum);

    return 0;
    
    }



