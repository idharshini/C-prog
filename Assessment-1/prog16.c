#include <stdio.h>
int main(){
    int x,c=0;
    printf("Enter Number:");
    scanf("%d",&x);
    x=x/10;
    c=x*10;
    printf("The Output:%d",c);
}