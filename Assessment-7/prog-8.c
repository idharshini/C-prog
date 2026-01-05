#include <stdio.h>
void disp_2digit_even_sum6(){
    int a,b,c;
    for(int i=10;i<=99;i++){
        if(i%2==0){
            a=i%10;
            b=i/10;
            c=a+b;
            if(c==6){
                printf("%d\n",i);
            }
        }
        
    }
}
int main(){
    disp_2digit_even_sum6();
}