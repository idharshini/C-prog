#include <stdio.h>
int main(){
    int a[100],n,count=0;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        a[count]=n;
        count++;
    }if(count%2!=0){
        int c=(count/2);
        printf("%d",a[c]);
    }else{
        int c=a[count/2];
        int c1=a[c+1];
        int c2=(c+c1)/2;
        printf("%d",c2);
    }
}