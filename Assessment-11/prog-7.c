#include <stdio.h>
void memcomp(int src[], int dst[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (src[i] != dst[i]) {
            printf("Failure");
            return;
        }
    }
    printf("Success");
}
int main() {
    int src[10], dst[10], size, i;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        scanf("%d", &src[i]);
    for (i = 0; i < size; i++)
        scanf("%d", &dst[i]);
    memcomp(src, dst, size);
}
