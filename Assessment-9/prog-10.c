#include <stdio.h>
int main() {
    int a[5], revArr[5];
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        int n = a[i];
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        revArr[i] = rev;
        sum += revArr[i];
    }
    printf("%d", sum);
    return 0;
}
