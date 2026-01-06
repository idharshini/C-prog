#include <stdio.h>
int main() {
    int a[10];
    int n, count = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        a[count] = n;
        count++;
    }
    if (count == 4 && a[0] == a[count - 1])
        printf("Success");
    else
        printf("Failure");
}
