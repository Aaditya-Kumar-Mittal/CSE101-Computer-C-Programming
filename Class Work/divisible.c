#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the number whose divisibility you need to check: ");
	scanf("%d",&a);
	printf("Enter the divisor: ");
	scanf("%d",&b);
	if(a%b==0){
		printf("%d is divisible by %d",a,b);
	}
	else{
		printf("%d is not divisible by %d",a,b);
	}
}
