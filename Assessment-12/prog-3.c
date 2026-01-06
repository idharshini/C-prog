#include <stdio.h>
int find_substring(char str[], char sub[]) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0') {
            return i + 1;  
        }
    }
    return -1; 
}
int main() {
    char str[100], sub[50];
    int pos;
    scanf("%s", str);
    scanf("%s", sub);
    pos = find_substring(str, sub);
    if (pos != -1)
        printf("%d", pos);
    return 0;
}
