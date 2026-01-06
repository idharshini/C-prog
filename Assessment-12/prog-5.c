#include <stdio.h>
#include <string.h>
void getnumbers(char n1[], char n2[]) {
    scanf("%s", n1);
    scanf("%s", n2);
}
void multiplynumbers(char n1[], char n2[], char result[]) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int temp[110] = {0};
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (n1[i] - '0') * (n2[j] - '0');
            int sum = mul + temp[i + j + 1];
            temp[i + j + 1] = sum % 10;
            temp[i + j] += sum / 10;
        }
    }
    int k = 0, i = 0;
    while (i < len1 + len2 && temp[i] == 0)
        i++;
    if (i == len1 + len2) {
        result[k++] = '0';
    } else {
        while (i < len1 + len2)
            result[k++] = temp[i++] + '0';
    }
    result[k] = '\0';
}
void print(char result[]) {
    printf("%s", result);
}
int main() {
    char number1[55], number2[55], result[110];
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
}
