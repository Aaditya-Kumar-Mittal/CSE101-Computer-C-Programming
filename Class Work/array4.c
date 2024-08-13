#include <stdio.h>

// Matrix Representation of Array

int main()
{

    int marks[2][5]={{00,01,02,03,04},
                    {10,11,12,13,14}};


    for (int i = 0 ; i <2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",marks[i][j]);
            
        }
        printf("\n");
        
    }
    
    return 0;
}