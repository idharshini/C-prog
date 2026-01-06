#include <stdio.h>
int main() {
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    sum=a[1];
    for (int i = 0; i < 5; i++) {
        if (a[i]>sum){
            sum=a[i];
        }
    }
    printf("%d", sum);
}
