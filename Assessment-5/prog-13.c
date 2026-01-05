#include <stdio.h>
int main(){
    int x=0,c,a;
    printf("Enter number:");
    scanf("%d",&a);
    while(a>0){
        c=a%10;
        x=c+(x*10);
        a/=10;
    }
    printf("%d",x);
}