#include <stdio.h>
void increment(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = arr[i] + 1;
    }
}
int main() {
    int arr[10], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    increment(arr, n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
