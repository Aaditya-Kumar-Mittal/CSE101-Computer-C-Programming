#include<stdio.h>
main(){
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	if(a>b){
		printf("%d is greater than %d",a,b);
	}
	else{
		printf("%d is greater than %d",b,a);
	}
}
