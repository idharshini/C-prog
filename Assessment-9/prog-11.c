#include <stdio.h>
int main() {
    int a[100];   
    int i = 0;
    int sum = 0;
    int n;
    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        a[i] = n;
        sum += n;
        i++;
    }
    printf("Total numbers: %d\n", i);
    printf("Sum: %d\n", sum);
}
