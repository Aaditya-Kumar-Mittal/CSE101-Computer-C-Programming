#include <stdio.h>

int main(){
	//Program to check prime number
	int n, i;
	int primecount=0;
	printf("Enter the number to check: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			primecount++;
		}
	}
	if(primecount==2){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
}
