#include<stdio.h>

long long int factorial(int n){

    if (n==1 || n==0)
    {
        return 1;
    }
    else{

        return n*factorial(n-1);
    }
}

int main(){

    int x;

    scanf("%d",&x);

    printf("Factorial is %lld.",factorial(x));

    return 0;

    
}