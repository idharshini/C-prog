#include <stdio.h>
int main() {
    int n, tens;
    scanf("%d", &n);
    tens = (n / 10) % 10;
    n = n - 5 * (tens % 2);
    printf("%d", n);
    return 0;
}
