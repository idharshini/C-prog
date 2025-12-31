#include <stdio.h>
int main(){
    int x,c;
    printf("Enter Number:");
    scanf("%d",&x);
    c=0;
    while(x>0){
        c=c+(x%10);
        x=x/10;
    }
    printf("%d",c);
}