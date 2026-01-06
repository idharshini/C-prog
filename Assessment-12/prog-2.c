#include <stdio.h>
void find_positions(char str[], char ch) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i + 1);  
        }
    }
}
int main() {
    char str[100], ch;
    scanf("%s", str);
    scanf(" %c", &ch);   
    find_positions(str, ch);
    return 0;
}
