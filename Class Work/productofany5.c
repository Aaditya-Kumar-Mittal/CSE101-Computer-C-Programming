#include <stdio.h>

int main(){
    printf("Hello World!\n");
    //Product of any 5 numbers
    int n, a,i ;
    int product=1;
    printf("Enter the total numbers for product: ");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
    	printf("Enter the values: ");
    	scanf("%d",&a);
    	product=product*a;
    	
	}
	printf("The product of any %d integer is %d.",n,product);


    return 0;
}
