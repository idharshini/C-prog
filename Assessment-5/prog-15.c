#include <stdio.h>
int main(){
    int n,a,b,temp,place=1;
    printf("Enter Number:");
    scanf("%d",&n);
    b=n%10;
    temp=n;
    while(temp>10){
        temp/=10;
        place*=10;
    }
    a=temp;
    if(b%2!=0){
        a-=1;
        n=n%place;
        n=a*place+n;
    }
    printf("%d",n);
}