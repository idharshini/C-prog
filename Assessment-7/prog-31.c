#include <stdio.h>
void disp_LCM2() {
    int a, b, x, y, temp, gcd, lcm;
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

    printf("LCM = %d", lcm);
}

int main() {
    disp_LCM2();  
}
