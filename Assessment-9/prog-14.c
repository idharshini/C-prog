#include <stdio.h>
int main() {
    int a[100], n,sum = 0,t;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }a[sum]=n;
        sum++;
    }
    for (int i = 0; i < sum; i++){
        for(int j=i+1;j<sum;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        }for(int i=0;i<sum;i++){
            printf("%d ",a[i]);
    }
}
   

