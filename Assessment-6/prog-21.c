#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Num:");
    scanf("%d",&n);
    while(n>0){
        int l=n%10;
        if(l%2!=0){
            sum+=1;
        }
        n/=10;
    }
    printf("%d",sum);
}