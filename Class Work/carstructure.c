#include <stdio.h>

struct car
{
    char model[5];
    char make[1];
    char regno[10];
} c1,c2;

int main(){


    printf("Enter the info of car1:\n");
    scanf("%s",&c1.model);
    fflush(stdin);
    scanf("%s",&c1.make);
    fflush(stdin);
    scanf("%s",&c1.regno);
    fflush(stdin);
    printf("Enter the info of car2:\n");
    scanf("%s",&c2.model);
    fflush(stdin);
    scanf("%s",&c2.make);
    fflush(stdin);
    scanf("%s",&c2.regno);
    fflush(stdin);

    printf("\nDisplay the info of car1:\n");
    printf("Model:%s Make:%s Reg_No:%s",c1.model,c1.make,c1.regno);
    printf("\nEnter the info of car2:\n");
    printf("Model:%s Make:%s Reg_No:%s",c2.model,c2.make,c2.regno);
    

    
    return 0;
    
    

}
