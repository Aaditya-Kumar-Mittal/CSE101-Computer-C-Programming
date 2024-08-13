#include<stdio.h>

void swap(int a, int b){

    int s;

    s=a+b;

    a=s-a;

    b=s-a;

    

    printf("Numbers after swapping: %d %d.",a,b);





}
    int main(){

        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        printf("Numbers before swapping: %d %d.\n",a,b);
        swap(a,b);


    }