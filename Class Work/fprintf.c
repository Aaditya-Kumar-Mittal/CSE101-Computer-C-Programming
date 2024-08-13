#include<stdio.h>

int main(){

    FILE * fp1;

    int roll;
    char name[10];

    printf("Enter the data:\n ");

    printf("Enter roll no: ");

    scanf("%d",&roll);

    printf("\nEnter name: ");

    scanf("%s",name);

    fp1=fopen("file7.txt","w");

    fprintf(fp1, "%d %s",roll,name);

    fclose(fp1);

    fp1=fopen("file7.txt","r");

    fscanf(fp1,"%d %s",&roll,name);

    // printf("Entered data is: \n");

    printf("%d %s",roll, name);

    fclose(fp1);

    return 0;
}