#include<stdio.h>

int main(){

    int a[10],even=0,odd=0;

    printf("Enter the values of array.\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0){
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Count of even numbers in the array: %d.",even);

    printf("\n\nCount of odd numbers in the array: %d.",odd);



    return 0;
}