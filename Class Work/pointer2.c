#include <stdio.h>

void change(int a,int b){

    a=a+10;
    b=b-5;
    printf("%d %d\n",a,b);
}

int main(){

    int a=10, b=20;
    change(a,b);
    printf("%d %d",a,b);
}