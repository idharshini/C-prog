#include <stdio.h>
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
void disp_LCM3() {
    int a, b, c, lcm1, lcm2;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    lcm1 = (a * b) / gcd(a, b);
    lcm2 = (lcm1 * c) / gcd(lcm1, c);
    printf("LCM = %d", lcm2);
}

int main() {
    disp_LCM3();
    return 0;
}
