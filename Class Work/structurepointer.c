#include <stdio.h>

struct Student
{
    int roll_no;

    float cgpa;

    char name[10];
};

int main()
{
    struct Student s1, *p;

    printf("------Enter the details of the student--------");

    p = &s1;

    printf("\nEnter the name: ");

    scanf("%s", &s1.name);

    printf("Enter the roll no: ");

    scanf("%d", &s1.roll_no);

    printf("Enter the CGPA: ");

    scanf("%f", &s1.cgpa);

    printf("\nName: %s", (*p).name);

    printf("\nRoll No: %d ", (*p).roll_no);

    printf("\nCGPA: %.3f ", (*p).cgpa);

    return 0;
}