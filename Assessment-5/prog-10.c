#include <stdio.h>
int main(){
    int a=0,b,c;
    for(int i=10;i<=99;i++){
        if(i%2!=0){
           b=i/10;
           if(b==7){
            a+=i;
           }
        }
    } printf("%d",a);
}