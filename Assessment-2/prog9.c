#include <stdio.h>
int main(){
    int x,n;
    printf("Enter Number:");
    scanf("%d",&x);
    n=x%10;
    x=x/10;
    x<n && printf("0");
    x>n && printf("1");
}