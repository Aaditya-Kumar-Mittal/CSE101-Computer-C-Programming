#include <stdio.h>

struct strudent
{
    int rn;
    float cgpa;
} s1,s2,s3={3,5.6};

int main(){


    printf("Enter the info of student-1:");
    scanf("%d %f",&s1.rn,&s1.cgpa);
    printf("Enter the info of student-2:");
    scanf("%d %f",&s2.rn,&s2.cgpa);
    printf("Display the info of student-1:\n");
    printf("Roll-No:%d  CGPA:%f",s1.rn,s1.cgpa);
    printf("\nDisplay the info of student-2:\n");
    printf("Roll-No:%d  CGPA:%f",s2.rn,s2.cgpa);
    printf("\nDisplay the info of student-3:\n");
    printf("Roll-No:%d CGPA:%f",s3.rn,s3.cgpa);

    return 0;
    
    

}
