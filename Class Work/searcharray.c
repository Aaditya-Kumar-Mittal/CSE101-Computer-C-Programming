#include<stdio.h>

int main(){

    int a[5]={22,-1,1,40,52};

    int status=0,element=-1;

    for (int i = 0; i < 5; i++)
    {
        if(a[i]==element){

            status=1;

            break;
        }
    }

    if(status==1){
        printf("Element Found");
    
    }

    else{
        printf("Element Not Found");
    }

    return 0;

}