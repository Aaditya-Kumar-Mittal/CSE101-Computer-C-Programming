#include <stdio.h>

int main()
{

    // Highest Common Factor and Least Common Factor

    int a, b, r, hcf, tempa, tempb,least;

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

    least=(tempa*tempb)/hcf;

    printf("LCM and HCF of %d and %d is %d and %d respectively.",tempa,tempb,least,hcf);

    return 0;
}