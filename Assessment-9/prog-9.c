#include <stdio.h>
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int a[5], b[5];
    int i, j = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        if (!isPrime(a[i])) {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
