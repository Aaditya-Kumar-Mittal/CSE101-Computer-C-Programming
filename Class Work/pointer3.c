#include <stdio.h>

int main()
{

    printf("--------------Pointers in the House---------------\n\n");

    int a = 34;

    int *ptr = &a;

    int *ptr2=NULL;

    printf("The value of a is %d.\n", a);
    printf("The value of ptr is %x which is the address of a.\n", &a);
    printf("The value of ptr is %x which is the address of a.\n", ptr);
    printf("The address of ptr is %x.\n", &ptr);
    printf("The address of ptr2 is %x.\n", ptr2);
    printf("The value of ptr is %d which is the address of a.\n", &a);
    printf("The value of ptr is %d which is the address of a.\n", ptr);
    printf("The value of a is %d.\n", *ptr);
    // printf("The value of a is %x.\n", *ptr);
    printf("The value of *ptr2 is %d.\n",*ptr2);

    return 0;
}