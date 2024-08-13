#include<stdio.h>

int main(){

    int a=10;

    char b='x';

    float c=5.6;

    void *p;

    p=&a;

    printf("%d\n",*(int*)p);

    p=&b;

    printf("%c\n",*(char*)p);

    p=&c;

    printf("%f",*(float*)p);

    return 0;

}