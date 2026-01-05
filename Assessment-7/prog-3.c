#include <stdio.h>
void disp_sum(){
    int x=0;
    for(int i=1;i<=5;i++){
        x+=i;
    }printf("%d",x);
}
int main(){
    disp_sum();
}