#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the 0 to exit.\nEnter the number: ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
    end:
        printf("Program Over.");

    return 0;
}