#include <stdio.h>

int main(){

    int i=0;

    while(1){
        if(i==2){
            continue;

        }
        else if(i==5){
            break;
        }
        printf("%d ",i++);

        
    }

    printf("Program Over!");

    return 0;
}