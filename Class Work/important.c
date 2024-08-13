#include <stdio.h>
struct student
{
    char name[20];
    int rn;
    float marks[3];
};

int main(){
    struct student std[20];

    int i,n;

    printf("\nEnter the number of records you want to enter: ");

    scanf("%d",&n);

    fflush(stdin);

    for ( i = 0; i < n; i++)
    {
        int sum=0;
        printf("\nEnter the student name: ");
        gets(std[i].name);
        fflush(stdin);
        printf("\nEnter the rn and marks: ");
        scanf("%d",&std[i].rn);
        fflush(stdin);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the marks in Ca: ");
            scanf("%f",&std[i].marks[j]);
            sum=sum+std[i].marks[j];
        }
        fflush(stdin);

        int min=0;

        for (int j = 0; j < 3; j++)
        {
            if(std[i].marks[j]<min)
            {
                min=std[i].marks[j];
            }
        }

        int NetCa=sum-min;
        
        

    }

    

    printf("\n--------- Student Details ------------ ");
    for(i=0;i<n;i++)
    {
    printf("\nName of Student : %s",std[i].name);
    printf("\nRoll Number of Student : %d",std[i].rn);
    for (int j = 0; j < 3; j++)
    {
    printf("\nCGPA of student : %.2f",std[i].marks);
        
    }
    
    }
    return 0;
    
}
