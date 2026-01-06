#include <stdio.h>
#include <string.h>
void getnumbers(char n1[], char n2[]) {
    scanf("%s", n1);
    scanf("%s", n2);
}
void addnumbers(char n1[], char n2[], char result[]) {
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int k = 0, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += n1[i--] - '0';
        if (j >= 0) sum += n2[j--] - '0';
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    result[k] = '\0';
    for (int a = 0, b = k - 1; a < b; a++, b--) {
        char temp = result[a];
        result[a] = result[b];
        result[b] = temp;
    }
}

void print(char result[]) {
    printf("%s", result);
}
int main() {
    char number1[55], number2[55], result[60];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
}
