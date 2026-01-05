#include <stdio.h>
void count_total_digits(){
    int x=0,c,a;
    printf("Enter number:");
    scanf("%d",&a);
    while(a>0){
        c=a%10;
        x+=1;
        a/=10;
    }
    printf("%d",x);
}
int main(){
    count_total_digits();
}