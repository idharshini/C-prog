#include <stdio.h>
int main() {
    int n;
    int *p;
    scanf("%d", &n);
    printf("%d\n", n);
    p = &n;     
    *p = *p + 1; 
    printf("%d\n", n);
    return 0;
}
