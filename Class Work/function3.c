#include<stdio.h>
// Function without arguments and with return value
int takenumber(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}
int main(){

    int a=5,b=6, c;
    c=takenumber();
    printf("The sum of %d, %d and %d is %d.",a,b,c,a+b+c);


    return 0;
}