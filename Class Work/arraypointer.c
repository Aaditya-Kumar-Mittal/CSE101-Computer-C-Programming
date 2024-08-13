#include<stdio.h>

int main(){

    int a[]={10,20,30,50,40};

    int *p=a;

    (*p)++;

    p=p+2;

    *p=300;

    p=p-1;

    *p=*(p-1);

    for (int i = 0; i < 5; i++)
    {
        printf(" %d",a[i]);
    }
    

}