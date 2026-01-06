#include <stdio.h>
int main() {
    char num[51];
    int i, len = 0;
    scanf("%s", num);
    while (num[len] != '\0') {
        len++;
    }
    for (i = len - 1; i >= 0; i--) {
        printf("%c", num[i]);
    }
}
