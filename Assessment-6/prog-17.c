#include <stdio.h>
int main(){
    int n,i,a,flag=0,s=0;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<=1){
        flag=1;
    }else{
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
}
    a=n;
    while(a>0){
        s+=(a%10);
        a/=10;
    }
    //printf("%d",s);

    if (!flag && s==14){
        printf("Prime & sum of digits is 14");
    }else if(!flag && s!=14){
        printf("Prime & sum of digits is not 14");
    }else if(flag && s==14){
        printf("Not Prime & sum of digits is 14");
    }else if(flag && s!=14){
        printf("Not prime & sum of digits is not 14");
    }
}