#include <stdio.h>

int main()
{

    // Highest Common Factor

    int a, b, r, hcf, tempa, tempb ;

    printf("Enter number-1: ");

    scanf("%d", &a);

    printf("Enter number-2: ");

    scanf("%d", &b);

    tempa=a;

    tempb=b;


    while (1)
    {
        hcf=b;
        r = a % b;

        a = b;

        b = r;

        if (r == 0)
        {

            break;
        }


    }

    printf("HCF OF %d AND %d IS %d.",tempa,tempb,hcf);

    return 0;
}