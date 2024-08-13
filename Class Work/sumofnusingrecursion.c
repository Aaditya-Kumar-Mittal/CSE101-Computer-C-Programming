#include <stdio.h>

int sum(int n){

    if(n==1){

        return 1;
    }

    else{

        return n+sum(n-1);
    }
}

int main(){

    // SUM OF FIRST N NUMBERS USING RECURSION

    int n;

    scanf("%d",&n);

    printf("Sum of first %d is %d.",n,sum(n));

    return 0;
}