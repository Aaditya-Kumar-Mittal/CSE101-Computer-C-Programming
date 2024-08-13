#include <stdio.h>
int main(){
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	if(a>b){
		printf("\n%d is greater than %d.",a,b);
	}
	else{
		printf("\n%d is greater than %d.",b,a);
	}
	printf("\nProgram Over.");
	return 0;
	
}
