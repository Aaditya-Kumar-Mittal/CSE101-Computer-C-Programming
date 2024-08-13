#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("\nAfter Swapping: a:%d b:%d.",*a,*b);
}

int main(){

    int x,y;

    printf("Enter the 1st number: ");

    scanf("%d",&x);

    printf("Enter the 2nd number: ");

    scanf("%d",&y);

    printf("Before Swapping: a:%d b:%d.",x,y);

    swap(&x,&y);

    return 0;
}