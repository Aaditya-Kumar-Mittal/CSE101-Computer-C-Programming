#include<stdio.h>

void func1(){
    int a=10;

    printf("%d\n",a);
}

void func2(){

     int a=200;

    // 'a' undeclared (first use in this function)

    printf("%d\n",a);
}

int main(){

    int a=20;

    printf("%d\n",a);
    func1();
    func2();
    printf("%d\n",a);
    return 0;
}