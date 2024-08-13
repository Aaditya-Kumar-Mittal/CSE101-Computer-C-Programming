#include <stdio.h>

 void change(int *p , int *q){

    *p=*p+10;
    *q=*q-5;
    printf("%d %d",*p,*q);
}

int main(){

    int a=10, b=20;

    change(&a,&b);

    printf("\n%d %d",a,b);
}

// UNDERSTANDING CALL BY ADDRESS FUNCTIONALITY IN C LANGUAGE
// *P-->VALUE OF a
// p-->address of a
// p is a pointer and never stores a variable value. 
// *p represents a variable value.
// In call by address, we got same values by function and main because we worked at the same memory location.