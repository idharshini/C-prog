#include <stdio.h>
int main(){
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    x=(x/10)*10;
    x=x+2;
    printf("The Output:%d",x);
}