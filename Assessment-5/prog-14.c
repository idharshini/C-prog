#include <stdio.h>
int main(){
    int n,a,b,temp,digits=1;
    printf("Enter Number:");
    scanf("%d",&n);
    b=n%10;
    temp=n;
    while(temp>=10){
        temp=temp/10;
        digits*=10;
    }
    a=temp;
    n=n%digits;
    n/=10;
    printf("%d\n",b*digits+n*10+a);
}