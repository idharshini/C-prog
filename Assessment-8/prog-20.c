#include <stdio.h>
void disp_count_HCF2() {
    int a, b, x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("HCF = %d", x);
}
int main() {
    disp_count_HCF2();
    return 0;
}
