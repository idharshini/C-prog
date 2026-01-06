#include <stdio.h>
int main() {
    int a[5], sum = 0,t;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    sum=a[1];
    for (int i = 0; i < 5; i++){
        for(int j=i+1;j<5;j++){
            if(a[i]<a[j]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        }for(int i=0;i<5;i++){
            printf("%d",a[i]);
    }
}