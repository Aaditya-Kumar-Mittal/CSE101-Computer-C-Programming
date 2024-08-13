//Count the number of digits
#include <stdio.h>

int main(){

	int n, count;

	printf("Enter the number: ");

	scanf("%d",&n);

	int temp=n;

	while(n>0){

		count++;

		n=n/10;

	}
	
	printf("The number of digits in %d is %d.", temp,count);
	
	return 0;
	
}
