#include <stdio.h>

int c=1;

void f(){

    int a=1;

    register int b=1;

    static int d=1;

    printf("%d %d %d %d \n",a,b,c,d);

    a++;b++;c++;d++;

}

int main(){

    f();
    f();
    f();

    return 0;
}