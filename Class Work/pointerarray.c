#include<stdio.h>

int main(){

    int a[]={3,6,7,9,100};

    int *p;

    // array pointer is a constant pointer
    p=a;

    p++;

    *p=30;

    p=p+2;

    *p=40;

    *(p-1)=5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
    
}