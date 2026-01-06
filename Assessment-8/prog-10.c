#include <stdio.h>
void disp_2digit_even_sum6() {
    int count = 0, i, j, flag;
    for (i = 0; i <= 9; i++) {
        if (i <= 1)
            continue; 
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
    }
    printf("%d", count);
}
int main(){
    disp_2digit_even_sum6();
}
