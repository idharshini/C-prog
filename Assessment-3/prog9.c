#include <stdio.h>
int main(){
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=x%10;
    x/=10;
    x>y && printf("Success\n");
    x<y && printf("Failure\n");
}