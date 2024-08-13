#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d is the greatest number.",a);
		}
	}
	if(b>a){
		if(b>c){
			printf("%d is the greatest number.",b);
		}
	}
	if(c>a){
		if(c>b){
			printf("%d is the greatest number.",c);
		}
	}
	
	return 0;
}
