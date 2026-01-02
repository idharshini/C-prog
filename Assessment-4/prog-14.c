#include <stdio.h>

int main() {
    int n, first, last, temp, place = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;   // last digit

    // find first digit and its place value
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;

    if (last % 2 != 0) {   // if last digit is odd
        first = first - 1;
        n = n % place;          // remove first digit
        n = first * place + n; // add modified first digit
    }

    printf("%d", n);
    return 0;
}
