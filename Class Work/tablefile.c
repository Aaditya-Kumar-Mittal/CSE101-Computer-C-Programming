#include<stdio.h>

int main(){

    FILE *file1;

    FILE *file2;

    int digit;

    file1=fopen("file8.txt","w");

    printf("Enter the digit: ");

    scanf("%d",&digit);

    putw(digit,file1);

    fclose(file1);

    file1=fopen("file8.txt","r");

     long int num;

    num=getw(file1);

    file2=fopen("file9.txt","a");

    fprintf(file2,"The table of %d.\n",num);

    for (int i = 1; i <=10; i++)
    {
        fprintf(file2,"%d * %d = %d\n",num,i,num*i);
    }

    fclose(file2);

    fclose(file1);

    return 0;
}