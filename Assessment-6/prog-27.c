#include <stdio.h>
int main(){
    int s=0;
    for(int i=10;i<=100000;i++){
        int c=0;
         int t=i;
        while(t>0){
            int m=t%10;
            c+=m;
            t/=10;
        }if(c==14){
            s+=1;
        }
    }printf("%d",s);
}