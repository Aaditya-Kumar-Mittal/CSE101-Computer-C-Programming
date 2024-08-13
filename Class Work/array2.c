#include <stdio.h>

int main()
{

    int marks[5];

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the value of %d elemnt of the array: ",i);

        scanf("%d",&marks[i]);
    }

    for (int i = 1 ; i <= 5; i++)
    {
        printf("The value of %d elemnt of the array is %d.\n",i,marks[i]);
    }

    return 0;
}