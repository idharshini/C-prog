#include <stdio.h>
void disp_2digit_ones5(){
    int a=0,b,c;
    for(int i=10;i<=99;i++){
           b=i%10;
           if(b==5){
            a+=i;
           }
        }printf("%d",a);
} 
int main(){
    disp_2digits_ones5();
}