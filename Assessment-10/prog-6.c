#include <stdio.h>
int main() {
    int n, rev = 0;
    scanf("%d", &n);
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    while (rev > 0) {
        char ch = (rev % 10) + '0';
        printf("%c\n", ch);
        rev /= 10;
    }
}
