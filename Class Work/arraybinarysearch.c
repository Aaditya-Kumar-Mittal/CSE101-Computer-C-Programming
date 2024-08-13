#include <stdio.h>
int main()
{

    int a[50], n, loc = -1, key, beg, last, mid, i;

    printf("\n Enter number of array elements:");

    scanf("%d", &n);

    printf("\n Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter integer value to search in sorted array:");

    scanf("%d", &key);

    while (beg <= last) // Loop will run until unless only one element is not remaining
    {
        beg = 0;

        last = n - 1;
        
        mid = (beg + last) / 2; // determine index of middle element

        if (a[mid] == key)
        {
            loc = mid; // save the location of element.

            break;
        }

        else if (a[mid] > key) // Middle element is greater than key
        {
            last = mid - 1; // If middle element is greater than key, we need to search left subarray
        }

        else if (a[mid] < key) // Middle element is less than key
        {
            beg = mid + 1; // If middle element is less than key, we need to search right subarray
        }                  // end of if else
    }                      // end of while

    if (loc != -1)
    {
        printf("element found at %d", loc + 1); // Location is exact position, not index
    }
    else
    {
        printf("element not found");
    }

    return 0;
}
