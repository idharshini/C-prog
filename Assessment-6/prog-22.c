#include <stdio.h>
int main(){
    int n,a,b,d,c=0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>=10){
        a=n%10;
        b=(n/10)%10;
        d=(b*10)+a;
        //printf("%d\n",d);
        if(d%2!=0){
            c+=1;
        }n/=10;
    }printf("%d",c);
}