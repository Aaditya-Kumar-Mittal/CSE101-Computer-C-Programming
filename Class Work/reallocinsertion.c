#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p,n,n1;

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
            
            printf("a[%d]: %d.\n",*(p+i));
        }
    }

    char y='Y';

    char c;

    printf("\nDo you want to add more elements?\nIf yes, enter Y. If no, enter N.\n");

    scanf("%d",&c);

    if(c==y){

        printf("\nEnter n1: ");

        scanf("%d",&n1);

        p=(int *)realloc(p,(n+n1)*sizeof(int));

        printf("\nEnter the values:\n");

        for (int i = n; i < n1; i++)
        {
            scanf("%d",p+i);
        }
        for (int i = 0; i < n+n1; i++)
        {
            
            printf("a[%d]: %d.\n",*(p+i));
        }
    }



    free(p);
    
    return 0;
}