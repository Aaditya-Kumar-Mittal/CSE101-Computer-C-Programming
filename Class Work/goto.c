#include<stdio.h>
int main(){
    label:
        printf("We're inside label.\n");
        goto end;
    printf("Hello World\n");
    goto label;
    end:
        printf("We're at end.");

    return 0;
}