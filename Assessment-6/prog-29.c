#include <stdio.h>
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
int main() {
    int a, b, c;
    int lcm_ab, lcm_abc;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    lcm_ab = (a * b) / gcd(a, b);
    lcm_abc = (lcm_ab * c) / gcd(lcm_ab, c);
    printf("LCM = %d", lcm_abc);
    return 0;
}
