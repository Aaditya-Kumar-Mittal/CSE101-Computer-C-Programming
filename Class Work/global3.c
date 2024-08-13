#include <stdio.h>

int a=10;

void f1(){

    int a=20;

    printf("%d\n",a);
}
void f2(){

    a=200;

    printf("%d\n",a);
}

int main(){
    
    a=5;

    printf("%d\n",a);
    

    f2();

    f1();

    printf("%d\n",a);

    return 0;


}

