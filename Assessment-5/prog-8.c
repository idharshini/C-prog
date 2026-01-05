#include <stdio.h>
int main(){
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