#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	if (a==b){
		printf("%d and %d are equal");
	}
	else{
		printf("%d and %d are not equal",a,b);
	}
	return 0;
}
