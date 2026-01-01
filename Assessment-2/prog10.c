#include <stdio.h>
int main(){
    int x,n;
    printf("Enter Number:");
    scanf("%d",&x);
    n=x%10;
    x=x/10;
    n<x && printf("0");
    n>x && printf("1");
}