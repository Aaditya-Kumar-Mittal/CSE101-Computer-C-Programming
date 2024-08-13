#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int c, d;
    printf("Hello World!\n");
    printf("\nWe're using the functions in C programming lanuage.");
    // Taking integers input
    printf("\nEnter integer-1: ");
    scanf("%d",&c);
    printf("\nEnter integer-2: ");
    scanf("%d",&d);
    printf("\nThe sum of %d and %d is %d.",c,d,sum(c,d));
    

    return 0;
}
