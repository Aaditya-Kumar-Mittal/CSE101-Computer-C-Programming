#include <stdio.h>
int main()
{
    int a[100];

    int hold, i, j, n;

    printf("\n Enter value of n:");

    scanf("%d", &n);

    printf("\n Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nData items in original order.\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // Elements will come with space
    } // end for

    // bubble sort

    // loop to control number of passes(no. of passes are always n-1) 
    
    for (i=0;i<n-1;i++){
    // loop to control number of comparisons per pass(There is one comparison less)
    for (j = 0; j < n - i - 1; j++)
    {   
        // compare adjacent elements and swap them if first
        // element is greater than second element
        if (a[j] > a[j + 1])
        {
            hold = a[j];
            a[j] = a[j + 1];
            a[j + 1] = hold;
        }// end if
    }// end inner for
} // end outer for

printf("\nData items in ascending order.\n");
for (i = 0; i < n; i++)
{
    printf("%d ", a[i]);
} // end for

return 0;
} // end main
