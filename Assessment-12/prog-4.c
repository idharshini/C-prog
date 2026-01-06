#include <stdio.h>
int main() {
    char str[200];
    int i, count = 0;
    gets(str); 
    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
