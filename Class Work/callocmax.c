#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p,n,max=0;

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
        }

        for (int i = 0; i < n; i++)
        {
            if(max<p[i]){
                max=p[i];
            }
        }
        

        printf("The max using DMA is %d.",max);

    }
    return 0;
}