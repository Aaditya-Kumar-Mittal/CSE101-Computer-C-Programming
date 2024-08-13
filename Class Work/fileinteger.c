#include <stdio.h>
int main()
{
    // FILE POINTER DECLARATION
    FILE *fp;
    int c;
    
    // Taking input from the user
    printf("Enter your rollno: ");
    scanf("%d",&c);

    // Opening the File
    fp = fopen("file3.txt", "w");

    // Writing integer in the while using putw() function
    putw(c, fp);

    // Closing the file
    fclose(fp);

    // Opening the file in read mode
    fp = fopen("file3.txt", "r");

    // Reading from the file using getw() function
    c=getw(fp);

    printf("Entered charcter is %d.",c);

    fclose(fp);

    return 0;
}