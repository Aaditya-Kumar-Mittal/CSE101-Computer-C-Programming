#include<stdio.h>

int main(){

    int i,c;

    int a[5];

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k< 4; k++)
        {
            if(a[k]>a[k+1])
            {
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;

            }
        }
        
    }

    for(int i=0; i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
    
}