#include<stdio.h>

int sum(int, int);

int main(){

    int a,b,s;

    scanf("%d",&a);

    scanf("%d",&b);

    s=sum(a,b);
    
    printf("Sum=%d",s);

    return 0;

}

int sum(int x, int y){

    return x+y;
}