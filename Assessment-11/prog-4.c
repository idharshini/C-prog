#include <stdio.h>
void find_2digit_odd_sum7() {
    int i, a, b, first = 1;
    for (i = 11; i <= 99; i += 2) {  
        a = i / 10;
        b = i % 10;   
        if (a + b == 7) {
            if (!first)
                printf(", ");
            printf("%d", i);
            first = 0;
        }
    }
}
int main() {
    find_2digit_odd_sum7();
}
