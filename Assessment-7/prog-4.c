#include <stdio.h>
void disp_rsum(){
    int x=0;
    for(int i=6;i>=1;i--){
        x+=i;
}
printf("%d",x);
}
int main(){
    disp_rsum();
}