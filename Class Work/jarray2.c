#include<stdio.h>

int main(){

    int a[5],i,n;

    printf("Enter the size of array: ");

    scanf("%d",&n);

    int sum=0;

    printf("\nEnter the values of array of size %d.\n",n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
        
    }

    printf("\nDisplaying the elemnts of array.\n");

    for ( i = 0; i < n; i++)
    {
        printf("\na[%d] = %d",i,a[i]);
    }

    printf("\n\nDisplaying the elemnts of array in reverse order.\n");

    for ( i = n-1; i>=0; i--)
    {
        printf("\na[%d] = %d",i,a[i]);
    }

    printf("\n\nDisplaying the sum of array elements:\n");

    printf("The sum of given array is %d.",sum);

    float avg= sum/n;

    printf("\n\nDisplaying the average of array elements:\n");

    printf("The average of given array is %.2f.",avg);

    return 0;
}