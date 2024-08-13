#include<stdio.h>


int main(){

    int a[3][3];

    int max=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }

    printf("The max element in the matrix is %d.",max);

    return 0;
    
}