#include <stdio.h>
void disp_single_digit_prime() {
    int n, d, i, flag, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        if (d > 1) {
            flag = 0; 
            for (i = 2; i <= d / 2; i++) {
                if (d % i == 0) {
                    flag = 1; 
                    break;
                }
            }
            if (flag == 0) {
                c+=1;
            }
        }
        n /= 10;
    }
    printf("%d", c);
}
int main(){
    disp_single_digit_prime();
}
