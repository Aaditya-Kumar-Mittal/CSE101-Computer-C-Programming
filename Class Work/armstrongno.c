#include <stdio.h>

int main(){
	int n,l;
	int s=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	int n1=n;
	
	while(n>0){
		l=n%10;
		s=s+(l*l*l);
		n=n/10;
		
		
	}
	if (s==n1){
		printf("Armstrong number is %d",s);
		
	}
	else{
		printf("Not an armstrong number");
	}
	
	return 0;
}
