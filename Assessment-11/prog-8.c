#include <stdio.h>
void strcmp1(char src[], char dst[]) {
    int i = 0;
    while (src[i] != '\0' || dst[i] != '\0') {
        if (src[i] != dst[i]) {
            printf("Failure");
            return;
        }
        i++;
    }
    printf("Success");
}
int main() {
    char src[100], dst[100];
    scanf("%s", src);
    scanf("%s", dst);
    strcmp1(src, dst);
}
