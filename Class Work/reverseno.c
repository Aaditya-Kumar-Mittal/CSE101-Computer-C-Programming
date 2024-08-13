#include <stdio.h>

int main()
{
	int n, l, r;

	printf("Enter the number to reverse: ");

	scanf("%d", &n);
	
	while (n > 0)
	{
		l = n % 10;
		r = r * 10 + l;
		n = n / 10;
	}
	printf("\nReversed number is %d ", r);

	return 0;
}
