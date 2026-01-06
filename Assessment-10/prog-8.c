#include <stdio.h>
int main() {
    char num[51];  
    int i, valid = 1;
    scanf("%s", num);
    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') {
            valid = 0;
            break;
        }
    }
    if (valid && i <= 50)
        printf("Valid");
    else
        printf("Invalid");
}
