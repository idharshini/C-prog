#include <stdio.h>
int main(){
    int n,a,b,c,flag=0;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    a=(n/10)%10;
   // printf("%d\n",a);
    b=(n/100)%10;
    //printf("%d\n",b);
    c=(b*10)+a;
  //  printf("%d\n",c);
    for(int i=2;i<=c/2;i++){
        if(c%i==0){
            flag=1;
            break;
        }
    }
    !flag && printf("Prime");
    flag && printf("Not Prime");
}