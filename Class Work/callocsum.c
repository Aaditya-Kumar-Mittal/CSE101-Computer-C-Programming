#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p,n,sum=0;

    printf("Enter the number: ");

    scanf("%d",&n);

    p=(int *)calloc(n,sizeof(int));

    if(p==NULL){

        printf("Memory not available.");

        exit(1);
    }

    else{

        printf("-----------------Memory Allocation Successful.--------------------");

        printf("\nEnter the values:\n");

        for (int i = 0; i < n; i++)
        {
            
            scanf("%d",p+i);
            sum=sum+(*(p+i));
        }

        printf("The sum using DMA is %d.",sum);

    }

    free(p);
    
    return 0;
}