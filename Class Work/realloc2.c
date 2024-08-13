#include <stdio.h>
#include <stdlib.h> /*required for dynamic memory*/
#include <conio.h>
int main()
{
    int number, *ptr, i, n, x;

    printf("How many ints would you like store?");

    scanf("%d", &number);

    ptr = (int *)malloc(number * sizeof(int)); /*allocate memory*/

    for (i = 0; i < number; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("\nDisplay\n");
    for (i = 0; i < number; i++)
    {
        printf("%d\n", *(ptr + i));

    }
printf("\n Do you want to add more elements? If yes- press 1 otherwise any key");

scanf("%d",&x);

if(x==1)
{
        printf("\n Enter n");

        scanf("%d", &n);

        ptr = (int *)realloc(ptr, (number + n) * sizeof(int));

        printf("\n Enter elements\n");

        for (i = number; i < number + n; i++)
        {
            scanf("%d", (ptr + i));
        }

        printf("\nDisplay\n");

        for (i = 0; i < number + n; i++)
        {
            printf("%d\n", *(ptr + i));
        }
        free(ptr);

        printf("\nDisplay after free\n");

        for (i = 0; i < number + n; i++)
        {

            printf("%d\n", *(ptr + i));
        }

}
else

{printf("\n ****Thanks****");}

return 0;
}