#include <stdio.h>

int func1(int x[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=%d.\n",i,x[i]+5);
    }
    

}

int main(){

    int a[30],n;

    printf("Enter the number of elements to enter: ");

    scanf("%d",&n);

    printf("\nEnter the elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay the elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]:%d.\n",i,a[i]);
    }

    printf("\n Passing the elements by address.\n");
    func1(a,n);

    printf("\nDisplay the elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]:%d.\n",i,a[i]);
    }
    
    return 0;
}