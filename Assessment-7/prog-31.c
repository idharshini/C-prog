#include <stdio.h>
int a, b, x, y, temp, gcd, lcm;
void disp_LCM2() {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("LCM = %d\n", lcm);
}
int main() {
    disp_LCM2();
    return 0;
}
