#include <stdio.h>

int main(){
    printf("Hello World!\n");
    //Sum of any 5 numbers using break
    int n, a,i ;
    int sum=0;
    printf("Enter the total numbers for sum: ");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
    	printf("Enter the values: ");
    	scanf("%d",&a);
    	if (a<0){
    		break;
		}
    	sum=sum+a;
    	
	}
	printf("The sum of any %d integer is %d",n,sum);


    return 0;
}

