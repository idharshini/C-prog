#include <stdio.h>
void disp_sum_all_digits(){
    int x=0,c,a;
    printf("Enter number:");
    scanf("%d",&a);
    while(a>0){
        c=a%10;
        x+=c;
        a/=10;
    }
    printf("%d",x);
}
int main(){
    disp_sum_all_digits();
}