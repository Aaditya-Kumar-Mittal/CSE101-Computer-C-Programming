#include<stdio.h>

#include<stdlib.h>

int main(){

    long i;

    char longint[]="123456789";

    printf("%s",longint);

    i=atol(longint);

    printf("\n%ld",i);

    return 0;

}