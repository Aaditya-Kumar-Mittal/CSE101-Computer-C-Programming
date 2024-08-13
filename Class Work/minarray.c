// Max Elemnts using Array
#include<stdio.h>

int main(){

    int a[5],i,n,max=0,min;

    printf("Enter the elements of array: \n");

    for ( i = 0; i < n; i++)
    {
        printf("Enter %d value: ",i);
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if(a[i]>max){

            max=a[i];
        }
    }

    for ( i = 0; i < n; i++)
    {
        if(a[i]<max){

            min=a[i];
        }
    }

    printf("\nThe max value in array: %d.",max);

    return 0;
    
    


}