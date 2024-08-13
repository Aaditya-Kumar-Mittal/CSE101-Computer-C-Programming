#include <stdio.h>
int main(){
	int a,A,B,C,c;
	printf("Enter the 10 digit number, please!");
	scanf("%d",&a);
	A=a/100000000;
	B=a%10000;
	c=a/1000000;
	C=c&10000;
	printf("Code for A is %d",A);
	printf("\nCode for B is %d",B);
	printf("\nCode for C is %d",C);
	return 0;
	
	
}
