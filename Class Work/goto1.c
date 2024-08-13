#include <stdio.h>

int main() {
	
	printf("Hello World!");
	// Use of goto
	int n;
	
	scanf("%d",&n);
	
	if (n%2==0){
		goto l1;
	}
	else{
		goto l2;
		
	}
	
	l1:
		printf("even\n");
		goto end;
		
	l2:
		printf("odd\n");
		printf("program over");
	
	end:
		printf("We're at end.");
		
	
	return 0;
	
}
