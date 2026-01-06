#include <stdio.h>
int main() {
    int num;
    char str[20];
    scanf("%d", &num);         
    sprintf(str, "%d", num);    
    printf("%s", str);          
    return 0;
}
