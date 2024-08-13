#include<stdio.h>
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
        
    }
}
int main(){
    printf("Hello World!\n");
    int n;
    scanf("%d",&n);
    printstar(n);
    return 0;
}