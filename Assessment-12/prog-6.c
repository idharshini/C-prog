#include <stdio.h>
#include <string.h>
int isValidNumber(char s[]) {
    if (s[0] == '\0') return 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}
void removeLeadingZeros(char s[]) {
    int i = 0;
    while (s[i] == '0' && s[i + 1] != '\0')
        i++;
    if (i > 0)
        memmove(s, s + i, strlen(s) - i + 1);
}
void addNumbers(char a[], char b[], char res[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int carry = 0, k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    res[k] = '\0';
    for (int x = 0, y = k - 1; x < y; x++, y--) {
        char t = res[x];
        res[x] = res[y];
        res[y] = t;
    }
}
void subtractNumbers(char a[], char b[], char res[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int borrow = 0, k = 0;

    while (i >= 0) {
        int diff = (a[i] - '0') - borrow;
        if (j >= 0) diff -= (b[j--] - '0');
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else borrow = 0;
        res[k++] = diff + '0';
        i--;
    }
    res[k] = '\0';
    for (int x = 0, y = k - 1; x < y; x++, y--) {
        char t = res[x];
        res[x] = res[y];
        res[y] = t;
    }
    removeLeadingZeros(res);
}
void multiplyNumbers(char a[], char b[], char res[]) {
    int n = strlen(a), m = strlen(b);
    int temp[110] = {0};
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            temp[i + j + 1] += (a[i] - '0') * (b[j] - '0');
        }
    }
    for (int i = n + m - 1; i > 0; i--) {
        temp[i - 1] += temp[i] / 10;
        temp[i] %= 10;
    }
    int k = 0, i = 0;
    while (i < n + m - 1 && temp[i] == 0) i++;
    for (; i < n + m; i++)
        res[k++] = temp[i] + '0';
    res[k] = '\0';
    if (k == 0) strcpy(res, "0");
}
void divideNumbers(char a[], char b[], char q[]) {
    if (strcmp(b, "0") == 0) {
        printf("Error: Division by zero\n");
        q[0] = '\0';
        return;
    }
    int num = 0, k = 0;
    for (int i = 0; a[i]; i++) {
        num = num * 10 + (a[i] - '0');
        q[k++] = (num / (b[0] - '0')) + '0';
        num %= (b[0] - '0');
    }
    q[k] = '\0';
    removeLeadingZeros(q);
}
int main() {
    char input[120], n1[55], n2[55], result[120], op;
    while (1) {
        printf("Calc> ");
        gets(input);
        if (strcmp(input, "Exit") == 0)
            break;
        int i = 0, j = 0, k = 0;
        while (input[i] >= '0' && input[i] <= '9')
            n1[j++] = input[i++];
        n1[j] = '\0';
        op = input[i++];
        j = 0;
        while (input[i])
            n2[j++] = input[i++];
        n2[j] = '\0';
        if (!isValidNumber(n1) || !isValidNumber(n2)) {
            printf("Invalid number\n");
            continue;
        }
        removeLeadingZeros(n1);
        removeLeadingZeros(n2);
        switch (op) {
            case '+': addNumbers(n1, n2, result); break;
            case '-': subtractNumbers(n1, n2, result); break;
            case '*': multiplyNumbers(n1, n2, result); break;
            case '/': divideNumbers(n1, n2, result); break;
            default:
                printf("Invalid operator\n");
                continue;
        }

        if (result[0])
            printf("%s\n", result);
    }
    return 0;
}
