#include <stdio.h>

int main() {
	
	printf("Hello World!\n");
	
	int i,j;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;
	
}
