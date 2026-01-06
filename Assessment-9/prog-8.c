#include <stdio.h>
int main() {
    int a[5], b[5];
    int i, j = 0;
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 != 0) {
            b[j] = a[i];
            j++;
        }
    }
    for(i = 0; i < j; i++) {
        printf("%d", b[i]);
    }
}
