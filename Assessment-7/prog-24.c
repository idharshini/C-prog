#include <stdio.h>
#include <math.h>
void disp_two_digit_square(){
    int n,a,b,d,c=0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>=10){
        a=n%10;
        b=(n/10)%10;
        d=(b*10)+a;
        int d1=(int)sqrt(d);
        //printf("%d\n",d);
        if(d1*d1==d){
            c+=1;
        }n/=10;
    }printf("%d",c);
}
int main(){
    disp_two_digit_square();
}