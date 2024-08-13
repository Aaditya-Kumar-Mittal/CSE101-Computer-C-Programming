#include<stdio.h>

void f(int a,int b){

    a=10;

    b=20;

    printf("%d,%d",a,b);

}

int main(){

    int a=3,b=5;

    f(a,b);

    printf("\n%d,%d",a,b);

    return 0;
}