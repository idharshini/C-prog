#include <stdio.h>
#include <math.h>
void disp_single_digit_square(){
    int n,a,b,c=0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        b=(int)sqrt(a);
        if((b*b)==a){
            c+=1;
        }n/=10;
    }printf("%d",c);
}
int main(){
    disp_single_digit_square();
}