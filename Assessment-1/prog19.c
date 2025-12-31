#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    x = x - 5 * (x % 2);
    printf("%d", x);
    return 0;
}