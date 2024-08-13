#include<stdio.h>

struct student{

    int rn;

    int m[3];

}s;

int main(){


int i,sum=0;
printf("Enter the roll no: ");
scanf("%d",&s.rn);

printf("Enter the marks:\n");
for ( i = 0; i < 3; i++)
{
    printf("Enter the marks %d:",i);
    scanf("%d",&s.m[i]);
    sum=sum+s.m[i];

}

float per=(sum/300)*100;
printf("The percentage of student %f.",per);

return 0;
}