#include <stdio.h>
int main(){
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    y>x && printf("Success\n");
    y<x && printf("Failure\n");
}