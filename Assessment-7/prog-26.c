#include <stdio.h>
int main(){
    int a=0;
    for(int i=1000;i<=9999;i++){
        if(i%7==0 && i%9==0){
            if(i>a){
                a=i;
            }
        }
    }printf("%d",a);
}