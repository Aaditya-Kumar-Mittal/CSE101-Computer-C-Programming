#include <stdio.h>

int main()
{

    int marks[2][5]={{00,01,02,03,04},
                    {10,11,12,13,14}};


    for (int i = 0 ; i <2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The value of %d,%d elemnt of the array is %d.\n",i,j,marks[i][j]);
            
        }
        
    }
    
    return 0;
}