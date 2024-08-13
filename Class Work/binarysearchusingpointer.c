#include <stdio.h>

int main()
{

	int array[5], i;

    int *p=array;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}

	int status = 0, f = 0, l = 5 - 1, ele;

	printf("Enter the element to search: ");
	
	scanf("%d", &ele);

	while (f <= l)
	{

		int mid = (f + l) / 2;

		if (ele == p[mid])
		{
			status = 1;
			break;
		}

		else if (ele > p[mid])
		{
			f = mid + 1;
		}

		else
		{
			l = mid - 1;
		}
	}

	if (status == 1)
	{
		printf("Found");
	}

	else
	{
		printf("Not Found");
	}

	return 0;
}
