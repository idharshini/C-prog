#include <stdio.h>
int main(){
    int n,a,b,c,temp,flag=0;
    printf("Enter Number:");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=(b*10)+a;
    for(int i=2;i<=c/2;i++){
        if(c%i==0){
            flag=1;
            break;
        }
    }

    !flag && printf("Prime");
    flag && printf("Not Prime");
}