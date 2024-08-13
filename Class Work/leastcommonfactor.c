#include <stdio.h>

int main(){

    int a,b,r,lcm,tempa,tempb;

    printf("Enter integer-1: ");

    scanf("%d",&a);

    printf("Enter integer-2: ");

    scanf("%d",&b);

    tempa=a;

    tempb=b;

    while(1)
    {

        lcm=a;

        r=a%b;

        if(r==0){

            break;
        }

        a=a*2;


    }

    printf("LCM of %d and %d is %d.",tempa,tempb,lcm);

    return 0;

}