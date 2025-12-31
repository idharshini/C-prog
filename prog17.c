#include <stdio.h>
int main(){
    int x,a,c=10;
    printf("Enter Number:");
    scanf("%d",&x);
    a=x%10;
    c+=a;
    printf("The Output:%d",c);

}