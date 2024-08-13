
#include <stdio.h>

struct strudent
{
    int rn;
    float cgpa;
} s1,*p1,s2,*p2,s3={3,5.6},*p3,s4;

int main(){

    // Using pinter to structure
    printf("Enter the info of student-1:");
    scanf("%d %f",&s1.rn,&s1.cgpa);
    p1=&s1;
    printf("Enter the info of student-2:");
    scanf("%d %f",&s2.rn,&s2.cgpa);
    p2=&s2;
    p3=&s3;

    // copying one program from another program
    s4=s2;
    printf("Display the info of student-1:\n");
    printf("Roll-No:%d  CGPA:%.2f",(*p1).rn,(*p1).cgpa);
    printf("\nDisplay the info of student-2:\n");
    printf("Roll-No:%d  CGPA:%.2f",p2->rn,p2->cgpa);
    printf("\nDisplay the info of student-3:\n");
    printf("Roll-No:%d CGPA:%.2f",(*p3).rn,p3->cgpa);
    printf("\nDisplay the info of student-4:\n");
    printf("Roll-No:%d CGPA:%.2f",s4.rn,s4.cgpa);

    return 0;
    
    

}
