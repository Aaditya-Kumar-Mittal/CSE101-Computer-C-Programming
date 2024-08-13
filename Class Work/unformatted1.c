#include<stdio.h>
int main(){
	char c;
    printf("Hello World!\n");

    printf("Enter a character: ");
	//c=getchar(); //Need to Press Enter Key
	c=getch(); // Hides the input
	//c=getche(); // Displays immmediately
    printf("\n\n c = %c\n",c);
    putchar(c);
    
    

    return 0;
}
