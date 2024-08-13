#include<stdio.h>
struct DOB
{
    int dd;
    int mm;
    int yy;
};
struct Student
{
    int roll_no;
    char name[10];
    struct DOB date;
}s;


int main(){

    printf("Enter info of student: ");
    scanf("%d",&s.roll_no);
    scanf("%s",&s.name);
    scanf("%d",&s.date.dd);
    scanf("%d",&s.date.mm);
    scanf("%d",&s.date.yy);
    printf("Dissplay info of student: ");
    printf("\nName:%s",s.name);
    printf("\nName:%d",s.name);
    printf("\nDOB:%d/%d/?d",s.name);
    printf("\nName:%s",s.name);
    
}
